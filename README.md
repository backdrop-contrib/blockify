BLOCKIFY
=======

This module exposes a number of core Backdrop elements as blocks.

SUPPORTED ELEMENTS:
-------------------

* Logo
* Site name
* Site slogan
* Page title
* Tabs
* Messages
* Local actions
* Feed icons

The module provides an administrations settings page to enable/disable blockify
blocks installation-wide.

REMARKS
-------

If you remove elements such as `$messages` from your `layout.tpl.php` you should
ensure that the corresponding blockify block is assigned to a theme
region.

If you don't do this, `$messages` won't be rendered at all. As a consequence other
modules might stop working properly.

Example: without `$messages` being present, the devel module can't output its
krumo info.

HOW TO INSTALL:
---------------
- Install this module using the official Backdrop CMS instructions at 
https://backdropcms.org/guide/modules
- Activate blocks at admin/config/user-interface/blockify.
- Add blocks to your layout regions on the Layout UI.

LICENSE
---------------    

This project is GPL v2 software. See the LICENSE.txt file in this directory 
for complete text.

CURRENT MAINTAINERS
---------------    

[Wilmoth Andy Shillingford (docwilmot)](https://github.com/docwilmot)

CREDITS   
--------------- 

* [Bantalabs](http://bantalabs.com)
* [mortendk](http://backdrop.org/user/65676)
* [psynaptic](http://backdrop.org/user/93429)
