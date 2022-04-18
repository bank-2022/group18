const express = require("express");
const app = express();
const port = 3000;

const bcrypt = require('bcryptjs');
const db = require('./services/db');

var hash = bcrypt.hashSync("1221", bcrypt.genSaltSync(10));
console.log("Has for PIN 1221 is: ", hash);

app.use(express.json());
app.use(
  express.urlencoded({
    extended: true,
  })
);

app.get("/", (req, res) => {
  res.json({ message: "ok" });
});

//Clients
app.get('/clients', async function(req, res) {
  try {
    res.json(await db.query(`SELECT clientID, clientName, clientAddress, clientPhone FROM clients;`));
  } catch (err) {
    console.error(`Error while getting Client data: `, err.message);
  }
});

app.get("/clients/:id", async function(req, res) {
  try {
    res.json(await db.query(`SELECT clientName FROM clients WHERE clientID=${req.params.id};`));
  } catch (err) {
    console.error(`Error while getting Client data: `, err.message);
  }
});

//Cards
app.get("/cards", async function(req, res) {
  try {
    res.json(await db.query(`SELECT cardID, cardPIN, clientID, accountID FROM cards;`));
  } catch (err) {
    console.error(`Error while getting Card data: `, err.message);
  }
});

app.get("/cards/:id", async function(req, res) {
  try {
    res.json(await db.query(`SELECT cardPin, accountID FROM cards WHERE cardID=${req.params.id};`));
  } catch (err) {
    console.error(`Error while getting Client data: `, err.message);
  }
});

//Accounts
app.get("/accounts", async function(req, res) {
  try {
    res.json(await db.query(`SELECT accountID, balance FROM accounts;`));
  } catch (err) {
    console.error(`Error while getting Account data: `, err.message);
  }
});
app.get("/accounts/:id", async function(req, res) {
  try {
    res.json(await db.query(`SELECT balance FROM accounts WHERE accountID=${req.params.id};`));
  } catch (err) {
    console.error(`Error while getting Account data: `, err.message);
  }
});

//Transactions
app.get("/transactions", async function(req, res) {
  try {
    res.json(await db.query(`SELECT transactionID, accountID, cardID, timestamp, action, amount FROM transactions;`));
  } catch (err) {
    console.error(`Error while getting Transaction data: `, err.message);
  }
});
app.get("/transactions/:id", async function(req, res) {
  try {
    res.json(await db.query(`SELECT timestamp, amount FROM transactions WHERE accountID=${req.params.id};`));
  } catch (err) {
    console.error(`Error while getting Transaction data: `, err.message);
  }
});

/* Error handler middleware */
app.use((err, req, res, next) => {
  const statusCode = err.statusCode || 500;
  console.error(err.message, err.stack);
  res.status(statusCode).json({ message: err.message });
  return;
});

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
});
