function processData(input) {
    
    inputArray = input.split("\n");
    var N = parseInt(inputArray.shift());

    for (var i = 0; i < N; i++) {
        for (var j = 0; j < inputArray[i].length; j += 2) {
            process.stdout.write(inputArray[i][j]);
        }
        process.stdout.write(" ");
        
        for (var j = 1; j < inputArray[i].length; j += 2) {
            process.stdout.write(inputArray[i][j]);
        }
        process.stdout.write("\n");
    }
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
