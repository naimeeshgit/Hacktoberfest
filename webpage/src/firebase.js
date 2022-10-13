import firebase from "firebase/app"
import "firebase/auth"

// // const app = firebase.initializeApp({
// //   apiKey: process.env.REACT_APP_FIREBASE_API_KEY,
// //   authDomain: process.env.REACT_APP_FIREBASE_AUTH_DOMAIN,
// //   // databaseURL: process.env.REACT_APP_FIREBASE_DATABASE_URL,
// //   projectId: process.env.REACT_APP_FIREBASE_PROJECT_ID,
// //   storageBucket: process.env.REACT_APP_FIREBASE_STORAGE_BUCKET,
// //   messagingSenderId: process.env.REACT_APP_FIREBASE_MESSAGING_SENDER_ID,
// //   appId: process.env.REACT_APP_FIREBASE_APP_ID
// // })

// const app = firebase.initializeApp({
//   apiKey: "AIzaSyBb3GccfG2Q7SP8TBpy6LIwWKPLDNlx7Uk",
//   authDomain: "knoxedge-jot.firebaseapp.com",
//   projectId: "knoxedge-jot",
//   storageBucket: "knoxedge-jot.appspot.com",
//   messagingSenderId: "843156631987",
//   appId: "1:843156631987:web:a60d7a0cba51ea2ac75bc6"
// });

// export const auth = app.auth()
// export default app

// import firebase from "firebase/compat/app"
// import "firebase/compat/auth"

// const app = firebase.initializeApp({
//   apiKey: process.env.REACT_APP_FIREBASE_API_KEY,
//   authDomain: process.env.REACT_APP_FIREBASE_AUTH_DOMAIN,
//   // databaseURL: process.env.REACT_APP_FIREBASE_DATABASE_URL,
//   projectId: process.env.REACT_APP_FIREBASE_PROJECT_ID,
//   storageBucket: process.env.REACT_APP_FIREBASE_STORAGE_BUCKET,
//   messagingSenderId: process.env.REACT_APP_FIREBASE_MESSAGING_SENDER_ID,
//   appId: process.env.REACT_APP_FIREBASE_APP_ID
// })

const app = firebase.initializeApp({
  apiKey: "AIzaSyBhq5O7gCtGnqk3XuVXRS0Ifm4j_2n_TY8",
  authDomain: "jotathot-2f32b.firebaseapp.com",
  projectId: "jotathot-2f32b",
  storageBucket: "jotathot-2f32b.appspot.com",
  messagingSenderId: "578261191473",
  appId: "1:578261191473:web:93b771217f84a24479fe10"
});

export const auth = app.auth()
export default app

