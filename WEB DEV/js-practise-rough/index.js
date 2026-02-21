function sleep(millis, callback) {
    return new Promise(resolve => setTimeout(resolve, millis)).then(callback);
}

const start = Date.now();
const duration = 100;

sleep(duration, () => {
    console.log('11');
    const diff = Date.now() - start;
    console.log(diff==duration);
})