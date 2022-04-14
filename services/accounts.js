const db = require('./db');
const helper = require('../helper');
const config = require('../config');

async function getAccounts(page = 1){
    const offset = helper.getOffset(config.listPerPage);
    const rows = await db.query(
      `SELECT accountID, balance FROM accounts LIMIT ${offset},${config.listPerPage}`
    );
    const data = helper.emptyOrRows(rows);
    const meta = {page};
  
    return {
      data,
      meta
    }
  }
  
  module.exports = {
    getAccounts,
  }
  
  async function getAccountID(id){
    const offset = helper.getOffset(config.listPerPage);
    const rows = await db.query(
      `SELECT balance FROM accounts WHERE accountID=${id} LIMIT ${offset},${config.listPerPage}`
    );
    const data = helper.emptyOrRows(rows);
  
    return {
      data,
    }
  }

  module.exports = {
    getAccounts,
    getAccountID,
  }