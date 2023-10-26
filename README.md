# ADB-Express
A extended Remote Controll with ADB. ADB-Express

## Code language

### App
```js
open alias {YouTube} // Open a app by alias name
```
```js
open package {com.google.youtube} // Open a app by package
```
```js
close app // Close the current app
```
```js
close all // Close all apps
```
```js
app install package {com.google.youtube} // Install a app from the Play Store by Google
```
```js
app install url {url} // Install by Url
```
```js
app install file {.apk} // Install by local computer
```


### ???
```js
delay {ms}
```
```js
reset lock // Go Back top home
```

reset Auth // Lock the phone

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

### Auth to unlock
```js
auth
```

File: auth.adbae
pw type {type}
pw input {pw}