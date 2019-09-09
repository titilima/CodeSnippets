// ==UserScript==
// @name         Printable Calendar for Hao123
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  Make Hao123 Calendar Printable
// @author       Ziming Li
// @match        https://www.hao123.com/rili/
// @grant        none
// ==/UserScript==

(function() {
    document.getElementById('erjiV2Header').remove();
    document.querySelector('.h_calendar_select').remove();
    document.querySelector('.h_calendar_right').remove();
    document.querySelector('.today').classList.remove('today');
    document.querySelector('.h_calendar_exp').remove();
    document.querySelector('.sites-top').remove();
    document.querySelector('.c-footer').remove();
})();