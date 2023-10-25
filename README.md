# ADB-Express
A extended Remote Controll with ADB. ADB-Express

## Code language

### App
open alias - Open a app by alias name
open package - Open a app by package
close app - Close the current app
close all - Close all apps
app install package - Install a app from the Play Store by Google
app install url - Install by Url
app install file - Install by local computer

### ???
```js
delay {ms}
```

### Swipe

### Touch
```sh
home
```

### Search

### Power
```js
off
```
```js
on
```
```js
power
```


### Variable
```js
set {VARIABLE_NAME} {TYPE} = {VALUE};
```
```js
use {VARIABLE_NAME};
```
```js
use set {VARIABLE_NAME} = {NEW_VALUE};
```

### Connect and Pair
```js
pair {IP:PORT} {CODE}
```
```js
connect {IP:PORT} {OPTIONAL:SERIAL_NUMBER}
```
```js
reconnect devices
```
```js
reconnect offlines
```
#### USB
```js
usb attach
```
```js
usb detach
```

### Web

### Security
```js
disable-verity           // disable dm-verity checking on userdebug builds
```
```js
enable-verity            // re-enable dm-verity checking on userdebug builds
```
```js
keygen FILE
```

### Scrennshot

### Data transport (Need app)

### Reboot (Auth2)
