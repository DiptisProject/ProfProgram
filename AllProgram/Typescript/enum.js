var DOW;
(function (DOW) {
    DOW[DOW["Monday"] = 0] = "Monday";
    DOW[DOW["Tuesday"] = 1] = "Tuesday";
    DOW[DOW["Wednesday"] = 2] = "Wednesday";
    DOW[DOW["Thursday"] = 3] = "Thursday";
    DOW[DOW["Friday"] = 4] = "Friday";
    DOW[DOW["Saturday"] = 5] = "Saturday";
    DOW[DOW["Sunday"] = 6] = "Sunday";
})(DOW || (DOW = {}));
;
var day = DOW.Tuesday;
console.log("Day :" + day);
