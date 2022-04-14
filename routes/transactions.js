const express = require('express');
const router = express.Router();
const bankapi = require('../services/transactions');

router.get('/', async function(req, res, next) {
    try {
      res.json(await bankapi.getTransactions(req.query.page));
    } catch (err) {
      console.error(`Error while getting Transactions`, err.message);
      next(err);
    }
  });

router.get('/:id', async function(req, res, next) {
    try {
      res.json(await bankapi.getTransactionsID(req.params.id));
    } catch (err) {
      console.error(`Error while getting Transactions`, err.message);
      next(err);
    }
  });

module.exports = router;