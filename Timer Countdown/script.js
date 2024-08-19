const targetDate = new Date('August 23, 2024 00:00:00').getTime();

    function updateCountdown() {
        const now = new Date().getTime();
        const timeDifference = targetDate - now;

        const days = Math.floor(timeDifference / (1000 * 60 * 60 * 24));
        const hours = Math.floor((timeDifference % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
        const minutes = Math.floor((timeDifference % (1000 * 60 * 60)) / (1000 * 60));
        const seconds = Math.floor((timeDifference % (1000 * 60)) / 1000);

        document.querySelector('.days').innerText = `${days}`;
        document.querySelector('.hours').innerText = `${hours}`;
        document.querySelector('.minutes').innerText = `${minutes}`;
        document.querySelector('.seconds').innerText = `${seconds}`;
        }

setInterval(updateCountdown, 1000);