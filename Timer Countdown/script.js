const targetDate = new Date('August 23, 2024 00:00:00').getTime();

function Counter() {
    const timeNow = new Date().getTime();
    const timeDiff = targetDate - timeNow;

    const Days = Math.floor(timeDiff / (1000*60*60*24));
    const Hours = Math.floor((timeDiff % (1000*60*60*24))/(1000*60*60));
    const Min = Math.floor((timeDiff % (1000*60*60))/(1000*60));
    const Sec = Math.floor((timeDiff % (1000*60))/(1000));

    document.querySelector('.days').innerText = Days;
    document.querySelector('.hours').innerText = Hours;
    document.querySelector('.minutes').innerText = Min;
    document.querySelector('.seconds').innerText = Sec;
}

setInterval(Counter, 1000);
