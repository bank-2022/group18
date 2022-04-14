const express = require("express");
const app = express();
const port = 3000;
const bcrypt = require('bcryptjs');
const bankapiRouter = require("./routes/clients");
const bankapiRouterCards = require("./routes/cards");
const bankapiRouterAccount = require("./routes/accounts");
const bankapiRouterActions = require("./routes/transactions");

app.use(express.json());
app.use(
  express.urlencoded({
    extended: true,
  })
);

app.get("/", (req, res) => {
  res.json({ message: "ok" });
});

app.use("/clients", bankapiRouter);
app.use("/clients/:id", bankapiRouter);

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