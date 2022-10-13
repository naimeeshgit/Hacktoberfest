/* global chrome */

import { useState, useEffect } from "react";
import { AuthProvider, useAuth } from "./contexts/AuthContext";

var extensionId = "eofjnjefflanoagiahdfkmglmhhlilik";

function Login () {
	const isSignInLink = useAuth()?.isSignInLink;

	if ( typeof browser === "undefined" ) {
		var browser = chrome;
	}

	useEffect(() => {
		if (isSignInLink(window.location.href)) {

			const payload = {
				link: window.location.href
			}

			function handleResponse(message) {
				console.log(`Message from the background script:  ${message.response}`);
			}

			function handleError(error) {
				console.log(`Error: ${error}`);
			}

			browser.runtime.sendMessage( extensionId, payload, function ( response ){
					console.log("yayyy ");
					console.log(response);
			} )

			window.location.href = '/'
		}
	}, []);

	return (
		<div>
			<h2>log in page</h2>
		</div>
	)

}

export default Login;
