function processData(input) {
    const dates = _input.split('\n');
    const dateReturned = dates[0].split(' ').map(x => parseInt(x));
    const dateExpected = dates[1].split(' ').map(x => parseInt(x));
    
    if (dateReturned[2] > dateExpected[2]) {
        console.log(10000);
    } else if (dateReturned[2] === dateExpected[2]) {
        if (dateReturned[1] > dateExpected[1]) {
            const fine = 500 * (dateReturned[1] - dateExpected[1]);
            console.log(fine);
        } else if (dateReturned[1] === dateExpected[1]) {
            if (dateReturned[0] > dateExpected[0]) {
                const fine = 15 * (dateReturned[0] - dateExpected[0]);
                console.log(fine);
            } else {
                console.log(0);
            }
        } else {
            console.log(0);
        }
    } else {
        console.log(0);
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
