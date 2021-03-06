/* GENERATED FILE BY gen-h UTIL - DO NOT EDIT THIS */
F("<html> \
 \
<head> \
<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"> \
<style> \
.port-on { \
background-color: yellow; \
} \
.cfg-lbl { \
text-align: right; \
font-weight: bold; \
} \
.cfg-lbl-cool { \
text-align: right; \
font-weight: bold; \
color:steelblue; \
} \
.cfg-lbl-hot { \
text-align: right; \
font-weight: bold; \
color:mediumvioletred; \
} \
.cfg-lbl-pink { \
text-align: right; \
font-weight: bold; \
color:blueviolet; \
} \
.cfg-lbl-fl { \
text-align: right; \
font-weight: bold; \
color:green; \
} \
.cfg-notes { \
color: gray; \
font-style: italic; \
} \
.fstrong { \
font-weight: bold; \
} \
</style> \
</head> \
 \
<link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/4.1.3/css/bootstrap.min.css\" \
integrity=\"sha256-eSi1q2PG6J7g7ib17yAaWMcrr5GrtohYChqibrV7PBE=\" crossorigin=\"anonymous\" /> \
<link rel=\"stylesheet\" href=\"https://use.fontawesome.com/releases/v5.5.0/css/all.css\" integrity=\"sha384-B4dIYHKNBt8Bc12p+WXckhzcICo0wtJAoU8YZTY5qE0Id1GSseTk6S+L3BlXeVIU\" \
crossorigin=\"anonymous\"> \
 \
<body> \
<!-- HOME --> \
<div class=\"container-fluid\"> \
<div class=\"row mt-3\"> \
<div class=\"col-auto\"> \
<h1>Cathouse controller</h1> \
</div> \
<div class=\"col\"> \
<div class=\"btn-group\" role=\"group\"> \
<button class=\"btn btn-link\" onclick='showHome()'><span class='menu-home fstrong j-menu'>Home</span></button> \
<button class=\"btn btn-link\" onclick='showConfig()'><span class='menu-config j-menu'>Config</span></button> \
<button class=\"btn btn-link\" onclick=\"window.open('https://github.com/devel0/iot-cathouse-controller')\">About</button> \
<div class=\"col\"><i class=\"fas fa-spin fa-spinner j-spin collapse\"></i></div> \
</div> \
</div> \
</div> \
 \
<div class=\"row j-containers j-home\"> \
<div class=\"col col-sm-12 col-lg-7\"> \
<h2>Charts</h2> \
<div class=\"catinChartDiv\" style=\"position: relative\"> \
<canvas id=\"catinChart\"></canvas> \
</div> \
<div class=\"tempChartDiv\" style=\"position: relative\"> \
<canvas id=\"tempChart\"></canvas> \
</div> \
 \
</div> \
<div class=\"col col-sm-12 col-lg-5\"> \
<div class=\"row\"> \
<div class=\"col-12\"> \
<h2>Ports</h2> \
<div class=\"row\"> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(1)'><span class='port-p1'>P1</span></button> \
</div> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(2)'><span class='port-p2'>P2</span></button> \
</div> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(3)'><span class='port-p3'>P3</span></button> \
</div> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(4)'><span class='port-p4'>P4</span></button> \
</div> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(5)'><span class='port-led'>LED</span></button> \
</div> \
<div class=\"col-auto\"> \
<button class=\"btn btn-link\" onclick='togglePort(6)'><span class='port-fan'>FAN</span></button> \
</div> \
</div> \
</div> \
</div> \
<div class=\"row\"> \
<div class=\"col\"> \
<h2>Stats</h2> \
<div class=\"row\"> \
<div class=\"col-12\"> \
<div class=\"table table-striped table-sm\"> \
<table class=\"table\"> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">Power (mean)</td> \
<td class=\"align-middle\"><span class='h3 mean-power ml-3'></span><span \
class=\"h3\">W</span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">Freeram</td> \
<td class=\"align-middle\"><span class='free-ram ml-3'></span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">ADC weight (mean)</td> \
<td class=\"align-middle\"><span class='adc-weight ml-3'></span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">ADC weight latest 20 \
samples (mean)</td> \
<td class=\"align-middle\"><span class='adc-weight-latest ml-3'></span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">Temperature history interval (min)</td> \
<td class=\"align-middle\"><span class='temp-history-interval-min ml-3'></span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">Cycle (prev/current)</td> \
<td class=\"align-middle\"><span class='cycle-prev-current ml-3'></span></td> \
</tr> \
<tr> \
<td class=\"text-right text-nowrap align-middle\">Cat is in there</td> \
<td class=\"align-middle\"> \
<button class=\"btn btn-link\" onclick='toggleCatInThere()'><span class='cat-is-in-there ml-3'></span></button> \
</td> \
</tr> \
</table> \
</div> \
 \
</div> \
</div> \
</div> \
<div class=\"col\"> \
<h2>Tabular</h2> \
<div class=\"table-container\"> \
<div class=\"table table-striped table-sm\"> \
<table class=\"table\"> \
<thead> \
<tr> \
<th scope=\"col\"><b>Address</b></th> \
<th scope=\"col\"><b>Description</b></th> \
<th scope=\"col\"><b>Value (C)</b></th> \
<th scope=\"col\"><b>Trend</b></th> \
</tr> \
</thead> \
<tbody id=\"tbody-temp\"></tbody> \
</table> \
</div> \
</div> \
</div> \
</div> \
<div class=\"row\"> \
<div class=\"col-12\"> \
<h3>ADC Weight</h3> \
<div class=\"weightChartDiv\" style=\"position: relative\"> \
<canvas id=\"weightChart\"></canvas> \
</div> \
</div> \
</div> \
</div> \
</div> \
 \
<div class=\"row j-containers j-config collapse\"> \
<div class=\"col\"> \
<div class=\"row\"> \
<div class=\"col-auto\"> \
<h2>Config</h2> \
</div> \
</div> \
<div class=\"row\"> \
<div class=\"col\"> \
<table class=\"table table-striped\"> \
<thead> \
<tr> \
<th width=\"30%\" style='text-align:right'><b>Var</b></th> \
<th width=\"20%\"><b>Value</b></th> \
<th width=\"5%\"><b>Unit</b></th> \
<td width=\"60%\"><b>Notes</b></td> \
</tr> \
</thead> \
<tbody id=\"config-tbl\"> \
<tr> \
<td class='cfg-lbl'>Firmware ver</td> \
<td><span id='config-firmwareVersion'></span></td> \
<td></td> \
<td></td> \
</tr> \
<tr> \
<td class='cfg-lbl'>WiFi SSID</td> \
<td><span id='config-wifiSSID'></span></td> \
<td></td> \
<td></td> \
</tr> \
<tr> \
<td class='cfg-lbl-pink align-middle'>ADC weight delta cat</td> \
<td><input type='text' maxlength=\"16\" class='form-control' id='config-adcWeightDeltaCat'></input></td> \
<td></td> \
<td class='cfg-notes'>adc weight quantity delta between mean values (last 20sec) to \
detect \
ingress/egress of the cat</td> \
</tr> \
<tr> \
<td class='cfg-lbl align-middle'>Temperature sensor ID ( bottom )</td> \
<td><input type='text' maxlength=\"16\" class='form-control' id='config-tbottomId'></input></td> \
<td></td> \
<td class='cfg-notes'>bottom temperature sensor id</td> \
</tr> \
<tr> \
<td class='cfg-lbl align-middle'>Temperature sensor ID ( wood )</td> \
<td><input type='text' maxlength=\"16\" class='form-control' id='config-twoodId'></input></td> \
<td></td> \
<td class='cfg-notes'>wood temperature sensor id</td> \
</tr> \
<tr> \
<td class='cfg-lbl align-middle'>Temperature sensor ID ( ambient )</td> \
<td><input type='text' maxlength=\"16\" class='form-control' id='config-tambientId'></input></td> \
<td></td> \
<td class='cfg-notes'>ambient temperature sensor id</td> \
</tr> \
<tr> \
<td class='cfg-lbl align-middle'>Temperature sensor ID ( extern )</td> \
<td><input type='text' maxlength=\"16\" class='form-control' id='config-texternId'></input></td> \
<td></td> \
<td class='cfg-notes'>extern temperature sensor id</td> \
</tr> \
 \
<tr> \
<td class='cfg-lbl-fl align-middle'>Fanless mode</td> \
<td><input type='checkbox' class='form-control' id='config-fanlessMode'></input></td> \
<td></td> \
<td class='cfg-notes'>if true it will cycle through all ports using given fanless \
ports intervals</td> \
</tr> \
<tr> \
<td class='cfg-lbl-fl align-middle'>Port duration</td> \
<td><input type='number' step='0.01' class='form-control' id='config-portDurationMs-min'></input></td> \
<td class='align-middle'>min</td> \
<td class='cfg-notes'>duration of port on before to switch to next</td> \
</tr> \
<tr> \
<td class='cfg-lbl-fl align-middle'>Port overlap duration</td> \
<td><input type='number' step='0.01' class='form-control' id='config-portOverlapDurationMs-min'></input></td> \
<td class='align-middle'>min</td> \
<td class='cfg-notes'>overlap duration between switching ports</td> \
</tr> \
 \
<tr> \
<td class='cfg-lbl-hot align-middle'>Standby duration</td> \
<td><input type='number' step='0.01' class='form-control' id='config-standbyDuration-min'></input></td> \
<td class='align-middle'>min</td> \
<td class='cfg-notes'>duration of standby cycle</td> \
</tr> \
<tr> \
<td class='cfg-lbl-hot align-middle'>Standby port</td> \
<td><input type='number' step='1' min=\"0\" max=\"4\" class='form-control' id='config-standbyPort'></input></td> \
<td class='align-middle'></td> \
<td class='cfg-notes'>port to maintain enabled during standby (1-4 or 0 for none)</td> \
</tr> \
 \
<tr> \
<td class='cfg-lbl-hot align-middle'>Fullpower duration</td> \
<td><input type='number' step='0.01' class='form-control' id='config-fullpowerDuration-min'></input></td> \
<td class='align-middle'>min</td> \
<td class='cfg-notes'>duration of fullpower cycle</td> \
</tr> \
<tr> \
<td class='cfg-lbl-hot align-middle'>TBottom >= T fan on</td> \
<td><input type='number' step='0.1' class='form-control' id='config-tbottomGTEFanOn'></input></td> \
<td class='align-middle'>C</td> \
<td class='cfg-notes'>when in fullpower mode fan activate if tbottom >= T</td> \
</tr> \
<tr> \
<td class='cfg-lbl-cool align-middle'>Cooldown time</td> \
<td><input type='number' step='0.01' class='form-control' id='config-cooldownTimeMs-min'></input></td> \
<td class='align-middle'>min</td> \
<td class='cfg-notes'>duration of cooldown if cooldown condition occurs</td> \
</tr> \
<tr> \
<td class='cfg-lbl-cool align-middle'>Bottom temperature limit</td> \
<td><input type='number' step='0.1' class='form-control' id='config-tbottomLimit'></input></td> \
<td class='align-middle'>C</td> \
<td class='cfg-notes'>if bottom temp >= bottom temperature limit heat ports gets \
disabled \
for Cooldown time</td> \
</tr> \
<tr> \
<td class='cfg-lbl-cool align-middle'>Wood temperature limit</td> \
<td><input type='number' step='0.1' class='form-control' id='config-twoodLimit'></input></td> \
<td class='align-middle'>C</td> \
<td class='cfg-notes'>if bottom temp >= wood temperature limit heat ports gets \
disabled \
for \
Cooldown time</td> \
</tr> \
<tr> \
<td class='cfg-lbl-cool align-middle'>Ambient temperature limit</td> \
<td><input type='number' step='0.1' class='form-control' id='config-tambientLimit'></input></td> \
<td class='align-middle'>C</td> \
<td class='cfg-notes'>if bottom temp >= ambient temperature limit heat ports gets \
disabled \
for Cooldown time</td> \
</tr> \
<tr> \
<td class='cfg-lbl-cool align-middle'>Extern >= T sys OFF</td> \
<td><input type='number' step='0.1' class='form-control' id='config-texternGTESysOff'></input></td> \
<td class='align-middle'>C</td> \
<td class='cfg-notes'>if extern >= T then system enter disabled either cat is in \
state</td> \
</tr> \
<tr> \
<td class='cfg-lbl align-middle'>Manual mode</td> \
<td><input type='checkbox' class='form-control' id='config-manualMode'></input></td> \
<td></td> \
<td class='cfg-notes'>if true ports will not changed automatically by the mcu but \
can \
managed through \
webapi</td> \
</tr> \
</tbody> \
</table> \
</div> \
</div> \
<div class=\"row mt-3\"> \
<div class=\"col-auto\"> \
<button class=\"btn btn-primary\" onclick='saveConfig()'>Save config</button> \
</div> \
</div> \
</div> \
</div> \
</div> \
 \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js\" integrity=\"sha256-FgpCb/KJQlLNfOu91ta32o/NMZxltwRo8QtmkMRdAu8=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/4.1.3/js/bootstrap.min.js\" integrity=\"sha256-VsEqElsCHSGmnmHXGQzvoWjWwoznFSZc6hs7ARLRacQ=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/moment.js/2.22.2/moment.min.js\" integrity=\"sha256-CutOzxCRucUsn6C6TcEYsauvvYilEniTXldPa6/wu0k=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/Chart.js/2.7.3/Chart.min.js\" integrity=\"sha256-oSgtFCCmHWRPQ/JmR4OoZ3Xke1Pw4v50uh6pLcu+fIc=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/require.js/2.3.6/require.min.js\" integrity=\"sha256-1fEPhSsRKlFKGfK3eO710tEweHh1fwokU5wFGDHO+vg=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"https://cdnjs.cloudflare.com/ajax/libs/underscore.js/1.9.1/underscore-min.js\" integrity=\"sha256-G7A4JrJjJlFqP0yamznwPjAApIKPkadeHfyIwiaa9e0=\" \
crossorigin=\"anonymous\"></script> \
<script src=\"app.js\"></script> \
</body> \
 \
</html>")
