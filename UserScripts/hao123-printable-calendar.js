// ==UserScript==
// @name         Printable Calendar for Hao123
// @namespace    http://tampermonkey.net/
// @version      0.2
// @description  Make Hao123 Calendar Printable
// @author       Ziming Li
// @match        https://www.hao123.com/rili/
// @run-at       document-end
// @grant        none
// ==/UserScript==

(function() {
    'use strict';

    var a = document.createElement('a');
    a.innerText = '可打印版本';
    a.className = 'item';
    a.onclick = function() {
        document.getElementById('erjiV2Header').remove();
        document.querySelector('.h_calendar_select').remove();
        document.querySelector('.h_calendar_right').remove();
        document.querySelector('.h_calendar_exp').remove();
        document.querySelector('.sites-top').remove();
        document.querySelector('.c-footer').remove();
        document.querySelector('.today').classList.remove('today');
    };

    var bottomNav = document.querySelector('div.bottom-nav');
    bottomNav.insertBefore(a, bottomNav.firstChild);
})();