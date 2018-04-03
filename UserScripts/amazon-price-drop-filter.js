// ==UserScript==
// @name         亚马逊降价商品过滤
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  亚马逊降价商品过滤，可先对心愿单进行价格排序，待商品列表全部加载完毕后，点击“只显示降价商品”即可。
// @author       titilima
// @match        https://www.amazon.cn/*/wishlist/*
// @grant        none
// ==/UserScript==

(function() {
    'use strict';

    var button = document.createElement('button');
    button.innerText = '只显示降价商品';
    button.onclick = function() {
        var items = document.querySelectorAll('.g-item-sortable');
        items.forEach(function (e) {
            var priceDrop = e.querySelector('.itemPriceDrop');
            if (null == priceDrop) {
                e.parentNode.removeChild(e);
            }
        });
        alert('操作完成！');
    };

    var printLink = document.getElementById('wl-print-link');
    printLink.parentNode.appendChild(button);
})();