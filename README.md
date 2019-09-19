### 4DIAC - forte

This docker file is build with support for the following communication drivers 

- MQTT 
- OPC 

Use the `.env` file to set the version of the docker images that will be build as part of the make command

To build simply use the Makefile: `make build`

To push to the registry use the Makefile: `make push`

These commands can be combined as: `make build push`

The OPC-UA server is initiated when the function block are added to forte, which uses the OPC-UA Publish and Subscribe. The default port is `4840` 

### PORTS

- 4840 (OPC-UA server)
- 61499 (IEC-61499, distributed logic, programming interface)
