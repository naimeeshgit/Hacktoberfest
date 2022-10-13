import "./App.css";
import React from "react";
import { AuthProvider, useAuth } from "./contexts/AuthContext";

import Login from "./login"

function App() {

	return (
		<div className="App">
			<AuthProvider>
			<h1>Welcome!</h1>
			<Login/>
			</AuthProvider>
		</div>
	);
}

export default App;
