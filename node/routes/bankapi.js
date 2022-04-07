const express = require('express');
const db = require('../services/db');
const router = express.Router();

/* GET programming languages. */
router.get('/', async function(req, res, next) {
  try {
    const rows = await db.query("SELECT * FROM clients");
    res.json(rows);
  } catch (err) {
    console.error(`Error while getting programming languages `, err.message);
    next(err);
  }
});

module.exports = router;
