const express = require('express');
const router = express.Router();
const bankapi = require('../services/accounts');

router.get('/', async function(req, res, next) {
    try {
      res.json(await bankapi.getAccounts(req.query.page));
    } catch (err) {
      console.error(`Error while getting Account data `, err.message);
      next(err);
    }
  });

router.get('/:id', async function(req, res, next) {
    try {
      res.json(await bankapi.getAccountID(req.params.id));
    } catch (err) {
      console.error(`Error while getting Account data `, err.message);
      next(err);
    }
  });

  module.exports = router;