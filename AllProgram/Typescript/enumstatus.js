var DOW;
(function (DOW) {
    DOW["monday"] = "Monday";
    DOW["tuesday"] = "Tuesday";
    DOW["wednesday"] = "Wednesday";
    DOW["thursday"] = "Thursday";
    DOW["friday"] = "Friday";
    DOW["saturday"] = "Saturday";
    DOW["sunday"] = "Sunday";
})(DOW || (DOW = {}));
;
var staus;
(function (staus) {
    staus[staus["created"] = 100] = "created";
    staus[staus["NotFound"] = 200] = "NotFound";
})(staus || (staus = {}));
var day = DOW.thursday;
console.log("Day :" + day);
var st = staus.created;
console.log(st);
