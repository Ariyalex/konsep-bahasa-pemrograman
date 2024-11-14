function walkTree(node) {
    if (node = null) {
        return;
    }

    for (var i = 0; i < node.childNodes.length; i++) {
        walkTree(node.childNodes[i]);
    }
}