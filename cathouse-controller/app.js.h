F("\
var sensorDesc = [{\
id: \"28b03724070000c8\",\
description: \"bottom\"\
},\
{\
id: \"28f00a3b05000038\",\
description: \"ambient\"\
},\
{\
id: \"28e2cc23070000d8\",\
description: \"wood\"\
},\
{\
id: \"28d12b5b0500001c\",\
description: \"extern\"\
}\
];\
\
var debug = false;\
\
\
requirejs.config({\
\"moment\": \"://cdnjs.cloudflare.com/ajax/libs/require.js/2.3.6/require.min.js\"\
});\
\
var history_interval_sec = 10;\
\
var baseurl = '';\
if (debug) baseurl = 'http://10.10.3.9';\
\
async function reloadTemp(addr) {\
$('.j-spin').removeClass('collapse');\
let finished = false;\
let res = null;\
while (!finished) {\
try {\
res = await $.ajax({\
url: baseurl + '/temp/' + addr,\
type: 'GET'\
});\
finished = true;\
} catch (e) {\
\
}\
}\
$('.j-spin').addClass('collapse');\
$('#t' + addr)[0].innerText = res;\
}\
var reload_enabled = false;\
setInterval(autoreload, 10000);\
\
function autoreload() {\
if (!reload_enabled) return;\
reloadall();\
}\
\
function sleep(ms) {\
return new Promise(resolve => setTimeout(resolve, ms));\
}\
\
async function reloadall() {\
$('.tempdev').each(async function (idx) {\
let v = this.innerText;\
console.log('addr=[' + v + ']');\
await reloadTemp(v);\
});\
\
let finished = false;\
\
let res = null;\
while (!finished) {\
try {\
res = await $.ajax({\
url: baseurl + \"/temphistory\",\
type: 'GET'\
});\
finished = true;\
} catch (e) {\
\
}\
}\
\
var colors = ['orange', 'yellow', 'green', 'blue', 'violet', 'black', 'red'];\
var ctx = document.getElementById(\"myChart\").getContext('2d');\
\
var dtnow = moment();\
console.log('moment now = ' + dtnow.format());\
\
var i = 0;\
var dss = [];\
$.each(res, function (idx, data) {\
id = Object.keys(data)[0];\
desc = id;\
q = $.grep(sensorDesc, (el, idx) => el.id == id);\
if (q.length > 0) desc = q[0].description;\
\
if (i > colors.length - 1) color = 'brown';\
else color = colors[i];\
\
valcnt = data[id].length;\
\
dts = [];\
$.each(data[id], function (idx, val) {\
secbefore = (valcnt - idx - 1) * history_interval_sec;\
tt = moment(dtnow).subtract(secbefore, 'seconds');\
dts.push({\
t: tt,\
y: val\
});\
});\
\
dss.push({\
borderColor: color,\
label: desc,\
data: dts,\
pointRadius: 0\
});\
\
++i;\
});\
\
var myChart = new Chart(ctx, {\
type: 'line',\
data: {\
datasets: dss\
},\
options: {\
scales: {\
xAxes: [{\
type: 'time',\
time: {\
displayFormats: {\
'hour': 'HH:mm'\
}\
},\
position: 'bottom'\
}]\
}\
}\
});\
}\
\
async function myfn() {\
\
$('.j-spin').removeClass('collapse');\
const res = await $.ajax({\
url: baseurl + '/tempdevices',\
type: 'GET'\
});\
const resnfo = await $.ajax({\
url: baseurl + '/info',\
type: 'GET'\
});\
history_interval_sec = resnfo.history_interval_sec;\
console.log('history_interval_sec = ' + history_interval_sec);\
\
$('.j-spin').addClass('collapse');\
\
var h = \"\";\
\
for (i = 0; i < res.tempdevices.length; ++i) {\
let tempId = res.tempdevices[i];\
\
h += \"<tr>\";\
\
h += \"<td><span class='tempdev'>\";\
h += tempId;\
h += \"</span></td>\";\
\
h += \"<td>\";\
q = $.grep(sensorDesc, (el, idx) => el.id == tempId);\
if (q.length > 0) h += q[0].description;\
h += \"</td>\";\
\
h += \"<td><span id='t\" + tempId + \"'>\";\
h += \"</span></td>\";\
\
h += \"<td><button class='btn btn-primary' onclick='reloadTemp(\\\"\" + res.tempdevices[i] + \"\\\")'>reload</button></td>\";\
\
h += \"</tr>\";\
}\
\
$('#tbody-temp')[0].innerHTML = h;\
\
const res2 = await $.ajax({\
url: baseurl + '/info',\
type: 'GET'\
});\
$('#info')[0].innerHTML = JSON.stringify(res2, null, 2);\
\
reloadall();\
}\
\
myfn();\
")