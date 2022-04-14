const express = require("express");
const app = express();
const port = 3000;

const bcrypt = require('bcryptjs');
const db = require('./services/db');

const bankapiRouter = require("./routes/clients");
const bankapiRouterCards = require("./routes/cards");
const bankapiRouterAccount = require("./routes/accounts");
const bankapiRouterActions = require("./routes/transactions");

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

app.get('/clients', async function(req, res) {
  try {
    res.json(await db.query(`SELECT clientID, clientName, clientAddress, clientPhone FROM clients;`));
  } catch (err) {
    console.error(`Error while getting Client data `, err.message);
  }
});

app.use("/clients/:id", async function(req, res) {
  try {
    res.json(await db.query(`SELECT clientName FROM clients WHERE clientID=${req.params.id};`));
  } catch (err) {
    console.error(`Error while getting Client data `, err.message);
  }
});

app.use("/cards", bankapiRouterCards);
app.use("/cards/:id", bankapiRouterCards);

app.use("/accounts", bankapiRouterAccount);
app.use("/accounts/:id", bankapiRouterAccount);

app.use("/transactions", bankapiRouterActions);
app.use("/transactions/:id", bankapiRouterActions);

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
