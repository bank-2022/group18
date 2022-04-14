const db = require('./db');
const helper = require('../helper');
const config = require('../config');


async function getCard(page = 1){
    const offset = helper.getOffset(config.listPerPage);
    const rows = await db.query(
      `SELECT cardID, cardPIN, clientID, accountID FROM cards LIMIT ${offset},${config.listPerPage}`
    );
    const data = helper.emptyOrRows(rows);
    const meta = {page};
  
    return {
      data,
      meta
    }
  }
  
  module.exports = {
    getCard,
  }

  async function getCardID(id){
    const offset = helper.getOffset(config.listPerPage);
    const rows = await db.query(
      `SELECT cardPin, accountID FROM cards WHERE cardID=${id} LIMIT ${offset},${config.listPerPage}`
    );
    const data = helper.emptyOrRows(rows);
  
    return {
      data,
    }
  }
  
  module.exports = {
    getCard,
    getCardID,
  }

  async function create(Card){
    const result = await db.query(
      `INSERT INTO cards (cardPIN) VALUES (${Card.PIN})`
    );
  
    let message = 'Error in creating Client';
  
    if (result.affectedRows) {
      message = 'Client created successfully';
    }
  
    return {message};
  }

  module.exports = {
    getCard,
    getCardID,
    create,
  }