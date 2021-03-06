.. -*- rst -*-

Add (Associate) Fixed Ip (addFixedIp Action)
============================================

.. note::

   Network APIs and proxies are deprecated beginning microversion 2.36, except
   for actions on non-deprecated resources such as servers. The addFixedIp
   action is one such exemption.

.. rest_method:: POST /servers/{server_id}/action

Adds a fixed IP address to a server instance, which associates that
address with the server. The fixed IP address is retrieved from the
network that you specify in the request.

Specify the ``addFixedIp`` action and the network ID in the request body.

Policy defaults enable only users with the administrative role or
the owner of the server to perform this operation. Cloud providers
can change these permissions through the ``policy.json`` file.

Normal response codes: 202

Error response codes: badRequest(400), unauthorized(401), forbidden(403),
itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - server_id: server_id_path
  - addFixedIp: addFixedIp
  - networkId: net_id_resp

**Example Add (Associate) Fixed Ip (addFixedIp Action)**

.. literalinclude:: ../../doc/api_samples/os-multinic/multinic-add-fixed-ip-req.json
   :language: javascript

Response
--------

No response body is returned after a successful addFixedIp action.


Remove (Disassociate) Fixed Ip (removeFixedIp Action)
=====================================================

.. note::

   Network APIs and proxies are deprecated as of microversion 2.36, except
   for actions on non-deprecated resources such as servers. The removeFixedIp
   action is one such exemption.

.. rest_method:: POST /servers/{server_id}/action

Removes, or disassociates, a fixed IP address from a server.

Specify the ``removeFixedIp`` action in the request body.

Policy defaults enable only users with the administrative role or
the owner of the server to perform this operation. Cloud providers
can change these permissions through the ``policy.json`` file.

Normal response codes: 202

Error response codes: badRequest(400), unauthorized(401), forbidden(403),
itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml


  - server_id: server_id_path
  - removeFixedIp: removeFixedIp
  - address: ip_address

**Example Remove (Disassociate) Fixed Ip (removeFixedIp Action)**

.. literalinclude:: ../../doc/api_samples/os-multinic/multinic-remove-fixed-ip-req.json
   :language: javascript

Response
--------

No response body is returned after a successful removeFixedIp action.
