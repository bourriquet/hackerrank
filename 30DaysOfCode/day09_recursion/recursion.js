function factorial(num) {
    if (num <= 1) {
        return 1;
    }
    
    return num * factorial(num - 1);
}

function processData(input) {
    console.log(factorial(input));
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
