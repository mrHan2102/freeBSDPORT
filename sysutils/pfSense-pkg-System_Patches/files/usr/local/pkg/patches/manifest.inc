<?php
/*
 * patches/manifest.inc
 *
 * part of pfSense (https://www.pfsense.org)
 * Copyright (c) 2022 Rubicon Communications, LLC (Netgate)
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

global $recommended_patches;
/*
 * Keep each patch block separate, do not attempt to combine/overlap entries to
 * save space.
 */
$recommended_patches = [
[
  'uniqid' => 'c5b8e57aa51ff82b45bd6cb925ba512f4c01dcba',
  'versions' => ['23.01', '22.05.1', '22.05', '2.6.0'],
  'descr' => 'Fix potential arbitrary command execution in interfaces_bridge_edit.php from bridge interface names',
  'links' => [
      [ 'text' => 'pfSense-SA-23_06.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_06.webgui', ],
      [ 'text' => 'Redmine #14281',
         'url' => 'https://redmine.pfsense.org/issues/14281', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '66b989e824042c0cf5e75b1cb245b0ae13548949',
  'versions' => ['23.01'],
  'descr' => 'Fix interface name / dynamic gateway names not using upper case',
  'links' => [
      [ 'text' => 'Redmine #14057',
         'url' => 'https://redmine.pfsense.org/issues/14057', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '18b8e41591905844627377b76347f8acba88f0a1',
  'versions' => ['23.01'],
  'descr' => 'Refresh linker hints at boot/Fix 3100 OpenVPN/GIF failures',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #13963',
         'url' => 'https://redmine.pfsense.org/issues/13963', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '37c29e4de148a14480c01c8fa179e9b630bb0fb4',
  'versions' => ['23.01'],
  'descr' => 'Disable sendfile in nginx to avoid a possible panic with unmapped mbufs',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #13938',
         'url' => 'https://redmine.pfsense.org/issues/13938', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'ff715efce5e6c65b3d49dc2da7e1bdc437ecbf12',
  'versions' => ['23.01'],
  'descr' => 'Disable unnecessary default FreeBSD cron jobs which can lead to increased RAM/ARC usage',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #14016',
         'url' => 'https://redmine.pfsense.org/issues/14016', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '0d83ed084a987f3446a0cbdcf249fc5b8722726f',
  'versions' => ['23.01'],
  'descr' => 'Update memory graphing to match current FreeBSD behavior.',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #14011',
         'url' => 'https://redmine.pfsense.org/issues/14011', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '46b159032fef8c78783aa1a749d2238cfed7ac0d',
  'versions' => ['23.01'],
  'descr' => 'Fix DNS Resolver missing automatic ACLs for local IPv6 when bound to All',
  'links' => [
      [ 'text' => 'Redmine #13851',
         'url' => 'https://redmine.pfsense.org/issues/13851', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'e53f0573d853325dfb463eab8bfe59a9f4d6ce61',
  'versions' => ['23.01'],
  'descr' => 'Fix obtaining DNS servers from PPP WAN',
  'links' => [
      [ 'text' => 'Redmine #13962',
         'url' => 'https://redmine.pfsense.org/issues/13962', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'cf2a2f82c2aa551b26a6d9606d5e6da1e760ff6b',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP error on Interface Status page from PPP historical uptime calculation',
  'links' => [
      [ 'text' => 'Redmine #14117',
         'url' => 'https://redmine.pfsense.org/issues/14117', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '5841d5850265476100b719e60e38b65887cd1460',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP error on Interface Status page from certain Switch+VLAN configuration combinations',
  'links' => [
      [ 'text' => 'Redmine #13981',
         'url' => 'https://redmine.pfsense.org/issues/13981', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'a56e018238c5c46bf3a93b647ece6e7a4538380a',
  'versions' => ['23.01'],
  'descr' => 'Fix Netgate 1100 Status LEDs',
  'links' => [
      [ 'text' => 'NG 10085' ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'fed25589f4eba4ac6293fec7135f0078c03dfb62',
  'versions' => ['23.01'],
  'descr' => 'Fix IPsec widget settings change erasing widget layout',
  'links' => [
      [ 'text' => 'Redmine #14053',
         'url' => 'https://redmine.pfsense.org/issues/14053', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '404efa211294c85fa497b756d494d41f1b0f658d',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors in AutoConfigBackup',
  'links' => [
      [ 'text' => 'Redmine #14076',
         'url' => 'https://redmine.pfsense.org/issues/14076', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '2186435b5185ceb294cd6a4c1380db443e4dd218',
  'versions' => ['23.01'],
  'descr' => 'Fix automatic firewall rules for HA DHCP server failover',
  'links' => [
      [ 'text' => 'Requires reboot or filter reload to activate' ],
      [ 'text' => 'Redmine #13965',
         'url' => 'https://redmine.pfsense.org/issues/13965', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'd9fa4584e3fb63d6051e9f1db7655f931cb1be19',
  'versions' => ['23.01'],
  'descr' => 'Fix RRD processing of state data and re-enable NAT on States graph',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #13966',
         'url' => 'https://redmine.pfsense.org/issues/13966', ],
      [ 'text' => 'Redmine #13969',
         'url' => 'https://redmine.pfsense.org/issues/13969', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'd015b45a395045a56b9190f284459a6a4cc57568',
  'versions' => ['23.01'],
  'descr' => 'Fix custom state timeout defaults not being respected',
  'links' => [
      [ 'text' => 'Requires reboot or filter reload to activate' ],
      [ 'text' => 'Redmine #13992',
         'url' => 'https://redmine.pfsense.org/issues/13992', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '0e847960910ae9f14ca7b52c84be25fe4b9d1064',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors in NTP status and widget',
  'links' => [
      [ 'text' => 'Redmine #13999',
         'url' => 'https://redmine.pfsense.org/issues/13999', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '060f50552e63f4ef73cd08eed329691010632b8d',
  'versions' => ['23.01'],
  'descr' => 'Fix handling of DHCPv6 priority tag on PF rules',
  'links' => [
      [ 'text' => 'Requires reboot or filter reload to activate' ],
      [ 'text' => 'Redmine #14010',
         'url' => 'https://redmine.pfsense.org/issues/14010', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '290b3461bb816e9fc161568e499d43b24542cb9f',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP Error in Alias bulk import function',
  'links' => [
      [ 'text' => 'Redmine #14013',
         'url' => 'https://redmine.pfsense.org/issues/14013', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '4342d179afe732baf3a73e2db4381b57b1aa7703',
  'versions' => ['23.01'],
  'descr' => 'Fix default sorting of Aliases in lists',
  'links' => [
      [ 'text' => 'Redmine #14015',
         'url' => 'https://redmine.pfsense.org/issues/14015', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '4342d179afe732baf3a73e2db4381b57b1aa7703.p2',
  'versions' => ['23.01'],
  'descr' => 'Fix default sorting of Aliases in lists (part 2)',
  'links' => [
      [ 'text' => 'Redmine #14015',
         'url' => 'https://redmine.pfsense.org/issues/14015', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '9bfd89747eba77091ab6e2df5639a33a185342f8',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP error during XMLRPC HA Sync with empty VIP section',
  'links' => [
      [ 'text' => 'Redmine #14034',
         'url' => 'https://redmine.pfsense.org/issues/14034', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '24c0f00ff82d78c1e5301e43df21c2ef8ebecf7f',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors from upgrading IPsec tunnels containing only deprecated encryption options',
  'links' => [
      [ 'text' => 'Redmine #14009',
         'url' => 'https://redmine.pfsense.org/issues/14009', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'be6d44179f8a82b7adbdf95336d68ee491963ae0',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP Error when attempting to add EasyRule for ICMPv6 log entries',
  'links' => [
      [ 'text' => 'Redmine #14037',
         'url' => 'https://redmine.pfsense.org/issues/14037', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'fae6b2c014749b3f56e03b3ea7e51ecee2cf53be',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP Errors from empty DHCP/DHCPv6 server configuration entries',
  'links' => [
      [ 'text' => 'Redmine #13983',
         'url' => 'https://redmine.pfsense.org/issues/13983', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'f884cc204872957e7729b48e929b6be9ddd711eb',
  'versions' => ['23.01'],
  'descr' => 'Correct PF fragment disassembly disable syntax',
  'links' => [
      [ 'text' => 'Requires reboot or filter reload to activate' ],
      [ 'text' => 'Redmine #14098',
         'url' => 'https://redmine.pfsense.org/issues/14098', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '4fe6481fa35f31b93ed5841c3342cbb5bd76237c',
  'versions' => ['23.01'],
  'descr' => 'Re-enable console bell by default and add GUI option to enable/disable',
  'links' => [
      [ 'text' => 'Requires reboot to activate' ],
      [ 'text' => 'Redmine #14002',
         'url' => 'https://redmine.pfsense.org/issues/14002', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'c5faa351c1ef6d4555478a7f50b3a16ece7e0b2a',
  'versions' => ['23.01'],
  'descr' => 'Fix SMTP notification loop / config.cache write failures',
  'links' => [
      [ 'text' => 'Redmine #14031',
         'url' => 'https://redmine.pfsense.org/issues/14031', ],
      [ 'text' => 'Redmine #14061',
         'url' => 'https://redmine.pfsense.org/issues/14061', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '8b962c6a752a654f2def293d93c102d2d20a6887',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors in system log settings',
  'links' => [
      [ 'text' => 'Redmine #13942',
         'url' => 'https://redmine.pfsense.org/issues/13942', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '13915',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors in Traffic Shaper Wizards',
  'links' => [
      [ 'text' => 'Redmine #13915',
         'url' => 'https://redmine.pfsense.org/issues/13915', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '14283',
  'versions' => ['23.01'],
  'descr' => 'Fix system logs not containing any data when the configuration has an empty or missing syslog section',
  'links' => [
      [ 'text' => 'Requires reboot or manual restart of system logging to activate' ],
      [ 'text' => 'Redmine #14283',
         'url' => 'https://redmine.pfsense.org/issues/14283', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '13936',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors when processing empty RRD files',
  'links' => [
      [ 'text' => 'Redmine #13936',
         'url' => 'https://redmine.pfsense.org/issues/13936', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '82364513c64f0233617a356b62a461b6eba253f3',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP error in NTP settings if the configuration contains unmigrated data from openntpd',
  'links' => [
      [ 'text' => 'Redmine #14033',
         'url' => 'https://redmine.pfsense.org/issues/14033', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '0ba1a7ec7871f8f6bd240a08f238a2fb1ecba16b',
  'versions' => ['23.01'],
  'descr' => 'Fix SSL/TLS OpenVPN clients failing to start when configured with a Tunnel Network',
  'links' => [
      [ 'text' => 'Redmine #13350',
         'url' => 'https://redmine.pfsense.org/issues/13350', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '02af3d3efedacf511ebe834667fa7c707b46b43c',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors during certain IPv6 prefix check operations',
  'links' => [
      [ 'text' => 'Redmine #14256',
         'url' => 'https://redmine.pfsense.org/issues/14256', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '14035',
  'versions' => ['23.01'],
  'descr' => 'Fix PHP errors when attempting to create a GIF interface on ARM systems',
  'links' => [
      [ 'text' => 'Redmine #14035',
         'url' => 'https://redmine.pfsense.org/issues/14035', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '528e53e8bb86642e38aa098226f5b74951d6a7bb',
  'versions' => ['2.6.0'],
  'descr' => 'Fix potential XSS from URL and URL Table alias URLs',
  'links' => [
      [ 'text' => 'pfSense-SA-22_05.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-22_05.webgui', ],
      [ 'text' => 'Redmine #13060',
         'url' => 'https://redmine.pfsense.org/issues/13060', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '611de84ae2d1e65217dbccb7e9db32a019bd8d97',
  'versions' => ['2.6.0', '22.05'],
  'descr' => 'Fix potential XSS on browser.php from unencoded filenames',
  'links' => [
      [ 'text' => 'pfSense-SA-23_01.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_01.webgui', ],
      [ 'text' => 'Redmine #13262',
         'url' => 'https://redmine.pfsense.org/issues/13262', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'e9c53ad9b35ff152d2b76b8fcbb0a94adc809124',
  'versions' => ['22.05.1'],
  'descr' => 'Fix potential XSS on browser.php from unencoded filenames',
  'links' => [
      [ 'text' => 'pfSense-SA-23_01.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_01.webgui', ],
      [ 'text' => 'Redmine #13262',
         'url' => 'https://redmine.pfsense.org/issues/13262', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '7c54d26e60fe524df63277da77c07e995bc3b351',
  'versions' => ['2.6.0', '22.05'],
  'descr' => 'Fix potential XSS from CA and Certificate descriptions',
  'links' => [
      [ 'text' => 'pfSense-SA-23_02.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_02.webgui', ],
      [ 'text' => 'CVE-2022-37417', ],
      [ 'text' => 'Redmine #13387',
         'url' => 'https://redmine.pfsense.org/issues/13387', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '6dc0750874b69373f8adbae9b0af223af13f5f4a',
  'versions' => ['2.6.0', '22.05'],
  'descr' => 'Fix potential arbitrary file create from invalid URL Table alias names',
  'links' => [
      [ 'text' => 'pfSense-SA-23_03.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_03.webgui', ],
      [ 'text' => 'Redmine #13425',
         'url' => 'https://redmine.pfsense.org/issues/13425', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '208134113d92d809d4f0e686f3817274854ff264',
  'versions' => ['22.05.1'],
  'descr' => 'Fix PHP error in URL Table Alias validation',
  'links' => [
      [ 'text' => 'pfSense-SA-23_03.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_03.webgui', ],
      [ 'text' => 'Redmine #13425',
         'url' => 'https://redmine.pfsense.org/issues/13425', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '22f7276c167210f644cf586704ec21da22002bb2',
  'versions' => ['2.6.0', '22.05'],
  'descr' => 'Fix potential arbitrary command execution via status.php from unencoded filenames',
  'links' => [
      [ 'text' => 'pfSense-SA-23_04.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_04.webgui', ],
      [ 'text' => 'Redmine #13426',
         'url' => 'https://redmine.pfsense.org/issues/13426', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '70bfd0fda18012a01547a4eeff17c22c0adf8503',
  'versions' => ['2.6.0', '22.05', '22.05.1'],
  'descr' => 'Fix sshguard login protection bypass from GUI authentication attempts with proxy headers',
  'links' => [
      [ 'text' => 'pfSense-SA-23_05.sshguard',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-23_05.sshguard', ],
      [ 'text' => 'Redmine #13574',
         'url' => 'https://redmine.pfsense.org/issues/13574', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'a3c1589086ea67d25a28ec14ab95d7fd9ab25fa2',
  'versions' => ['2.6.0', '22.01', '22.05'],
  'descr' => 'Fix for CRL expiration lifetime default and maximum values',
  'links' => [
      [ 'text' => 'Redmine #13424',
         'url' => 'https://redmine.pfsense.org/issues/13424', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '8ddf2b5a999772754080825f07acf9b6326f1f04',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Add user preference to choose password hash algorithm',
  'links' => [
      [ 'text' => 'Redmine #12855',
         'url' => 'https://redmine.pfsense.org/issues/12855', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '3b50f7656967fbb4daa869a7ae6d18bc5ab6eec3',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Add UPnP NAT Anchors to fix outbound NAT for multiple consoles.',
  'links' => [
      [ 'text' => 'Redmine #7727',
         'url' => 'https://redmine.pfsense.org/issues/7727#note-75', ],
      [ 'text' => 'Forum Thread',
         'url' => 'https://forum.netgate.com/topic/169837/upnp-fix-for-multiple-clients-consoles-playing-the-same-game', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '12827workaround',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Disable pf counter data preservation to temporarily work around latency when reloading large rulesets',
  'links' => [
      [ 'text' => 'Redmine #12827',
         'url' => 'https://redmine.pfsense.org/issues/12827', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'fd30b9eda98900eb5f1a0c37d600ef4deaf582ad',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Fix Captive Portal handling of non-TCP traffic after login',
  'links' => [
      [ 'text' => 'Redmine #12834',
         'url' => 'https://redmine.pfsense.org/issues/12834', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'bdffb77d1aa21770b23ef408ad9fba79d0825ec5',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Fix Dynamic DNS hang on Save and Force Update',
  'links' => [
      [ 'text' => 'Redmine #12870',
         'url' => 'https://redmine.pfsense.org/issues/12870', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '4612721800a1b25bb1fb2d4d7c4ceea6f44f208e',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Fix Namecheap Dynamic DNS response processing',
  'links' => [
      [ 'text' => 'Redmine #12816',
         'url' => 'https://redmine.pfsense.org/issues/12816', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'b5360f49fb3c1fdc36ebf13c20b68d4ff1e15fe6',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Fix Google Domains Dynamic DNS response processing',
  'links' => [
      [ 'text' => 'Redmine #12754',
         'url' => 'https://redmine.pfsense.org/issues/12754', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '3ade222beb2cae2c0681ed69d4e5a0c82c6303f9',
  'versions' => ['2.6.0', '22.01'],
  'descr' => 'Fix OpenVPN dashboard widget client termination',
  'links' => [
      [ 'text' => 'Redmine #12817',
         'url' => 'https://redmine.pfsense.org/issues/12817', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'b2fce958b8a2e80754b49eb3d17795757df6a76c',
  'versions' => ['22.01'],
  'descr' => 'Fix Netgate 5100 status LED',
  'links' => [
      [ 'text' => 'NG 7538' ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'c416f6fab10f149b15a352dfb609f86a98f6103d',
  'versions' => ['2.5.2'],
  'descr' => 'Additional fix for XSS in captive portal redirect URL handling',
  'links' => [
      [ 'text' => 'pfSense-SA-21_02.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-21_02.captiveportal.asc', ],
      [ 'text' => 'Redmine #11843',
         'url' => 'https://redmine.pfsense.org/issues/11843', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'bf21f67bbe2d1694ad1ad72728623dded9ace426',
  'versions' => ['2.5.2', '21.05.2'],
  'descr' => 'Fix file overwrite vulnerability in services_ntpd_gps.php',
  'links' => [
      [ 'text' => 'pfSense-SA-22_01.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-22_01.webgui.asc', ],
      [ 'text' => 'Redmine #12191',
         'url' => 'https://redmine.pfsense.org/issues/12191', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '72ea2b69cc111d4bc8ebf1ccf1e1529923c5b88a',
  'versions' => ['2.5.2', '21.05.2'],
  'descr' => 'Fix multiple vulnerabilities in diag_routes.php data collection',
  'links' => [
      [ 'text' => 'pfSense-SA-22_02.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-22_02.webgui.asc', ],
      [ 'text' => 'Redmine #12257',
         'url' => 'https://redmine.pfsense.org/issues/12257', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => '78ce96a9af3b2ab5159ef6623078bfc4b15f8a89',
  'versions' => ['2.5.2', '21.05.2'],
  'descr' => 'Fix OpenVPN form validation',
  'links' => [
      [ 'text' => 'pfSense-SA-22_03.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-22_03.webgui.asc', ],
      [ 'text' => 'Redmine #12677',
         'url' => 'https://redmine.pfsense.org/issues/12677', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'a9bdbd97984ff2ddefbceb2fe062fbe3a1c42d88',
  'versions' => ['2.5.2', '21.05.2'],
  'descr' => 'Fix potential XSS in pkg.php',
  'links' => [
      [ 'text' => 'pfSense-SA-22_04.webgui',
         'url' => 'https://docs.netgate.com/downloads/pfSense-SA-22_04.webgui.asc', ],
      [ 'text' => 'Redmine #12725',
         'url' => 'https://redmine.pfsense.org/issues/12725', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
],
[
  'uniqid' => 'afcc0e9c97c1993ae6b95f886665fcb4375d26c7',
  'versions' => ['2.5.2', '21.05.2'],
  'descr' => 'Disable pcscd service by default',
  'links' => [
      [ 'text' => 'Redmine #11933',
         'url' => 'https://redmine.pfsense.org/issues/11933', ],
  ],
  'basedir' => '/',
  'pathstrip' => 2,
  'ignorewhitespace' => true,
]
];