/* global chrome */

try {
	if (typeof browser === "undefined") {
		var browser = chrome;
	}

	function handleMessage(request, sender, sendResponse) {
		console.log(request);
		chrome.storage.local.set({ 'linkForSignIn': request.link }, function () {
			console.log('link is set to ' + request.link);
		});
		chrome.storage.local.set({ 'emailForSignIn': request.email }, function () {
			console.log('email is set to ' + request.email);
		});
		console.log("Message from the content script: " + request);
		sendResponse({ response: "donee" });
	}

	chrome.runtime.onMessageExternal.addListener(handleMessage);

	chrome.windows.getCurrent(function (w) {

		try {
		console.log(w.width, w.height)

		if (w.width / w.height > 4 / 3) {
			
			chrome.storage.local.set({ 'width': 400 });
			console.log("this is 400px");
// 			chrome.storage.local.set({ 'width': w.width / 4 });
// 			console.log('width is set to ' + w.width / 4);
// 			console.log("this is 25%");

		}
		else {
			chrome.storage.local.set({ 'width':  300 });
			console.log("this is 300px");
// 			chrome.storage.local.set({ 'width': w.width / 4 });
// 			console.log('width is set to ' + w.width / 3);
// 			console.log("this is 33%");
		}
		} catch (error) {
			console.log(error);
		}
		

	});
}
catch(e) {
	console.log(e);
}
