const db = require('./db');
const helper = require('../helper');
const config = require('../config');

async function getClient(page = 1){
  const offset = helper.getOffset(page, config.listPerPage);
  const rows = await db.query(
    `SELECT clientID, clientName, clientAddress, clientPhone FROM clients LIMIT ${offset},${config.listPerPage}`
  );
  const data = helper.emptyOrRows(rows);
  const meta = {page};

  return {
    data,
    meta
  }
}

module.exports = {
  getClient,
}

async function getClientID(id){
  const offset = helper.getOffset(config.listPerPage);
  const rows = await db.query(
    `SELECT clientName FROM clients WHERE clientID=${id} LIMIT ${offset},${config.listPerPage}`
  );
  const data = helper.emptyOrRows(rows);

  return {
    data,
  }
}

module.exports = {
  getClient,
  getClientID,
}

async function create(Client){
  const result = await db.query(
    `INSERT INTO clients
    (clientName, clientAddress, clientPhone) 
    VALUES 
    (${Client.Name}, ${Client.Address}, ${Client.Phone})`
  );

  let message = 'Error in creating Client';

  if (result.affectedRows) {
    message = 'Client created successfully';
  }

  return {message};
}

module.exports = {
  getClient,
  getClientID,
  create,
}

async function update(id, Client){
  const result = await db.query(
    `UPDATE clients 
    SET clientName="${Client.Name}", clientAddress=${Client.Address}, clientPhone=${Client.Phone}
    WHERE id=${id}` 
  );

  let message = 'Error in updating Client data';

  if (result.affectedRows) {
    message = 'Client data updated successfully';
  }

  return {message};
}

module.exports = {
  getClient,
  getClientID,
  create,
  update,
}

async function remove(id){
  const result = await db.query(
    `DELETE FROM clients WHERE id=${id}`
  );

  let message = 'Error in deleting Client data';

  if (result.affectedRows) {
    message = 'Client data deleted successfully';
  }

  return {message};
}

module.exports = {
  getClient,
  getClientID,
  create,
  update,
  remove,
};