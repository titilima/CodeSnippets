// ==UserScript==
// @name         亚马逊降价商品过滤
// @namespace    http://tampermonkey.net/
// @version      0.7
// @description  亚马逊降价商品自动过滤
// @author       titilima
// @match        https://www.amazon.cn/hz/wishlist/ls/*
// @match        https://www.amazon.cn/gp/registry/wishlist?*
// @run-at       document-end
// @grant        none
// ==/UserScript==

(function() {
    'use strict';

    var button = document.createElement('button');
    button.innerText = '自动化过滤降价商品';
    button.onclick = function() {
        button.disabled = true;

        var count = 0;
        var cleanup = function(left) {
            var items = document.querySelectorAll('.g-item-sortable');
            for (var i = 0; i < items.length - left; ++i) {
                var e = items[i];
                if (e.innerHTML.indexOf('不可用') != -1) {
                    continue;
                }
                var priceDrop = e.querySelector('.itemPriceDrop');
                if (!priceDrop) {
                    ++count;
                    e.remove();
                    button.innerText = '已过滤 ' + count + ' 个商品';
                }
            }
        };

        var lastHeight = document.documentElement.scrollHeight;
        window.scrollTo(0, lastHeight);

        var retry = 0;
        var scrollId = window.setInterval(function() {
            var currentHeight = document.documentElement.scrollHeight;
            if (lastHeight == currentHeight) {
                if (++retry < 5) {
                    return;
                }
                cleanup(0);
                clearInterval(scrollId);
                return;
            } else {
                lastHeight = currentHeight;
                retry = 0;
                cleanup(5);
                window.scrollTo(0, currentHeight);
            }
        }, 3000);
    };

    var searchForm = document.getElementById('wl-item-search');
    console.log(searchForm);
    searchForm.parentNode.appendChild(button);
})();