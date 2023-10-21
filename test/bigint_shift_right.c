//
// Created by sascha on 20.10.23.
//

#include "../include/bigint.h"

int test_bigint_shift_right() {
    u32 bits;
    bigint integer, reference;

    // test 1
    bits = 642;
    bigint_from_hex(&integer, "31e28119abf3414ab908913b1004816ad64010650ae6f78c7156a27a5a9e803e90e79", 69, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 2
    bits = 172;
    bigint_from_hex(&integer, "4728c51c820ef4b6f711a919ad653310d8a60469713c05db383d1b738026f2ae695d34eec2f6a000cd82e6be730ec96b21d837165768e0205639ad1960122e87bf97c", 133, false);
    bigint_from_hex(&reference, "4728c51c820ef4b6f711a919ad653310d8a60469713c05db383d1b738026f2ae695d34eec2f6a000cd82e6be73", 90, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 3
    bits = 1196;
    bigint_from_hex(&integer, "a96a3db02f3ab522d76634dbe8087dc44153bdc4a69da4c7dd79ec44d10d14d332cb72c5f098dff68a46fb88475d364cda2e07a7fc8eff2c5b5ee48f0e32bff4ddadeef3a2a42cee29569f63a44696ca5d927ea71b3ead2c980e83e63bae709cce380525f0d5a4dc446c08dfffb768da32d79f6347c8c1322f6d626d97c9c3e6dad3645f0563b4c7d6508c60b5cd5a1b1816c21446af6e712ed1a1f5f26c8f659f0ec345a093dfb9dce881938463d213874aa7da10aec7cf6d55aa91772ed79cbebe5e58a4e0210dd387021bc0a20d9614c0635f57f68fc", 431, false);
    bigint_from_hex(&reference, "a96a3db02f3ab522d76634dbe8087dc44153bdc4a69da4c7dd79ec44d10d14d332cb72c5f098dff68a46fb88475d364cda2e07a7fc8eff2c5b5ee48f0e32bff4ddad", 132, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 4
    bits = 582;
    bigint_from_hex(&integer, "4aae1e1e7ad61f46482669f4e4f467025f1ad9e8e49117236a6c672c2b785ddf850f3dbe9de63f0859468a6355abbb36dc30cc6c80bd59d2ce2e0580eb98cac370ccd4a247eb690c3141f37915e0b25003608459939d4dd66d0b2899c9ec94311eaf938ea101553fb0b1621f47caf4de9f718c0a2f95e222ce9e9d0653e4e424f554cf9149eb1af809ed55758f257395aefb65be52e09b47acc3ee343867e5939e0e0ca79314b1dd56b3cca43210d161f83ed239c20967672b910aa45d58db6f94eff0f7ce6cdbc4bebfc19cadf24373db0784df9a", 426, false);
    bigint_from_hex(&reference, "12ab87879eb587d192099a7d393d19c097c6b67a392445c8da9b19cb0ade1777e143cf6fa7798fc21651a298d56aeecdb70c331b202f5674b38b81603ae632b0dc33352891fada430c507cde45782c9400d8211664e753759b42ca26727b250c47abe4e3a840554fec2c5887d1f2bd37a7dc63028be57888b3a7a74194f939093d5533e4527ac6be027b555d6", 281, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 5
    bits = 1173;
    bigint_from_hex(&integer, "1ce9159fd1ac403101173ac57f6bfbf42540302d9c66fe538ce37495af7ac86a23652bd72579905e6596f2d1188b90d489049e301770b322024fbcd85a48c6a63062f8fa05df41f20f1477d14383e1c68b2a6c1ed8ed28b5bcd61623f61517dcde8865b38dfd24ec2e057b82d3f7c764759598c97acc8f6516ccc4274e849678476cb390febafee26866f7655edab299d62a46c32eab01047ad977744611960760276567d6d33ad6f907a0b9dea4a3ed60f4f3b222ef54b2b729c967533f6ab42a3f", 388, false);
    bigint_from_hex(&reference, "e748acfe8d62018808b9d62bfb5fdfa12a01816ce337f29c671ba4ad7bd643511b295eb92bcc82f32cb79688c45c86", 94, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 6
    bits = 386;
    bigint_from_hex(&integer, "5d0f7302b81754f902320b5740b781e338725a03dc7a456e614e13e00c863cd01fa0d0b4d8b756648e8787f553c1e58d1b4b2b7b5e4a77c8152e4b0969b6a12f82e21ab6efecc26a60f2d48ab6e65bb14be2efd5097a0a21fba634c5ae570559aab0fe733974ee0dc7a621ce623f56065bea723d78e70e", 238, false);
    bigint_from_hex(&reference, "1743dcc0ae05d53e408c82d5d02de078ce1c9680f71e915b985384f803218f3407e8342d362dd59923a1e1fd54f0796346d2caded7929df2054b92c25a6da84be0b886adbbfb30", 142, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 7
    bits = 473;
    bigint_from_hex(&integer, "23b5ac26bc3b6dbe72aa6ce5592c75a36f1a38c7d54c6232269d9bba6f08985b48e79f281be91488fb63dd4c0106400e1af6cc17cb39e3ab423c2317863ecf8519d964188c99890153d32a30f8f1555735eb124f6697b69dfa27020a8ab3e4499fd4f31b627378e84ca80a87766171ac9ac30e4536258024d5d21625feda2c86e89847280380206fc09fc65a5eaa1931", 288, false);
    bigint_from_hex(&reference, "11dad6135e1db6df39553672ac963ad1b78d1c63eaa63119134ecddd37844c2da473cf940df48a447db1eea6008320070d7b660be59cf1d5a11e118bc31f67c28cecb20c464cc480a9e995187c78aaab9af58927b3", 170, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 8
    bits = 1642;
    bigint_from_hex(&integer, "19ce9afeaf8f7cf997f9dbe38544341458c536073bfafdeed905a3ce575f8ef246917b5160a178eab49bcc8b4c0cf56f09d900264024f98a6bd716081133feba3b3dc7c2ff66cd1bada1521345691d0bda18c78ebfb3f72d66843155", 184, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 9
    bits = 273;
    bigint_from_hex(&integer, "ac6df89bf8b07a0711f434a79aada2c3a9e5274aabe6469a0645f2c3b5c54726375871719c9ce5cf3f094a7b55c248fe84305a2adb2c1b61bb0304a7ed80f870605f5afe10d18f472f4b925ac1bd60221cc9908b4e1f2d2e05e19430215286516c7ca2fe54f64f8dfcda4116aaea3e1f52131960cb5bcb43a59eb7f8922e1635a6332b45497594f9ad4ee936db7328905f995dc7cd45232a595ec9b86872514", 319, false);
    bigint_from_hex(&reference, "5636fc4dfc583d0388fa1a53cd56d161d4f293a555f3234d0322f961dae2a3931bac38b8ce4e72e79f84a53daae1247f42182d156d960db0dd818253f6c07c38302fad7f0868c7a397a5c92d60deb0110e64c845a70f969702f0ca1810a94328b63e517f2a7b27c6fe6d208b55751f0fa9098cb065ade5a1d2cf5bfc491", 251, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 10
    bits = 467;
    bigint_from_hex(&integer, "18bb33ce9a734a84d386a8733255139e91319daa2e0eb8c2275136fc5064195fe3ef496d072d896caca68b5009ecf13a50fdcafc66f30e5c95bdde8f1846486ead9aac7d268663b5b00d7a1d9baf4a1d83b62aba5812fb3591722c485d18aa114b8c39e3e8dbc", 205, false);
    bigint_from_hex(&reference, "3176679d34e69509a70d50e664aa273d22633b545c1d71844ea26df8a0c832bfc7de92da0e5b12d9594d16a0", 88, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 11
    bits = 1341;
    bigint_from_hex(&integer, "807258292c7cac4f95d605feb40c1f82496676", 38, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 12
    bits = 1021;
    bigint_from_hex(&integer, "878be4f477be1717c913d4d9dc136e49b760bb9834123d085aae97f7158e9128d1f14110ffe28a3c8eeebb46002ca9e695886c12fea392b805b2f5546092d4863a0a0b9612d6990e65b168273f4bb624b949147858022e0335493ad25c0f1eb356bc672ec78e3b480dd0503745ac26f0305044972fb71a060de615924202f98c9d6b96676d5be4d11ba7af8cc1cb74c56ac0edd4140b4a11b018555d3331188234927b8991072931fdcbe3a17fe47a649346841b94aa7d7bb292310946ddca5ce", 385, false);
    bigint_from_hex(&reference, "43c5f27a3bdf0b8be489ea6cee09b724dbb05dcc1a091e842d574bfb8ac7489468f8a0887ff1451e47775da3001654f34ac436097f51c95c02d97aaa30496a431d", 130, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 13
    bits = 1872;
    bigint_from_hex(&integer, "ef53a969fc55f1e2e76ce2fc1ed1cde949942879a7742496b51dacc1379164342d301a54a548ba21fe1fefeb5bd2936416feef7da1d55f5342a033c1b9f25e16f2456c2bbdef2166a992e9aa750547b9bb922669b7bad47b53eaf8f884552ad6a740d02f859eb5c1792c44c5c67f3ad31054600b75bbe4930d577bf860c5ab8df93ee34a0f6eee0d846ed38a41c9edc6735ab60738042e3b03594f6e51bc4d5fabe52406acea1c41de30b8431c8d9c4eaf1002b84dcdb5dcf734e778e5df", 380, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 14
    bits = 179;
    bigint_from_hex(&integer, "2e905999781ab5f935664fe90cf208b9257be6dc0974566b6c93c379ab5e38a7a44305208b32ed7f6e352964d48cf45f29b8de123d7830f2e76d089d571ecf19f3a0f170216167983edad0bebb83133334ffb6a0c01140735e4f98c92209b7d87e7765e7a0e93d487e30b0bf5fbdbcd05d5480d4c518acc093feb80595c232dbfeb691438cdae523639d8a6585619b0b3fc867b0832a4d3fc37f245d10b1a281ec93609c98f53041b0d342ff0a32a6eaeb2aa9352042aa464f48b655367af10e154300b3b62935c55d7b0c934eb94fac47b24752f15867c0d81c3de8adef83fb158f7526e8d35347002db1f0bd8f1591b2242473bf7da47a6b2", 499, false);
    bigint_from_hex(&reference, "5d20b332f0356bf26acc9fd219e411724af7cdb812e8acd6d92786f356bc714f48860a411665dafedc6a52c9a919e8be5371bc247af061e5ceda113aae3d9e33e741e2e042c2cf307db5a17d7706266669ff6d41802280e6bc9f319244136fb0fceecbcf41d27a90fc61617ebf7b79a0baa901a98a31598127fd700b2b8465b7fd6d228719b5ca46c73b14cb0ac336167f90cf6106549a7f86fe48ba21634503d926c13931ea608361a685fe14654dd5d655526a4085548c9e916caa6cf5e21c2a8601676c526b8abaf619269d729f588f648ea5e2b0cf81b0387bd15bdf07f62b1eea", 454, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 15
    bits = 1357;
    bigint_from_hex(&integer, "4d3add26d9aaf8a98501a617d2200c8267c217125c14ee0175539dd242976bce8237b50f9b77fc1a6ab232ba54023ddad094cfe4c581d9179cb06e744216fcf7a29dc0cdb7719874be0b3d00cfdf29eacc1cb72771905b97c03c1a3929120d7e1aa4bef2c99da127efdd2b9240dd90205e9548e4587b4392301bd0cb59f5f824ed4f77191018c8658507eb98ae3bb3dc8b3c5c49e43ba9e27eb0029cf36e490b350276de5bd67aa4fb37cb553604962ebfe4588d80cea1ecb431551623e51db455aba3914efb1", 397, false);
    bigint_from_hex(&reference, "269d6e936cd57c54c280d30be910064133e10b892e0a7700baa9cee921", 58, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 16
    bits = 419;
    bigint_from_hex(&integer, "c3d423815bcc", 12, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 17
    bits = 1227;
    bigint_from_hex(&integer, "7e04cb64b9bda799906817315b370fad71df27ff381ccf7dba2208438f69d1dcbdab24454f42ebf612ed0155fcdf46f8aa37751f0cc887e7dd0b05030efd46c4874e43bed540958b8ac2b92979409372e09ff606814365250fa4a3261521a0c8135931c67bf89434adf1dbd611df4307de8c3da4ed1376dca78356178e0cf9281fd079c6f63a8293bffe5355a06f746b7de99e35803281be03b2498c1cab27eeef318f875d51899274adf47c841564af1a8a0aa14559d4cf18e04b", 374, false);
    bigint_from_hex(&reference, "fc0996c9737b4f3320d02e62b66e1f5ae3be4ffe70399efb744410871ed3a3b97b5", 67, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 18
    bits = 1672;
    bigint_from_hex(&integer, "31a40aae99277f38875f6d0d36e0aee8650cb1d1d02710fd3cbfd2ed02bffbe922d98a905e32a9b40edc4b1720e6b37629", 98, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 19
    bits = 259;
    bigint_from_hex(&integer, "70fdd54f2a1d8e61218df9631533d67ed7c5998b489aac142a60fb9f29ed4e9", 63, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 20
    bits = 575;
    bigint_from_hex(&integer, "d5ce4279b8c618b671809fce93a3f33621484d856f58417c5aa3599b108e8e98dcccf3a918a5a30754b9d248913025e46682fff140da355d0a5", 115, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 21
    bits = 1283;
    bigint_from_hex(&integer, "81e91d290b0959030c13602b36551f91a659fb50cd96fce9a61ddc1f84a8b9f1d8e72a55cb975d5fcf69da10f6bd9a30d63865ad402f54a399150db9420ffc1015710ab6cc04e3dd49a14ce38875e0ebb2553e1e119fa4a5d683e0c6fe76ffd3070f5bf9a5390dbab05315e", 215, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 22
    bits = 1863;
    bigint_from_hex(&integer, "1a510a1f0131fa1841f7de0ac03d89fdeb3fcd0e375d8cf996845306520e6b250e6adcc81172f3abb021f80ebbeb4b7ced1058143a9e1653c742b679936c5a65d057d55d943f816ac928dc8c564522fab0161c619c82195f00ca1dedcc26662dc7512cec5546eb50f9d372ef27a2fe0", 223, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 23
    bits = 716;
    bigint_from_hex(&integer, "b3ad9c5169100b198e053d668706dfd3254e973796d22f4c65587ae86db7849aaafd8f6e8e7556dfd4c1ec7acb0810bbc4b66222c5da144494787265bef0ce4d2b163526b483cc070a33de2375d2dd45b5b44d984a8b9d90811c0fade222ee02cd746b81308e1be842487e7309bfaefecab5caa48c0c75e8598077fd194ddef09da607c9b498bbcfa4ed3686f68b2a0582b46c6564aba76966f6bee5d6a6bff5c50033031797eae4b55fa14f54853235ba14a029feca83a1bf8b78011e9213063fd3bd4093ee543733a707f1b", 409, false);
    bigint_from_hex(&reference, "b3ad9c5169100b198e053d668706dfd3254e973796d22f4c65587ae86db7849aaafd8f6e8e7556dfd4c1ec7acb0810bbc4b66222c5da144494787265bef0ce4d2b163526b483cc070a33de2375d2dd45b5b44d984a8b9d90811c0fade222ee02cd746b81308e1be842487e7309bfaefecab5ca", 230, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 24
    bits = 606;
    bigint_from_hex(&integer, "7e856f73fb4da8cdc273e59691f7f8a19b74cc784b93cdeeeee13336e35960d5e96e8ecc6fe0b39b5ce45a4cb9d368ca8b035e841ea0b6df5d97990d61b7377609fc7097b841257a1ae66802f770cc0e3f7f562025fad95e0b8332686404620701b36371a096b15199aa05fcc5de3714346b53b2720732f35c0b381ba2d641abecb5bf8", 263, false);
    bigint_from_hex(&reference, "1fa15bdcfed36a33709cf965a47dfe2866dd331e12e4f37bbbb84ccdb8d658357a5ba3b31bf82ce6d73916932e74da32a2c0d7a107a82db7", 112, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 25
    bits = 1271;
    bigint_from_hex(&integer, "b5346ca403e0cb4d437364f460f1d4a12e8b1d26fd4af1357f9edfc900a11f2590cd17ad68a85ecddac6622b49ae93faa922b586b50e28d8220b58600a5a5003c064dc81532ebf7cf70520ecf18a6b76de32aad09d242ea4edaf257ba005d3e51372b83c10351a09d34f7e4033ed994cc48d97e3dd8165bd1bab5acb35cd4a0c37d93a2c438087ba8ab34c196ace67e8369ffb231fa98f37d572a769088419a0e4c62120450f552a92f0993136d170b9220b4f409c5bb07b0a374f7ebf56ee9a40f5", 388, false);
    bigint_from_hex(&reference, "16a68d94807c1969a86e6c9e8c1e3a9425d163a4dfa95e26aff3dbf9201423e4b219a2f", 71, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 26
    bits = 1402;
    bigint_from_hex(&integer, "3fe8cbf886b2aaa51e48721a89cd8ba2edeb4420335f3f154492a6240909866f68123cd73e0fb05c5d", 82, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 27
    bits = 1754;
    bigint_from_hex(&integer, "53271bf8fbc0bba313f185ad246015f23ee8e139", 40, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 28
    bits = 20;
    bigint_from_hex(&integer, "18b7c12f4a50098a41dcd4cad95be11468a1e6d5e9c8271aed69891df45019dedbca59b6542c3701ee44fce911d8f6c457efe8eba15bc74bc2db53a79f8208b468c8ddbc2be61d9e60f4305b4b9ac45d128462ec519ac30c5023c58585e6cb0099bca21859aeb53b4fd6407215924ebf47ec81b92e86e283aa31bda32f2318e0fd57", 260, false);
    bigint_from_hex(&reference, "18b7c12f4a50098a41dcd4cad95be11468a1e6d5e9c8271aed69891df45019dedbca59b6542c3701ee44fce911d8f6c457efe8eba15bc74bc2db53a79f8208b468c8ddbc2be61d9e60f4305b4b9ac45d128462ec519ac30c5023c58585e6cb0099bca21859aeb53b4fd6407215924ebf47ec81b92e86e283aa31bda32f2318e", 255, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 29
    bits = 110;
    bigint_from_hex(&integer, "776779ca68891f92f3bab7a32b2aedebfbe5174002276781b5758c3d0172ba2", 63, false);
    bigint_from_hex(&reference, "1dd9de729a2247e4bceeade8cacabb7afef9", 36, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 30
    bits = 898;
    bigint_from_hex(&integer, "776800f031408e1b5fef44717c052ad9d86c5d9a12702d2b090b027d9485318c9d47b14b31d023b32cba466976cdf294b57c69ffc08a5589c8a48eeae96fe0c7851f414ea370bd74e9a3b4a09f1c5cd5a7689b9bd95077d79629ec09e92f0d8659ca01f518a33b07fde61aaf4cdf6ff85e6e0f482c1a511ec77d990978320a8118fc121fc4878083d99c67e65c42c58375abb455a84430fbe371044557e253b1749ef38cc640", 332, false);
    bigint_from_hex(&reference, "1dda003c0c502386d7fbd11c5f014ab6761b1766849c0b4ac242c09f65214c632751ec52cc7408eccb2e919a5db37ca52d5f1a7ff022", 108, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 31
    bits = 568;
    bigint_from_hex(&integer, "a1463739cf3b6dd41270ec374314219780f4e48e4edf5f47a8aa78383a3fdb391d4801e08cb28ad186990ba40b414832e4a9ce36b8ec74afd1fa89594d38ed7937918ec826dbe7ce958acbf760035269b73426ecdbd4305559a9153c463c9731a729aab1b944e37192df93aa3050127b4d82887d782e57b613d91cc43fd68703f4d638a9ff92e660e2853884bb4f443654d4d40762bc3122d3d5ba8c9755cc1", 319, false);
    bigint_from_hex(&reference, "a1463739cf3b6dd41270ec374314219780f4e48e4edf5f47a8aa78383a3fdb391d4801e08cb28ad186990ba40b414832e4a9ce36b8ec74afd1fa89594d38ed7937918ec826dbe7ce958acbf760035269b73426ecdbd430555", 177, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 32
    bits = 1324;
    bigint_from_hex(&integer, "395b5fa28874f8476fe671c908b94823ef2f34afbb32e2e2482fb43fb2a94943259650edfe54eece6a5a13d1718ae9764575f30292aac055e6f5a6fe67fe23ff64c68a95a790c540644b06384b297df4d3c150935c9652b66da4b7d514a6833b1eedb2f500cad6c3a792997729dbc578357141cc951f5449af083124e3a2efbcd132af6aeb86f4cb4c8b80ab6206d3fc8e4d4da6eebd965124fff3ee7920b0510cf106c3c385a9bf6eebc949e48c35f17d0861d3", 360, false);
    bigint_from_hex(&reference, "395b5fa28874f8476fe671c908b94", 29, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 33
    bits = 446;
    bigint_from_hex(&integer, "1da47c4ca11a4a182aaeb6f72f3800eafe6b7257439a40e6ad53751372433f157d71aa62565ad7f2f1aa90e8fc8c71165143f40bd6de0a6daf3606d0a17697e2081d6ef453ccd8b948f176388be0cb4913cfa353dc863b07ae99572062982e31419552b85282c05a2efa96cabb0db6cb0483dc5d99c903c7fa70facac0e6a1f7ee1f3b489ee2f029a202789f8eb994293c19af2452b8d120b65073fc96e451f6046dac00db6909fa43cc14e8bbd5ad06d6fb98d8938a363800e467a3594cbef3c71a20d593f7ca466af49b8a", 408, false);
    bigint_from_hex(&reference, "7691f13284692860aabadbdcbce003abf9adc95d0e69039ab54dd44dc90cfc55f5c6a989596b5fcbc6aa43a3f231c459450fd02f5b7829b6bcd81b4285da5f882075bbd14f3362e523c5d8e22f832d244f3e8d4f7218ec1eba655c818a60b8c506554ae14a0b0168bbea5b2aec36db2c120f717667240f1fe9c3eb2b039a87dfb87ced227b8bc0a68809e27e3ae650a4f066bc91", 296, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 34
    bits = 1982;
    bigint_from_hex(&integer, "215635b70f57605205386331be79bdefa8caa2ca97dc43ce5a0d4b9bc622e8009a6c566846917bb21415d4d36d9c5c024fb1df527040b02b0e2e9440107ffdc52842f76f8f0c4830a1403d1b6a3691dd908dda49003200c4ce931c908ca62a70e1d019395eb79d3fe9f6391aa60b8fb4951062a6f6234adee8c65179d484e3856f27b736c3dbfc9908c3a2b3e3d492a9185fe923882a56d04fd6eeb28ae46b0573067b78a6c7b7bd1060842c6c0f43d95cd", 355, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 35
    bits = 24;
    bigint_from_hex(&integer, "4c08c32a0d438a3b631bc40534f9d2a7132094864e759e14aae878cb79865b02fd97e695d0bac5ccb31545b5eb8f986c98735b0d925349ec8935cd1b8e842dd42f301e6485d3e0e48e64ae1c32d11404ff459a3e29ded80b795c84ca0245b1530145cddebb26f274b74bd84487798751b0ed457a0d9e9fc6234118df67e4ddc75b35bf6a62d23abf52a355e471ed8d043b7b63dc15305f173118552", 311, false);
    bigint_from_hex(&reference, "4c08c32a0d438a3b631bc40534f9d2a7132094864e759e14aae878cb79865b02fd97e695d0bac5ccb31545b5eb8f986c98735b0d925349ec8935cd1b8e842dd42f301e6485d3e0e48e64ae1c32d11404ff459a3e29ded80b795c84ca0245b1530145cddebb26f274b74bd84487798751b0ed457a0d9e9fc6234118df67e4ddc75b35bf6a62d23abf52a355e471ed8d043b7b63dc15305f173", 305, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 36
    bits = 753;
    bigint_from_hex(&integer, "26d7b68e81bd9dde1ee52532ec23bae0effe7108d1dbbf35ab9373007defe627e35d32c0e14c44ab119b30c28dfe7d2c63d3e71d9d34252ec5dcee8e749627149613b2b22cff5c8f70ef26b57d7f0c5284733b9c960c0a50e51fdc6ae137a6e0337eba09f65eb74fcee9272a90d0e781dce4f7a44607ac3037c6ef7790e0cfc64896546227ef228fbd412f0f02f41e96dc3dc9cebdfe6269e97204b9d64913f23f9a91164c392cdd2679d0166a3ec36dc604146da446a8110", 369, false);
    bigint_from_hex(&reference, "136bdb4740deceef0f7292997611dd7077ff388468eddf9ad5c9b9803ef7f313f1ae996070a6225588cd986146ff3e9631e9f38ece9a129762ee77473a4b138a4b09d959167fae47b877935abebf862942399dce4b060528728fe", 181, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 37
    bits = 565;
    bigint_from_hex(&integer, "1a9d4d7f27e9d3f556a12089c7c94b13447cec99c198336b8a8efe09fc6725022cfde06da62fdf14ebf5523b08decfaa6f6a88b075721a8af2cbe1f5fe93f5db62ac796bf967fec45d0517716216873616b1eb9b373b06394a532bfc19a139c9692569314e9083c3dab82d68faacf90b83ed861781a9c3c6c825af14aea64ed346b2aea5bde8f43a35c29bfdff76314b21120c61b8b435e4a6ba47ad59c7b597a4a41209113c1d1718cf87d2a207e1036680cd3cd4b4d36bc1d92ce2d9c2dd2b9323b4f50456a5ec392b3e73dc3f8838dc0d62b187239bd58e91b441e3558c9a9a93cf327134bfb2ed680f2dfe36ae5132c711846f4ee590ccc8cf34f2", 506, false);
    bigint_from_hex(&reference, "d4ea6bf93f4e9faab509044e3e4a589a23e764ce0cc19b5c5477f04fe339281167ef036d317ef8a75faa91d846f67d537b544583ab90d457965f0faff49faedb1563cb5fcb3ff622e828bb8b10b439b0b58f5cd9b9d831ca52995fe0cd09ce4b492b498a74841e1ed5c16b47d567c85c1f6c30bc0d4e1e36412d78a57532769a3595752def47a1d1ae14dfeffbb18a590890630dc5a1af2535d23d6ace3dacbd2520904889e0e8b8c67c3e95103f081b340669e6a5a6", 364, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 38
    bits = 823;
    bigint_from_hex(&integer, "1cdd6843f7c644964a13fdc2eef3d405bb328b62a9e5c1145afd4d5f27e367122739cec74453307f1828d9b79412a5038057156478cf33e491aa2a0ada44fb775076616e6dccc45199eb342499620f889cbd4babd30a9f6590e3402c25276d06e4e053f5d8c5967567fa97bb621ef7c915b9f82c99bfb3923ed63aa0e6ae598d35d33f2a2696ccc42eec6d72234be7a90ce2", 292, false);
    bigint_from_hex(&reference, "39bad087ef8c892c9427fb85dde7a80b766516c553cb8228b5fa9abe4fc6ce244e739d8e88a660fe3051b3", 86, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 39
    bits = 358;
    bigint_from_hex(&integer, "9ffff88c40e109fe870a9ca1c9fe22cb81266541f54957bc67b473de47d0bbaf6968a15355add2de5e3ccfa650cdf53bbef2f78edfb513f2860b497483ed7ef47a8482307080aadb8bba5b29513a5e836dc31c43845df2d5581846f66b2787", 190, false);
    bigint_from_hex(&reference, "27fffe231038427fa1c2a728727f88b2e04999507d5255ef19ed1cf791f42eebda5a2854d56b74b7978f33e994337d4eefbcb", 101, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 40
    bits = 405;
    bigint_from_hex(&integer, "110ba31cb7483720046f9982ebc0bc8d4a5654b25ac36ee8edd0978b1d9d379766288c8a8f2a9b9e95eb2734f46203145df43610ae789ff72aba194bc3e283b34c709f1620f10c48fc0344ba2fa51549996f0ef9d9ccca7d95439a47568229b8e15290e0f8169ea0127a6eaf3f5ddbd0dbf51d0b5d729de80d39ef60739082de134f6af81dd19fbc7b29def6a4d8cafaeeef0e0930", 298, false);
    bigint_from_hex(&reference, "885d18e5ba41b900237ccc175e05e46a52b2a592d61b77476e84bc58ece9bcbb314464547954dcf4af5939a7a31018a2efa1b08573c4ffb955d0ca5e1f141d9a6384f8b107886247e01a25d17d28aa4ccb7877cece6653ecaa1cd23ab4114dc70a94", 196, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 41
    bits = 785;
    bigint_from_hex(&integer, "c7823abe56ea6d8b7a81f6a7ca2a529f48199df5c6ee28993ab5cdb5d93bdeaf498775c75c9ba7f45a5569b57ac8d28ada855e09135e109a3686989915f769494aec6970af5c29df229616e09e2cf61495012dff733c72836e9c2f0f3f773c1d1418b8929ae644c1fa643ea7ad1fbb832bf3273c221011b30129531a224e4062d88cc673ee2d2cbc422692c5c8b8fd39e954c8f94c90006c79e307a76c191519f6f9060faf0da0e708a397a75f0aad8fb55da9d53805951ca24ce29eb3166abf49bc964be0cd8a581efe5cf122a5be817aaf1fedf81a", 428, false);
    bigint_from_hex(&reference, "63c11d5f2b7536c5bd40fb53e515294fa40ccefae377144c9d5ae6daec9def57a4c3bae3ae4dd3fa2d2ab4dabd6469456d42af0489af084d1b434c4c8afbb4a4a57634b857ae14ef914b0b704f167b0a4a8096ffb99e3941b74e17879fbb9e0e8a0c5c494d732260fd321f53d68fddc195f9939e", 232, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 42
    bits = 244;
    bigint_from_hex(&integer, "90444474f4589df9b0e7be15149c3e3575a25fb7d5a2cbc1c088ec5519398e775b0be53b0f2f32608dcfcfb19054e6b2a14c758e7de4dc9252e5fc5472c52f1956425eab67c962519046f3bef225208e2d6b3d3f4fb25d7cf58cc0b2a8f287be15f3d1ae005ca8f876e369aaa2169bda1156ef8c", 232, false);
    bigint_from_hex(&reference, "90444474f4589df9b0e7be15149c3e3575a25fb7d5a2cbc1c088ec5519398e775b0be53b0f2f32608dcfcfb19054e6b2a14c758e7de4dc9252e5fc5472c52f1956425eab67c962519046f3bef225208e2d6b3d3f4fb", 171, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 43
    bits = 1833;
    bigint_from_hex(&integer, "79f72199d90b56e8b5387657c5e65c676e38bd98352256c5435cd6d767f4931a42f7f56410999459986496e2efd8173589bfc8d8c", 105, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 44
    bits = 1168;
    bigint_from_hex(&integer, "136978c055c24801e89fad03824c91734e54b05de1a8b4f2e70d3419031bbefa3985c340e255b0181eb53fa1e04f77d03aeed6c7c981f5f8ced3930b6a8bb449906262f570755e300247873848ac708793c797f2774120d241e9f090787627fbc42e56a91115db30d6f962df7aff1d2062a6a5aaa581840adb3b8876456f005e1eb490a22140876a9f32a28ece94884b302ca9bf6ff77977b1b1af645300e", 317, false);
    bigint_from_hex(&reference, "136978c055c24801e89fad038", 25, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 45
    bits = 496;
    bigint_from_hex(&integer, "7c1340408b64bd0ba2f8337854791b25cc7bdfe14f0533de34104aafcabb999dbe77cd040a5af7c87879d554a61c8200a6e606c6ca9e921c056c6f02a1ee0f2fb90af7fb254c52e2b296faba0a30cfe6fb4d062c5b9d12d9fe03ac8df840ccdaf128bcbbe81b2b8ed4f94e7813502219fa3f7bbf7454fba0a7d3e74e6980d1bc0eea6e03bb155704ebe25bac11126c3558b0b36033ca109466711b96838e8497652f2ec8212cc8084758cc9c2368148a8e9adfda4870449da3ab92542385d68523f8c8a6221c0ad835d8067b1a41f5b0106585df93287966a0d5800ff9c545575b522d26a52c0e35017e7f3276", 474, false);
    bigint_from_hex(&reference, "7c1340408b64bd0ba2f8337854791b25cc7bdfe14f0533de34104aafcabb999dbe77cd040a5af7c87879d554a61c8200a6e606c6ca9e921c056c6f02a1ee0f2fb90af7fb254c52e2b296faba0a30cfe6fb4d062c5b9d12d9fe03ac8df840ccdaf128bcbbe81b2b8ed4f94e7813502219fa3f7bbf7454fba0a7d3e74e6980d1bc0eea6e03bb155704ebe25bac11126c3558b0b36033ca109466711b96838e8497652f2ec8212cc8084758cc9c236814", 350, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 46
    bits = 899;
    bigint_from_hex(&integer, "ae8d204603fcbecf52cc0cc0c7bb7f009f92bee87506139498827d764ad0914", 63, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 47
    bits = 1417;
    bigint_from_hex(&integer, "4d9497d258afa44de31a565d2b01ec360979a2310a52ec526a1769142326641535c5cf6bbe5e819e49916a0272f16ca8b75b5310a46e6f00877eddfc85b93ecab39890e57f43cb874280a5dd81c0911649de6f621088255b77a5376544c672c1f1d3ad327a561d3d1905e4a27de96f7c5d6e0b07974027122879b8bbcab246e32e566adcc3283e71025327e9114a7075846a8c2598afce2defd3b67cf4640825b492e04c47df5997507066e6c5fca5bbf8872f6d7362afdc8de92df593a871f841f970175a8d7e9a1fe25a2a0d115497f2e91fdb151811ac", 432, false);
    bigint_from_hex(&reference, "26ca4be92c57d226f18d2b2e9580f61b04bcd11885297629350bb48a1193320a9ae2e7b5df2f40", 78, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 48
    bits = 1060;
    bigint_from_hex(&integer, "34eadb1580af80bc6620c614a69195817da4723fcd15eb1bfe89630337f34419efd55958", 72, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 49
    bits = 913;
    bigint_from_hex(&integer, "543d83a89a8dcf4f3749dc968b303970d8b46afd7acf388ad1614d091f6b4e6db60074af942b4b4b29152c8463b21e8229c01f3ac6c8251bd6d2c51d8ece4c6257e5834a7f392d3eac4d43b3c1e3ca2248f27d39bbc6505dd33818e17d79c63ab344a7220f4195acfbba130a51f3bf0de94d08ad3e3359def9795c64257a674a6611582a9b04b6f21c583bbfd75ca61299d9e8ebf8d1bf6099d164988ff692a1e3ba9ca6ab9", 331, false);
    bigint_from_hex(&reference, "2a1ec1d44d46e7a79ba4ee4b45981cb86c5a357ebd679c4568b0a6848fb5a736db003a57ca15a5a5948a964231d90f4114e00f9", 103, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 50
    bits = 1963;
    bigint_from_hex(&integer, "718ed7e43d45b99da695e843b4f9f6ad325f73e617a29ab3a76b6b27294b4cb2217b35282e9cabad46b07b41f19b5dfe200af8584762af0834c12382ca774b138b75f3a0aa0d875dde9700b44538e5bef63b00c7bac1645", 175, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 51
    bits = 553;
    bigint_from_hex(&integer, "c74d7ae8d916cae474f40c36fbea42221828a175511e86fbcb2b32d240209186baa36294096af8b985cf7ddc8c7f1d90f7056952611c1fc8a1c7089f4db3a47c82cbad3b3859b4ff28a97119b8d9489d74412fbb649870a38d1a984eb29d315a6cb2e4bc48c2cb312b96a36b975c651589c078b68f4c720caa50a2e585996bd698dec827c9fb8f303032ef688a207353526406e549baf1", 302, false);
    bigint_from_hex(&reference, "63a6bd746c8b65723a7a061b7df521110c1450baa88f437de5959969201048c35d51b14a04b57c5cc2e7beee463f8ec87b82b4a9308e0fe450e3844fa6d9d23e4165d69d9c2cda7f9454b88cdc6ca44eba20", 164, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 52
    bits = 249;
    bigint_from_hex(&integer, "2de6521f77375a5bfb7f2e37727ac77564a06c091acfcfde5905a68022c7ba462f82b121dfb7604481c07f43677192e508e9e44365347900dbd9856608da67e66319d38b244aeb7d0df53f94b5c1b8fe50e1305a0af844544bb3120d838ace908fa021b80efcd44212425786078310bbaae1e802a152dcf601d75131a0", 250, false);
    bigint_from_hex(&reference, "16f3290fbb9bad2dfdbf971bb93d63bab25036048d67e7ef2c82d3401163dd2317c15890efdbb02240e03fa1b3b8c9728474f221b29a3c806decc2b3046d33f3318ce9c5922575be86fa9fca5ae0dc7f2870982d057c222a25d98906c1c5", 188, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 53
    bits = 589;
    bigint_from_hex(&integer, "160c5385d4658bf3f6ed9f7e0a86ebcd03af4c558ca1a0ba5d005caab597ef85e0f56af03f36a650911052a9141deafd555134e51acc46acf233dba7ea48f45ea32fb6ace48e8e5b05db2f3c6d0e943a126f1e0c2e7b5c929f6b069ad72c8a88ca76b7032689ec9dfeaa3a08775de55afb860f381035d2d4f8c61afe3196eaf9a6f3cc8d9addbd4f89de1deeefcae9a6e47d0d3a9762276ff2af5d674b2984d86302979b9af9d735452becbbdedeb363e1208900aa140edf201063e128c79fb55a112c84cf7bee0eb7dd920ca3e10b912bcede3c384512038a63dfd842d8070d916331a7517778271d2aeda4f7e5ffc245cda78c6f21ba76a1bea24eebe40", 509, false);
    bigint_from_hex(&reference, "b0629c2ea32c5f9fb76cfbf054375e681d7a62ac650d05d2e802e555acbf7c2f07ab5781f9b5328488829548a0ef57eaaa89a728d6623567919edd3f5247a2f5197db567247472d82ed979e36874a1d09378f06173dae494fb5834d6b964544653b5b819344f64eff551d043baef2ad7dc3079c081ae96a7c630d7f18cb757cd379e646cd6edea7c4ef0ef777e574d3723e869d4bb113b7f957aeb3a594c26c31814bcdcd7ceb9aa295f65def6f59b1f090448055", 361, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 54
    bits = 1176;
    bigint_from_hex(&integer, "25a38389b7b02693bbdf441fffd0ac22b1b9c97592f1e5b80fca058f4dfd742742af2b689dcf583f780e617fa4c9dc78cef99adcbf8859c2dd94f13d7ef91562f7012363c770166f330ebfd5b4f0c4bb4a95dd2034c1e248111d51ed1595912ef99d7f9159c5ed01fa203c9d2ed9d9bc0c28fb8d25b", 235, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 55
    bits = 255;
    bigint_from_hex(&integer, "1eb93a0a6fabe50b8992066170cc34b9f1c03053734a2e23cb929dcb3a38d162d474f6713f8a0dae988450b0f4fa513827f2c0395b8f087e0c7bd4f1efe48d619f11f1b72c9bfeb4d37f7aa48f43746e4e93f0d2621f0079b917be9a7364e50a59afb7ce570e1bff3", 209, false);
    bigint_from_hex(&reference, "3d727414df57ca1713240cc2e1986973e38060a6e6945c4797253b967471a2c5a8e9ece27f141b5d3108a161e9f4a2704fe58072b71e10fc18f7a9e3dfc91ac33e23e36e5937fd69a", 145, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 56
    bits = 57;
    bigint_from_hex(&integer, "ecd170b5145c2170b3d717206ecf2084bbb29d7e3a", 42, false);
    bigint_from_hex(&reference, "7668b85a8a2e10b859eb8b903767", 28, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 57
    bits = 840;
    bigint_from_hex(&integer, "678af969977424a801312ec772ebdc8dfeee6f2a0774215004b57a1", 55, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 58
    bits = 1300;
    bigint_from_hex(&integer, "1a481f929145a6cfc7f83f9ec7ae873cfa25fcf72f3bdc8f2a604f5d27a55201224b52fe56766562806ff937acd64e1be7980e65a99a9cd43c1df9006505701d8b944d8fba7b4d2ecd305dcc72db21eab821b3f296535f58594826d95570e778db0651f0f233f0775c97224ca49bb3f541ae1d02dc766405cbcdddae432a707a86dbc822b58930530980af2b7fc78afdeeb4e236dc3ec939098a2009a4b8faebdf0d1fa89c021fae865396caacac772767674fc08ff79d927776abb2804a2670bf8906c76ca23c6392ba4260841b6ec9e20202613", 425, false);
    bigint_from_hex(&reference, "1a481f929145a6cfc7f83f9ec7ae873cfa25fcf72f3bdc8f2a604f5d27a55201224b52fe56766562806ff937acd64e1be798", 100, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 59
    bits = 1742;
    bigint_from_hex(&integer, "a294601f3ac3cb90a5971ce13dd91189fa35b4bed1036e54ed91d6d6a3500c64b482306f372348c62f8e1884745840ecf7a4ef3ea4fb9a38c9d429ea7f97342c046423539c6a6eb10ca8a3d2a8e951c27b8fb8f92dbcab13180f8f098fbc1a31c1537cdc7787593874965931f61bf78002794ab55c521260fdff2ae7039ade2b5b04158426a3a1743e5476416fdf06641f0e159033a", 299, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 60
    bits = 451;
    bigint_from_hex(&integer, "1e966cb864bfeb1c592465f958c8b58211e22d043e1404f038188bef529da13a39294222a7bc2f76821bb98c85d5ae33cada38ccbae58322f62d477826e044b3332f730b21e07f398ac1810aabe13dd3306825831cbfa50b9428e28b8ef01623338d5fcc70adba26e1f52ce3edc68694ad063fdecd468f6774d669852af7a098753fd16498a278689f43543646346819a2a586a315946b787659c74a0a68f79330b25aa7ca13216a6755f9afe73c517067b790518eae738357e98ac722d63bea33bbceed7c25e814b6bb78fc9fec775eeab47ae8b71bc70ccf9a2ae67fb96d78630217562398", 460, false);
    bigint_from_hex(&reference, "3d2cd970c97fd638b248cbf2b1916b0423c45a087c2809e0703117dea53b4274725284454f785eed043773190bab5c6795b4719975cb0645ec5a8ef04dc08966665ee61643c0fe731583021557c27ba660d04b06397f4a172851c5171de02c46671abf98e15b744dc3ea59c7db8d0d295a0c7fbd9a8d1ecee9acd30a55ef4130ea7fa2c93144f0d13e86a86c8c68d033454b0d462b28d6f0ecb38e9414d1ef266164b54f942642d4ceabf35fce7", 347, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 61
    bits = 844;
    bigint_from_hex(&integer, "1c1f94760b840da835d46077d530b7a0950177d93588f83bf7cffd99af377ac5b60b61b6c8f7e40ef0705a51a4c3ddc40a12486019b16e65c0969bf09e271c5970c56dae38489b147cb102d8138287f7347cadf5c884af2607ea829ef1e033b150712ec418f704d2813c930fc1fe4d8bf611bca6b1a4b49ea8a469c2561af78e5874cbefd0aee34a4ea2f07ca3a5224e3854fec148", 298, false);
    bigint_from_hex(&reference, "1c1f94760b840da835d46077d530b7a0950177d93588f83bf7cffd99af377ac5b60b61b6c8f7e40ef0705a5", 87, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 62
    bits = 871;
    bigint_from_hex(&integer, "16b2bfa98a327ac3d145d937d14b1b06ad533c9b8d496bc6be82a5076fc9aa843aa33be8a", 73, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 63
    bits = 1578;
    bigint_from_hex(&integer, "bfc50535b9b517b74cae73e26231a6d8e75c1b0332470650d42a77b3a06f798b65f59fca7811dfa1a41535138ec97f7043f69886122f8a3d5fb8bc3d5aaf8d8230fc9f934e732ea9ce6067bf1570ce6a53523b058c054c3a92ad2d3da779183320d5fb5dcc493fad6529a45dfbff3df0d21c20cbe2e46b2c057c307c9ca8e6f42f4eef92d1917506a02a3eb085ea258e69fc6fdfcaa296b34350756c73dbf4ab125342ae267e08da9efeb22a13a2a6e2fbcf4852e5a669a019728e7c3064ee7f89ea6fe0ffd1e449075321c8e46abd5d5814744219e2ee84a5d231b9b", 441, false);
    bigint_from_hex(&reference, "2ff1414d6e6d45edd32b9cf8988c69b639d706c0cc91c19", 47, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 64
    bits = 1819;
    bigint_from_hex(&integer, "d20b82c33cca2881251b3cbc037bf4e2ef7d", 36, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 65
    bits = 444;
    bigint_from_hex(&integer, "5cff09f6cae24ada33aab3e9e4c27f1f4b7be7e2fb50a99e1b9cdc6ede1d5cdac377644456ade2752e139cc154be83167fd2300cba032c4f7e47f4695844715f3590d858433251bba5837f27a57a8dcb554cc34bf23090ad653885e33d051a1e58175671420b80866769fe87ea5e745c4daae9e80cf8cadfb77da741ffcfe2de5167a49a2a007eeb79ecb23ca9605723e55cc218a6de33c5195de314314f25da39903c488a2bc6f18565d9b5131e3be15669310112ad30dd7308c5700f2c8c931354f5177ead25ff0e5aad303b33f764d969e14f4e1", 427, false);
    bigint_from_hex(&reference, "5cff09f6cae24ada33aab3e9e4c27f1f4b7be7e2fb50a99e1b9cdc6ede1d5cdac377644456ade2752e139cc154be83167fd2300cba032c4f7e47f4695844715f3590d858433251bba5837f27a57a8dcb554cc34bf23090ad653885e33d051a1e58175671420b80866769fe87ea5e745c4daae9e80cf8cadfb77da741ffcfe2de5167a49a2a007eeb79ecb23ca9605723e55cc218a6de33c5195de314314f", 316, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 66
    bits = 763;
    bigint_from_hex(&integer, "3e2432ea0cd3f93a959e82c8540684e9e1b31344317ecfc147b3fa165fcab9d2895f7959d0bb13fb8159da8290292fa24f0a7bf1e4322958ce95fc06d6352148fc13079ec734cdc6c49d0e3f7ee0ec1a2353abf9c462034317a4d80581bfb493484395be3e1ff817a08f70abcd7137d0426a6c13a25d63b548a43364301730c1d9ee374e9d7c2e21f20b87f3022cb6486c8a91dd59c2bcc39fdd19c439cb595952", 322, false);
    bigint_from_hex(&reference, "7c4865d419a7f2752b3d0590a80d09d3c366268862fd9f828f67f42cbf9573a512bef2b3a17627f702b3b50520525f449e14f7e3c86452b19d2bf80dac6a4291f82", 131, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 67
    bits = 389;
    bigint_from_hex(&integer, "33f39c1f37e85", 13, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 68
    bits = 1440;
    bigint_from_hex(&integer, "89a5a57a0944b7e8facc5ca6d2141f94bf43d25838af4825005f6698caa99d59b1155a9dc479f61f46b588d76a06d2cc758af1a16cea99d31e7aab7bc78e05fd2a6e46011eb2a818bd070ee51876d5ff2a5e2978962c4b7c788b06d6763391d5ea1133d2cebd53e76349b82aabe017a233bd0cd826a338688bc96bca80c449f3bb4829bd144cb07d8bc57daa5deb072c7d2d9f58349a35cf135eaa9023fe9a0fc420c80eb456fa210a4e914bd2055eeb457e7ec2375451d27d657fbb92", 378, false);
    bigint_from_hex(&reference, "89a5a57a0944b7e8fa", 18, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 69
    bits = 161;
    bigint_from_hex(&integer, "f7fe0eb7eb34feb5c4a8ceb6914a484635c095375985d4905e432db6ecd2c33ac5718d17c2569417d64abb123a03f12d0ccd5f5f8271255c3de15f2eb04b2167542b22056e60ff9eec268144d2d3173cde546d1d84428387b481cc2047cf1af75a4e9b141c9a41f9d8216d1e4207e40e9cc81e8451abd22f58965179c0ad78b", 255, false);
    bigint_from_hex(&reference, "7bff075bf59a7f5ae254675b48a524231ae04a9bacc2ea482f2196db7669619d62b8c68be12b4a0beb255d891d01f8968666afafc13892ae1ef0af97582590b3aa159102b7307fcf761340a269698b9e6f2a368ec22141c3da40e61023e78d7bad274d8a0e4d20fcec10b68", 215, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 70
    bits = 1748;
    bigint_from_hex(&integer, "1cee4f3ea4808daa5dd8dd1d8bf1f7158d740246721d08bcd305fccc7719c810542d1ce64ced70cca838f286d670b7657594f31cf9609c91bdda20f1b0dae94c8c53c91f95a75a58cef6c644d0eb141b290bf5301255e3e4bcf119727467333f1bcc106ad3d4dc8653626bdbef269a5cbb07409db001ee058a3aef4c5e94f18e7f74b51d4549e6e381ab81cdb33137a8ca1aed867d504be2a2b0df7882f94f28de1794a2d52cefbef5", 338, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 71
    bits = 486;
    bigint_from_hex(&integer, "3667e8f06c1fa513201c1c1568a9cddd538dcd4f46884e83990fbf8e654970b56cf07900555645b5ad01e7a4aa52cb3af7b3fbbcde29435ce9f277ecd55467d1e56b0820877135a048e25c2ad76410946bf432ebf3aad34b609c0fc8b49bc64e4575dd2af1a2cba", 207, false);
    bigint_from_hex(&reference, "d99fa3c1b07e944c80707055a2a737754e37353d1a213a0e643efe399525c2d5b3c1e401555916d6b4079", 85, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 72
    bits = 1225;
    bigint_from_hex(&integer, "ce219951c5b56db41bff34397cdc5979978dc5faf5ee6f794071e8a92ff69ca929ecd97299ac2fc95cc98de52287ebe52c5d58076f6913a691dc4020eda7", 124, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 73
    bits = 59;
    bigint_from_hex(&integer, "1", 1, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 74
    bits = 1026;
    bigint_from_hex(&integer, "ba1d8aaf4417c2f6febd3f786eeec11f1ba2d007e4ef8698831cf24a7c91319a16491772cc559beb8afcc7fb063cb2351b8a2837e73cf4d75e0172f5ea6dce7e9876cd154870aa3767299df5a3691db647c4ec35d6b137a42b4de8136ea766eb3d8e9fbac595856c2bf3574a664040b817b8eebab3723573ab36cb4fbd1db435907ec7139f0e320b8c3480decae83a23d9b8b5e4bf9d96fa08f5cf44c53c33d8fb222c111137e594c6c6ab0dbb172bda78f91f9802ef622aab1ec65215f31a582381a1b1a873a57e491926aeccc5bd44488b83dea3d3e40519a2d9697c7231df2e5eb8a57dd9fd25a9438dd04d1e004ff394", 484, false);
    bigint_from_hex(&reference, "2e8762abd105f0bdbfaf4fde1bbbb047c6e8b401f93be1a620c73c929f244c66859245dcb31566fae2bf31fec18f2c8d46e28a0df9cf3d35d7805cbd7a9b739fa61db345521c2a8dd9ca677d68da476d91f13b0d75ac4de90ad37a04dba9d9bacf63a7eeb165615b0afcd5d29990102e05ee", 228, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 75
    bits = 1859;
    bigint_from_hex(&integer, "9c87aefcb593283d1359b22e9e702ccd6937fe18966c4bf4f74a56389d0bcb251d3134a55bf36eff44242a379662f0762e1820aef36e45bba86f29c2ab53f85bf3b1dcdec928f7b2994f544b32096a74a889ee91f9139e9b60ae9eb27f1213e4f67a513a2df4f6b3f7a2b06d14739a9931762a3859a571e0dc1a30c99ac3ec6a9e56aaba4d022f484eec21bdb8f6bcfb49ba48f1a6aced53900b8d395a7037123769d0c53c1c5843d167b0ce45cfe06d5e82bbaf402a92ef3ba6d771fdc32d914d7d89c2408efa85e490e32739859edf8117cdbcbc51", 428, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 76
    bits = 628;
    bigint_from_hex(&integer, "f3b8d2546a2f5f461f6c73a85993d6e28a14e74e5d3129e6124be355513d16351573e809edd0a995f23cac44ea3b5da94d68c423d8d248564a3aafb73629aae094e480cb139d530cc107968fb29f2314db28a219cdc5254f1cb30c6c2688125cf190ea42f7d5499abcbea6359f12e3dcb0cdcb7e1f112ba9729446ffd4bce237b91e7b8c57f4811b3e7374c56e7f146c950a708fa515af2050f16d11b933277679def66d82c3d1e81d8066d940f978be838740241eb056f4a3d0012d90a2adba3fb717443028718602037a66a75d820b55b35e63b3896c996d48bcf7d3881f", 446, false);
    bigint_from_hex(&reference, "f3b8d2546a2f5f461f6c73a85993d6e28a14e74e5d3129e6124be355513d16351573e809edd0a995f23cac44ea3b5da94d68c423d8d248564a3aafb73629aae094e480cb139d530cc107968fb29f2314db28a219cdc5254f1cb30c6c2688125cf190ea42f7d5499abcbea6359f12e3dcb0cdcb7e1f112ba9729446ffd4bce237b91e7b8c57f4811b3e7374c56e7f146c9", 289, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 77
    bits = 524;
    bigint_from_hex(&integer, "2a42c7a21132ba5fdc3d25ee589d485e00856ebec7b54b3bd2fbea0c507a22ae5c4f3b406de3e08d34ef3cc81dbffb595340a054e19f6ff694831b9bab0fbe681f40611d77263239bfe4954", 151, false);
    bigint_from_hex(&reference, "2a42c7a21132ba5fdc3d", 20, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 78
    bits = 222;
    bigint_from_hex(&integer, "e245be445dcc5eb37b952b38f7ecb4e3ea4bd9a0f941eded7c79cf9162933198b6de1dd1153d696820333ec085a34ceaf9dcf2eb93a7548dbf03663f6bc82f90f4d9026df36a50a1a520b01771423490b15fe9db5a6ef41ac81eab05e59abaa48fa0ebb84ec7025e8936391fd02f75e0860a021ca95549fa8278ee7603eb675263645d44a1b13940cc29649791d5b323af7e81c74f7cc2088f5e279b20915f6bfd751e1a902715d0", 336, false);
    bigint_from_hex(&reference, "38916f91177317acdee54ace3dfb2d38fa92f6683e507b7b5f1e73e458a4cc662db78774454f5a5a080ccfb02168d33abe773cbae4e9d5236fc0d98fdaf20be43d36409b7cda942869482c05dc508d242c57fa76d69bbd06b207aac17966aea923e83aee13b1c097a24d8e47f40bdd78218280872a55527ea09e3b9d80fad9d498d91751286c4e50330a5925e", 281, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 79
    bits = 478;
    bigint_from_hex(&integer, "233d6a8b05225ae38a402f7b10d6ff6c685e7cbef27f607eccf43618eea423aa2eb2b364b124a2309393ae09f2ed10ebe002b2a12ba43899266d627456f928a4d15f4f70207c589fa06057df03a3aea16224ab2f62c73c1810fa1dec62b77f3c0a623c471f09fff2a6781b449af9deadcf70b168be70b1dbe93d40d26b93d69f033f2f03208d2ecd1c686c69c4fe1fb404be9ece514c37e4ab878d065f973e5740fcce0c90e2dedb7260960f391822159a0bc787252b0577c917fb0bf58e7404a21c2df7", 392, false);
    bigint_from_hex(&reference, "8cf5aa2c14896b8e2900bdec435bfdb1a179f2fbc9fd81fb33d0d863ba908ea8bacacd92c49288c24e4eb827cbb443af800aca84ae90e26499b589d15be4a293457d3dc081f1627e81815f7c0e8eba858892acbd8b1cf06043e877b18addfcf02988f11c7c27ffca99e06d126be77ab73dc2c5a2f9c2c76fa4f50349ae4f5a7c0cfcbc0c8234bb34", 272, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 80
    bits = 1445;
    bigint_from_hex(&integer, "97fd2521e7f5608f712dd7c70cecd48565a614d1e5e0c83dd8ecbfdf9534555ff0be174eb5ee8a4c6168d445bd1991271114bcba3606424ea7f160139b4acb5791a6b2d57093e0f793d8727fe8ddb6a766ca41a8b3b9c1c75f9df99960fbc1ddc71e95c14c", 202, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 81
    bits = 416;
    bigint_from_hex(&integer, "5668aeaf586c5933db42f0275790528574598c799c18e4f38275877eaace3bfb8d729f7db20b8369fed745e37ff4860b62daa5da35c253146adc95c6937a22f3217238295c70eb8bbe31b0437cd40fb5e8e0beeb0bc9258f0c44702c477f61dab7bf701cc99f2a68813d01b2994d08e51c59bcbe3a944ff2a614ef80225b0dc3b0f6faedf3cb4f8e2531f9c605f16561bbd2ef0b3eb227623df0009de7faced5d0695003970c643446d4235276ddc87abdb413751e34b3e7dc97a7590136662d2dbb970231296cd67c1e3a7bb0d06218e4b8473d15eafebb42746ec3b415986ee32c82c06b2d1b4804582c4245c16f06017574d63", 489, false);
    bigint_from_hex(&reference, "5668aeaf586c5933db42f0275790528574598c799c18e4f38275877eaace3bfb8d729f7db20b8369fed745e37ff4860b62daa5da35c253146adc95c6937a22f3217238295c70eb8bbe31b0437cd40fb5e8e0beeb0bc9258f0c44702c477f61dab7bf701cc99f2a68813d01b2994d08e51c59bcbe3a944ff2a614ef80225b0dc3b0f6faedf3cb4f8e2531f9c605f16561bbd2ef0b3eb227623df0009de7faced5d0695003970c643446d4235276ddc87abdb413751e34b3e7dc97a7590136662d2", 385, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 82
    bits = 113;
    bigint_from_hex(&integer, "1657c7ddeaf688af9f68e55af8f669318cc61cfc6950d2985c36cc689f7813f237e53cc6634c07eac7becdf6e34c4a052961be650bdaa9633fcbd97ed67854e7e9f20ba24540e42e6aa76250c129ce5643d2dcfae8e220b66680aa09a333b07154dae4c59c097fa83c6c70169a975a25", 224, false);
    bigint_from_hex(&reference, "b2be3eef57b4457cfb472ad7c7b3498c6630e7e34a8694c2e1b66344fbc09f91bf29e6331a603f563df66fb71a6250294b0df3285ed54b19fe5ecbf6b3c2a73f4f905d122a072173553b1286094e72b21e96e7d7471105b33405504d199d838aa6d", 195, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 83
    bits = 788;
    bigint_from_hex(&integer, "2d04239b7968f2ef7d25e923df2f7ecb8fe86d7829925bfe4f404632d5fd7e774e11550c6103bd6711f3c61c767f8021d57e9065d0884c64c012a6576d0af8ca5a1b5d91932735b0dc4aa0ae667c29a9bb66f2352a861fd5ccf219f1accfe605b05655d20e9cdc7e8a014b04bc3813fcbc04f564df8ccbebb4c90aa35b440aa6a61d68e2b96b4c283328", 276, false);
    bigint_from_hex(&reference, "2d04239b7968f2ef7d25e923df2f7ecb8fe86d7829925bfe4f404632d5fd7e774e11550c6103bd6", 79, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 84
    bits = 1260;
    bigint_from_hex(&integer, "8eca39ce71dcdc577949c5cc8c6dc80771e590f0a771c73a2837e930867f0650bdb9aa2318b797e7980a99e0a4d021e338ac1df01914641cf75ed3d3ff08f7930a916b1406f6fd5c2876656860093db063d31fc8ae1af99486363d46b80c5373a7e52a0a15e45cf5fdcabec85b48b4cdf123b101af4fcc60e28a9c8c3b648a09e2487e20a9f6e667ce52127ca4aa318d3bfc3e2d464b91edc85e7cb70ae5df459f04fbb7f9290ce873f1315e9ddeeb66263ae8d00c8505a76b737b2016c5623692f66386ada5b464a379fbe009f83da4bf324709c3592ac4bbcaf13814ab0aef01a98ab348918814725a7a5779a5ae629f19788a156a13f504d6bfed48c88e3", 511, false);
    bigint_from_hex(&reference, "8eca39ce71dcdc577949c5cc8c6dc80771e590f0a771c73a2837e930867f0650bdb9aa2318b797e7980a99e0a4d021e338ac1df01914641cf75ed3d3ff08f7930a916b1406f6fd5c2876656860093db063d31fc8ae1af99486363d46b80c5373a7e5", 196, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 85
    bits = 899;
    bigint_from_hex(&integer, "11041a03acf40c2de5bc723ce96760654d513749f7182705af746809e3d09dc78910596631074d2ee1e1c4ce588edea2cae4a824d3dfb97b36dd48998c09e114d911013b26d7e2fc06e8557aec48216d6313d14ecc63b7592653563bd4008f346985f908995c03e4acf911d4bc5869dbd9848c707ef6e273b6162f7d14321396c140736b037300e128e319785631333597e34bdf50663a18cbe62ffb948fbee0a84178", 326, false);
    bigint_from_hex(&reference, "2208340759e8185bcb78e479d2cec0ca9aa26e93ee304e0b5ee8d013c7a13b8f1220b2cc620e9a5dc3c3899cb11dbd4595c95", 101, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 86
    bits = 37;
    bigint_from_hex(&integer, "100d17d81173634f2648e6e0937e29a9ffa25771c006458e809976b1b04053b87209b6b0b272ba5db194707c9524475da7bf9f15343a0b7380607e7f320154be3edcc1137f27c469430a8acfd1637a6c061143f1d9dbfb79912ebd1d9d1bf5f2f07edc0151499576c9883ba02b05fe51a75f5b14de335b5d57491f108342145105e0ffa74215d9390e75da981b7fd7d0883948eda781792bb93a7aea89b14c17ad60c2994a5fd7da1a945bc99eba1c8ef4cb0ded42d51fc", 367, false);
    bigint_from_hex(&reference, "8068bec08b9b1a79324737049bf14d4ffd12bb8e00322c7404cbb58d82029dc3904db5859395d2ed8ca383e4a9223aed3dfcf8a9a1d05b9c0303f3f9900aa5f1f6e6089bf93e234a1854567e8b1bd360308a1f8ecedfdbcc8975e8ece8dfaf9783f6e00a8a4cabb64c41dd01582ff28d3afad8a6f19adaeaba48f8841a10a2882f07fd3a10aec9c873aed4c0dbfebe8441ca476d3c0bc95dc9d3d7544d8a60bd6b0614ca52febed0d4a2de4cf5d0e477a6586", 357, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 87
    bits = 1456;
    bigint_from_hex(&integer, "1bdc6b843e06112a25744497c17619f48bb7ba39d9f66e260ee4adc15d7212f7cb0b8d866a558fde21497ca39e0e68948d37486d3cfec8e83d08ac06fa65f10391023797b343e0d0a29b5dccf023aafc89a3b7e0ad0817b1bdcb8e03eacd0d62d5cc72594581a177021e51e0e10e07a3f733774e956d1efb38a7011de2c9d06e35b60ecde45f80141f1b66ef69dc0459982d894c59cee43a50bd0fab34e538cc75a99700974a8368c6771753e2dc0ec435c458f7ba858a4e24e912487a55fe22b6f25dcc044074db4256382fa6e1e594aa5642ae3aed295be2212c3295207210389857d87540d12df9b7d57355796bf3", 480, false);
    bigint_from_hex(&reference, "1bdc6b843e06112a25744497c17619f48bb7ba39d9f66e260ee4adc15d7212f7cb0b8d866a558fde21497ca39e0e68948d37486d3cfec8e83d08", 116, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 88
    bits = 1855;
    bigint_from_hex(&integer, "69d8156c0e7c995e049111389305fe801ea9a4ff8dbab3f06985681d83409a3906d222946415bd039ea79096f0ff26e6075eaa7b9935aba23b2c68c74d6985d96bbb8f82c74ae7f0a46145fffa7425acfb53504d9a8f8039f9b74dcb9e6bc88c431a320109fac32d09a5b275c566349ebbf7b5be4cc9e7d92f9dd6c293cbc72bef3a7c0dc01e36e933a6f50dc27f8547734e4340caff9d4635de86a6a5654ab25b293040f4aa06b13c0907c606827350a108fd8c014475fe30ebb00fa8b1179ead9d1b9c5203d48812038297d0d6ea5a7dc99cfa166f8d110150277c1dc2415cbd9fbe035c57d691e40addc", 471, false);
    bigint_from_hex(&reference, "d3b02ad", 7, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 89
    bits = 77;
    bigint_from_hex(&integer, "fa6bf2e9dd6bfe2e8fda6dac41bec8edc6b93f884e9d2b6fa48724e8572f4cf18f141c484929baaba2e910be1c0ed7c685e5854e2e8b45f4406769c6bd2166292ca2f32ed92dee0fa85a993abdfed37d780dc00199f927bf450f8dc1fadfc51c5f32118470f63d8f48ecccbf08633a1fcdf587ac2e260d0b7fe2c44862fe6becc84a26a22412e6c83110cf044bef6454daf1c891184de45c539df1ee6ca559b06a9d361469700a76c2d874b85a73334356003f52559233dbf34f2c9821f65a87d60875c2a41eb35a1c17af370c9395e1267701712e66a42cfa8c1803ed00ab3e283ee6e6298207334374801eddff7991be86812855ee90107b5719a9", 504, false);
    bigint_from_hex(&reference, "7d35f974eeb5ff1747ed36d620df6476e35c9fc4274e95b7d24392742b97a678c78a0e242494dd55d174885f0e076be342f2c2a71745a2fa2033b4e35e90b314965179976c96f707d42d4c9d5eff69bebc06e000ccfc93dfa287c6e0fd6fe28e2f9908c2387b1ec7a476665f84319d0fe6fac3d617130685bff16224317f35f664251351120973641888678225f7b22a6d78e4488c26f22e29cef8f73652acd8354e9b0a34b8053b616c3a5c2d3999a1ab001fa92ac919edf9a7964c10fb2d43eb043ae1520f59ad0e0bd79b8649caf0933b80b8973352167d460c01f680559f141f737314c10399a1ba400f6effbcc8df434", 485, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 90
    bits = 1431;
    bigint_from_hex(&integer, "50697dd1d08e04e06403b4466ba20b10a6e0b800c660ecb7e76", 51, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 91
    bits = 936;
    bigint_from_hex(&integer, "254f109ba1641775d2207e6794353acc1e6b246499640ce40cfee3a6ad0dcd4331424dec8c01e95a757e3497812ab8f3acfc9c71f00577341f72908c721c26e45a7164824050d30c0814be80986b791a701175e489659399a41efbd5742705a1aae7f60f874c411859bf720de3c6c7b92bd3882f9c38412553b4e27b1d04578cb8c49ff314530cc4b334986d2df7c7b973fd711e23c7e9ec60590f02d1cf2c11e289c9c4ba697f7d7ca0df0ada6211ec3152870590d497b0a58b0d48687772", 382, false);
    bigint_from_hex(&reference, "254f109ba1641775d2207e6794353acc1e6b246499640ce40cfee3a6ad0dcd4331424dec8c01e95a757e3497812ab8f3acfc9c71f00577341f72908c721c26e45a7164824050d30c0814", 148, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 92
    bits = 415;
    bigint_from_hex(&integer, "ffa67d7b8d49302ff8af780b3b607bc30a51c51065d452318219bffbeda5e026d6c2dbb792a9bc4a8d132c486e06ff74723776c15848f2c9448da1e55c091f073fae34f690d9bff32c8f6193e00150fcecd2da5034501ccb3f53bcd5fdc996b0cae3640bf0fe54abcd2da8dc16ba8da038990e502f65143223d69cb4134c237b365d246c8fe216dad3e260c3dae60913f16b92fbd962c43572ad4702b7785c1588df2dbad6e55d9fa2a32a26031bb653409fdaeb768870516d30cc2d703c4defddd4b5ec13533c8b76ddbdc16d731dfad509939a43f82f8a8ed3e0a01002b849049fe326d811476585", 466, false);
    bigint_from_hex(&reference, "1ff4cfaf71a92605ff15ef01676c0f78614a38a20cba8a46304337ff7db4bc04dad85b76f255378951a265890dc0dfee8e46eed82b091e592891b43cab8123e0e7f5c69ed21b37fe6591ec327c002a1f9d9a5b4a068a039967ea779abfb932d6195c6c817e1fca9579a5b51b82d751b4071321ca05eca286447ad3968269846f66cba48d91fc42db5a7c4c187b5cc1227e2d725f7b2c5886ae55a8e056ef0b82b11be5b75adcabb3f4546544c06376ca6813fb5d6ed", 363, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 93
    bits = 809;
    bigint_from_hex(&integer, "1aa5a10c86a71e4bbf6794208baec1888a8fd924fe50e016ba79300749bfa24b2a12993736b253c2e02f6c66422aaf1272aa4e28f160ac475ddd201887c10c3cba01", 132, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 94
    bits = 777;
    bigint_from_hex(&integer, "2a399ab1bdb0791e6b4e94e6ecfa39d5359d6b8ee1c0f32f9dd2b307658b6c75e4ea66ed7c3d18f70f7985b480c373b9b017eb0315c878054743b918dad10be0e171747ad1d4ef89bb8cca6eee92521f6dc8c50707aa5d2d17d4fb8eadbbb76587b8a43ffdc2d8d87b74334d867ab77e3d5922498f43f81c4f68a0712049db2a48d3e95df0a16d72b8613bff345cf3af7ebff5c78a0d64e715ac99fecad0ab865d88bf60f2e26152e6470711ebfd6260ba2f6ec83dd6f33594d19d76e1be5caa646d3c5360606a016a950e2349b393b473f950f971e5cd404b16f9f21b6eaaa5d3a0909ff0217acbad930f64", 472, false);
    bigint_from_hex(&reference, "151ccd58ded83c8f35a74a73767d1cea9aceb5c770e07997cee95983b2c5b63af2753376be1e8c7b87bcc2da4061b9dcd80bf5818ae43c02a3a1dc8c6d6885f070b8ba3d68ea77c4ddc665377749290fb6e4628383d52e968bea7dc756dddbb2c3dc521ffee16c6c3dba19a6c33d5bbf1eac9124c7a1fc0e27b450389024ed952469f4aef850b6b95c309d", 278, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 95
    bits = 934;
    bigint_from_hex(&integer, "d9b98c86630c31a33a0e57469c202cd58eb74e6b76e6b77a7c1aaf66b51c7b49", 64, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 96
    bits = 1323;
    bigint_from_hex(&integer, "c030ec358dab84a49e607dfd9b079589e66de907ca5736004b18c6ff442cdf2db02bb1041f3b", 76, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 97
    bits = 44;
    bigint_from_hex(&integer, "13aadabd4b19667c5131af591591276d4498cb1fc235190b708a9a71a804d7bf1aa8b0cf2e555d05a4c11deb2cfafdbba2818915edcf270b50b5700964ee93260f3783610fa62ee28c9598431b385d4a657c46f8a2d25ee1c5d100abd4a093aba02cdc8316043dbe5e8fc9741249471c9985cb013b058453a12e34b59185c8d24b00b5f24fbe9d2513d2ca1b092def3961b0578d391f547fc3d7b073bc46a456580fae574ffb87cdc3c57fb8f50b6f1375eab53a055ab29b2d5e9593c2e2e62fc9222e", 390, false);
    bigint_from_hex(&reference, "13aadabd4b19667c5131af591591276d4498cb1fc235190b708a9a71a804d7bf1aa8b0cf2e555d05a4c11deb2cfafdbba2818915edcf270b50b5700964ee93260f3783610fa62ee28c9598431b385d4a657c46f8a2d25ee1c5d100abd4a093aba02cdc8316043dbe5e8fc9741249471c9985cb013b058453a12e34b59185c8d24b00b5f24fbe9d2513d2ca1b092def3961b0578d391f547fc3d7b073bc46a456580fae574ffb87cdc3c57fb8f50b6f1375eab53a055ab29b2d5e9593c2e", 379, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 98
    bits = 559;
    bigint_from_hex(&integer, "20971179515e292d68fd727967d262ba2a9eb5b7f3a889fca6523e4192e7478a2850ba57aabbed235ca8200397632ba7da64b9e748748220728f685c0269a080b6e64eb198f5aa3f1f4a26b2d0d792c136d51e64c82920771ba7599af288a34916d5bff4ba3ffc07cd68045b5", 217, false);
    bigint_from_hex(&reference, "412e22f2a2bc525ad1fae4f2cfa4c574553d6b6fe75113f94ca47c8325ce8f1450a174af5577d", 77, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 99
    bits = 436;
    bigint_from_hex(&integer, "66e8d16375abaf95b7b2e60c2b9b25db2c2ac4f72e927852f55261c67fb4bf7735958fea26cc907bbd1042f0120c1cf86dc59131e25c50ecbf454ed51987655579896d8263e4c85e27f5480a20736281dabeb89a0c1c0af4fc1f73b42aea83b6fca587d1f21991fbecd6e3cc9036b43524e2419e4b567d0ea1654c6e8babd91c5ea604bc8d2b89ed7e2dcff362ab2aee47397647a6bb8605e6eadba7bd1c09c14f162b29f434e994a86b1d14b3992cf63bc2838f6e797383755c3d494d027fc12e1cbce45400633209eb873e6feaa745cf58a4de86153964bc6e578176bd0c8880b", 451, false);
    bigint_from_hex(&reference, "66e8d16375abaf95b7b2e60c2b9b25db2c2ac4f72e927852f55261c67fb4bf7735958fea26cc907bbd1042f0120c1cf86dc59131e25c50ecbf454ed51987655579896d8263e4c85e27f5480a20736281dabeb89a0c1c0af4fc1f73b42aea83b6fca587d1f21991fbecd6e3cc9036b43524e2419e4b567d0ea1654c6e8babd91c5ea604bc8d2b89ed7e2dcff362ab2aee47397647a6bb8605e6eadba7bd1c09c14f162b29f434e994a86b1d", 342, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

    // test 100
    bits = 1388;
    bigint_from_hex(&integer, "f83e68b673af031b0cfbe5dd4f808c2909671a942b4d0123e95e435d3fd7cd6275ee2e1bf47273fd392a524a8e57cdcbd0b6515f176d6a1ac63a8c072509813653597e96260b8a70f9a7846aebb3acbb84cb9606d98d6a0f988de6b75f3847d56e379399448f6758090641111b1f9e2fbebf91f86fffae922504bdf3f2e3df13ab4fa7eb4b324772d1f1eadee9b2452d6d32e1517cb5e7d315e7005c89d9a721c703", 324, false);
    bigint_from_hex(&reference, "0", 1, false);
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;

}