function processData(input) {
    var inputArr = input.split('\n');
    
    for (var i = 1; i < inputArr.length; i++) {
        var num = inputArr[i];
        var flag = true;
        
        if (num < 2) {
            console.log('Not prime');
        } else if (num <= 3) {
            console.log('Prime');
        } else if (num % 2 == 0 || num % 3 == 0) {
            console.log('Not prime');
        } else {
            for (var j = 5; j <= Math.sqrt(num); j += 2) {
                if (num % j == 0) {
                    console.log('Not prime');
                    flag = false;
                    break;
                }
            }
            
            if (flag) {
                console.log('Prime');
            }
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
