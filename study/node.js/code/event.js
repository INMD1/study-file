const Eventmodule = require('events');

const custom = new Eventmodule();

custom.on('call', function() {
    console.log('이벤트 콜');
})

custom.removeAllListeners();

custom.emit('call')