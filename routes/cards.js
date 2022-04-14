const express = require('express');
const router = express.Router();
const bankapi = require('../services/cards');

router.get('/', async function(req, res, next) {
    try {
      res.json(await bankapi.getCard(req.query.page));
    } catch (err) {
      console.error(`Error while getting Card data `, err.message);
      next(err);
    }
  });

router.get('/:id', async function(req, res, next) {
    try {
      res.json(await bankapi.getCardID(req.params.id));
    } catch (err) {
      console.error(`Error while getting Card data `, err.message);
      next(err);
    }
  });

  router.post('/', async function(req, res, next) {
    try {
      res.json(await bankapi.create(req.body));
    } catch (err) {
      console.error(`Error while creating Card data`, err.message);
      next(err);
    }
  });

  module.exports = router;