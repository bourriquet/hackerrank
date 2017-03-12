function processData(input) {
    inputArray = input.split("\n");
    
    var N = parseInt(inputArray.shift());
    var phonebook = {};
    
    for (var i = 0; i < N; i++) {
        var S = inputArray.shift();
        SArray = S.split(" ");
        
        phonebook[SArray[0]] = SArray[1];
    }
    
    while (inputArray.length > 0) {
        var S = inputArray.shift();
        
        if (!(S in phonebook)) {
            console.log("Not found");
        }
        else {
            console.log(S + "=" + phonebook[S]);
        }
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
