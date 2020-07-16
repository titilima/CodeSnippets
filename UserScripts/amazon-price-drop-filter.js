// ==UserScript==
// @name         亚马逊降价商品过滤
// @namespace    http://tampermonkey.net/
// @version      0.2
// @description  亚马逊降价商品自动过滤
// @author       titilima
// @match        https://www.amazon.cn/gp/registry/wishlist?*
// @run-at       document-end
// @grant        none
// ==/UserScript==

(function() {
    'use strict';

    var button = document.createElement('button');
    button.innerText = '自动化过滤降价商品';
    button.onclick = function() {
        var scrollId = window.setInterval(function() {
            if (document.getElementById('endOfListMarker')) {
                clearInterval(scrollId);
                var items = document.querySelectorAll('.g-item-sortable');
                items.forEach(function (e) {
                    var priceDrop = e.querySelector('.itemPriceDrop');
                    if (!priceDrop) {
                        e.remove();
                    }
                });
                return;
            }

            window.scrollBy(0, 2000);
        }, 2000);
    };

    var searchForm = document.getElementById('wl-item-search');
    searchForm.parentNode.appendChild(button);
})();