const express = require('express');
const router = express.Router();
const bankapi = require('../services/clients');

/* GET programming languages. */
router.get('/', async function(req, res, next) {
  try {
    res.json(await bankapi.getClient(req.query.page));
  } catch (err) {
    console.error(`Error while getting Client data `, err.message);
    next(err);
  }
});

router.get('/:id', async function(req, res, next) {
  try {
    res.json(await bankapi.getClientID(req.params.id));
  } catch (err) {
    console.error(`Error while getting Client data `, err.message);
    next(err);
  }
});

/* POST programming language */
router.post('/', async function(req, res, next) {
  try {
    res.json(await bankapi.create(req.body));
  } catch (err) {
    console.error(`Error while creating Client data`, err.message);
    next(err);
  }
});

/* PUT programming language */
router.put('/:id', async function(req, res, next) {
  try {
    res.json(await bankapi.update(req.params.id, req.body));
  } catch (err) {
    console.error(`Error while updating Client data`, err.message);
    next(err);
  }
});

/* DELETE programming language */
router.delete('/:id', async function(req, res, next) {
  try {
    res.json(await bankapi.remove(req.params.id));
  } catch (err) {
    console.error(`Error while deleting Client data`, err.message);
    next(err);
  }
});

module.exports = router;
