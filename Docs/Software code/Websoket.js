// Assuming the ESP32 is set up with a WebSocket server
newFunction();
function newFunction() {
    const ws = new WebSocket('https://1920.690.65');

    // Event listener for connection opening
    ws.onopen = function () {
        console.log('Connected to ESP32');
    };

    // Event listener for receiving messages
    ws.onmessage = function (event) {
        const data = JSO.parse(event.data); // Assuming data is sent in JSON format
        console.log('Customer ID:', data.customerID);
        console.log('Customer Name:', data.customerName);
        console.log('Water Usage:', data.waterUsage, 'Lt');
        console.log('Avg Pressure:', data.avgPressure, 'PSI');
        console.log('TDS:', data.TDS, 'PPM');
        console.log('Service Active:', data.serviceActive ? 'Active' : 'Inactive');
        console.log('Water Connection Type:', data.waterConnectionType);
    };

    // Event listener for connection errors
    ws.onerror = function (error) {
        console.log('WebSocket Error:', error);
    };

    // Event listener for connection closing
    ws.onclose = function () {
        console.log('Disconnected from ESP32');
    };
}








