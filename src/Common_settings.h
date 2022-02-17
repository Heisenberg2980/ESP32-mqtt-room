//Replace with your Wifi password; example: #define password "12345678"
#define password "12345678"

//Replace with a human-friendly host name. Must not contain spaces or special characters and be unique on your network
#define hostname "esp32_room_presence_" room "_" instance

//Replace with your MQTT Broker address; example: #define mqttHost IPAddress(192, 168, 1, 195)
#define mqttHost IPAddress(192, 168, 1, 195)

//Replace with your MQTT Broker port; example: #define mqttPort 1883
#define mqttPort 1883

//Replace with your MQTT Broker user; example: #define mqttUser "homeassistant"
#define mqttUser "homeassistant"

//Replace with your MQTT Broker password; example: #define mqttPassword "12345678"
#define mqttPassword "12345678"

//Specify the LED pin. For most dev boards, this is GPIO2
#define LED_BUILTIN 2

// Logic level for turning the led on. Most boards use active low, meaning LED_ON should be set to 0
#define LED_ON 0

//Define the base topic for room detection. Usually "room_presence"
#define channel "room_presence"

//Define the topic for publishing availability
#define availabilityTopic "presence_nodes/" room "_" instance

//Define the topic for publishing JSON attributes
#define telemetryTopic "presence_nodes/tele/" room "_" instance

// Define bluetooth scan parameters
#define activeScan true // Active scan uses more power, but get results faster
#define bleScanInterval 0x80 // Used to determine antenna sharing between Bluetooth and WiFi. Do not modify unless you are confident you know what you're doing
#define bleScanWindow 0x10 // Used to determine antenna sharing between Bluetooth and WiFi. Do not modify unless you are confident you know what you're doing
#define scanInterval 0 // Define the interval in seconds between scans
#define singleScanTime 10 // Define the duration of a single scan in seconds

// Maximum distance (in meters) to report. Devices that are calculated to be further than this distance in meters will not be reported
#define maxDistance 5
