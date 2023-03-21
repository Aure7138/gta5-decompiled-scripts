#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	struct<3> Local_18 = { 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	struct<3> Local_25 = { 0, 0, 0 } ;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 10;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<3> Local_94 = { 0, 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 10;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 2;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 8;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 8;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	float fLocal_147 = 0f;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	var uLocal_155 = 0;
	struct<3> Local_156 = { 0, 0, 0 } ;
	float fLocal_159 = 0f;
	struct<3> Local_160 = { 0, 0, 0 } ;
	float fLocal_163 = 0f;
	struct<3> Local_164 = { 0, 0, 0 } ;
	float fLocal_167 = 0f;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	struct<45> Local_175 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 4;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 2;
	var uLocal_289 = 0;
	var uLocal_290 = 4;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 4;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 12;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 3;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	bool bLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	struct<6> Local_636 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<12> Local_642 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	struct<250> Local_654 = { 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	struct<18> Local_907[15];
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	float fLocal_1189 = 0f;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_1202 = { 0, 0, 0 } ;
	struct<3> Local_1205 = { 0, 0, 0 } ;
	struct<3> Local_1208 = { 0, 0, 0 } ;
	struct<3> Local_1211 = { 0, 0, 0 } ;
	struct<3> Local_1214 = { 0, 0, 0 } ;
	struct<3> Local_1217 = { 0, 0, 0 } ;
	struct<3> Local_1220 = { 0, 0, 0 } ;
	struct<3> Local_1223 = { 0, 0, 0 } ;
	struct<3> Local_1226 = { 0, 0, 0 } ;
	struct<3> Local_1229 = { 0, 0, 0 } ;
	struct<3> Local_1232 = { 0, 0, 0 } ;
	struct<3> Local_1235 = { 0, 0, 0 } ;
	struct<3> Local_1238 = { 0, 0, 0 } ;
	struct<3> Local_1241 = { 0, 0, 0 } ;
	struct<3> Local_1244 = { 0, 0, 0 } ;
	struct<3> Local_1247 = { 0, 0, 0 } ;
	struct<3> Local_1250 = { 0, 0, 0 } ;
	struct<3> Local_1253 = { 0, 0, 0 } ;
	int iLocal_1256 = 0;
	var uLocal_1257 = 0;
	int iLocal_1258 = 0;
	var uLocal_1259 = 0;
	int iLocal_1260 = 0;
	struct<15> Local_1261 = { 0, 4200, 3600, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1276 = 0;
	var uLocal_1277 = 8;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 4;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 4;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 4;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 4;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 4;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 4;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 4;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 4;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 8;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 8;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450[2] = { 0, 0 };
	int iLocal_1453 = 0;
	int iLocal_1454 = 0;
	int iLocal_1455 = 0;
	int iLocal_1456 = 0;
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	char* sLocal_1459 = NULL;
	struct<3> Local_1460 = { 0, 0, 0 } ;
	struct<3> Local_1463 = { 0, 0, 0 } ;
	struct<3> Local_1466 = { 0, 0, 0 } ;
	float fLocal_1469 = 0f;
	struct<3> Local_1470 = { 0, 0, 0 } ;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	struct<3> Local_1476 = { 0, 0, 0 } ;
	float fLocal_1479 = 0f;
	struct<3> Local_1480 = { 0, 0, 0 } ;
	float fLocal_1483 = 0f;
	int iLocal_1484 = 0;
	int iLocal_1485 = 0;
	char* sLocal_1486 = NULL;
	var uLocal_1487 = 0;
	struct<3> Local_1488 = { 0, 0, 0 } ;
	struct<3> Local_1491 = { 0, 0, 0 } ;
	float fLocal_1494 = 0f;
	var uLocal_1495 = 0;
	int iLocal_1496 = 0;
	int iLocal_1497 = 0;
	var uLocal_1498 = 16;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	int iLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	int iLocal_1669 = 0;
	struct<6> Local_1670 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1676 = 0;
	int iLocal_1677 = 0;
	int iLocal_1678 = 0;
	int iLocal_1679 = 0;
	int iLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 8;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 4;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 4;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 4;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 4;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 4;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 4;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 4;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 4;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	char* sLocal_1825 = NULL;
	bool bLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	bool bLocal_1832 = 0;
	int iLocal_1833 = 0;
	bool bLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 3;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 1;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 2;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 13;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 13;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 13;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 13;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 13;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 13;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 13;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	int iLocal_2414 = 0;
	struct<3> Local_2415 = { 0, 0, 0 } ;
	struct<3> Local_2418 = { 0, 0, 0 } ;
	int iLocal_2421 = 0;
	struct<3> Local_2422 = { 0, 0, 0 } ;
	struct<3> Local_2425 = { 0, 0, 0 } ;
	int iLocal_2428 = 0;
	struct<3> Local_2429 = { 0, 0, 0 } ;
	struct<3> Local_2432 = { 0, 0, 0 } ;
	int iLocal_2435 = 0;
	struct<3> Local_2436 = { 0, 0, 0 } ;
	struct<3> Local_2439 = { 0, 0, 0 } ;
	struct<6> ScriptParam_0 = { 10, 0, -1, 1000, -1, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	Local_94 = { 500f, 500f, 500f };
	fLocal_147 = ((0.05f + 0.275f) - 0.01f);
	fLocal_150 = -0.05f;
	fLocal_151 = 0.92f;
	fLocal_152 = 1.94f;
	fLocal_153 = 2.99f;
	fLocal_154 = 3.7f;
	Local_156 = { -0.4f, 0.96f, 0.85f };
	fLocal_159 = 0.95f;
	Local_160 = { 0f, 2f, 2.5f };
	fLocal_163 = 1.75f;
	Local_164 = { 0f, 0f, 120f };
	fLocal_167 = 35.5f;
	iLocal_616 = -1;
	iLocal_617 = -1;
	iLocal_619 = 1;
	iLocal_634 = -1;
	iLocal_1182 = -1;
	iLocal_1183 = -1;
	iLocal_1190 = -1;
	uLocal_1257 = unk_0x6307C3D1D866114A();
	sLocal_1459 = "random@street_race";
	iLocal_1473 = 1;
	iLocal_1474 = 1;
	iLocal_1484 = -1;
	Local_1488 = { 0f, 0f, 0f };
	Local_1491 = { 0f, 0f, 0f };
	fLocal_1494 = 0f;
	uLocal_1667 = unk_0x2C4CAB2984F6DB6B();
	uLocal_1668 = unk_0xEB9EC7BD70F671E1();
	iLocal_1669 = -1;
	StringCopy(&Local_1670, "", 24);
	iLocal_1676 = -1;
	iLocal_1677 = -1;
	iLocal_1828 = 1;
	iLocal_1829 = 1;
	iLocal_1833 = 1;
	iLocal_1835 = 1;
	iLocal_1836 = 1;
	Local_2415 = { -1107.184f, -1170.247f, 1.15909f };
	Local_2418 = { 0.01f, -0.01f, -44.69f };
	Local_2422 = { -1105.14f, -1171.53f, 1.16f };
	Local_2425 = { -0.13f, -0.21f, -65.97f };
	Local_2429 = { -928.3082f, -1070.008f, 1.155174f };
	Local_2432 = { -0.06f, 0.07f, -42.91f };
	Local_2436 = { -1104.51f, -1173.58f, 1.15f };
	Local_2439 = { 0f, 0f, -46.41f };
	Local_636 = { ScriptParam_0 };
	if (unk_0xB9B05E900D325C36(83))
	{
		Local_642.f_11 = 99;
		func_521(0);
	}
	unk_0xB5533C0C8A2B9BF2(1);
	if (Local_636.f_1 == 3)
	{
		func_520(7);
		func_519(7);
	}
	else
	{
		func_520(8);
		func_519(8);
	}
	switch (Local_636.f_0)
	{
		case 0:
			iLocal_1676 = 1;
			break;
		
		case 1:
			iLocal_1676 = 2;
			break;
		
		case 2:
			iLocal_1676 = 4;
			break;
		
		case 3:
			iLocal_1676 = 5;
			break;
		
		case 4:
			iLocal_1676 = 6;
			break;
		
		case 5:
			iLocal_1676 = 1;
			break;
		
		case 6:
			iLocal_1676 = 2;
			break;
		
		case 7:
			iLocal_1676 = 3;
			break;
		
		case 8:
			iLocal_1676 = 4;
			break;
	}
	func_509(0, 1);
	func_508(1);
	func_507(1);
	if (Local_636.f_0 == 4)
	{
		unk_0xBE91026C1FC72180(joaat("prop_dumpster_02a"));
	}
	while (true)
	{
		switch (iLocal_630)
		{
			case 0:
				func_478();
				break;
			
			case 1:
				func_444();
				break;
			
			case 2:
				func_360();
				break;
			
			case 3:
				func_197();
				break;
			
			case 4:
				func_151();
				break;
			
			case 5:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	unk_0x76FC214916E76AC2();
	switch (iLocal_631)
	{
		case 0:
			if (func_150())
			{
				func_148();
			}
			func_146(1);
			if (Local_636.f_1 == 3)
			{
				unk_0xB3E27A9E412BBDF8("SEA_RACE_DURING_RACE");
			}
			else
			{
				unk_0xB3E27A9E412BBDF8("STREET_RACE_DURING_RACE");
			}
			if (func_145(Local_18.f_0))
			{
				unk_0xE38E0905DE29B428(Local_18.f_0, 0);
			}
			unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, 0);
			unk_0xC9621A9AD282CC14(1, 80, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			func_142(0);
			sLocal_1825 = "";
			switch (iLocal_629)
			{
				case 0:
					break;
				
				case 1:
					if (func_137() == 1)
					{
						sLocal_1825 = "RACES_R_INJ";
					}
					else if (func_137() == 0)
					{
						sLocal_1825 = "RACES_R_INJ_M";
					}
					else
					{
						sLocal_1825 = "RACES_R_INJ_T";
					}
					break;
				
				case 2:
					sLocal_1825 = "RACES_R_DEAD";
					break;
				
				case 3:
					if (func_137() == 1)
					{
						sLocal_1825 = "RACES_WRECK";
					}
					else if (func_137() == 0)
					{
						sLocal_1825 = "RACES_WRECK_M";
					}
					else
					{
						sLocal_1825 = "RACES_WRECK_T";
					}
					break;
				
				case 4:
					if (func_137() == 1)
					{
						sLocal_1825 = "RACES_ABAND";
					}
					else if (func_137() == 0)
					{
						sLocal_1825 = "RACES_ABAND_M";
					}
					else
					{
						sLocal_1825 = "RACES_ABAND_T";
					}
					break;
				
				case 5:
					if (func_137() == 1)
					{
						sLocal_1825 = "RACES_MISS";
					}
					else if (func_137() == 0)
					{
						sLocal_1825 = "RACES_MISS_M";
					}
					else
					{
						sLocal_1825 = "RACES_MISS_T";
					}
					break;
				
				case 6:
					if (func_137() == 1)
					{
						sLocal_1825 = "RACES_COPS";
					}
					else if (func_137() == 0)
					{
						sLocal_1825 = "RACES_COPS_M";
					}
					else
					{
						sLocal_1825 = "RACES_COPS_T";
					}
					break;
			}
			if (unk_0x0BD3CCFB6C6CFA91(sLocal_1825))
			{
				func_521(0);
			}
			else
			{
				iLocal_1669 = unk_0x31CD6E9F83C10233() + 4000;
				iLocal_631 = 1;
			}
			break;
		
		case 1:
			if (func_119(&uLocal_1820, &uLocal_1681, "SPR_UI_FAILD", sLocal_1825, &bLocal_1826, 78, 7, 1, 1097859072, 1))
			{
				if (bLocal_1826)
				{
					unk_0x18F1BFAF88AC511B(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x4EDE34FBADD967A6(0);
					func_2(0);
				}
				else
				{
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x4EDE34FBADD967A6(0);
					Local_642.f_11 = 99;
					unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
					func_521(0);
				}
			}
			break;
	}
}

void func_2(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (bParam0)
	{
		unk_0x7CDDB154852DA508();
		func_118(500, 0);
	}
	else
	{
		func_118(500, 1);
	}
	if (Local_636.f_1 == 1)
	{
		unk_0xE882E0C18562237F(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 50f, 0, 0, 0, 0, 0, 0);
		func_117(&Local_18);
		func_116(&(Local_18.f_1));
	}
	if (Local_636.f_1 == 2)
	{
		if (!func_115())
		{
			func_37(&iVar0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 0f, 1, 1, 0, 0, 1, joaat("buffalo"), 0, 145, 1);
			Local_18.f_0 = iVar0;
		}
	}
	else if (Local_636.f_1 == 1)
	{
		if (!func_35())
		{
			func_37(&iVar0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 0f, 1, 1, 0, 0, 1, joaat("bati"), 0, 145, 1);
			Local_18.f_0 = iVar0;
		}
	}
	else if (Local_636.f_1 == 3)
	{
		if (!func_34())
		{
			func_37(&iVar0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 0f, 1, 1, 0, 0, 1, joaat("seashark"), 0, 145, 1);
			Local_18.f_0 = iVar0;
		}
	}
	unk_0xEC025B0914244C52(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 100f, 0);
	unk_0xB8BC2FD710896F98(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 100f);
	unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
	unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
	Local_642.f_6 = 0;
	func_146(1);
	func_32(1);
	func_31(&iLocal_1475);
	func_509(0, 1);
	unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_654.f_181[Local_654.f_249 /*3*/], 1, 0, 0, 1);
	unk_0x4A7134889007D5B3(Local_654.f_181[Local_654.f_249 /*3*/], 500f, 0);
	bVar1 = true;
	iVar2 = unk_0x31CD6E9F83C10233() + 30000;
	while (bVar1)
	{
		if (unk_0x9177A5D78560369F())
		{
			bVar1 = false;
		}
		if (unk_0x31CD6E9F83C10233() > iVar2)
		{
			bVar1 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
	func_24(0, 0);
	unk_0x4EDE34FBADD967A6(1000);
	func_23();
	func_11();
	unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xE882E0C18562237F(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 500f, 0, 0, 0, 0, 0, 0);
	unk_0xADE985F6BA90AED5(0, 1065353216);
	unk_0x31F42B23A853582E(0);
	Local_642.f_1 = 0;
	iVar3 = 0;
	while (iVar3 <= (Local_654.f_249 - 1))
	{
		if (func_9(Local_907[iVar3 /*18*/].f_3))
		{
			unk_0xD706D9D85701BFBD(Local_907[iVar3 /*18*/].f_3);
		}
		if (func_145(Local_907[iVar3 /*18*/].f_6))
		{
			unk_0x0821297CFC3D8B81(Local_907[iVar3 /*18*/].f_6, 0.1f, 1, 0);
			func_7(Local_907[iVar3 /*18*/].f_6, Local_654.f_181[iVar3 /*3*/]);
			unk_0x5082D1A6D078DB20(Local_907[iVar3 /*18*/].f_6, Local_654.f_230[iVar3]);
		}
		iVar3++;
	}
	unk_0x4EDE34FBADD967A6(500);
	if (Local_636.f_0 == 1)
	{
		unk_0x4EDE34FBADD967A6(1000);
	}
	func_6(500, 1);
	unk_0xFD69BDF108B32E5B("RACE_INTRO_GENERIC");
	func_3(&(Local_642.f_2));
	unk_0x14C5CBCF9E6EB7B5(1, 80, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 80, 1);
	iLocal_630 = 1;
	iLocal_631 = 0;
}

void func_3(var uParam0)
{
	func_4(uParam0, 0f);
}

void func_4(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_5(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

void func_6(int iParam0, bool bParam1)
{
	if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
	{
		if (!unk_0x4413A34F0AAF1146())
		{
			unk_0x18D7C8000EDEAAB4(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xF9FC07CC13402AEF())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

Vector3 func_7(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x6192E81E5C0DCC27(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_8(uParam0))
	{
		unk_0x0A69FBBF51E1A08F(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_8(int iParam0)
{
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	return !unk_0x7A6C051038031EFA(iParam0, 0);
}

int func_9(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	int iVar0;
	
	iVar0 = unk_0xED1168B8D2D313FA();
	if (unk_0x4B0365EB2D59E6FA(iVar0))
	{
		unk_0xB568492AC80B8832(iVar0, 0, 16);
		unk_0xB568492AC80B8832(iVar0, 0, 32);
		unk_0xFA0C68E165E4E628(iVar0, 0, 0);
		unk_0x1E0B5FFAC5A97BE8(iVar0, 0);
		unk_0x6650FC093AC9B178(iVar0, 1);
	}
	func_13(1, 1, 0, 0);
	unk_0x963AAB0E6FFD7E02(func_12(iVar0), 50f, 1, 0, 0, 0);
	unk_0xE882E0C18562237F(func_12(iVar0), 500f, 0, 0, 0, 0, 0, 0);
	unk_0xD50199C9F3AD72E7(func_12(iVar0), 500f, 0);
	unk_0x832028B438E813F9(0);
	unk_0x21813C2AA1BA2088();
	unk_0x4C4F62CD43971CED(0);
	unk_0x56A844FA6FE745C3(0);
	unk_0x27FC4121D73AF604();
	unk_0x8C361F37C04084F4(1);
}

Vector3 func_12(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

void func_13(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_22(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_21())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_20(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_22(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_20(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_18(unk_0x3D35F9864E4640B1())) && !func_15(unk_0x3D35F9864E4640B1(), 0)) && !func_14())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_18(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_14()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1312735;
}

int func_18(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_19())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_19()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_20(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_21()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

void func_23()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
		}
		if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
		{
			if (unk_0x432757A9E7AAFA96(Local_18.f_0, 0))
			{
				unk_0x0A69FBBF51E1A08F(Local_18.f_0, Local_654.f_181[Local_654.f_249 /*3*/], 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(Local_18.f_0, Local_654.f_230[Local_654.f_249]);
				unk_0x24B72A49849215AE(Local_18.f_0, 1084227584);
			}
			unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 1, 0);
			unk_0x477513BFF4F0CEC1(Local_18.f_0, 1, 0);
		}
	}
}

void func_24(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	iVar0 = (Local_654.f_249 - 1);
	if ((func_9(iParam0) && func_145(iParam1)) && !unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6))
	{
		Local_907[iVar0 /*18*/].f_6 = iParam1;
		Local_907[iVar0 /*18*/].f_5 = unk_0xE9559A12052415BE(iParam1);
		Local_907[iVar0 /*18*/].f_3 = iParam0;
		Local_907[iVar0 /*18*/].f_4 = unk_0xE9559A12052415BE(iParam0);
		func_28(iVar0);
	}
	func_27(1);
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		while (!unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6))
		{
			if (unk_0x772F801619C83779(Local_907[iVar0 /*18*/].f_5))
			{
				Var1 = { Local_654.f_181[iVar0 /*3*/] };
				if (Local_636.f_1 == 3)
				{
					Var1.f_0 = (Var1.f_0 + unk_0xDFF7E223DB3CBA25(-1f, 1f));
					Var1.f_1 = (Var1.f_1 + unk_0xDFF7E223DB3CBA25(-1f, 1f));
				}
				else
				{
					Var1 = { unk_0x261E7847B591A8DC(Local_654.f_181[iVar0 /*3*/], Local_654.f_230[iVar0], 0f, -3f, 0f) };
				}
				Local_907[iVar0 /*18*/].f_6 = unk_0x5129A9193468FF77(Local_907[iVar0 /*18*/].f_5, Var1, Local_654.f_230[iVar0], 1, 1, 0);
				if (Local_636.f_1 == 3)
				{
					unk_0x24B72A49849215AE(Local_907[iVar0 /*18*/].f_6, 1084227584);
					unk_0x03E3DB9E908BFFE2(Local_907[iVar0 /*18*/].f_6, 0f);
					unk_0x6C06041FFFFE41AC(Local_907[iVar0 /*18*/].f_6, 1);
					unk_0xB80E20BFFCDF6D98(Local_907[iVar0 /*18*/].f_6, 1);
					if (unk_0x17E6BF40FED605C1(Local_907[iVar0 /*18*/].f_6))
					{
						unk_0xCFB9AB2B03B3D7C9(Local_907[iVar0 /*18*/].f_6, 1);
					}
					unk_0xF3A7713570EDCB05(Local_907[iVar0 /*18*/].f_6, 0);
				}
				else
				{
					unk_0x24B72A49849215AE(Local_907[iVar0 /*18*/].f_6, 1084227584);
				}
				unk_0x05C9FC8771682275(Local_907[iVar0 /*18*/].f_5, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		func_26();
		if (func_9(iParam0))
		{
			Local_907[(Local_654.f_249 - 1) /*18*/].f_1 = 2;
		}
		while (!unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_3))
		{
			if ((unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6) && unk_0x432757A9E7AAFA96(Local_907[iVar0 /*18*/].f_6, 0)) && unk_0x772F801619C83779(Local_907[iVar0 /*18*/].f_4))
			{
				Local_907[iVar0 /*18*/].f_3 = unk_0x4E2448BB7576232A(Local_907[iVar0 /*18*/].f_6, 26, Local_907[iVar0 /*18*/].f_4, -1, 1, 1);
				if (Local_636.f_1 != 3)
				{
					unk_0x20DA65CAACD1B5B1(Local_907[iVar0 /*18*/].f_6, 1);
					Var4 = { unk_0x261E7847B591A8DC(Local_654.f_181[iVar0 /*3*/], Local_654.f_230[iVar0], 0f, 2.3f, 0f) };
					if (iVar0 == 0)
					{
						unk_0x173325AAF2CD766A(&uVar7);
						unk_0x8C0D2C1D41B04158(0, 2800);
						unk_0x9EA0A7060EF3D099(0, Local_907[iVar0 /*18*/].f_6, Var4, 1.5f, 0, Local_907[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						unk_0xF81AD3C937316CCA(uVar7);
						unk_0xEDD5437C49B7B1F8(Local_907[iVar0 /*18*/].f_3, uVar7);
						unk_0x1F5B34056C3CB80B(&uVar7);
					}
					else if (iVar0 == 1)
					{
						unk_0x173325AAF2CD766A(&uVar7);
						unk_0x8C0D2C1D41B04158(0, 3300);
						unk_0x9EA0A7060EF3D099(0, Local_907[iVar0 /*18*/].f_6, Var4, 1.2f, 0, Local_907[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						unk_0xF81AD3C937316CCA(uVar7);
						unk_0xEDD5437C49B7B1F8(Local_907[iVar0 /*18*/].f_3, uVar7);
						unk_0x1F5B34056C3CB80B(&uVar7);
					}
					else
					{
						unk_0x173325AAF2CD766A(&uVar7);
						unk_0x8C0D2C1D41B04158(0, (5500 + iVar0 * 100));
						unk_0x9EA0A7060EF3D099(0, Local_907[iVar0 /*18*/].f_6, Var4, 0.8f, 0, Local_907[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						unk_0xF81AD3C937316CCA(uVar7);
						unk_0xEDD5437C49B7B1F8(Local_907[iVar0 /*18*/].f_3, uVar7);
						unk_0x1F5B34056C3CB80B(&uVar7);
					}
				}
				if (Local_636.f_1 == 1)
				{
					unk_0x197677294AB2AF1C(Local_907[iVar0 /*18*/].f_3, 1, 4096, -1);
				}
				func_25(iVar0);
				if (func_9(Local_907[iVar0 /*18*/].f_3))
				{
					func_28(iVar0);
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	if (func_9(iParam0))
	{
		Local_907[(Local_654.f_249 - 1) /*18*/].f_1 = 2;
	}
	func_27(0);
	switch (Local_636.f_0)
	{
		case 0:
			sLocal_1486 = "CityRace0_route1";
			break;
		
		case 1:
			sLocal_1486 = "CityRace1_route1";
			break;
		
		case 2:
			sLocal_1486 = "CityRace3_route1";
			break;
		
		case 3:
			sLocal_1486 = "CityRace4_route1";
			break;
		
		case 4:
			sLocal_1486 = "CityRace5_route1";
			break;
		
		case 5:
			sLocal_1486 = "SeaRace0_route1";
			break;
		
		case 6:
			sLocal_1486 = "SeaRace1_route1";
			break;
		
		case 7:
			sLocal_1486 = "SeaRace2_route1";
			break;
		
		case 8:
			sLocal_1486 = "SeaRace3_route1";
			break;
	}
	unk_0x8EC6855B27DBF450(sLocal_1486);
	while (!unk_0x44731FF13F4F33EF(sLocal_1486))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA42AA8B14512C6BC(sLocal_1486, &iLocal_1663);
	iLocal_1663 = (iLocal_1663 - 1);
	if (Local_654.f_247 == 0)
	{
		iLocal_1179 = 0;
	}
	else
	{
		iLocal_1179 = 1;
	}
}

void func_25(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(Local_907[iParam0 /*18*/].f_6) && !unk_0x7A6C051038031EFA(Local_907[iParam0 /*18*/].f_6, 0))
	{
		unk_0x8D0385AF2136C38C(Local_907[iParam0 /*18*/].f_6, unk_0x3AF262D7332EEDF5(0, unk_0x958DA1E3B6BDE87B(Local_907[iParam0 /*18*/].f_6)));
		if (unk_0x5583DCB5A49F0E53(Local_907[iParam0 /*18*/].f_6) > 0)
		{
			unk_0x9B0BD13ABD4E15D1(Local_907[iParam0 /*18*/].f_6, 0);
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 0) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 0, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 0)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 1) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 1, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 1)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 2) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 2, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 2)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 3) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 3, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 3)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 4) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 4, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 4)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 5) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 5, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 5)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 6) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 6, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 6)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 8) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 8, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 8)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 9) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 9, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 9)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 11) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 11, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 11)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 12) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 12, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 12)), false);
			}
			if (unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 13) > 0)
			{
				unk_0x5A814851114E34FB(Local_907[iParam0 /*18*/].f_6, 13, unk_0x3AF262D7332EEDF5(0, unk_0x43CF7C22C63E44EA(Local_907[iParam0 /*18*/].f_6, 13)), false);
			}
			unk_0xF4E4907109CEF0EC(Local_907[iParam0 /*18*/].f_6, 18, true);
			unk_0xF4E4907109CEF0EC(Local_907[iParam0 /*18*/].f_6, 17, true);
			unk_0xF4E4907109CEF0EC(Local_907[iParam0 /*18*/].f_6, 22, true);
		}
	}
}

void func_26()
{
	if (Local_636.f_0 == 3)
	{
		Local_907[0 /*18*/].f_1 = 2;
		Local_907[1 /*18*/].f_1 = 2;
		Local_907[2 /*18*/].f_1 = 2;
		Local_907[3 /*18*/].f_1 = 1;
		Local_907[4 /*18*/].f_1 = 1;
		Local_907[5 /*18*/].f_1 = 0;
		Local_907[6 /*18*/].f_1 = 0;
	}
	else if (Local_636.f_0 == 7)
	{
		Local_907[0 /*18*/].f_1 = 2;
		Local_907[1 /*18*/].f_1 = 1;
		Local_907[2 /*18*/].f_1 = 0;
	}
	else
	{
		Local_907[0 /*18*/].f_1 = 2;
		Local_907[1 /*18*/].f_1 = 2;
		Local_907[2 /*18*/].f_1 = 1;
		Local_907[3 /*18*/].f_1 = 1;
		Local_907[4 /*18*/].f_1 = 0;
		Local_907[5 /*18*/].f_1 = 0;
		Local_907[6 /*18*/].f_1 = 0;
	}
}

void func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_654.f_249 - 1))
		{
			if (Local_907[iVar0 /*18*/].f_4 == 0 || Local_907[iVar0 /*18*/].f_4 == 0)
			{
			}
			unk_0xBE91026C1FC72180(Local_907[iVar0 /*18*/].f_4);
			unk_0xBE91026C1FC72180(Local_907[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Local_654.f_249 - 1))
		{
			unk_0x9793B48C4C8275F8(Local_907[iVar0 /*18*/].f_4);
			unk_0x9793B48C4C8275F8(Local_907[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
}

void func_28(int iParam0)
{
	if (func_9(Local_907[iParam0 /*18*/].f_3))
	{
		unk_0xEB9B39274C401888(Local_907[iParam0 /*18*/].f_3, 1);
		unk_0x33DE844DEED97E77(Local_907[iParam0 /*18*/].f_6, 1);
		unk_0x4AF3E3EF22AF92E4(Local_907[iParam0 /*18*/].f_6, 0);
		unk_0x56B418F469976565(Local_907[iParam0 /*18*/].f_6, 1, 1, 0);
		unk_0x87A7451620C12125(Local_907[iParam0 /*18*/].f_3, 1);
		unk_0x87A7451620C12125(Local_907[iParam0 /*18*/].f_6, 1);
		unk_0x9DFCC19370F919F3(Local_907[iParam0 /*18*/].f_6, 1);
		unk_0x014C5648BA70BF8B(Local_907[iParam0 /*18*/].f_6, 1);
		unk_0xC587296050B2CA93(Local_907[iParam0 /*18*/].f_6, false);
		unk_0xD6A092D1F1B9A9F1(Local_907[iParam0 /*18*/].f_3, 32, 0);
		unk_0xD6A092D1F1B9A9F1(Local_907[iParam0 /*18*/].f_3, 29, 0);
		unk_0xD6A092D1F1B9A9F1(Local_907[iParam0 /*18*/].f_3, 116, 0);
		unk_0xD6A092D1F1B9A9F1(Local_907[iParam0 /*18*/].f_3, 118, 0);
		unk_0xD6A092D1F1B9A9F1(Local_907[iParam0 /*18*/].f_3, 26, 1);
		unk_0xCFC7B014BB928D6D(Local_907[iParam0 /*18*/].f_6, 1, 1);
		unk_0x47719B470B88CAC0(Local_907[iParam0 /*18*/].f_3, 0);
		if (Local_636.f_1 == 3)
		{
			unk_0x583AB626B1CF33F0(Local_907[iParam0 /*18*/].f_6, 0);
			unk_0x1ADB46574E80A3AE(Local_907[iParam0 /*18*/].f_3, 3);
		}
		Local_907[iParam0 /*18*/] = 0;
	}
}

void func_29()
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
		{
			if (unk_0x432757A9E7AAFA96(Local_18.f_0, 0))
			{
				if (!unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), Local_18.f_0) && unk_0x00E962E9D49FD6C4(Local_18.f_0, -1, 0))
				{
					unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), Local_18.f_0, -1);
				}
				uVar0 = unk_0xED1168B8D2D313FA();
				unk_0x963AAB0E6FFD7E02(func_12(uVar0), 50f, 1, 0, 0, 0);
				unk_0xE882E0C18562237F(func_12(uVar0), 500f, 0, 0, 0, 0, 0, 0);
				unk_0xD50199C9F3AD72E7(func_12(uVar0), 500f, 0);
				Var1 = { unk_0x261E7847B591A8DC(Local_654.f_181[Local_654.f_249 /*3*/], Local_654.f_230[Local_654.f_249], 0f, -15f, 1f) };
				func_30(&Var1, 0);
				fVar4 = Local_654.f_230[Local_654.f_249];
				if (Local_636.f_0 == 2)
				{
					Var1 = { -825.03f, -2575.13f, 13.25f };
					fVar4 = 334.98f;
				}
				else if (Local_636.f_0 == 4)
				{
					Var1 = { -1093.493f, -1173.161f, 2.4978f };
				}
				else if (Local_636.f_1 == 3)
				{
					Var1 = { Local_654.f_181[Local_654.f_249 /*3*/] };
				}
				if (Local_636.f_1 == 1)
				{
					Var5 = { unk_0x261E7847B591A8DC(Local_654.f_181[Local_654.f_249 /*3*/], Local_654.f_230[Local_654.f_249], 0f, -1f, 0f) };
					fVar8 = 7f;
				}
				else
				{
					Var5 = { unk_0x261E7847B591A8DC(Local_654.f_181[Local_654.f_249 /*3*/], Local_654.f_230[Local_654.f_249], 0f, 2.3f, 0f) };
					fVar8 = 3f;
				}
				unk_0x56B418F469976565(Local_18.f_0, 1, 1, 0);
				unk_0x5082D1A6D078DB20(Local_18.f_0, fVar4);
				func_7(Local_18.f_0, Var1);
				unk_0xC6DC608BBC52BB6A(Local_18.f_0, 1);
				unk_0x33DE844DEED97E77(Local_18.f_0, 1);
				if (Local_636.f_1 == 3)
				{
					unk_0x24B72A49849215AE(Local_18.f_0, 1084227584);
					unk_0x03E3DB9E908BFFE2(Local_18.f_0, 0f);
					unk_0x6C06041FFFFE41AC(Local_18.f_0, 1);
					unk_0xB80E20BFFCDF6D98(Local_18.f_0, 1);
					if (unk_0x17E6BF40FED605C1(Local_18.f_0))
					{
						unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 1);
					}
				}
				else
				{
					unk_0x9EA0A7060EF3D099(unk_0x0031992CA618A445(), Local_18.f_0, Var5, fVar8, 0, unk_0xE9559A12052415BE(Local_18.f_0), 17039360, 0.5f, 15f);
					unk_0x5EF58B2B49A4503B(Local_18.f_0, fVar8);
					unk_0xEF4A30FE81E07AF6(Local_18.f_0);
				}
				unk_0x477513BFF4F0CEC1(Local_18.f_0, 1, 0);
				unk_0x9DFCC19370F919F3(Local_18.f_0, 1);
				unk_0x014C5648BA70BF8B(Local_18.f_0, 1);
				if ((Local_636.f_1 == 3 && func_9(unk_0x0031992CA618A445())) && unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
				{
					unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 3);
				}
			}
		}
		unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 1, 0);
	}
}

int func_30(var uParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = 0f;
	if (unk_0x6192E81E5C0DCC27(*uParam0, &fVar0, 0))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0x7A6C051038031EFA(*iParam0, 0))
		{
			unk_0xCFC7B014BB928D6D(*iParam0, 0, 1);
		}
		if (!unk_0xCC234795142FC2D2(*iParam0))
		{
			unk_0x1581691D748490F3(*iParam0, 1, 0);
		}
		unk_0xA50DE967C5813F23(iParam0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < Local_654.f_249)
		{
			unk_0x05C9FC8771682275(Local_907[iVar0 /*18*/].f_5, 0);
		}
		if (iParam0 == 1)
		{
			if (unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_3))
			{
				unk_0xA50DE967C5813F23(&(Local_907[iVar0 /*18*/].f_3));
			}
			if (unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6))
			{
				unk_0xE9F8539D5AF6B052(&(Local_907[iVar0 /*18*/].f_6));
			}
		}
		else
		{
			if (unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_3))
			{
				if (!unk_0x7A6C051038031EFA(Local_907[iVar0 /*18*/].f_3, 0))
				{
					unk_0x390D16BCBFB23E1A(Local_907[iVar0 /*18*/].f_3, 1);
					if (unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6) && !unk_0x7A6C051038031EFA(Local_907[iVar0 /*18*/].f_6, 0))
					{
						unk_0x87A7451620C12125(Local_907[iVar0 /*18*/].f_3, 0);
						unk_0xCFC7B014BB928D6D(Local_907[iVar0 /*18*/].f_6, 0, 1);
						if (Local_636.f_0 == 8)
						{
							unk_0x173325AAF2CD766A(&uVar1);
							unk_0x9EA0A7060EF3D099(0, Local_907[iVar0 /*18*/].f_6, 380.1007f, -3498.078f, -29.3627f, 20f, 0, unk_0xE9559A12052415BE(Local_907[iVar0 /*18*/].f_6), 786603, 10f, 5f);
							unk_0xF48F6EEC1EBEB012(0, Local_907[iVar0 /*18*/].f_6, 20f, 786603);
							unk_0xF81AD3C937316CCA(uVar1);
							unk_0xEDD5437C49B7B1F8(Local_907[iVar0 /*18*/].f_3, uVar1);
						}
						else
						{
							unk_0xF48F6EEC1EBEB012(Local_907[iVar0 /*18*/].f_3, Local_907[iVar0 /*18*/].f_6, 20f, 786603);
						}
					}
				}
				func_33(&(Local_907[iVar0 /*18*/].f_3), 1, 0, 1);
			}
			if (unk_0x76B3C79DE564AFC6(Local_907[iVar0 /*18*/].f_6))
			{
				if (!unk_0x7A6C051038031EFA(Local_907[iVar0 /*18*/].f_6, 0))
				{
					unk_0x87A7451620C12125(Local_907[iVar0 /*18*/].f_6, 0);
					unk_0x9DFCC19370F919F3(Local_907[iVar0 /*18*/].f_6, 0);
					unk_0x014C5648BA70BF8B(Local_907[iVar0 /*18*/].f_6, 0);
					unk_0xC587296050B2CA93(Local_907[iVar0 /*18*/].f_6, true);
				}
				unk_0x28BB69BE14577487(&(Local_907[iVar0 /*18*/].f_6));
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(*iParam0))
		{
			unk_0xCFC7B014BB928D6D(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2758EB35EE475C21(*iParam0);
			}
			unk_0x390D16BCBFB23E1A(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xEB9B39274C401888(*iParam0, 0);
			}
		}
		unk_0x056049D9941BD43D(iParam0);
	}
}

int func_34()
{
	int iVar0;
	
	if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
	{
		iLocal_1192 = unk_0x7899A2987EB03783();
		if (func_145(iLocal_1192))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_1192);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_35()
{
	int iVar0;
	
	if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
	{
		iLocal_1192 = unk_0x7899A2987EB03783();
		if (func_145(iLocal_1192))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_1192);
			if ((unk_0x34C854420D02F57B(iVar0) && !unk_0x1B9B48622A4D3FC0(iVar0)) && !func_36(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_37(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_114() || !func_113())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_111(iParam6, iParam7, iParam8, iParam13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_109();
		while (!func_108())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		*iParam0 = func_96(Param1, fParam4);
	}
	else if (iParam9 == 1)
	{
		if (func_95(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_98003.f_2875 };
			fParam4 = Global_98003.f_2875.f_6;
		}
		unk_0x963AAB0E6FFD7E02(Param1, 5f, 1, 0, 0, 0);
		func_86(Param1, 5f, 0);
		if (func_85(iParam12))
		{
			func_83(iParam12, 0);
			while (!func_38(iParam0, iParam12, Param1, fParam4, 1, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		else
		{
			unk_0xBE91026C1FC72180(iParam10);
			while (!unk_0x772F801619C83779(iParam10))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			*iParam0 = unk_0x5129A9193468FF77(iParam10, Param1, fParam4, 1, 1, 0);
			if (unk_0x76B3C79DE564AFC6(*iParam0) && !unk_0x7A6C051038031EFA(*iParam0, 0))
			{
				if (iParam11 == 0)
				{
					unk_0x8D0385AF2136C38C(*iParam0, 0);
				}
				else if (iParam11 > 0)
				{
					unk_0xBF9154ADAF4F11E1(*iParam0, iParam11, iParam11);
				}
			}
			unk_0x9793B48C4C8275F8(iParam10);
		}
	}
	if (iParam5 == 1)
	{
		if (((unk_0x76B3C79DE564AFC6(*iParam0) && !unk_0x7A6C051038031EFA(*iParam0, 0)) && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), *iParam0, -1);
			unk_0x24B72A49849215AE(*iParam0, 1084227584);
		}
	}
}

int func_38(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_85(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_82(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x76B3C79DE564AFC6(*iParam0))
		{
			if (unk_0xE9559A12052415BE(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_104439.f_2244.f_539.f_4296) && Global_104439.f_8946.f_99.f_58[131])
		{
			Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xBE91026C1FC72180(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x772F801619C83779(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x5129A9193468FF77(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, 0);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar103 + 1, !Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_81(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0xC587296050B2CA93(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x368756789FF0788C(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_76(iParam0, &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_74(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Global_104439.f_2244.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_73(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0xBE91026C1FC72180(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x772F801619C83779(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x5129A9193468FF77(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, 0);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar104 + 1, !Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_81(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0xC587296050B2CA93(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x368756789FF0788C(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_76(iParam0, &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_74(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Global_104439.f_2244.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_73(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xBE91026C1FC72180(Var5.f_0);
			if (unk_0x772F801619C83779(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0x5129A9193468FF77(Var5.f_0, Param2, fParam5, 1, 1, 0);
				unk_0x24B72A49849215AE(*iParam0, 1084227584);
				unk_0xDEE5A73213F56CF3(*iParam0, 0);
				unk_0x30EFA94609D08404(*iParam0, 0);
				unk_0x014C5648BA70BF8B(*iParam0, 1);
				StringCopy(&cVar106, unk_0xCF9C6545E179C4AD(*iParam0), 16);
				unk_0x990879ED64ED4138(*iParam0, 1250);
				unk_0xCB78392CBBC0CB2F(*iParam0, 1250f);
				unk_0xAB7E0AE68E18BEED(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0xBF9154ADAF4F11E1(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xD6B0D4015CC61FF4(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x114815B023ED3916(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0x9B48A5E9A884175D(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x7E67EF5B78953AF6(*iParam0, Var5.f_24);
				}
				if (func_81(&uVar1, &uVar0))
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &uVar1);
					unk_0xD84C2B9A469EBB35(*iParam0, uVar0);
				}
				else
				{
					unk_0x3F8A1297DC6573A7(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0xE10B4E7E4009175A())
					{
						unk_0xD84C2B9A469EBB35(*iParam0, Var5.f_26);
					}
				}
				unk_0xDBEB3DBC65F0B19E(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0xC587296050B2CA93(*iParam0, Var5.f_88);
				unk_0x79C5F51FA95DC57C(*iParam0, Var5.f_87);
				unk_0x368756789FF0788C(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0xA199088C3081D928(*iParam0, 2, unk_0x2A3398C6222EB190(Var5.f_92, 28));
				unk_0xA199088C3081D928(*iParam0, 3, unk_0x2A3398C6222EB190(Var5.f_92, 29));
				unk_0xA199088C3081D928(*iParam0, 0, unk_0x2A3398C6222EB190(Var5.f_92, 30));
				unk_0xA199088C3081D928(*iParam0, 1, unk_0x2A3398C6222EB190(Var5.f_92, 31));
				if (unk_0xD546CB3F87365B85(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xE4707C143B24BAB3(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(*iParam0)))
					{
						if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0x61038A1B29CB9EEB(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0x61038A1B29CB9EEB(*iParam0, Var5.f_90);
						}
					}
				}
				func_76(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x18804D60D4766EA6(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bagger") && !Global_104439.f_8946.f_99.f_58[118])
					{
						unk_0x3F8A1297DC6573A7(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xE9559A12052415BE(*iParam0) == joaat("bodhi2"))
					{
						func_74(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_104439.f_2244.f_539.f_4296) && Global_104439.f_8946.f_99.f_58[131]) && unk_0xE9559A12052415BE(*iParam0) == joaat("tailgater"))
				{
					unk_0x5A814851114E34FB(*iParam0, 6, 1, false);
					unk_0x5A814851114E34FB(*iParam0, 14, 7, false);
					unk_0x5A814851114E34FB(*iParam0, 11, 2, false);
					unk_0x5A814851114E34FB(*iParam0, 2, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 7, 5, false);
					unk_0x5A814851114E34FB(*iParam0, 0, 0, false);
					unk_0x5A814851114E34FB(*iParam0, 3, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 13, 1, false);
					unk_0x5A814851114E34FB(*iParam0, 4, 3, false);
					unk_0x5A814851114E34FB(*iParam0, 12, 2, false);
					unk_0xF4E4907109CEF0EC(*iParam0, 22, true);
					unk_0x61038A1B29CB9EEB(*iParam0, 2);
					unk_0x5A814851114E34FB(*iParam0, 23, 11, false);
					unk_0x79C5F51FA95DC57C(*iParam0, 2);
					Global_104439.f_2244.f_539.f_4296 = 1;
					func_39(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x9793B48C4C8275F8(Var5.f_0);
				}
				if (bVar105)
				{
					func_73(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_85(iParam0) && unk_0x76B3C79DE564AFC6(*iParam1)) && unk_0x432757A9E7AAFA96(*iParam1, 0))
	{
		if (iParam2 > Global_104439.f_2244.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_52(*iParam1, iParam0);
		}
		if (unk_0x5583DCB5A49F0E53(*iParam1) != 0)
		{
			unk_0x9B0BD13ABD4E15D1(*iParam1, 0);
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = unk_0xE9559A12052415BE(*iParam1);
		if (unk_0x0A61DF43ACF6A45B(*iParam1, &iVar1))
		{
			Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0xE9559A12052415BE(iVar1);
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x30E6E9AC0D98065A(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8DB158934E64B062(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0x3BE354A1A1BD6623(*iParam1, 1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0x3BE354A1A1BD6623(*iParam1, 2);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0x3BE354A1A1BD6623(*iParam1, 3);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0x3BE354A1A1BD6623(*iParam1, 4);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0x3BE354A1A1BD6623(*iParam1, 5);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0x3BE354A1A1BD6623(*iParam1, 6);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0x3BE354A1A1BD6623(*iParam1, 7);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0x3BE354A1A1BD6623(*iParam1, 8);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0x3BE354A1A1BD6623(*iParam1, 9);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0x3BE354A1A1BD6623(*iParam1, 10);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0x3BE354A1A1BD6623(*iParam1, 11);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0x3BE354A1A1BD6623(*iParam1, 12);
		if (unk_0x949DE8C96217A79B(*iParam1, 0))
		{
			iVar2 = unk_0x727C05A2BF43A1DA(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x885DE9EE2AE89A2A();
		StringCopy(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xCF9C6545E179C4AD(*iParam1), 16);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x3863090BB0402D29(*iParam1);
		unk_0xB3EEFAD2583A0B39(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xCC1E6825E8AEFA91(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0xB6CD70E75256F4B4(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x95C125C85B156194(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x92D3D399848DA022(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x27F913045BB0E0C6(*iParam1);
		Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x0B56976C59C0773F(*iParam1);
		unk_0x6B1D7C9564AA9095(*iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x429138BE60703CCA(*iParam1, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x429138BE60703CCA(*iParam1, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_104439.f_2244.f_539.f_4297[iParam0] = 10;
		if ((unk_0x0A264F4746D9A02B(*iParam1) >= 0 && unk_0x0A264F4746D9A02B(*iParam1) < 255) && func_44(*iParam1, 0, &uVar0))
		{
			func_43(iParam1, &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_104439.f_19979[iParam0 /*43*/].f_40 = 1;
				Global_104439.f_19979[iParam0 /*43*/] = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_104439.f_19979[iParam0 /*43*/].f_3 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_104439.f_19979[iParam0 /*43*/].f_4 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_104439.f_19979[iParam0 /*43*/].f_5 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_104439.f_19979[iParam0 /*43*/].f_6 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_104439.f_19979[iParam0 /*43*/].f_10 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_104439.f_19979[iParam0 /*43*/].f_16 = !Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_104439.f_19979[iParam0 /*43*/].f_19 = { Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_104439.f_19979[iParam0 /*43*/].f_23 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_104439.f_19979[iParam0 /*43*/].f_7 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_104439.f_19979[iParam0 /*43*/].f_8 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_104439.f_19979[iParam0 /*43*/].f_9 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_104439.f_19979[iParam0 /*43*/].f_11 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_104439.f_19979[iParam0 /*43*/].f_12 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_104439.f_19979[iParam0 /*43*/].f_13 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_104439.f_19979[iParam0 /*43*/].f_14 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_104439.f_19979[iParam0 /*43*/].f_15 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_104439.f_19979[iParam0 /*43*/].f_18 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_104439.f_19979[iParam0 /*43*/].f_17 = Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_104439.f_19979[iParam0 /*43*/].f_24 = unk_0x43CF7C22C63E44EA(*iParam1, 11) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_25 = unk_0x43CF7C22C63E44EA(*iParam1, 12) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_26 = unk_0x43CF7C22C63E44EA(*iParam1, 4) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_27 = unk_0x43CF7C22C63E44EA(*iParam1, 23) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_28 = unk_0x43CF7C22C63E44EA(*iParam1, 14) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_29 = unk_0x43CF7C22C63E44EA(*iParam1, 16) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_30 = unk_0x43CF7C22C63E44EA(*iParam1, 15) + 1;
				Global_104439.f_19979[iParam0 /*43*/].f_32 = unk_0xC70F2BB57FE317CD(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[0] = unk_0x050FBB69DDC43293(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[1] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 0);
				Global_104439.f_19979[iParam0 /*43*/].f_33[2] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[3] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 2);
				Global_104439.f_19979[iParam0 /*43*/].f_33[4] = unk_0x39BA0DF99894DAE5(*iParam1, 14, 3);
				Global_104439.f_19979[iParam0 /*43*/].f_39 = unk_0xDF012B24B1C790FF(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_31 = func_42(*iParam1);
				Global_104439.f_19979[iParam0 /*43*/].f_33[0] = unk_0x75581E55A902E534(*iParam1);
				unk_0xF3D0E2AC695543E9(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_40(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_104439.f_19979[iParam0 /*43*/].f_1));
				unk_0x9591372C6496BFA3(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_40(Global_104439.f_2244.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_104439.f_19979[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_40(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_41(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_41(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x0A264F4746D9A02B(iParam0) >= 0) && unk_0x0A264F4746D9A02B(iParam0) < 255)
	{
		if (unk_0xDF012B24B1C790FF(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xDF012B24B1C790FF(iParam0) == 0)
		{
			if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xEB185A7D2320BECE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xBE7294CB9B3BEC34(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(unk_0xE9559A12052415BE(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	if (!func_50(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	bVar1 = false;
	if (func_46(unk_0x3D35F9864E4640B1()) && (unk_0x1DBFCF939B3B47D0(iVar0) || unk_0xF9CDF5CA6A1D6756(iVar0)))
	{
		bVar1 = true;
	}
	if ((((((unk_0xC4DF0B3808F615ED(iParam0) && unk_0xE9559A12052415BE(iParam0) != joaat("halftrack")) && unk_0xE9559A12052415BE(iParam0) != joaat("phantom3")) && unk_0xE9559A12052415BE(iParam0) != joaat("hauler2")) && unk_0xE9559A12052415BE(iParam0) != joaat("trailerlarge")) && unk_0xE9559A12052415BE(iParam0) != joaat("trailersmall2")) && !bVar1)
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if ((func_45(iParam0) && unk_0xE9559A12052415BE(iParam0) != joaat("sentinel2")) && unk_0xE9559A12052415BE(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90268[iVar0]))
		{
			if (Global_90268[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_49())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_47(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
	}
	return -1;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	return -1;
}

int func_50(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_46(unk_0x3D35F9864E4640B1()) && (unk_0x1DBFCF939B3B47D0(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x2076012573940835(iParam0) && !unk_0x34C854420D02F57B(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_51(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_56(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, -1, 0);
		if (!unk_0x76B3C79DE564AFC6(iVar0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, -1);
		}
		if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x8682D8A6269E52C9(iVar0))
		{
			if (unk_0xE9559A12052415BE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104439.f_2244.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104439.f_32291.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104439.f_32291.f_5590 = iParam1;
	Global_70512 = iParam0;
	Global_104439.f_32291.f_5588 = 1;
	func_53(iParam0, &(Global_104439.f_32291.f_5510));
}

void func_53(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_55(uParam1);
		uParam1->f_66 = unk_0xE9559A12052415BE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCF9C6545E179C4AD(iParam0), 16);
		*uParam1 = unk_0x3863090BB0402D29(iParam0);
		unk_0xB3EEFAD2583A0B39(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCC1E6825E8AEFA91(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB6CD70E75256F4B4(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x92D3D399848DA022(iParam0);
		uParam1->f_67 = unk_0x27F913045BB0E0C6(iParam0);
		uParam1->f_69 = unk_0x0B56976C59C0773F(iParam0);
		uParam1->f_70 = unk_0xB026720421512310(iParam0);
		unk_0x807574B316B857A4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x6B1D7C9564AA9095(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x429138BE60703CCA(iParam0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 28);
		}
		if (unk_0x429138BE60703CCA(iParam0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 29);
		}
		if (unk_0x429138BE60703CCA(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 30);
		}
		if (unk_0x429138BE60703CCA(iParam0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			uParam1->f_68 = unk_0x727C05A2BF43A1DA(iParam0);
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66))
		{
			if (unk_0xB24748D4EDC0E921(iParam0))
			{
				switch (unk_0x04A9D89D1A4A6CCC(iParam0))
				{
					case 2:
					case 0:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x95C125C85B156194(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 9);
		}
		if (unk_0x09F06C3C37B36D10(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 10);
		}
		if (unk_0x973A322D4D80E2D1(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 13);
			unk_0xE22FB988FAA3CC86(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xD19B16472550A083(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_54(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 11);
		}
		if (unk_0x8B0523D9EF9595C2(iParam0, "IgnoredByQuickSave") && unk_0x0E340E113E76A82F(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 27);
		}
	}
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

void func_55(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_56(int iParam0)
{
	if ((((((((((!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0)) || func_71(iParam0, 0, 0)) || func_71(iParam0, 1, 0)) || func_71(iParam0, 2, 0)) || func_70(iParam0) != 145) || func_69(iParam0)) || func_68(iParam0)) || func_45(iParam0)) || func_67(iParam0)) || !func_57(unk_0xE9559A12052415BE(iParam0)))
	{
		if (func_68(iParam0))
		{
		}
		if (func_68(iParam0))
		{
		}
		if (func_71(iParam0, 0, 0))
		{
		}
		if (func_71(iParam0, 1, 0))
		{
		}
		if (func_71(iParam0, 2, 0))
		{
		}
		if (func_70(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_58(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9C4740BA7F0AF553(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)) || unk_0x1DBFCF939B3B47D0(iParam0)) || unk_0x22237535B3A68DF9(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x27CA09C6DFAB1E79()) || (iParam0 == joaat("buffalo3") && !unk_0x27CA09C6DFAB1E79())) || (iParam0 == joaat("gauntlet2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blista3"))
	{
		if (!func_66())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9F1747E93F8C8B1E())
		{
			if (unk_0xF87BC0F22BCEB035(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x03CF889BDA5553A9(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_65() && !func_64()) && !func_63()) && !func_62()) && !func_66())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_63())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_61(iParam0))
		{
			return 0;
		}
	}
	if (!func_59(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_60())
	{
		return 1;
	}
	unk_0xE2A314A6903DD12E(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x09E7CE4C231F1F83(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_60()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2488615)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x6239D1A379D387A4();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5994 && !Global_262145.f_12099) && iVar1 < Global_262145.f_12100)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13342 && iVar1 < Global_262145.f_13354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13338 && iVar1 < Global_262145.f_13350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13339 && iVar1 < Global_262145.f_13351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13340 && iVar1 < Global_262145.f_13352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13341 && iVar1 < Global_262145.f_13353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13343 && iVar1 < Global_262145.f_13355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13344 && iVar1 < Global_262145.f_13347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13345 && iVar1 < Global_262145.f_13348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13346 && iVar1 < Global_262145.f_13349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15973 && iVar1 < Global_262145.f_15938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15968 && iVar1 < Global_262145.f_15933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15972 && iVar1 < Global_262145.f_15937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15971 && iVar1 < Global_262145.f_15936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15965 && iVar1 < Global_262145.f_15930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15966 && iVar1 < Global_262145.f_15931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15969 && iVar1 < Global_262145.f_15934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15970 && iVar1 < Global_262145.f_15935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15967 && iVar1 < Global_262145.f_15932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15975 && iVar1 < Global_262145.f_15940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15976 && iVar1 < Global_262145.f_15941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15964 && iVar1 < Global_262145.f_15929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15963 && iVar1 < Global_262145.f_15928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15962 && iVar1 < Global_262145.f_15927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15974 && iVar1 < Global_262145.f_15939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15977 && iVar1 < Global_262145.f_15942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15978 && iVar1 < Global_262145.f_15943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15979 && iVar1 < Global_262145.f_15944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15980 && iVar1 < Global_262145.f_15945)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16125 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16126 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16127 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16128 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16129 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16130 && iVar1 < Global_262145.f_16152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16132 && iVar1 < Global_262145.f_16153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16133 && iVar1 < Global_262145.f_16154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16134 && iVar1 < Global_262145.f_16155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16135 && iVar1 < Global_262145.f_16156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16136 && iVar1 < Global_262145.f_16157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16137 && iVar1 < Global_262145.f_16158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16138 && iVar1 < Global_262145.f_16159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16144 && iVar1 < Global_262145.f_16166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16141 && iVar1 < Global_262145.f_16162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16142 && iVar1 < Global_262145.f_16163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16143 && iVar1 < Global_262145.f_16164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16131 && iVar1 < Global_262145.f_16165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16145 && iVar1 < Global_262145.f_16167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16139 && iVar1 < Global_262145.f_16160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16140 && iVar1 < Global_262145.f_16161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16146 && iVar1 < Global_262145.f_16168)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17774 && iVar1 < Global_262145.f_17815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17775 && iVar1 < Global_262145.f_17816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17776 && iVar1 < Global_262145.f_17817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17777 && iVar1 < Global_262145.f_17818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17778 && iVar1 < Global_262145.f_17819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17779 && iVar1 < Global_262145.f_17820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17780 && iVar1 < Global_262145.f_17821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17781 && iVar1 < Global_262145.f_17822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17782 && iVar1 < Global_262145.f_17823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17783 && iVar1 < Global_262145.f_17824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17784 && iVar1 < Global_262145.f_17825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17785 && iVar1 < Global_262145.f_17826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17786 && iVar1 < Global_262145.f_17827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17787 && iVar1 < Global_262145.f_17828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17788 && iVar1 < Global_262145.f_17829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17789 && iVar1 < Global_262145.f_17830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17790 && iVar1 < Global_262145.f_17831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17791 && iVar1 < Global_262145.f_17832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17792 && iVar1 < Global_262145.f_17833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17793 && iVar1 < Global_262145.f_17834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17794 && iVar1 < Global_262145.f_17835)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17795 && iVar1 < Global_262145.f_17836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17796 && iVar1 < Global_262145.f_17837)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17839)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18801 && iVar1 < Global_262145.f_18797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18802 && iVar1 < Global_262145.f_18798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18803 && iVar1 < Global_262145.f_18799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18804 && iVar1 < Global_262145.f_18800)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19643 && iVar1 < Global_262145.f_19651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19644 && iVar1 < Global_262145.f_19652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19645 && iVar1 < Global_262145.f_19653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19646 && iVar1 < Global_262145.f_19654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19647 && iVar1 < Global_262145.f_19655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19648 && iVar1 < Global_262145.f_19656)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20411 && iVar1 < Global_262145.f_20431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20414 && iVar1 < Global_262145.f_20434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20412 && iVar1 < Global_262145.f_20432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20428 && iVar1 < Global_262145.f_20448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20426 && iVar1 < Global_262145.f_20446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20427 && iVar1 < Global_262145.f_20447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20429 && iVar1 < Global_262145.f_20449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20421 && iVar1 < Global_262145.f_20441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20413 && iVar1 < Global_262145.f_20433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20415 && iVar1 < Global_262145.f_20435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20416 && iVar1 < Global_262145.f_20436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20417 && iVar1 < Global_262145.f_20437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20418 && iVar1 < Global_262145.f_20438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20419 && iVar1 < Global_262145.f_20439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20420 && iVar1 < Global_262145.f_20440)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_62()
{
	return 0;
}

int func_63()
{
	return 1;
}

int func_64()
{
	return 1;
}

int func_65()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&iVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&iVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&iVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	sVar1 = unk_0xCF9C6545E179C4AD(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xB3404E397FF56B3B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_58(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]) && unk_0x432757A9E7AAFA96(Global_90238[iVar0], 0))
			{
				if (Global_90238[iVar0] == iParam0 && unk_0xE9559A12052415BE(Global_90238[iVar0]) == unk_0xE9559A12052415BE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[24]))
	{
		if (iParam0 == Global_69607.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69607.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 145;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (Global_90238[iVar0] == iParam0)
			{
				return Global_90248[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_72(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x2A3398C6222EB190(Global_104439.f_7090[iVar9], 0))
		{
			if (unk_0xF71DD5142F86A1BE(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			Global_90238[iVar0] = iParam0;
			Global_90248[iVar0] = iParam1;
			Global_90258[iVar0] = unk_0xE9559A12052415BE(iParam0);
			if (unk_0x2076012573940835(Global_90258[iVar0]))
			{
				Global_90286[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90286[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_74(int iParam0)
{
	if (!func_75(*iParam0))
	{
		unk_0x9B48A5E9A884175D(*iParam0, 5, !Global_104439.f_8946.f_99.f_58[119]);
	}
}

bool func_75(int iParam0)
{
	return unk_0x3BE354A1A1BD6623(iParam0, 5);
}

int func_76(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x9B0BD13ABD4E15D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xF4E4907109CEF0EC(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xBE7294CB9B3BEC34(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xFB84A01F8B3E62E6(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_80(unk_0xE9559A12052415BE(*iParam0), 1) && unk_0xBE7294CB9B3BEC34(*iParam0, 24) != func_79(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5A814851114E34FB(*iParam0, 24, func_79(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_78(iParam0);
	if (func_77(*iParam0))
	{
		unk_0x9DFCC19370F919F3(*iParam0, 1);
		unk_0x014C5648BA70BF8B(*iParam0, 1);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xBE7294CB9B3BEC34(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x961891FDFDEF0C10(iParam0, iVar1, unk_0xBE7294CB9B3BEC34(iParam0, iVar1)), 16);
				iVar2 = unk_0x50B7853132D8438E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x50B7853132D8438E("MNU_CAGE") || iVar2 == unk_0x50B7853132D8438E("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_78(var uParam0)
{
	switch (unk_0xE9559A12052415BE(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xBE7294CB9B3BEC34(*uParam0, 4) == 0)
			{
				unk_0x5A814851114E34FB(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xFB84A01F8B3E62E6(*uParam0, 13);
			}
			break;
	}
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		switch (unk_0xE9559A12052415BE(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x43CF7C22C63E44EA(iParam0, 38);
		iVar1 = unk_0x43CF7C22C63E44EA(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13342)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17784)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17786)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17790)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17787)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17794)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17792)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17797)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19649)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19650)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_81(var uParam0, var uParam1)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
	}
	else if (Global_104439.f_19979.f_261)
	{
		*uParam0 = { Global_104439.f_19979.f_267 };
		*uParam1 = Global_104439.f_19979.f_271;
		return 1;
	}
	return 0;
}

void func_82(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104439.f_8946.f_99.f_58[128] && !Global_104439.f_8946.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104439.f_8946.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104439.f_8946.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (iParam0 == 145 || Global_90248[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xE9559A12052415BE(Global_90238[iVar0]) == func_84(iParam0, iParam1))
				{
					if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_90238[iVar0], 0))
					{
						unk_0x1581691D748490F3(Global_90238[iVar0], 0, 1);
						unk_0xE9F8539D5AF6B052(&(Global_90238[iVar0]));
						Global_90248[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_84(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_85(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_82(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_85(int iParam0)
{
	return iParam0 < 3;
}

void func_86(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_94(&(Global_69607.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x1410333E912D4EC6(Param0, Global_69607.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_87(iVar0);
			}
		}
		iVar0++;
	}
}

void func_87(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_94(&(Global_69607.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x432757A9E7AAFA96(Global_69607.f_139[iParam0], 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Global_69607.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x1581691D748490F3(Global_69607.f_139[iParam0], 1, 1);
				unk_0xE9F8539D5AF6B052(&(Global_69607.f_139[iParam0]));
			}
		}
		Global_69607[iParam0] = 1;
		if (unk_0x2A3398C6222EB190(Global_69607.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_93(iParam0, 0)) && Global_70516.f_66 == 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] != 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] > 3) && (!func_91(0, Global_69607.f_555[0 /*21*/].f_12) || !func_91(1, Global_69607.f_555[0 /*21*/].f_12)))
			{
				func_90(&(Global_104439.f_32291.f_69[Global_69607.f_555[0 /*21*/].f_14 /*78*/]), &Global_70516);
				Global_70594 = Global_104439.f_32291.f_5591;
			}
			func_88(iParam0, 0);
		}
	}
}

void func_88(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_93(iParam0, 0))
		{
			func_89(iParam0, 1, 0);
			func_89(iParam0, 2, 0);
			func_89(iParam0, 3, 0);
			func_89(iParam0, 4, 0);
			func_89(iParam0, 0, 1);
			Global_69607[iParam0] = 1;
		}
	}
	else
	{
		func_89(iParam0, 0, 0);
	}
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_32291[iParam0]), iParam1);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_32291[iParam0]), iParam1);
	}
}

void func_90(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_92(&(Global_104439.f_32291.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_58(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_92(var uParam0)
{
	return *uParam0;
}

bool func_93(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_104439.f_32291[iParam0], iParam1);
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_84(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_84(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_84(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_84(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_84(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_84(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_84(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_84(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_84(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 14);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 28);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 27);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 24);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 10);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 11);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 9);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 22);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_66())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_66())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 2);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 0);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 21);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 30);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 23);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x2A3398C6222EB190(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104439.f_32291.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_95(Global_104439.f_32291.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_32291.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104439.f_32291.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104439.f_32291.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x2A3398C6222EB190(uParam0->f_9, 19))
	{
		if (!func_95(Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_9, 20))
	{
		if (!func_95(Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

bool func_95(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_96(struct<3> Param0, float fParam3)
{
	return func_97(&(Global_98003.f_2875), Param0, fParam3, 0);
}

int func_97(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_107(uParam0))
	{
		if (func_95(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x617C37A9A8C9C822(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_106(uParam0))
		{
			unk_0x963AAB0E6FFD7E02(Param1, 5f, 1, 0, 0, 0);
			func_86(Param1, 5f, 0);
			iVar0 = unk_0x5129A9193468FF77(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x0AF5FA388AAEFF13(iVar0, Param1, 0, 0, 1);
				}
				func_102(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9C4740BA7F0AF553(uParam0->f_12.f_66) || unk_0xA31F3B8AEDBCEB1E(uParam0->f_12.f_66))
				{
					if (!unk_0xE37822A3FA76A27A(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x24B72A49849215AE(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x2076012573940835(unk_0xE9559A12052415BE(iVar0)))
						{
							func_83(uParam0->f_11, 1);
						}
						else if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iVar0)))
						{
							func_83(uParam0->f_11, 2);
						}
					}
					unk_0xDEE5A73213F56CF3(iVar0, 0);
					unk_0x30EFA94609D08404(iVar0, 0);
					unk_0x014C5648BA70BF8B(iVar0, 1);
					func_73(iVar0, uParam0->f_11);
				}
				else if ((!func_99(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xB3404E397FF56B3B(unk_0x49CAADAD1ABAB70A(), "startup_positioning"))
				{
					iVar8 = func_98(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_87(iVar8);
					}
				}
				if (((Global_92762 != 13 && Global_92762 != 10) && Global_92762 != 11) && Global_92762 != 12)
				{
					if (unk_0x50B7853132D8438E(&(Global_92762.f_3)) == Global_70595)
					{
						if (uParam0->f_12.f_66 == Global_104439.f_32291.f_69[21 /*78*/].f_66)
						{
							func_88(24, 0);
							func_87(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_52(iVar0, uParam0->f_11);
				}
				unk_0x9793B48C4C8275F8(uParam0->f_12.f_66);
				Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[iVar0]) && !unk_0x7A6C051038031EFA(Global_69607.f_484[iVar0], 0)) && unk_0x432757A9E7AAFA96(Global_69607.f_484[iVar0], 0))
		{
			unk_0xB3EEFAD2583A0B39(iParam0, &iVar1, &iVar2);
			unk_0xB3EEFAD2583A0B39(Global_69607.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0xE9559A12052415BE(iParam0) == unk_0xE9559A12052415BE(Global_69607.f_484[iVar0]) && unk_0x27F913045BB0E0C6(iParam0) == unk_0x27F913045BB0E0C6(Global_69607.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_99(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_101(iParam0, Global_69607.f_139[38], 0))
			{
				func_87(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_101(iParam0, Global_69607.f_139[43], 1))
			{
				func_87(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_101(iParam0, uVar1[iVar6], 1) && func_100(unk_0xF177E0DA126D71C8(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_95(Param1, 0f, 0f, 0f, 0)) || unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam0, 1), unk_0xF177E0DA126D71C8(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xE9F8539D5AF6B052(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[14]) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x432757A9E7AAFA96(Global_69607.f_484[14], 0))
			{
				if (unk_0xE9559A12052415BE(Global_69607.f_484[14]) == joaat("luxor2") && unk_0x27F913045BB0E0C6(iParam0) == unk_0x27F913045BB0E0C6(Global_69607.f_484[14]))
				{
					func_87(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[20]) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x432757A9E7AAFA96(Global_69607.f_484[20], 0))
			{
				if (unk_0xE9559A12052415BE(Global_69607.f_484[20]) == joaat("swift2") && unk_0x27F913045BB0E0C6(iParam0) == unk_0x27F913045BB0E0C6(Global_69607.f_484[20]))
				{
					func_87(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_100(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x76B3C79DE564AFC6(iParam1) && !unk_0x7A6C051038031EFA(iParam1, 0)) && unk_0x432757A9E7AAFA96(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xB3EEFAD2583A0B39(iParam0, &iVar0, &iVar1);
			unk_0xB3EEFAD2583A0B39(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_102(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x50B7853132D8438E(&(uParam1->f_1)) != 0)
		{
			unk_0x3F8A1297DC6573A7(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE10B4E7E4009175A())
		{
			unk_0xD84C2B9A469EBB35(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_54(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_54(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_54(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_54(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xDDCE14D69DD34587(iParam0, 0);
			if (unk_0xBE7294CB9B3BEC34(iParam0, 5) != -1)
			{
				unk_0xDDCE14D69DD34587(iParam0, 1);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 13))
		{
			unk_0xB42601D692EB8047(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC459B9A3E3C57829(iParam0);
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 12))
		{
			unk_0xFE4330842941D50F(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4E06F09BF15B5520(iParam0);
		}
		unk_0xBF9154ADAF4F11E1(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD6B0D4015CC61FF4(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x2A3398C6222EB190(uParam1->f_77, 15) || func_105(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_104())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xDBEB3DBC65F0B19E(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
		}
		else
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
			unk_0x79C5F51FA95DC57C(iParam0, uParam1->f_65);
		}
		unk_0xC587296050B2CA93(iParam0, !unk_0x2A3398C6222EB190(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xFABEFEE17018AE2A(iParam0, uParam1->f_70);
		}
		unk_0x368756789FF0788C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA199088C3081D928(iParam0, 2, unk_0x2A3398C6222EB190(uParam1->f_77, 28));
		unk_0xA199088C3081D928(iParam0, 3, unk_0x2A3398C6222EB190(uParam1->f_77, 29));
		unk_0xA199088C3081D928(iParam0, 0, unk_0x2A3398C6222EB190(uParam1->f_77, 30));
		unk_0xA199088C3081D928(iParam0, 1, unk_0x2A3398C6222EB190(uParam1->f_77, 31));
		unk_0x5028E664ECBD1407(iParam0, unk_0x2A3398C6222EB190(uParam1->f_77, 10));
		if (unk_0xD546CB3F87365B85(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE4707C143B24BAB3(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iParam0)))
			{
				if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_103(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_103(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x2808AF25A6A6B7CE(iParam0, 1);
			}
			else
			{
				unk_0x1C22AE46A9DC4530(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_76(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x1DBFCF939B3B47D0(uParam1->f_66) && !unk_0x9C4740BA7F0AF553(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, func_54(iVar2 + 1)))
				{
					if (!unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
					{
						unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
				{
					unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0xE9559A12052415BE(iParam0) == joaat("sheava") || unk_0xE9559A12052415BE(iParam0) == joaat("omnis")) || unk_0xE9559A12052415BE(iParam0) == joaat("le7b"))
		{
			if (unk_0xBE7294CB9B3BEC34(iParam0, 0) == -1)
			{
				unk_0x9B48A5E9A884175D(iParam0, 1, false);
			}
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_77, 23))
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, 22))
				{
					unk_0xC82776FBB5D72B5A(iParam0, 2);
				}
				else
				{
					unk_0xC82776FBB5D72B5A(iParam0, 3);
				}
			}
			else
			{
				unk_0xC82776FBB5D72B5A(iParam0, 4);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 27))
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = unk_0xBE7294CB9B3BEC34(iParam0, 24);
		iVar1 = unk_0xE69CED5522DA627F(iParam0, 24);
		unk_0x61038A1B29CB9EEB(iParam0, uParam1);
		if (unk_0xE9559A12052415BE(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xFB84A01F8B3E62E6(iParam0, 24);
		}
		else
		{
			unk_0x5A814851114E34FB(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_104()
{
	return unk_0x43456EBBDC27D696(joaat("mpindependence"));
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x496D18970B708258("MPBitset", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				}
				return unk_0x2A3398C6222EB190(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_106(var uParam0)
{
	if (func_107(uParam0))
	{
		if (unk_0x772F801619C83779(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_107(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_58(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_100(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_108()
{
	return func_106(&(Global_98003.f_2875));
}

void func_109()
{
	func_110(&(Global_98003.f_2875));
}

void func_110(var uParam0)
{
	if (func_107(uParam0))
	{
		unk_0xBE91026C1FC72180(uParam0->f_12.f_66);
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x9C4740BA7F0AF553(Global_98003.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x1DBFCF939B3B47D0(Global_98003.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam2 == 0 && func_36(Global_98003.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0xF9CDF5CA6A1D6756(Global_98003.f_2875.f_12.f_66))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_112())
		{
			return 0;
		}
	}
	return 1;
}

int func_112()
{
	float fVar0;
	
	if (!func_113())
	{
		return 0;
	}
	if ((unk_0x9C4740BA7F0AF553(Global_98003.f_2875.f_12.f_66) || unk_0xF9CDF5CA6A1D6756(Global_98003.f_2875.f_12.f_66)) || unk_0x22237535B3A68DF9(Global_98003.f_2875.f_12.f_66))
	{
		return 0;
	}
	fVar0 = unk_0x303166825C94FAEA(Global_98003.f_2875.f_12.f_66);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return func_107(&(Global_98003.f_2875));
}

int func_114()
{
	if (Global_92762 == 10 || Global_92762 == 9)
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	int iVar0;
	int iVar1;
	int iVar2[89];
	
	if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
	{
		iLocal_1192 = unk_0x7899A2987EB03783();
		if (func_145(iLocal_1192))
		{
			iVar0 = unk_0xE9559A12052415BE(iLocal_1192);
			if (func_36(iVar0))
			{
				return 0;
			}
			if (((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2"))
			{
				return 0;
			}
			if (((unk_0x34C854420D02F57B(iVar0) || unk_0x9C4740BA7F0AF553(iVar0)) || unk_0x1DBFCF939B3B47D0(iVar0)) || unk_0xF9CDF5CA6A1D6756(iVar0))
			{
				return 0;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("pranger");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = joaat("police");
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = joaat("boxville3");
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = joaat("blimp");
			iVar2[81] = joaat("blimp2");
			iVar2[82] = joaat("submersible");
			iVar2[83] = joaat("submersible2");
			iVar2[84] = joaat("blazer3");
			iVar2[85] = joaat("pony2");
			iVar2[86] = joaat("rumpo2");
			iVar2[87] = joaat("taxi");
			iVar2[88] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

void func_116(var uParam0)
{
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0xE4E08EF8CF4469E9(*uParam0, 0);
		unk_0x0C4BDC77192798AE(uParam0);
	}
}

void func_117(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0xCC234795142FC2D2(*iParam0))
		{
			unk_0x1581691D748490F3(*iParam0, 1, 0);
		}
		if (func_145(*iParam0))
		{
			if (unk_0xCC234795142FC2D2(*iParam0) && unk_0xC9FBF92709010AC3(*iParam0, 1))
			{
				if (func_10(unk_0x0031992CA618A445()))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *iParam0, 0))
					{
						unk_0x28BB69BE14577487(iParam0);
						return;
					}
				}
				unk_0xE9F8539D5AF6B052(iParam0);
			}
		}
		else
		{
			if (func_10(unk_0x0031992CA618A445()))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *iParam0, 0))
				{
					unk_0x28BB69BE14577487(iParam0);
					return;
				}
			}
			unk_0xE9F8539D5AF6B052(iParam0);
		}
	}
}

void func_118(int iParam0, bool bParam1)
{
	if (unk_0xF9FC07CC13402AEF())
	{
		if (!unk_0x229840854A80E0D9())
		{
			unk_0x8351F65655759E0C(iParam0);
			if (bParam1)
			{
				while (!unk_0x5114FCEE2A997B95())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

int func_119(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
			{
				unk_0x8351F65655759E0C(2500);
				unk_0x5535802AD071DF09();
			}
			if (bParam9)
			{
				unk_0xCF304E352457AD63(1);
			}
			unk_0x8DF1001322B980EF(0.2f);
			if (func_136(iParam5, 4))
			{
				if (unk_0x1F1D255CB6501243("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xEBD23F68B1A617FC(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x9BC6C9E77AAC792E("STRING");
			unk_0xDBB8FCB00B701798(6);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
			func_135(sParam3);
			unk_0x32F9127910F63DFA(100);
			unk_0xE8240315678FDE8E(true);
			unk_0xF55F467DF47A6BB8();
			if (func_136(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "TRANSITION_UP");
					unk_0x90495002CD46BD88(uParam1->f_134);
					unk_0x1C703A54AB4B12F6();
					uParam1->f_136 = 1;
				}
			}
			if (!func_136(iParam5, 1))
			{
				unk_0xC0E1B08F53665F80(0);
			}
			func_134(&(uParam1->f_10), 0, 1, 1, 1);
			func_133(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_133(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_136(iParam5, 4))
			{
				unk_0x18F1BFAF88AC511B(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_136(iParam5, 8))
			{
				switch (func_137())
				{
					case 0:
						unk_0xF177BD202464664F("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xF177BD202464664F("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xF177BD202464664F("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_132(&(uParam1->f_1)))
			{
				func_131(&(uParam1->f_1));
			}
			if (func_136(iParam5, 2))
			{
				if (!func_132(&(uParam1->f_4)))
				{
					func_131(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x2745EC8E79BD57E0();
			if (func_136(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "TRANSITION_UP");
					unk_0x90495002CD46BD88(uParam1->f_134);
					unk_0x1C703A54AB4B12F6();
					uParam1->f_136 = 1;
				}
			}
			unk_0x38C75B31337B3454(iParam6);
			func_129(uParam0, 0, 0);
			if (!func_136(iParam5, 16) && (func_127(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x5114FCEE2A997B95()))
			{
				func_121(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xB540BA8B3C93460F();
				if (unk_0xBF946CEEECD8C935(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x18F1BFAF88AC511B(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_136(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_120(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xBF946CEEECD8C935(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_136(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_120(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_136(iParam5, 2))
			{
				if (func_127(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_136(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_120(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_129(uParam0, 0, 0);
			unk_0x8DF1001322B980EF(1f);
			if (uParam1->f_138 || !((unk_0xB3404E397FF56B3B("stunt_plane_races", unk_0x49CAADAD1ABAB70A()) || unk_0xB3404E397FF56B3B("pilot_school", unk_0x49CAADAD1ABAB70A())) || (unk_0xB3404E397FF56B3B("bj", unk_0x49CAADAD1ABAB70A()) && unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))))
			{
				unk_0x18D7C8000EDEAAB4(2500);
			}
			if (func_136(iParam5, 64) && uParam1->f_138)
			{
				unk_0x8351F65655759E0C(500);
			}
			func_3(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xCF304E352457AD63(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_127(&(uParam1->f_4)) <= 0.1f)
			{
				func_129(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_120(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x7F165E259CFAC8B8(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_121(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146()) || unk_0x5114FCEE2A997B95()) || unk_0xC19E9068E7E4F6B0())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_126(uParam0))
	{
		return;
	}
	unk_0x2745EC8E79BD57E0();
	unk_0x38C75B31337B3454(iParam2);
	if (!func_136(uParam0->f_1, 256) || (func_136(uParam0->f_1, 8192) && unk_0xDE25F26B6B16CF7A(2)))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_CLEAR_SPACE");
		unk_0x90495002CD46BD88(fParam1);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_MAX_WIDTH");
		unk_0x90495002CD46BD88(fParam5);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1C703A54AB4B12F6();
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(func_136(uParam0->f_1, 4096));
			unk_0x1C703A54AB4B12F6();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xFF512A008EA368FF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xFF512A008EA368FF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x32F9127910F63DFA(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xE344F89A3A395F9C(uVar0, uVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x295E4023D39A7295(iVar0, iVar1, bVar2);
						}
						if (!unk_0x0BD3CCFB6C6CFA91(sVar3))
						{
							func_125(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x0BD3CCFB6C6CFA91(uParam0->f_2[iVar6 /*15*/]))
					{
						func_135(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (func_136(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xE8240315678FDE8E(true);
								unk_0x32F9127910F63DFA(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xE8240315678FDE8E(false);
								unk_0x32F9127910F63DFA(-1);
							}
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar6++;
		}
		fVar8 = func_124(bParam4, func_124(func_136(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEBD23F68B1A617FC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x90495002CD46BD88(fVar8);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(80f);
		unk_0x1C703A54AB4B12F6();
		func_123(&(uParam0->f_1), 256);
		func_122(&(uParam0->f_1), 128);
	}
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 0, 0);
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_125(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
}

int func_126(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			func_123(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_127(var uParam0)
{
	if (func_132(uParam0))
	{
		if (func_128(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_128(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

int func_129(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_132(&(uParam0->f_2)))
	{
		func_3(&(uParam0->f_2));
	}
	unk_0xBD1C47D856010F09(14);
	if (!bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x9148803485DEDF45(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_127(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_130(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_130(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_131(var uParam0)
{
	if (!func_132(uParam0))
	{
		func_3(uParam0);
	}
}

bool func_132(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

int func_133(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_134(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA429A9A606DF2BC3("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 32);
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		func_123(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xA51E81D5CF49E5C7(*uParam0, 1);
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (bParam3)
		{
			func_123(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_123(&(uParam0->f_1), 8192);
	}
}

void func_135(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

bool func_136(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_137()
{
	func_138();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_138()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_141(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_140(unk_0x0031992CA618A445());
			if (func_85(iVar0) && (!func_139(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_85(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_139(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_141(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_141(int iParam0)
{
	if (func_85(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_142(int iParam0)
{
	if (Global_14604)
	{
		func_143(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_21())
	{
		Global_14443.f_1 = 3;
	}
}

void func_143(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_144(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_146(int iParam0)
{
	int iVar0;
	
	func_147();
	if (iParam0 == 1 && unk_0xA761A0B6072010C8(Local_18.f_1))
	{
		unk_0x0C4BDC77192798AE(&(Local_18.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		func_116(&(Local_907[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_147()
{
	if (unk_0xA761A0B6072010C8(uLocal_1184))
	{
		unk_0x0C4BDC77192798AE(&uLocal_1184);
	}
	if (unk_0xA761A0B6072010C8(uLocal_1185))
	{
		unk_0x0C4BDC77192798AE(&uLocal_1185);
	}
	if (iLocal_1186 != 0)
	{
		unk_0x1EC5FCC706B5D133(iLocal_1186);
	}
}

void func_148()
{
	Global_14611 = 0;
	func_149();
}

void func_149()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

int func_150()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_151()
{
	int iVar0;
	
	unk_0x76FC214916E76AC2();
	unk_0x68F19FECF821F7A2(0f);
	switch (iLocal_631)
	{
		case 0:
			unk_0x7CDDB154852DA508();
			if (func_9(iLocal_1475) && func_9(unk_0x0031992CA618A445()))
			{
				unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iLocal_1475, -1, 2050, 4);
			}
			unk_0x4EDE34FBADD967A6(0);
			unk_0x7CDDB154852DA508();
			func_196(&Local_1261, 1, 0);
			func_183(&uLocal_1837, &(uLocal_1450[0]));
			func_120(&(Local_1261.f_14));
			iLocal_1677 = unk_0x31CD6E9F83C10233() + 2500;
			iLocal_1835 = 1;
			iLocal_1836 = 1;
			iLocal_631 = 1;
			break;
		
		case 1:
			unk_0x7CDDB154852DA508();
			if (func_182(&Local_1261))
			{
				iLocal_631 = 2;
			}
			if (func_9(iLocal_1475))
			{
				if (unk_0x31CD6E9F83C10233() > iLocal_1677)
				{
					func_181();
				}
				if ((iLocal_1836 && unk_0x4CB2F72EA418C083(iLocal_1475, sLocal_1459, "_grid_girl_end", 3)) && unk_0x2D1A3279FE1D23D4(iLocal_1475, sLocal_1459, "_grid_girl_end") > 0.165f)
				{
					unk_0x71CE8B25981385FD(-1, "KISS", iLocal_1475, "ROAD_RACE_SOUNDSET", 0, 0);
					iLocal_1836 = 0;
				}
			}
			break;
		
		case 2:
			func_153();
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			if (func_9(unk_0x0031992CA618A445()))
			{
				unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
			}
			func_152(&Local_1261);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x2A3EA4C0BCED85F2(Local_1261.f_5[iVar0]))
				{
					unk_0x46B35AD2F641A4A3(Local_1261.f_5[iVar0], 0);
				}
				iVar0++;
			}
			if (Local_636.f_1 == 3)
			{
				func_521(0);
			}
			else
			{
				func_521(1);
			}
			break;
	}
}

void func_152(var uParam0)
{
	if (unk_0x2A3EA4C0BCED85F2(uParam0->f_5[2]))
	{
		*uParam0 = 0;
		unk_0x6D0D109B83202E2C(0, 0, 3, 0);
	}
}

void func_153()
{
	float fVar0;
	
	if (Local_636.f_1 != 3)
	{
		fVar0 = unk_0xBBDA792448DB5A89(Local_636.f_3);
		if (Local_642.f_11 == 1)
		{
			fVar0 = (fVar0 * 4.5f);
			func_154(1, 1, unk_0xF2DB717A73826179(fVar0), 0, 0);
		}
		else if (Local_642.f_11 == 2)
		{
			func_154(1, 1, unk_0xF2DB717A73826179(fVar0), 0, 0);
		}
		else if (Local_642.f_11 == 3)
		{
			fVar0 = (fVar0 * 0.5f);
			func_154(1, 1, unk_0xF2DB717A73826179(fVar0), 0, 0);
		}
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104439.f_27911[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_155(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x2553A7EB99AABF55(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xE931A869061F7BD2(iVar1, iVar0, 1);
	}
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_179(99, 1);
					func_178(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_163(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_162(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_162(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA1719FD655B44EB2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_162(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_161(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_158(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_158(iVar1);
	}
	iVar5 = (Global_53028[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53028[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53028[iVar2] = 2147483647;
				}
				else
				{
					Global_53028[iVar2] = (Global_53028[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_178(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53028[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53028[iVar2];
			Global_53028[iVar2] = (Global_53028[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_2[Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104439.f_20425.f_233[iVar2 /*69*/]++;
		Global_104439.f_20425.f_233[iVar2 /*69*/].f_1++;
		if (Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104439.f_20425.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_157(iParam0);
	if (Global_35813 == 15)
	{
		func_156(0);
	}
	return 1;
}

void func_156(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104439.f_20425.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53036[iVar0 /*3*/][0] = Global_104439.f_20425[iVar0];
		Global_53036.f_31[iVar0 /*3*/][0] = Global_104439.f_20425.f_11[iVar0];
		Global_53036.f_62[iVar0 /*3*/][0] = Global_104439.f_20425.f_22[iVar0];
		Global_53036.f_93[iVar0 /*3*/][0] = Global_104439.f_20425.f_33[iVar0];
		Global_53036.f_124[iVar0 /*3*/][0] = Global_104439.f_20425.f_44[iVar0];
		Global_53036.f_155[iVar0 /*3*/][0] = Global_104439.f_20425.f_55[iVar0];
		Global_53036.f_186[iVar0 /*3*/][0] = Global_104439.f_20425.f_66[iVar0];
		Global_53036.f_217[iVar0 /*3*/][0] = Global_104439.f_20425.f_77[iVar0];
		Global_53036.f_248[iVar0 /*3*/][0] = Global_104439.f_20425.f_88[iVar0];
		if (!bParam0)
		{
			Global_53036[iVar0 /*3*/][1] = Global_104439.f_20425[iVar0];
			Global_53036.f_31[iVar0 /*3*/][1] = Global_104439.f_20425.f_11[iVar0];
			Global_53036.f_62[iVar0 /*3*/][1] = Global_104439.f_20425.f_22[iVar0];
			Global_53036.f_93[iVar0 /*3*/][1] = Global_104439.f_20425.f_33[iVar0];
			Global_53036.f_124[iVar0 /*3*/][1] = Global_104439.f_20425.f_44[iVar0];
			Global_53036.f_155[iVar0 /*3*/][1] = Global_104439.f_20425.f_55[iVar0];
			Global_53036.f_186[iVar0 /*3*/][1] = Global_104439.f_20425.f_66[iVar0];
			Global_53036.f_217[iVar0 /*3*/][1] = Global_104439.f_20425.f_77[iVar0];
			Global_53036.f_248[iVar0 /*3*/][1] = Global_104439.f_20425.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53028[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE931A869061F7BD2(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE931A869061F7BD2(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE931A869061F7BD2(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_158(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_160() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_160() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_159(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_160()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_161(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

bool func_162(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_160() /*11035*/].f_7550.f_10, iParam0);
}

int func_163(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x38260021B4E87C3F(27))
	{
		return 0;
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x2553A7EB99AABF55(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x2553A7EB99AABF55(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE931A869061F7BD2(joaat("num_cash_spent"), iVar1, 1);
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_164(27, 1);
	return 1;
}

int func_164(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_165(iParam0, iParam1);
}

int func_165(int iParam0, int iParam1)
{
	if (func_139(14) && !func_176(iParam0))
	{
		return 0;
	}
	if (unk_0x38260021B4E87C3F(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25468 != 0 && !Global_70785)
	{
		return 0;
	}
	if (func_175(&Global_2608378))
	{
		if (func_173(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_166(&Global_2608378, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x16E13F8FE3B91C92(iParam0))
		{
			return 0;
		}
		if (unk_0x38260021B4E87C3F(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_166(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_139(14) && !func_176(iParam1))
	{
		return 0;
	}
	if (func_173(uParam0, iParam1))
	{
		return 0;
	}
	if (func_172(uParam0) < 0f)
	{
		func_171(uParam0, 0);
	}
	func_169(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_167(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_167(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_139(14) && !func_176(iParam1))
	{
		return 0;
	}
	if (func_173(uParam0, iParam1))
	{
		return 0;
	}
	if (func_172(uParam0) < 0f)
	{
		func_171(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_168(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_168(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_169(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_170(uParam0, iVar0);
		iVar0++;
	}
	func_171(uParam0, (Global_2608377 - 0.5f));
}

void func_170(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_171(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_172(var uParam0)
{
	return uParam0->f_72;
}

bool func_173(var uParam0, int iParam1)
{
	return func_174(uParam0, iParam1) != -1;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_175(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_180()
{
	int iVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53028[0] == iVar0)
		{
			Global_53028[0] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53028[1] == iVar0)
		{
			Global_53028[1] = iVar0;
		}
		unk_0x2553A7EB99AABF55(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53028[2] == iVar0)
		{
			Global_53028[2] = iVar0;
		}
	}
}

void func_181()
{
	struct<3> Var0;
	var uVar3;
	
	if (iLocal_1835)
	{
		if (func_9(iLocal_1475))
		{
			if (Local_636.f_0 == 0)
			{
				Var0 = { -193.8895f, -1608.292f, 32.9962f };
			}
			else if (Local_636.f_0 == 1)
			{
				Var0 = { 315.519f, 334.9548f, 104.469f };
			}
			else if (Local_636.f_0 == 2)
			{
				Var0 = { -679.8616f, -2360.6f, 12.86522f };
			}
			else if (Local_636.f_0 == 3)
			{
				Var0 = { 816.6395f, -1170.496f, 27.6677f };
			}
			else if (Local_636.f_0 == 4)
			{
				Var0 = { -997.5678f, -1153.997f, 1.15735f };
			}
			else
			{
				Var0 = { unk_0x261E7847B591A8DC(unk_0xF177E0DA126D71C8(iLocal_1475, 1), unk_0x69F9721375CE60CF(iLocal_1475), 0f, 5f, 0f) };
			}
			unk_0x173325AAF2CD766A(&uVar3);
			unk_0x276406356F4120BB(0, Var0, 1f, -1, 1048576000, 0, 1193033728);
			if (Local_636.f_0 == 2)
			{
				unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_SMOKING", 0, 1);
			}
			else
			{
				unk_0x9BE63CB00B240063(0, fLocal_1483, 0);
			}
			unk_0xF81AD3C937316CCA(uVar3);
			if (unk_0x4CB2F72EA418C083(iLocal_1475, sLocal_1459, "_grid_girl_end", 3))
			{
				unk_0xEBC568297077D190(iLocal_1475, sLocal_1459, "_grid_girl_end", -1056964608);
			}
			unk_0xD706D9D85701BFBD(iLocal_1475);
			unk_0xEDD5437C49B7B1F8(iLocal_1475, uVar3);
			unk_0xF7B450DAAEDE7290(iLocal_1475, joaat("MotionState_Walk"), 0, 0, 1);
			unk_0x1F5B34056C3CB80B(&uVar3);
			iLocal_1835 = 0;
		}
	}
}

int func_182(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x2A3EA4C0BCED85F2(uParam0->f_5[4]))
			{
				if (!unk_0x0B7CA263460475D0(uParam0->f_5[4]))
				{
					uParam0->f_5[5] = unk_0x6BE82EFE6EE60BF4(26379945, uParam0->f_138[5 /*3*/], uParam0->f_163[5 /*3*/], 25.3742f, 0, 2);
					unk_0xD0E2527DD961F86C(uParam0->f_5[5], uParam0->f_5[4], 4500, 0, 1);
					unk_0xE983D49A61E9F0FF(uParam0->f_5[5], "HAND_SHAKE", 0.3f);
					unk_0x46B35AD2F641A4A3(uParam0->f_5[4], 0);
					unk_0x18F1BFAF88AC511B(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
			}
			else if (unk_0x2A3EA4C0BCED85F2(uParam0->f_5[5]))
			{
				if (!unk_0x0B7CA263460475D0(uParam0->f_5[5]))
				{
					uParam0->f_5[6] = unk_0x6BE82EFE6EE60BF4(26379945, uParam0->f_138[6 /*3*/], uParam0->f_163[6 /*3*/], 50f, 0, 2);
					uParam0->f_5[7] = unk_0x6BE82EFE6EE60BF4(26379945, uParam0->f_138[7 /*3*/], uParam0->f_163[7 /*3*/], 50f, 0, 2);
					unk_0x55CC07D5416539C8(uParam0->f_5[6], 1);
					unk_0xD0E2527DD961F86C(uParam0->f_5[7], uParam0->f_5[6], 2000, 3, 1);
					unk_0xE983D49A61E9F0FF(uParam0->f_5[7], "HAND_SHAKE", 0.3f);
					unk_0x46B35AD2F641A4A3(uParam0->f_5[5], 0);
				}
			}
			else if (unk_0x2A3EA4C0BCED85F2(uParam0->f_5[7]))
			{
				if (!unk_0x0B7CA263460475D0(uParam0->f_5[7]))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_183(var uParam0, var uParam1)
{
	if (unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2())
	{
		func_195(*uParam1);
		func_187(&Local_175);
	}
	func_184(uParam0);
}

void func_184(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x7F165E259CFAC8B8(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(false);
			unk_0x1C703A54AB4B12F6();
		}
		unk_0x7F165E259CFAC8B8(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xCF304E352457AD63(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71053)
	{
		if (!unk_0xE33BF8B30BC14A7C(unk_0xED1168B8D2D313FA()))
		{
			if (!Global_71054)
			{
				if (unk_0x5114FCEE2A997B95() && !func_186(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_185(0);
}

void func_185(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

bool func_186(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_187(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_193(uParam0);
		func_192(uParam0);
		func_191(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_189();
	}
	if (unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
	{
		unk_0xB3E27A9E412BBDF8("LEADERBOARD_SCENE");
	}
	if (unk_0xE096BC82D913B3DB())
	{
		func_188(&(Global_1840922.f_49));
	}
	Global_2501777.f_3924 = 0;
}

void func_188(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_189()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_190(&(Global_1835390.f_2780));
	func_188(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_188(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_188(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_190(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_191(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_188(&(Global_1835390.f_2830));
}

void func_192(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_188(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_193(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_188(&(Global_1835008.f_1));
	unk_0x6D26D20288D66A19(*uParam2, uParam2->f_1, -1);
}

void func_195(var uParam0)
{
	unk_0x7F165E259CFAC8B8(&uParam0);
}

void func_196(var uParam0, bool bParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x2A3EA4C0BCED85F2(uParam0->f_5[2]))
	{
		*uParam0 = 0;
		unk_0xC84CB7879942C3BA("MinigameTransitionIn");
		unk_0x18F1BFAF88AC511B(-1, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
		if (bParam1)
		{
			uParam0->f_5[3] = unk_0x6BE82EFE6EE60BF4(26379945, uParam0->f_138[3 /*3*/], uParam0->f_163[3 /*3*/], 25.3742f, 0, 2);
			unk_0x55CC07D5416539C8(uParam0->f_5[3], 1);
			uParam0->f_5[4] = unk_0x6BE82EFE6EE60BF4(26379945, uParam0->f_138[4 /*3*/], uParam0->f_163[4 /*3*/], 25.3742f, 0, 2);
			unk_0xD0E2527DD961F86C(uParam0->f_5[4], uParam0->f_5[3], 600, 1, 1);
			unk_0xCBD63CEA31220CE4(uParam0->f_5[3], 1f);
			unk_0xE983D49A61E9F0FF(uParam0->f_5[3], "HAND_SHAKE", 0.3f);
			unk_0xCBD63CEA31220CE4(uParam0->f_5[4], 1f);
			unk_0xE983D49A61E9F0FF(uParam0->f_5[4], "HAND_SHAKE", 0.3f);
		}
		else
		{
			Var0 = { unk_0xCD59EF1D7098A4B4(unk_0x0031992CA618A445(), 0f, -5f, 1f) };
			Var3 = { unk_0xC82AF3CAB48E70F0(unk_0x0031992CA618A445(), 2) };
			uParam0->f_5[3] = unk_0x6BE82EFE6EE60BF4(26379945, Var0 + Vector(20f, 0f, 0f), Var3 + Vector(0f, 0f, 55f), 50f, 0, 2);
			unk_0x55CC07D5416539C8(uParam0->f_5[3], 1);
			uParam0->f_5[4] = unk_0x6BE82EFE6EE60BF4(26379945, Var0, Var3, 50f, 0, 2);
			unk_0xD0E2527DD961F86C(uParam0->f_5[4], uParam0->f_5[3], 600, 1, 1);
			unk_0xCBD63CEA31220CE4(uParam0->f_5[3], 1f);
			unk_0xCBD63CEA31220CE4(uParam0->f_5[4], 1f);
			unk_0x46B35AD2F641A4A3(uParam0->f_5[2], 0);
			iParam2 = iParam2;
		}
		unk_0xF177BD202464664F("MinigameTransitionOut", 0, 0);
	}
}

void func_197()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	unk_0xC9621A9AD282CC14(2, 200, 1);
	unk_0x76FC214916E76AC2();
	unk_0x68F19FECF821F7A2(0f);
	switch (iLocal_631)
	{
		case 0:
			func_359(joaat("a_f_y_genhot_01"));
			unk_0x9F62787D280BF2EC(sLocal_1459);
			iLocal_1453 = (unk_0x31CD6E9F83C10233() - Local_642.f_5);
			iLocal_1454 = -1;
			iLocal_1680 = unk_0x31CD6E9F83C10233() + 1000;
			iLocal_1829 = 1;
			iLocal_1830 = 0;
			iLocal_1831 = 0;
			iLocal_1833 = 1;
			if (Local_654.f_247 < 2)
			{
				Local_642.f_10 = iLocal_1453;
			}
			unk_0x8C361F37C04084F4(1);
			iLocal_619 = 1;
			func_350(Local_636.f_0);
			func_347(&Local_1261);
			bLocal_1832 = unk_0xED5FFF2E0422067E();
			func_342(&uLocal_1837, Local_636.f_0, Local_642.f_11, Local_654.f_249 + 1, iLocal_1453);
			if (func_145(Local_18.f_0))
			{
				unk_0xE38E0905DE29B428(Local_18.f_0, 0);
			}
			iVar0 = unk_0xED1168B8D2D313FA();
			if (unk_0x4B0365EB2D59E6FA(iVar0))
			{
				unk_0xB568492AC80B8832(iVar0, 0, 0);
			}
			if (Local_636.f_1 == 3)
			{
				unk_0xC154C4DED6F310CC((unk_0x31CD6E9F83C10233() - iLocal_1678), 7, Local_636.f_0);
			}
			else
			{
				unk_0xC154C4DED6F310CC((unk_0x31CD6E9F83C10233() - iLocal_1678), 8, Local_636.f_0);
				fVar1 = unk_0x69F9721375CE60CF(unk_0x0031992CA618A445());
				fVar2 = func_341(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[0 /*3*/]);
				fVar3 = (fVar1 - fVar2);
				if (fVar3 < 20f && fVar3 > -20f)
				{
					unk_0x9EA0A7060EF3D099(unk_0x0031992CA618A445(), Local_18.f_0, Local_654[0 /*3*/], 25f, 1, unk_0xE9559A12052415BE(Local_18.f_0), 17563684, 3f, 5f);
				}
			}
			iLocal_631 = 1;
			break;
		
		case 1:
			unk_0x7CDDB154852DA508();
			func_350(Local_636.f_0);
			if (unk_0xFF512A008EA368FF(2))
			{
				unk_0xB540BA8B3C93460F();
			}
			if (iLocal_1187 != 0)
			{
				if (unk_0x2A3EA4C0BCED85F2(Local_1261.f_5[0]))
				{
					unk_0x1EC5FCC706B5D133(iLocal_1187);
					iLocal_1187 = 0;
				}
			}
			if (func_145(Local_18.f_0))
			{
				if (func_339(&Local_18, &Local_1261, Local_636.f_0))
				{
					if (func_326())
					{
						if (Local_636.f_1 == 3 && unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
						{
							if (func_145(Local_18.f_0))
							{
								if (func_324(Local_18.f_0, 20f, 1, 1056964608, 0, 1, 0) && unk_0x17E6BF40FED605C1(Local_18.f_0))
								{
									unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 1);
								}
							}
						}
						if (iLocal_1454 < 0)
						{
							iLocal_1454 = unk_0x31CD6E9F83C10233() + 2000;
							if (Local_636.f_0 == 4 && Local_642.f_11 != 1)
							{
								unk_0x0A69FBBF51E1A08F(Local_18.f_0, -1051.519f, -1147.217f, 1.0868f, 1, 0, 0, 1);
								unk_0x5082D1A6D078DB20(Local_18.f_0, 303.3337f);
								unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
								unk_0x5EF58B2B49A4503B(Local_18.f_0, 0f);
							}
						}
						if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0) && unk_0x00E962E9D49FD6C4(Local_18.f_0, -1, 0))
						{
							unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), Local_18.f_0, -1);
						}
						if (Local_636.f_1 == 3)
						{
							func_323();
						}
						else
						{
							func_32(1);
						}
						if (Local_1261.f_0 == 3)
						{
							func_321(Local_18.f_0);
						}
						if (((unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2()) && iLocal_1454 > 0) && unk_0x31CD6E9F83C10233() > iLocal_1454)
						{
							if (iLocal_1830)
							{
								if (unk_0xD887E21676314450(2, 202))
								{
									unk_0x18F1BFAF88AC511B(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
									func_120(&(Local_1261.f_14));
									func_347(&Local_1261);
									iLocal_1830 = 0;
								}
								else if (iLocal_1831)
								{
									if (func_320(&Local_175))
									{
										func_120(&(Local_1261.f_14));
										func_134(&(Local_1261.f_14), 0, 0, 1, 1);
										func_133(&(Local_1261.f_14), "HUD_INPUT43", 2, 202, 1, 1, 0);
										func_133(&(Local_1261.f_14), "SCLB_PROFILE", 2, 217, 1, 1, 0);
										iLocal_1831 = 0;
									}
								}
							}
							else if (unk_0xD887E21676314450(2, 211))
							{
								unk_0x18F1BFAF88AC511B(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								func_120(&(Local_1261.f_14));
								func_134(&(Local_1261.f_14), 0, 0, 1, 1);
								func_133(&(Local_1261.f_14), "HUD_INPUT43", 2, 202, 1, 1, 0);
								if (func_320(&Local_175))
								{
									func_133(&(Local_1261.f_14), "SCLB_PROFILE", 2, 217, 1, 1, 0);
									iLocal_1831 = 0;
								}
								else
								{
									iLocal_1831 = 1;
								}
								iLocal_1830 = 1;
							}
						}
						if (iLocal_1833)
						{
							if (Local_642.f_11 <= 1)
							{
								unk_0x18F1BFAF88AC511B(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 1);
							}
							else
							{
								unk_0x18F1BFAF88AC511B(-1, "RACE_PLACED", "HUD_AWARDS", 1);
							}
							iLocal_1833 = 0;
						}
						if (iLocal_1830)
						{
							if (unk_0xED5FFF2E0422067E())
							{
								func_246(&uLocal_1450);
								func_121(&(Local_1261.f_14), 1128792064, 1, 0, 1, 1065353216);
							}
							else if (func_234(&iLocal_1679, 0))
							{
								iLocal_1679 = 0;
								func_120(&(Local_1261.f_14));
								func_347(&Local_1261);
								iLocal_1830 = 0;
								bLocal_1832 = false;
							}
						}
						else
						{
							func_233(&uLocal_1837);
							if (unk_0xED5FFF2E0422067E() != bLocal_1832)
							{
								func_120(&(Local_1261.f_14));
								func_347(&Local_1261);
								bLocal_1832 = unk_0xED5FFF2E0422067E();
							}
							if (unk_0x31CD6E9F83C10233() > iLocal_1454)
							{
								func_121(&(Local_1261.f_14), 1128792064, 1, 0, 1, 1065353216);
								if (unk_0xD887E21676314450(2, 215))
								{
									func_232(&uLocal_1837);
									unk_0x8903B4129E141B11(Local_18.f_0, 1);
									iLocal_631 = 2;
								}
								else if (unk_0xD887E21676314450(2, 216))
								{
									unk_0x18F1BFAF88AC511B(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
									unk_0x4EDE34FBADD967A6(0);
									unk_0x7CDDB154852DA508();
									func_183(&uLocal_1837, &(uLocal_1450[0]));
									func_153();
									func_120(&(Local_1261.f_14));
									func_229();
									if (func_145(Local_18.f_0))
									{
										unk_0x8903B4129E141B11(Local_18.f_0, 1);
									}
									if (Local_636.f_1 == 3)
									{
										if (func_145(Local_18.f_0))
										{
											unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 0);
										}
									}
									func_2(1);
									func_196(&Local_1261, 0, 0);
								}
							}
						}
					}
				}
				else
				{
					func_326();
					func_225(&uLocal_1837, 0, 0);
				}
			}
			if (iLocal_1829)
			{
				if (unk_0x31CD6E9F83C10233() > iLocal_1680)
				{
					func_350(Local_636.f_0);
					iLocal_1829 = 0;
				}
			}
			break;
		
		case 2:
			unk_0x7CDDB154852DA508();
			if (func_199(&uLocal_1837, 0, 1065353216, 0, 0, 0))
			{
				if (Local_636.f_1 == 3)
				{
					if (func_145(Local_18.f_0))
					{
						unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 0);
					}
				}
				if (func_198())
				{
					if (func_9(iLocal_1475))
					{
						unk_0xBE0E7D38FE7C495C(iLocal_1475, sLocal_1459, "_grid_girl_end", 1000f, -8f, 5500, 0, 0, 0, 0, 0);
					}
					iLocal_630 = 4;
					iLocal_631 = 0;
				}
				else
				{
					func_183(&uLocal_1837, &(uLocal_1450[0]));
					func_120(&(Local_1261.f_14));
					func_196(&Local_1261, 0, 1);
					if (unk_0x2A3EA4C0BCED85F2(Local_1261.f_5[4]))
					{
						if (!unk_0x0B7CA263460475D0(Local_1261.f_5[4]))
						{
							if (unk_0x2A3EA4C0BCED85F2(Local_1261.f_5[3]))
							{
								unk_0xCBD63CEA31220CE4(Local_1261.f_5[3], 0f);
							}
							unk_0xCBD63CEA31220CE4(Local_1261.f_5[4], 0f);
							unk_0x4EDE34FBADD967A6(0);
							unk_0x7CDDB154852DA508();
							unk_0x6D0D109B83202E2C(0, 0, 3, 0);
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < 8)
							{
								if (unk_0x2A3EA4C0BCED85F2(Local_1261.f_5[iVar4]))
								{
									unk_0x46B35AD2F641A4A3(Local_1261.f_5[iVar4], 0);
								}
								iVar4++;
							}
							iLocal_630 = 4;
							iLocal_631 = 2;
						}
					}
					else
					{
						iLocal_630 = 4;
						iLocal_631 = 2;
					}
				}
			}
			break;
	}
}

int func_198()
{
	if (Local_642.f_11 == 1)
	{
		if ((((Local_636.f_0 == 0 || Local_636.f_0 == 1) || Local_636.f_0 == 2) || Local_636.f_0 == 3) || Local_636.f_0 == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_199(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xA83FFA3FA7711E6D() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xA83FFA3FA7711E6D();
	if (!unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xF649304F12DD5940(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0xE4DAE84C6B39D47D(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
		{
			unk_0xCF304E352457AD63(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
			{
				unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
			}
		}
	}
	unk_0xBD1C47D856010F09(7);
	unk_0xBD1C47D856010F09(8);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(6);
	unk_0xBD1C47D856010F09(19);
	unk_0xC9621A9AD282CC14(2, 19, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	unk_0xC9621A9AD282CC14(0, 21, 1);
	unk_0xC9621A9AD282CC14(0, 28, 1);
	unk_0xC9621A9AD282CC14(0, 29, 1);
	unk_0xC9621A9AD282CC14(0, 171, 1);
	func_224(0);
	if (unk_0xFF512A008EA368FF(2))
	{
		if (unk_0x055AABF22C9FC8DA() || (unk_0x5114FCEE2A997B95() && !unk_0x4413A34F0AAF1146()))
		{
			unk_0xB540BA8B3C93460F();
		}
	}
	Global_36363 = 1;
	if (!uParam0->f_563)
	{
		switch (func_140(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
		{
			case 1:
				unk_0xF177BD202464664F("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0xF177BD202464664F("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0xF177BD202464664F("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_223(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_223(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_223((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_223(30f) - func_223(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_185(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_202(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_201(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_201(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_1, "TRANSITION_OUT");
			unk_0x1C703A54AB4B12F6();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_201(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0xDE25F26B6B16CF7A(2))
			{
				if (unk_0x77FA56883245AD26(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_200(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xD887E21676314450(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x77FA56883245AD26(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_200(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0xEBD23F68B1A617FC(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x1C703A54AB4B12F6();
				}
				uParam0->f_559 = func_201((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_201((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_201((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_201((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0xD887E21676314450(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_185(0);
			}
			return !bVar0;
		}
	}
	func_185(0);
	return 1;
}

void func_200(var uParam0, bool bParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "CLEAR_ALL");
	unk_0x1C703A54AB4B12F6();
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xE8240315678FDE8E(true);
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(0);
	func_125(unk_0xE344F89A3A395F9C(2, 215, true));
	func_135("ES_HELP");
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xE8240315678FDE8E(true);
		unk_0x32F9127910F63DFA(215);
	}
	unk_0x1C703A54AB4B12F6();
	if (bParam1)
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x32F9127910F63DFA(1);
		func_125(unk_0xE344F89A3A395F9C(2, 216, true));
		func_135("ES_XPAND");
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xE8240315678FDE8E(true);
			unk_0x32F9127910F63DFA(216);
		}
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x1C703A54AB4B12F6();
}

float func_201(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_202(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_222() * 0.25f);
	if (unk_0x77FA56883245AD26(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEBD23F68B1A617FC(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_135(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_221(&(uParam0->f_13));
				}
				else
				{
					func_135(&(uParam0->f_13));
				}
				if (unk_0x27CA09C6DFAB1E79())
				{
					unk_0x32F9127910F63DFA(150);
				}
				else
				{
					unk_0x32F9127910F63DFA(100);
				}
				unk_0xE8240315678FDE8E(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x32F9127910F63DFA((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x32F9127910F63DFA(uParam0->f_56);
				}
				unk_0xE8240315678FDE8E(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x32F9127910F63DFA(2);
				}
				else
				{
					unk_0x32F9127910F63DFA(69);
				}
				unk_0x1C703A54AB4B12F6();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xEBD23F68B1A617FC(uParam0->f_1, "TRANSITION_UP");
				unk_0x90495002CD46BD88(0.15f);
				unk_0xE8240315678FDE8E(true);
				unk_0x1C703A54AB4B12F6();
				uParam0->f_3 = 1;
			}
		}
		func_220();
		unk_0x4237E72FB80FD332(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_223((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_222());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_219(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x5E61619C36D9095B(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_219(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_222()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x8662FAB20C4C3CFB(2, 215);
	unk_0x8662FAB20C4C3CFB(2, 216);
	unk_0x8662FAB20C4C3CFB(2, 200);
	unk_0xC9621A9AD282CC14(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_216((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x5114FCEE2A997B95())
			{
				unk_0x2745EC8E79BD57E0();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xBD1C47D856010F09(7);
				unk_0xBD1C47D856010F09(8);
				unk_0xBD1C47D856010F09(9);
				unk_0xBD1C47D856010F09(6);
				unk_0x4237E72FB80FD332(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xC9621A9AD282CC14(0, 140, 1);
				unk_0xC9621A9AD282CC14(0, 141, 1);
				unk_0xC9621A9AD282CC14(0, 142, 1);
				unk_0xC9621A9AD282CC14(2, 188, 1);
				if (unk_0x42F812C5F1AA300A(2, 188))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xC9621A9AD282CC14(2, 187, 1);
				if (unk_0x42F812C5F1AA300A(2, 187))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xC9621A9AD282CC14(2, 202, 1);
				if (unk_0x42F812C5F1AA300A(2, 202))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xBD1C47D856010F09(7);
				unk_0xBD1C47D856010F09(8);
				unk_0xBD1C47D856010F09(9);
				unk_0xBD1C47D856010F09(6);
				unk_0xC9621A9AD282CC14(0, 140, 1);
				unk_0xC9621A9AD282CC14(0, 141, 1);
				unk_0xC9621A9AD282CC14(0, 142, 1);
				if (unk_0xD887E21676314450(2, 215) || unk_0x42F812C5F1AA300A(2, 200))
				{
					unk_0x18F1BFAF88AC511B(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x18F1BFAF88AC511B(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xB922891BFD232C45(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, iVar0);
	unk_0x7A1F4BBECE23C9E3(fVar9, fVar10);
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, 0.4f);
	fVar1 = (fVar1 - func_223(6f));
	fVar1 = (fVar1 + (func_223(30f) - func_223((2f * 2f))));
	fVar11 = (fVar2 - func_223((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_201((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
		func_220();
		unk_0x45A34FA87FBE9599(0.5f, (fVar1 - (func_223((2f - 0.5f)) - 0.001388889f)), fVar6, func_215(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_223((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_223((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_222())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_201((fVar11 / (0.8f * func_223(25f))), 0f, 1f);
			func_212(uParam0, iVar17, (fVar1 + func_223(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_223(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_223((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_222())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_223(2f));
					fVar12 = func_201((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
					func_220();
					unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_223((2f * 0.5f))), fVar6, func_215(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_223((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_223((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_223((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_222())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_223(2f));
			fVar12 = func_201((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
			func_220();
			unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_223((2f * 0.5f))), fVar6, func_215(1f), iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_223((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_222())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_201((fVar11 / (0.8f * func_223(25f))), 0f, 1f);
			unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_205(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x2DA8A432EC3C3D33() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_222()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_222()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_222()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_222()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x7A1F4BBECE23C9E3(fVar20, fVar21);
				unk_0x41D772AFFBD36843(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x41D772AFFBD36843(0);
			}
			unk_0xD1F2C9FF58856AEC(1f, 0.4f);
			func_204(&(uParam0->f_550), fVar20, (fVar1 + func_223((2f * 2f))), 0, 0, 0);
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar21);
			unk_0x41D772AFFBD36843(2);
			unk_0xD1F2C9FF58856AEC(1f, 0.4f);
			unk_0xAC1B647E90E8412A(0);
			func_220();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar22);
			unk_0x52D4D0409C49DF8C(iVar13, iVar14, iVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x0B8B91F21AE25854("PERCENTAGE");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x0B8B91F21AE25854("FO_TWO_NUM");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x96577CAA1D1E72DB(uParam0->f_555);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x0B8B91F21AE25854("MTPHPER_XPNO");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x0B8B91F21AE25854("ESDOLLA");
					unk_0xCA44A68ABB26D497(uParam0->f_554, 1);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0xB922891BFD232C45(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xB922891BFD232C45(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xB922891BFD232C45(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_203(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_223(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x1638116285563DAD(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_223(30f) - 2f));
		}
	}
}

float func_203(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_204(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAC1B647E90E8412A(iParam3);
	unk_0x4E250FE9E4D8720F(iParam5);
	func_220();
	if (bParam4)
	{
		unk_0x0B8B91F21AE25854("STRING");
		unk_0x50B3C23D0902259F(sParam0);
	}
	else
	{
		unk_0x0B8B91F21AE25854(sParam0);
	}
	unk_0x7E43DE6F9866B44B(fParam1, fParam2, 0);
}

int func_205(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_211(iParam0), 64);
	StringCopy(&cVar16, func_208(iParam0, bParam1), 64);
	if (unk_0x50B7853132D8438E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xD9151D5BCEE2689C(&iVar32, &iVar33);
			fVar35 = unk_0x5E61619C36D9095B(0);
			if (func_207())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_207())
			{
				fVar34 = 1f;
			}
			if (unk_0x7832F791572D5809(joaat("director_mode")) > 0)
			{
				unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x68824FF629FFAE6D(&iVar32, &iVar33);
		}
		Var37 = { unk_0xB9E4A5FCB2BE22B7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_206(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_206(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x50B7853132D8438E(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x3CCF948E5BFC63FE() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_206(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_207()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xD9151D5BCEE2689C(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_208(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_210(unk_0x3D35F9864E4640B1()) };
			if (unk_0xFCA40B20F5AC75B0(&Var19, &uVar3))
			{
				return func_209(&uVar3);
			}
		}
		else
		{
			return func_209(&(Global_17290.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_209(var uParam0)
{
	return uParam0;
}

struct<13> func_210(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

char* func_211(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_210(unk_0x3D35F9864E4640B1()) };
			unk_0xFCA40B20F5AC75B0(&Var16, &uVar0);
			return func_209(&uVar0);
		}
		else
		{
			return func_209(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_212(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xB922891BFD232C45(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iParam5);
	unk_0x7A1F4BBECE23C9E3(fParam3, fParam4);
	unk_0x41D772AFFBD36843(1);
	unk_0xD1F2C9FF58856AEC(1f, func_214(14f));
	unk_0xAC1B647E90E8412A(0);
	unk_0x4E250FE9E4D8720F(0);
	func_220();
	if (uParam0->f_531[iParam1])
	{
		unk_0x0B8B91F21AE25854("STRING");
		unk_0x50B3C23D0902259F(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x0B8B91F21AE25854(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x96577CAA1D1E72DB(uParam0->f_489[iParam1]);
		}
	}
	unk_0x7E43DE6F9866B44B(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_205(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_208(7, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_205(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_208(5, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_205(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_208(6, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x41D772AFFBD36843(1);
	}
	else
	{
		unk_0x41D772AFFBD36843(2);
	}
	unk_0xD1F2C9FF58856AEC(1f, func_214(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x52D4D0409C49DF8C(iVar0, iVar1, iVar2, iParam5);
	func_213(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_213(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0xAC1B647E90E8412A(0);
	unk_0x4E250FE9E4D8720F(0);
	func_220();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xD1F2C9FF58856AEC(1f, func_214(18f));
			unk_0x4E250FE9E4D8720F(4);
			if (iParam0 < 0)
			{
				unk_0x54412EEBDB162F5C("ESMINDOLLA");
				unk_0xCA44A68ABB26D497((-1 * iParam0), 1);
				fVar1 = unk_0x51C2CBAC9E5D95A4(0);
			}
			else
			{
				unk_0x54412EEBDB162F5C("ESDOLLA");
				unk_0xCA44A68ABB26D497(iParam0, 1);
				fVar1 = unk_0x51C2CBAC9E5D95A4(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x1638116285563DAD("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xD1F2C9FF58856AEC(1f, func_214(14f));
			break;
	}
	unk_0xDBB8FCB00B701798(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x0B8B91F21AE25854("PERCENTAGE");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 1:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("FO_NUM");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 2:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("FO_TWO_NUM");
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xD1F2C9FF58856AEC(1f, func_214(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x0B8B91F21AE25854("ESMINDOLLA");
				unk_0xCA44A68ABB26D497((-1 * iParam0), 1);
			}
			else
			{
				unk_0x0B8B91F21AE25854("ESDOLLA");
				unk_0xCA44A68ABB26D497(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x0B8B91F21AE25854(sParam4);
			break;
		
		case 7:
			unk_0x0B8B91F21AE25854("STRING");
			unk_0x50B3C23D0902259F(sParam4);
			break;
		
		case 8:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 14);
			break;
		
		case 9:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 6);
			break;
		
		case 10:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 2055);
			break;
		
		case 18:
			unk_0x4E250FE9E4D8720F(5);
			unk_0x0B8B91F21AE25854("STRING");
			unk_0xC2D818A5754306C0(iParam0, 2055);
			break;
		
		case 12:
			unk_0x0B8B91F21AE25854("AHD_DIST");
			unk_0x96577CAA1D1E72DB(iParam0);
			break;
		
		case 13:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam0);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
		
		case 16:
			unk_0x0B8B91F21AE25854(sParam4);
			unk_0x96577CAA1D1E72DB(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x7E43DE6F9866B44B((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xD1F2C9FF58856AEC(1f, func_214(14f));
		}
		else
		{
			unk_0x7E43DE6F9866B44B(fParam2, fParam3, 0);
		}
	}
}

float func_214(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_215(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_216(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_218(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_217(7, iVar0);
		Global_1356070.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = iParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = iParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = bParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_217(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_218(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

float func_219(char* sParam0)
{
	unk_0x54412EEBDB162F5C(uParam0);
	return (unk_0x51C2CBAC9E5D95A4(1) / 2f);
}

void func_220()
{
	unk_0x38C75B31337B3454(1);
	if (unk_0x229840854A80E0D9() || unk_0x5114FCEE2A997B95())
	{
		unk_0x38C75B31337B3454(7);
	}
	unk_0xED9541AF8190B3D1(0);
}

void func_221(char* sParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

float func_222()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x20551D6D924ED04B())
	{
	}
	return fVar0;
}

float func_223(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_224(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_144(0))
		{
			func_142(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

int func_225(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_228(uParam0);
	func_227(uParam0);
	if (unk_0xB3404E397FF56B3B(&(uParam0->f_550), "SPR_RESULT") || (unk_0xB3404E397FF56B3B(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x59B2F61C9D01132B("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x59B2F61C9D01132B("CommonMenu", 0);
		unk_0x59B2F61C9D01132B("MPLeaderboard", 0);
		unk_0x59B2F61C9D01132B("MPHud", 0);
		uParam0->f_1 = unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xA429A9A606DF2BC3("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x77FA56883245AD26(uParam0->f_1) || !unk_0xB56F0E1C89B9E069("CommonMenu")) || !unk_0xB56F0E1C89B9E069("MPLeaderboard")) || !unk_0xB56F0E1C89B9E069("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x77FA56883245AD26(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x77FA56883245AD26(uParam0->f_1) || !unk_0xB56F0E1C89B9E069("CommonMenu")) || !unk_0xB56F0E1C89B9E069("MPLeaderboard")) || !unk_0xB56F0E1C89B9E069("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x77FA56883245AD26(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_226(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_200(uParam0, 1);
		}
		else
		{
			func_200(uParam0, 0);
		}
	}
	Global_71046 = 1;
	return 1;
}

void func_226(var uParam0)
{
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "CLEAR_ALL");
	unk_0x1C703A54AB4B12F6();
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xE8240315678FDE8E(true);
		unk_0x1C703A54AB4B12F6();
	}
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(2);
	func_125(unk_0xE344F89A3A395F9C(2, 188, true));
	func_135("ES_HELP_TU");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(1);
	func_125(unk_0xE344F89A3A395F9C(2, 187, true));
	func_135("ES_HELP_TD");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(0);
	func_125(unk_0xE344F89A3A395F9C(2, 202, true));
	func_135("ES_HELP_AB");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x1C703A54AB4B12F6();
}

void func_227(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, func_214(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x54412EEBDB162F5C("STRING");
			unk_0x50B3C23D0902259F(&(uParam0->f_13));
			fVar0 = unk_0x51C2CBAC9E5D95A4(1);
		}
		else
		{
			unk_0x54412EEBDB162F5C(&(uParam0->f_13));
			fVar0 = unk_0x51C2CBAC9E5D95A4(1);
		}
	}
	else
	{
		unk_0x54412EEBDB162F5C("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x96577CAA1D1E72DB(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x7C8A7ECFBAD2C8C4(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x50B3C23D0902259F(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x51C2CBAC9E5D95A4(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_228(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_229()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_231(&(Global_1835013.f_73));
	func_231(&(Global_1835013.f_142));
	func_231(&(Global_1835013.f_211));
	func_231(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_230(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_231(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_232(var uParam0)
{
	uParam0->f_562 = 0;
	uParam0->f_561 = 0;
	uParam0->f_558 = uParam0->f_572 + 500;
}

void func_233(var uParam0)
{
	func_199(uParam0, 0, 1065353216, 0, 0, 0);
}

int func_234(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0xA83FFA3FA7711E6D() && Global_1840922.f_2 > 0)
	{
		func_188(&Global_1840922);
		func_188(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_245(0);
	}
	Global_1840922.f_2 = unk_0xA83FFA3FA7711E6D();
	iVar1 = -1;
	if (unk_0x43F4A6D2081CC5ED())
	{
		if (unk_0xA62421972698424D() == 0)
		{
			iVar1 = unk_0x0B6EBEB489CB4646();
		}
	}
	if ((unk_0x43F4A6D2081CC5ED() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_243() && unk_0xE096BC82D913B3DB()))
	{
		if (unk_0x4EB878E178DC1C9A())
		{
			func_240(&(Global_1840922.f_3), func_242(&(Global_1840922.f_3)));
			if (!unk_0x2A3398C6222EB190(*uParam0, 4))
			{
				unk_0xCD7E92DE2BFA0B0D(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_238(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_243())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x2A3398C6222EB190(*uParam0, 0))
			{
				if (!unk_0x9148803485DEDF45(2, 201))
				{
					unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
				}
			}
			else if (unk_0xBF946CEEECD8C935(2, 201))
			{
				func_188(&(Global_1840922.f_49));
				func_188(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_245(0);
				return 1;
			}
		}
	}
	else
	{
		func_240(&(Global_1840922.f_3), func_242(&(Global_1840922.f_3)));
		if ((func_237(&(Global_1840922.f_49)) && !func_235(&(Global_1840922.f_49), 2000, 1)) && !unk_0xE096BC82D913B3DB())
		{
			unk_0xCD7E92DE2BFA0B0D(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_238(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x2A3398C6222EB190(*uParam0, 3))
		{
			if (!unk_0x2A3398C6222EB190(*uParam0, 1))
			{
				unk_0x40FB16B5061B30EC(0);
				unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_238(&(Global_1840922.f_3), 0);
			}
		}
		if (func_237(&Global_1840922))
		{
			if (!func_235(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xE096BC82D913B3DB())
				{
					if (unk_0x1F580D23FDC2CC88())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						if (!unk_0x2A3398C6222EB190(*uParam0, 0))
						{
							if (!unk_0x9148803485DEDF45(2, 201))
							{
								unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
							}
						}
						else if (unk_0xBF946CEEECD8C935(2, 201))
						{
							func_188(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_245(0);
							return 1;
						}
					}
				}
				else
				{
					func_188(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_245(0);
					return 1;
				}
			}
			else if (unk_0x2A3398C6222EB190(*uParam0, 3))
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x2A3398C6222EB190(*uParam0, 0))
				{
					if (!unk_0x9148803485DEDF45(2, 201))
					{
						unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201))
				{
					func_188(&(Global_1840922.f_49));
					func_188(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_245(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x4E5CFAAEE4D157CF())
				{
					if (!unk_0x2A3398C6222EB190(*uParam0, 0))
					{
						if (!unk_0x9148803485DEDF45(2, 201))
						{
							unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
						}
					}
					else if (unk_0xBF946CEEECD8C935(2, 201))
					{
						func_188(&(Global_1840922.f_49));
						func_188(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_245(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_235(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_236(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_237(var uParam0)
{
	return uParam0->f_1;
}

void func_238(var uParam0, bool bParam1)
{
	func_239(uParam0);
	if (bParam1)
	{
		func_245(0);
	}
	uParam0->f_35 = 1;
}

void func_239(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_240(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_241(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0xC2D818A5754306C0(uParam0->f_33, 70);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_241(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_242(var uParam0)
{
	return uParam0->f_35;
}

int func_243()
{
	if (func_244())
	{
		return 0;
	}
	if (unk_0x04F2E3CF902D6F5D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_244()
{
	return Global_2455609;
}

void func_245(bool bParam0)
{
	unk_0xFE185FFD730A31A1();
	if (bParam0)
	{
		unk_0x794851316BEA60A1();
	}
}

void func_246(var uParam0)
{
	if (unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2())
	{
		func_247(&Local_175, uParam0);
	}
}

void func_247(var uParam0, var uParam1)
{
	if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()) && !unk_0xC3B36E687193A3B6(unk_0x3D35F9864E4640B1()))
	{
		unk_0xBD1C47D856010F09(2);
	}
	unk_0xC9621A9AD282CC14(0, 24, 1);
	unk_0xC9621A9AD282CC14(0, 140, 1);
	unk_0xC9621A9AD282CC14(0, 141, 1);
	unk_0xC9621A9AD282CC14(0, 143, 1);
	unk_0xC9621A9AD282CC14(0, 16, 1);
	unk_0xC9621A9AD282CC14(0, 17, 1);
	unk_0xC9621A9AD282CC14(0, 14, 1);
	unk_0xC9621A9AD282CC14(0, 15, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	unk_0xC9621A9AD282CC14(0, 12, 1);
	unk_0xC9621A9AD282CC14(0, 13, 1);
	unk_0xC9621A9AD282CC14(0, 45, 1);
	unk_0xC9621A9AD282CC14(0, 22, 1);
	unk_0xC9621A9AD282CC14(0, 23, 1);
	unk_0xC9621A9AD282CC14(0, 0, 1);
	if (unk_0xFF512A008EA368FF(2))
	{
		unk_0xC9621A9AD282CC14(0, 200, 1);
	}
	Global_2501777.f_3924 = 1;
	Global_1758531 = 1;
	func_248(uParam1[0], uParam0);
}

void func_248(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	func_319(&(Global_1840922.f_49), 1, 0);
	unk_0x390920286F8D4571();
	func_318();
	func_224(0);
	unk_0x7CDDB154852DA508();
	func_316();
	unk_0xBD1C47D856010F09(10);
	func_315(1);
	func_314(1);
	if (!func_311())
	{
		if (!unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
		{
			unk_0xFD69BDF108B32E5B("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x2A3398C6222EB190(uParam1->f_42, 3))
	{
		*uParam0 = func_310();
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 3);
	}
	Var32 = { func_210(unk_0x3D35F9864E4640B1()) };
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0xED5FFF2E0422067E())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xD69069794497409F())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
			{
				unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x1C703A54AB4B12F6();
				func_309(*uParam0, Global_1835390.f_2780);
				if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_308(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_306(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
				func_305(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
				func_305(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
				func_305(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
				func_304(*uParam0);
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
				unk_0x8C361F37C04084F4(1);
			}
			else
			{
				func_304(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_271(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 0))
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_309(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_308(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_306(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 0);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_270(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_188(&(Global_1835390.f_2823));
				}
				else if (func_235(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_305(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_270(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_188(&(Global_1835390.f_2823));
				}
				func_304(*uParam0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 0);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_309(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_308(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_307(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_306(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x2A3398C6222EB190(uParam1->f_42, 6))
					{
						func_191(&Global_1839721);
						func_266(uParam1, &Global_1839721);
						func_265(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_308(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
									func_305(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_308(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_305(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_305(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
									if (!unk_0x4FB79719141588E9())
									{
										bVar63 = true;
									}
									else if (!unk_0x0B26CCD382388F16())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_308(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_305(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_305(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_264(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_308(uParam1->f_44))
								{
									unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xB3404E397FF56B3B(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_263(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xCD7E92DE2BFA0B0D(&iVar31, 3);
											}
										}
									}
									if (func_308(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0x0BD3CCFB6C6CFA91(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xB3404E397FF56B3B(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_262(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_262(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_257(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_257(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_254(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_254(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_253();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 2);
											unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_252(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
						func_305(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
						func_305(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
						func_305(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
					func_304(*uParam0);
					unk_0x8C361F37C04084F4(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_252(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_304(*uParam0);
					func_249(uParam0, uParam1);
				}
			}
		}
	}
}

void func_249(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xFF512A008EA368FF(2))
	{
		unk_0xB540BA8B3C93460F();
		unk_0x8662FAB20C4C3CFB(2, 239);
		unk_0x8662FAB20C4C3CFB(2, 240);
		unk_0x8662FAB20C4C3CFB(2, 237);
		unk_0x8662FAB20C4C3CFB(2, 238);
		unk_0xC9621A9AD282CC14(2, 200, 1);
		if (unk_0x59ABF4F2C485FC38(2, 241))
		{
			unk_0xDE3AEA05A09ABFFC(2, 188, 1f);
		}
		if (unk_0x59ABF4F2C485FC38(2, 242))
		{
			unk_0xDE3AEA05A09ABFFC(2, 187, 1f);
		}
		if (unk_0x2F7BBD8CD73835A3(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xDE3AEA05A09ABFFC(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xFF512A008EA368FF(2))
	{
		func_251(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 0))
		{
			if ((unk_0x9148803485DEDF45(2, 188) || unk_0x59ABF4F2C485FC38(2, 188)) || iVar6 < -100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 0);
				func_188(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_250(uParam1, 188))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 0);
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 1))
		{
			if ((unk_0x9148803485DEDF45(2, 187) || unk_0x59ABF4F2C485FC38(2, 187)) || iVar6 > 100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 1);
				func_188(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_250(uParam1, 187))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0x2A3398C6222EB190(uParam1->f_246, 3))
	{
		if ((unk_0x9148803485DEDF45(2, 204) || unk_0x42F812C5F1AA300A(2, 204)) || unk_0xD887E21676314450(2, 237))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 3);
			func_188(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_250(uParam1, 204))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_252(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_252(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
		}
		if (func_264(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_246, 2))
			{
				if (unk_0x9148803485DEDF45(2, 217) || unk_0x42F812C5F1AA300A(2, 217))
				{
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 2);
						unk_0xE6BB194246178292(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x9148803485DEDF45(2, 217))
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_250(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_251(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_235(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) || func_235(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_251(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 221) * 127f));
		}
	}
}

void func_252(var uParam0, int iParam1, int iParam2)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT_STATE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x1C703A54AB4B12F6();
}

void func_253()
{
	unk_0x1C703A54AB4B12F6();
}

void func_254(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(unk_0xF34EE736CF047844(fParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_256(fParam44);
					}
					else
					{
						fParam44 = func_255(fParam44);
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_255(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_256(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_257(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(-iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x41BB80C0DBFA1AA4(iParam44))
				{
					unk_0x9BC6C9E77AAC792E("SCLB_VEH_CUST");
					unk_0x7C8A7ECFBAD2C8C4(unk_0x0C9AAE7EC92AB471(iParam44));
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else if (unk_0x41BB80C0DBFA1AA4(iParam44))
			{
				unk_0x9BC6C9E77AAC792E(unk_0x0C9AAE7EC92AB471(iParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 8:
			if (func_261(iParam44) != 0)
			{
				unk_0x9BC6C9E77AAC792E(func_258(func_261(iParam44), 0));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_256(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_255(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_258(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		default:
			if (func_260(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_259(&(Var0.f_31));
				}
				else
				{
					return func_259(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_259(var uParam0)
{
	return uParam0;
}

int func_260(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5AF51568FFC04EE8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4BEBDDD8F31C07D6(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_261(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_262(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (iParam3 > 0)
	{
		unk_0x9BC6C9E77AAC792E("NUMBER");
		unk_0x96577CAA1D1E72DB(iParam3);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x8E394933209D820A(cParam4);
	unk_0x8E394933209D820A(uParam5);
}

int func_263(var uParam0, var uParam1)
{
	if (!func_264(*uParam0))
	{
		return 0;
	}
	if (!func_264(*uParam1))
	{
		return 0;
	}
	if (unk_0xD996CD68BF90147F(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

void func_265(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_266(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_269(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_269(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_269(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_267(uParam1);
	}
}

void func_267(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_210(unk_0x3D35F9864E4640B1()) };
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar16 = unk_0x02015DE32A0ACA07(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_268(&Global_1839591);
				iVar2 = 0;
				unk_0x59DA7685088AF59D(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_263(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_268(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_269(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_210(unk_0x3D35F9864E4640B1()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBBDA792448DB5A89((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_270(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xCD7E92DE2BFA0B0D(&iParam2, 7);
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x9BC6C9E77AAC792E(sParam3);
	unk_0x48B999C33828FA82();
	unk_0x1C703A54AB4B12F6();
}

int func_271(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_237(&(Global_1835390.f_2827)))
		{
			func_236(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_235(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
	{
		unk_0xD804ACF2A7171150(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 4))
	{
		func_303(uParam0);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_301(uParam0))
	{
		return 0;
	}
	if (!func_299(uParam0))
	{
		return 0;
	}
	if (!func_286(uParam0))
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		func_191(&Global_1839721);
		func_266(uParam0, &Global_1839721);
		func_265(uParam0, &Global_1839721);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 6);
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 7))
	{
		if (!func_237(&(Global_1835390.f_2830)))
		{
			func_236(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_235(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
		}
		if (func_283(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_280(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_275(&Global_1839721))
		{
			func_272(&Global_1839721);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
			func_272(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_274(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_273(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_268(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xB3404E397FF56B3B(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_264((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1839591.f_61), 0);
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			unk_0xC29C637A32074B95(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_12(unk_0x3D35F9864E4640B1()) };
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iParam1]))
		{
			unk_0x8B76A81F41DE7F64(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(iParam0))
		{
			unk_0x8B76A81F41DE7F64(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x3A86D36AC82C3C8E(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_275(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_279(uParam0);
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_264((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_278(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_276(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_264((uParam0[iVar0 /*100*/])->f_32) && func_264(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0xD996CD68BF90147F(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_276(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x4A4751AFCB4615B0())
			{
			}
			else
			{
				unk_0xC5AAB53287726EAB();
				unk_0x0619630953F0E013(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x4A4751AFCB4615B0())
			{
				if (unk_0x3A5F88AE9F3EB441())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (unk_0x05EA1572EDF5EFC7(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_277(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x4A4751AFCB4615B0())
			{
				unk_0x6F54087FD4584338();
			}
			else
			{
				unk_0xC5AAB53287726EAB();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_277(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

int func_278(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_264(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xD996CD68BF90147F(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_279(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_230(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x4A4751AFCB4615B0())
		{
			unk_0xC5AAB53287726EAB();
		}
	}
	if (unk_0x4A4751AFCB4615B0())
	{
		unk_0x6F54087FD4584338();
	}
	Global_1841018.f_206 = 0;
}

int func_280(var uParam0)
{
	int iVar0;
	
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (!func_282(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_281(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_281(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_264(*uParam1))
			{
				if (!unk_0x7B30C254A284990A(uParam1))
				{
					if (unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x8BCF3CDD10AB0F3C())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(uParam1))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_282(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x9D3EA2635512FD6B())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_230(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_264((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x3022B3A95EDAABC0(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_264((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_283(var uParam0)
{
	int iVar0;
	
	if (unk_0x9D3EA2635512FD6B())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_285(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_284(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_264(Var0))
			{
				if (!unk_0x7B30C254A284990A(&Var0))
				{
					if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(&Var0))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_285(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x9D3EA2635512FD6B())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_264(Var1[0 /*13*/]))
			{
				if (!unk_0x7B30C254A284990A(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x3022B3A95EDAABC0(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_286(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_210(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x1AE803DF5F9B30C9())
			{
				if (unk_0xF3F1AD16A136B115(&Var116))
				{
					if (unk_0x7838EB8661A32D68(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_297(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_298(), 0, 0, 0))
			{
				func_296(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_298())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_263(&Var0, &Var116) || func_263(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_295(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_298() && iVar109 == 0)
								{
									func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_298() && (func_263(&Var0, &Var116) || func_263(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_263(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_293(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_308(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835390.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						if (!func_298())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_295(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_298() && iVar109 == iVar111)
								{
									if (!func_263(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_298() && (func_263(&Var0, &Var116) || func_263(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_264(Var0) && !func_263(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_263(&Var0, &Var116))
										{
											if (Global_1835390.f_2775[iVar113] < 0)
											{
												Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_293(uParam0->f_44))
										{
											iVar108 = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_308(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_295(&Var0);
							iVar111++;
						}
						unk_0xFD293D325337DBD7();
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_298())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						unk_0xFD293D325337DBD7();
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_288(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_296(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_298() && (func_263(&Var0, &Var116) || func_263(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_293(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_308(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835390.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_293(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_308(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_295(&Var0);
							iVar106++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xFD293D325337DBD7();
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_298())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_287(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_298() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_298())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_288(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_291() && !func_290())
			{
				func_289(*uParam2);
				if (unk_0xC651B7C97F161BBE(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_289(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_319(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_290()
{
	if (unk_0x957E53BB191CB24D() && !func_311())
	{
		return 1;
	}
	return 0;
}

int func_291()
{
	if (unk_0x50EECC0E29B921C3() || Global_1835008)
	{
		func_292();
		return 1;
	}
	return 0;
}

void func_292()
{
	if (func_235(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x6D26D20288D66A19(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_188(&(Global_1835008.f_1));
	}
}

int func_293(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_294(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_308(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
		sParam1->f_32 = { func_210(unk_0x3D35F9864E4640B1()) };
	}
	sParam1->f_59 = iParam2;
	if (func_293(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_295(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_296(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_297(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_291() && !func_290())
			{
				func_289(*uParam2);
				if (bParam5)
				{
					if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xEB8700D3E849D9FD(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xE64A80A161C007AD(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x97519B8E5ABDB709(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_298()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_299(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_210(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x87482CCFC1C6709F();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_298())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_300(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_296(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
					{
						if (func_298())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xC2F7B578646A3EC1(iVar110, &Var0);
									if (func_308(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_263(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_295(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_298() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xC2F7B578646A3EC1(0, &Var0);
							if (func_298() && (func_263(&Var0, &Var114) || func_263(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_264(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_263(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_293(uParam0->f_44))
								{
									iVar111 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_308(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_295(&Var0);
								unk_0xFD293D325337DBD7();
								func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_298())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_295(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_295(&Var0);
							unk_0xFD293D325337DBD7();
							func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_298())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_298())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_298() && iVar108 == iVar110)
								{
									if (!func_263(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_298() && (func_263(&Var0, &Var114) || func_263(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_264(Var0) && !func_263(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_263(&Var0, &Var114))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_293(uParam0->f_44))
										{
											iVar111 = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_308(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_295(&Var0);
							iVar110++;
						}
						unk_0xFD293D325337DBD7();
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_298())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_294(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_287(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_300(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_291() && !func_290())
			{
				func_289(*uParam2);
				if (unk_0x918B101666F9CB83(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_301(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_210(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_302(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_297(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_298(), 0, 0, 0))
			{
				func_296(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_298())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_263(&Var13, &Var0) || func_263(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_295(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_298() && iVar122 == 0)
								{
									func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_298() && (func_263(&Var13, &Var0) || func_263(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_263(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_293(uParam0->f_44))
									{
										iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_308(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835390.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						if (!func_298())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_295(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_298() && iVar122 == iVar124)
								{
									if (!func_263(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_298() && (func_263(&Var13, &Var0) || func_263(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_264(Var13) && !func_263(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_263(&Var13, &Var0))
										{
											if (Global_1835390.f_2775[iVar126] < 0)
											{
												Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_293(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_308(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_295(&Var13);
							iVar124++;
						}
						unk_0xFD293D325337DBD7();
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_298())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
								Global_1835390.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						unk_0xFD293D325337DBD7();
						func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_288(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_296(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar119, &Var13);
							if (func_298() && (func_263(&Var13, &Var0) || func_263(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835390.f_2704[iVar126] < 12 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_293(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_308(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835390.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar126]++;
											}
										}
										else if (Global_1835390.f_2704[iVar126] == 1 && Global_1835390.f_2775[iVar126] == -1)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
									else if (Global_1835390.f_2704[iVar126] < 12)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_293(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_308(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
								}
							}
							func_295(&Var13);
							iVar119++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
					func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_298())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_294(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_287(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_302(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0.f_0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_303(var uParam0)
{
	int iVar0;
	
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar0 = unk_0x3A86D36AC82C3C8E(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam0->f_42), 5);
			func_273(Global_1835390.f_2826, -1);
		}
	}
}

void func_304(var uParam0)
{
	if (unk_0x77FA56883245AD26(uParam0))
	{
		unk_0x4237E72FB80FD332(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_305(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (unk_0x2A3398C6222EB190(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
		{
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_210(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var53))
				{
					unk_0x7838EB8661A32D68(&Var1, 35, &Var53);
					if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(*iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (bVar52)
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xA9895403BC230880(&Var36);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x1C703A54AB4B12F6();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xCD7E92DE2BFA0B0D(&iVar66, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar66);
		if (!unk_0xE096BC82D913B3DB())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xD69069794497409F())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0x48B999C33828FA82();
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 5))
		{
			if (unk_0x87482CCFC1C6709F() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 6))
		{
			if (unk_0x4FB79719141588E9())
			{
				if (unk_0x0B26CCD382388F16())
				{
					if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
					{
						if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_210(unk_0x3D35F9864E4640B1()) };
							if (unk_0xF3F1AD16A136B115(&Var67))
							{
								unk_0x7838EB8661A32D68(&Var1, 35, &Var67);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		unk_0xCD7E92DE2BFA0B0D(&iVar80, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar80);
		if (bVar52)
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0xA9895403BC230880(&Var36);
			unk_0x48B999C33828FA82();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0x48B999C33828FA82();
		}
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
}

void func_306(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xEBD23F68B1A617FC(uParam0, "SET_TITLE");
	unk_0x9BC6C9E77AAC792E(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x9BC6C9E77AAC792E(uParam2[iVar0 /*6*/]);
		unk_0xCC5EB3A492FB7D4B();
		iVar0++;
	}
	unk_0x1C703A54AB4B12F6();
}

void func_307(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x9BC6C9E77AAC792E(sParam1);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		unk_0x7C8A7ECFBAD2C8C4(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam5);
	}
	unk_0xCC5EB3A492FB7D4B();
	unk_0x1C703A54AB4B12F6();
}

int func_308(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_309(var uParam0, int iParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_DISPLAY_TYPE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x1C703A54AB4B12F6();
}

var func_310()
{
	return unk_0xB1E69EFAB6CB45A3("SC_LEADERBOARD");
}

bool func_311()
{
	return func_312(unk_0x3D35F9864E4640B1());
}

int func_312(int iParam0)
{
	switch (func_313(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return 0;
		
		default:
	}
	return 1;
}

int func_313(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189;
}

void func_314(int iParam0)
{
	Global_1315691 = iParam0;
}

void func_315(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

void func_316()
{
	func_318();
	func_317(4, -1);
	func_317(6, -1);
	func_317(7, -1);
	func_317(3, -1);
	func_317(1, -1);
	func_317(2, -1);
	func_317(11, -1);
	func_317(13, -1);
	func_317(14, -1);
	func_317(16, -1);
}

void func_317(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1354565.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1354565.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_318()
{
	Global_2501777.f_4489 = 0;
}

void func_319(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_320(var uParam0)
{
	if ((unk_0x2A3398C6222EB190(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0)
{
	if (func_198())
	{
		if (!func_9(iLocal_1475))
		{
			if (unk_0x772F801619C83779(joaat("a_f_y_genhot_01")))
			{
				if (func_145(iParam0))
				{
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
					unk_0x5EF58B2B49A4503B(iParam0, 0f);
					unk_0x0A69FBBF51E1A08F(iParam0, Local_1476, 1, 0, 0, 1);
					unk_0x5082D1A6D078DB20(iParam0, fLocal_1479);
				}
				func_32(1);
				iLocal_1475 = unk_0x5618B819E5B9C053(5, joaat("a_f_y_genhot_01"), Local_1480, fLocal_1483, 1, 1);
				func_322(&uLocal_1498, 3, iLocal_1475, "StrRaceGirl", 1, 1);
				unk_0xBEDADBE0FDA3EF25(iLocal_1475, 1);
				unk_0x9793B48C4C8275F8(joaat("a_f_y_genhot_01"));
			}
		}
	}
}

void func_322(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_323()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	switch (Local_636.f_0)
	{
		case 5:
			fVar4 = 180.8171f;
			break;
		
		case 6:
			fVar4 = 49.2605f;
			break;
		
		case 7:
			fVar4 = 69.4601f;
			break;
		
		case 8:
			fVar4 = 191.0019f;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		if (func_9(Local_907[iVar0 /*18*/].f_3) && func_145(Local_907[iVar0 /*18*/].f_6))
		{
			unk_0xD706D9D85701BFBD(Local_907[iVar0 /*18*/].f_3);
			unk_0x5082D1A6D078DB20(Local_907[iVar0 /*18*/].f_3, fVar4);
			switch (iVar0)
			{
				case 0:
					if (Local_636.f_0 == 8)
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, -10f, 10f), 1, 0, 0, 1);
					}
					else
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, 0f, 10f), 1, 0, 0, 1);
					}
					break;
				
				case 1:
					if (Local_636.f_0 == 8)
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, -10f, 0f), 1, 0, 0, 1);
					}
					else
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, 10f, 0f), 1, 0, 0, 1);
					}
					break;
				
				case 2:
					if (Local_636.f_0 == 8)
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, -12f, -10f), 1, 0, 0, 1);
					}
					else
					{
						unk_0x0A69FBBF51E1A08F(Local_907[iVar0 /*18*/].f_6, Var1 + Vector(0f, 10f, 10f), 1, 0, 0, 1);
					}
					break;
				
				default:
					func_31(&(Local_907[iVar0 /*18*/].f_3));
					func_117(&(Local_907[iVar0 /*18*/].f_6));
					break;
				}
		}
		iVar0++;
	}
}

int func_324(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 73, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam5)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
	}
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 138, 1);
	unk_0xC9621A9AD282CC14(0, 136, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 131, 1);
	unk_0xC9621A9AD282CC14(0, 132, 1);
	unk_0xC9621A9AD282CC14(0, 123, 1);
	unk_0xC9621A9AD282CC14(0, 126, 1);
	unk_0xC9621A9AD282CC14(0, 129, 1);
	unk_0xC9621A9AD282CC14(0, 130, 1);
	unk_0xC9621A9AD282CC14(0, 133, 1);
	unk_0xC9621A9AD282CC14(0, 134, 1);
	unk_0x36EF10C45CB5F97A();
	func_325(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x31CD6E9F83C10233();
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x229F35E7CDDBF757(unk_0x38A3CC71471EC547(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_325(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x51C1CCFBBE8CC4D1(iParam0))
		{
			if (unk_0x6753D44917FA47E9(iParam0))
			{
				unk_0x0323C8DAEC297D2A(iParam0, 0);
			}
		}
	}
}

int func_326()
{
	if ((unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2()) && Local_175.f_44 > 0)
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_335(Local_636.f_0, Local_642.f_11, iLocal_1453, Local_642.f_10, Local_18.f_0);
			Global_1835013.f_2 = 1;
		}
		if (func_327(&Local_175))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_327(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_308(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_210(unk_0x3D35F9864E4640B1()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_334(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_296(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_333(uParam0->f_44, iVar188))
					{
						if (func_332(uParam0->f_44, 4, iVar188))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_264(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_333(uParam0->f_44, iVar188))
								{
									if (func_332(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0xF8062BE67BAF24C8(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = unk_0xB5BFE902D3C42807(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_331();
				if (Global_1835013.f_4)
				{
					if (func_330(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x092AA112D47FE733(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x27CA09C6DFAB1E79() && func_329())
			{
				if (func_328())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_330(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x092AA112D47FE733(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_297(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_296(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (unk_0xB3404E397FF56B3B(&(Var0.f_13), ""))
						{
							Global_979575.f_1 = -1;
						}
						else
						{
							Global_979575.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979575.f_1 = -1;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_979575.f_1 = -1;
				}
				Global_1835013 = 999;
				func_194(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_328()
{
	return unk_0x2A3398C6222EB190(Global_970998.f_8, 1);
}

var func_329()
{
	return Global_2453457.f_3;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_331()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xDB2AB5CF39682F77(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_333(int iParam0, int iParam1)
{
	if (unk_0x73B3A7F61ADF183E(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_334(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_291() && !func_290())
			{
				func_289(*uParam2);
				if (unk_0x3BEA079A30B0761A(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	
	if (unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2())
	{
		StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
		StringCopy(&(Var0[1 /*8*/]), "Location", 32);
		StringCopy(&(Var0[2 /*8*/]), "Type", 32);
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
		switch (iParam0)
		{
			case 0:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_1", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			
			case 1:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_2", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			
			case 2:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_4", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			
			case 3:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_5", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			
			case 4:
				StringCopy(&(Var25[1 /*6*/]), "MGCR_6", 24);
				StringCopy(&(Var25[2 /*6*/]), "StreetRace", 24);
				break;
			
			case 5:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_1", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			
			case 6:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_2", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			
			case 7:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_3", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			
			case 8:
				StringCopy(&(Var25[1 /*6*/]), "MGSR_4", 24);
				StringCopy(&(Var25[2 /*6*/]), "SeaRace", 24);
				break;
			
			default:
				break;
		}
		func_338();
		if (func_337(817, &Var25, &Var0, 3, -1, 1, 0))
		{
			func_336(817, 131, -iParam2, 0f, 0);
			func_336(817, 2, iParam3, 0f, 0);
			func_336(817, 147, iParam2, 0f, 0);
			func_336(817, 149, unk_0xE9559A12052415BE(iParam4), 0f, 0);
			func_336(817, 148, 0, 0f, 0);
			func_336(817, 109, 1, 0f, 0);
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			if (iParam1 == 1)
			{
				iVar44 = 1;
				iVar47 = 3;
			}
			else if (iParam1 == 2)
			{
				iVar45 = 1;
				iVar47 = 2;
			}
			else if (iParam1 == 3)
			{
				iVar46 = 1;
				iVar47 = 1;
			}
			unk_0x2AFDA789DC65D05E(86, iVar44, 0f);
			unk_0x2AFDA789DC65D05E(158, iVar45, 0f);
			unk_0x2AFDA789DC65D05E(157, iVar46, 0f);
			unk_0x2AFDA789DC65D05E(96, iVar47, 0f);
		}
	}
}

void func_336(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x2AFDA789DC65D05E(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_332(iParam0, 4, iVar1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x73B3A7F61ADF183E(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_337(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xE096BC82D913B3DB())
	{
	}
	if ((!unk_0x1E8C067EDC3AD10F() && (unk_0xF60A5AF58996CED2() || !unk_0xFEF369FFF9545F0F())) && unk_0x74EEAA6B0390949D())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x1AE803DF5F9B30C9())
			{
				Var69 = { func_210(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var69))
				{
					if (unk_0x7838EB8661A32D68(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x27CA09C6DFAB1E79() && Global_2453457.f_3)
			{
				unk_0x1FF7CB24A8A7BA22(&Var0, &(Global_1767185.f_10));
			}
			else
			{
				unk_0xC7DC4053FD4EB147(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x1E8C067EDC3AD10F())
	{
	}
	if (!unk_0xF60A5AF58996CED2())
	{
	}
	if (unk_0xFEF369FFF9545F0F())
	{
	}
	if (!unk_0x74EEAA6B0390949D())
	{
	}
	return 0;
}

void func_338()
{
	int iVar0;
	
	unk_0x5B96F424DF975F3A();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

int func_339(int iParam0, var uParam1, int iParam2)
{
	if (!unk_0x76B3C79DE564AFC6(*iParam0))
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x2A3EA4C0BCED85F2(uParam1->f_5[0]))
			{
				func_340(uParam1, iParam2);
				uParam1->f_5[0] = unk_0x6BE82EFE6EE60BF4(26379945, uParam1->f_138[0 /*3*/], uParam1->f_163[0 /*3*/], uParam1->f_188, 0, 2);
				uParam1->f_5[1] = unk_0x6BE82EFE6EE60BF4(26379945, uParam1->f_138[1 /*3*/], uParam1->f_163[1 /*3*/], uParam1->f_188, 0, 2);
			}
			else if (!unk_0x63D9209D70E2F5D5(uParam1->f_5[0]))
			{
				unk_0x55CC07D5416539C8(uParam1->f_5[0], 1);
				unk_0xD0E2527DD961F86C(uParam1->f_5[1], uParam1->f_5[0], 2000, 0, 1);
				unk_0xF177BD202464664F("MinigameEndFranklin", 0, 0);
				unk_0x18F1BFAF88AC511B(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				unk_0xA45031E177C3EF20(1);
				unk_0xADE985F6BA90AED5(0f, 1065353216);
				unk_0x31F42B23A853582E(0f);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				unk_0xE983D49A61E9F0FF(uParam1->f_5[1], "HAND_SHAKE", 0.3f);
			}
			else
			{
				unk_0x8903B4129E141B11(*iParam0, 0);
				uParam1->f_3 = (unk_0x31CD6E9F83C10233() + uParam1->f_1);
				uParam1->f_4 = (unk_0x31CD6E9F83C10233() + uParam1->f_2);
				*uParam1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x2A3EA4C0BCED85F2(uParam1->f_5[1]))
			{
				if (!unk_0x0B7CA263460475D0(uParam1->f_5[1]))
				{
					uParam1->f_5[2] = unk_0x6BE82EFE6EE60BF4(26379945, uParam1->f_138[2 /*3*/], uParam1->f_163[2 /*3*/], uParam1->f_188, 0, 2);
					unk_0xD0E2527DD961F86C(uParam1->f_5[2], uParam1->f_5[1], 600, 1, 1);
					unk_0xCBD63CEA31220CE4(uParam1->f_5[2], 1f);
					unk_0xC84CB7879942C3BA("MinigameEndFranklin");
					unk_0xF177BD202464664F("MinigameTransitionIn", 0, 1);
					unk_0x18F1BFAF88AC511B(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					unk_0x46B35AD2F641A4A3(uParam1->f_5[0], 0);
					unk_0x46B35AD2F641A4A3(uParam1->f_5[1], 0);
				}
			}
			else if (unk_0x2A3EA4C0BCED85F2(uParam1->f_5[2]))
			{
				if (!unk_0x0B7CA263460475D0(uParam1->f_5[2]))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					*uParam1 = 3;
				}
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_340(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_145(Local_18.f_0))
	{
		iVar0 = unk_0xE9559A12052415BE(Local_18.f_0);
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_138[0 /*3*/] = { -165.9996f, -1593.64f, 36.05082f };
			uParam0->f_163[0 /*3*/] = { -1.140186f, 0f, -18.93413f };
			uParam0->f_138[1 /*3*/] = { -166.1385f, -1593.818f, 36.05508f };
			uParam0->f_163[1 /*3*/] = { -1.140186f, 0f, -18.47817f };
			uParam0->f_138[2 /*3*/] = { -166.1385f, -1593.818f, 46.05508f };
			uParam0->f_163[2 /*3*/] = { 52.671f, 0f, -18.56f };
			uParam0->f_138[3 /*3*/] = { -167.6591f, -1578.87f, 45.29414f };
			uParam0->f_163[3 /*3*/] = { 52.671f, -0.1338f, 10.8626f };
			if (iVar0 == unk_0x50B7853132D8438E("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { -167.5634f, -1578.09f, 36.15f };
				uParam0->f_163[4 /*3*/] = { -5.9218f, -0.0947f, 21.8453f };
				uParam0->f_138[5 /*3*/] = { -166.1911f, -1577.527f, 36.0991f };
				uParam0->f_163[5 /*3*/] = { -7.2671f, -0.0947f, 44.6906f };
			}
			else if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { -172.7921f, -1581.98f, 36.2618f };
				uParam0->f_163[4 /*3*/] = { -4.0569f, -0.1415f, -22.1047f };
				uParam0->f_138[5 /*3*/] = { -172.311f, -1582.164f, 36.2613f };
				uParam0->f_163[5 /*3*/] = { -4.0569f, -0.1415f, -19.9102f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { -167.6591f, -1578.87f, 35.29414f };
				uParam0->f_163[4 /*3*/] = { -2.670335f, -0.13378f, 10.86258f };
				uParam0->f_138[5 /*3*/] = { -167.4883f, -1578.681f, 35.28797f };
				uParam0->f_163[5 /*3*/] = { -2.670335f, -0.133781f, 12.42358f };
			}
			if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { -166.3731f, -1571.645f, 37.2137f };
				uParam0->f_163[6 /*3*/] = { -10.5428f, -0.1337f, 132.3746f };
				uParam0->f_138[7 /*3*/] = { -164.2483f, -1569.826f, 37.7305f };
				uParam0->f_163[7 /*3*/] = { -10.5428f, -0.1337f, 142.4265f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { -165.8132f, -1572.278f, 35.57696f };
				uParam0->f_163[6 /*3*/] = { -6.502827f, -0.133783f, 134.8512f };
				uParam0->f_138[7 /*3*/] = { -165.6579f, -1571.71f, 35.63565f };
				uParam0->f_163[7 /*3*/] = { -6.502827f, -0.133782f, 138.7487f };
			}
			uParam0->f_188 = 25f;
			break;
		
		case 1:
			uParam0->f_138[0 /*3*/] = { 345.9444f, 326.0113f, 104.2977f };
			uParam0->f_163[0 /*3*/] = { -2.2338f, 0.0066f, -123.2325f };
			uParam0->f_138[1 /*3*/] = { 345.6188f, 325.8368f, 104.3046f };
			uParam0->f_163[1 /*3*/] = { -2.2338f, 0.0066f, -125.4908f };
			uParam0->f_138[2 /*3*/] = { 345.6188f, 325.8368f, 114.3046f };
			uParam0->f_163[2 /*3*/] = { 61.4186f, 0.0066f, -125.2516f };
			uParam0->f_138[3 /*3*/] = { 349.7675f, 318.5139f, 114.5701f };
			uParam0->f_163[3 /*3*/] = { 61.4186f, 0.0683f, -51.2922f };
			if (iVar0 == unk_0x50B7853132D8438E("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { 350.6226f, 319.2393f, 105.5075f };
				uParam0->f_163[4 /*3*/] = { -14.1152f, 0.0341f, -34.8046f };
				uParam0->f_138[5 /*3*/] = { 352.4439f, 318.4305f, 105.5037f };
				uParam0->f_163[5 /*3*/] = { -14.1153f, 0.0341f, -13.9017f };
			}
			else if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { 345.9572f, 322.6875f, 105.8543f };
				uParam0->f_163[4 /*3*/] = { -10.7212f, 0.079f, -88.9707f };
				uParam0->f_138[5 /*3*/] = { 346.243f, 322.2848f, 105.8016f };
				uParam0->f_163[5 /*3*/] = { -9.6145f, 0.079f, -87.2469f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { 349.7675f, 318.5139f, 104.5701f };
				uParam0->f_163[4 /*3*/] = { -6.4077f, 0.0685f, -51.2659f };
				uParam0->f_138[5 /*3*/] = { 349.9963f, 318.3574f, 104.561f };
				uParam0->f_163[5 /*3*/] = { -6.4077f, 0.0685f, -46.9079f };
			}
			if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { 357.8919f, 321.2549f, 105.4607f };
				uParam0->f_163[6 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
				uParam0->f_138[7 /*3*/] = { 359.4669f, 319.8764f, 105.6448f };
				uParam0->f_163[7 /*3*/] = { -3.2542f, 0.0014f, 80.7604f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { 356.9244f, 319.9118f, 104.1889f };
				uParam0->f_163[6 /*3*/] = { -3.2411f, 0.0035f, 62.3779f };
				uParam0->f_138[7 /*3*/] = { 357.7713f, 320.1022f, 104.2291f };
				uParam0->f_163[7 /*3*/] = { -3.2411f, 0.0035f, 74.7132f };
			}
			uParam0->f_188 = 25f;
			break;
		
		case 2:
			uParam0->f_138[0 /*3*/] = { -796.1253f, -2532.318f, 13.7076f };
			uParam0->f_163[0 /*3*/] = { 3.1635f, -0.0349f, 129.4171f };
			uParam0->f_138[1 /*3*/] = { -796.1734f, -2532.26f, 13.7076f };
			uParam0->f_163[1 /*3*/] = { 3.1635f, -0.0349f, 123.6241f };
			uParam0->f_138[2 /*3*/] = { -796.1734f, -2532.26f, 23.7076f };
			uParam0->f_163[2 /*3*/] = { 53.9221f, -0.0349f, 122.1631f };
			uParam0->f_138[3 /*3*/] = { -796.4111f, -2523.561f, 23.9621f };
			uParam0->f_163[3 /*3*/] = { 53.9221f, -0.0707f, -153.6631f };
			if (iVar0 == unk_0x50B7853132D8438E("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { -796.4529f, -2524.616f, 15.041f };
				uParam0->f_163[4 /*3*/] = { -7.1159f, 0.0458f, -134.7064f };
				uParam0->f_138[5 /*3*/] = { -797.3875f, -2525.879f, 15.0393f };
				uParam0->f_163[5 /*3*/] = { -7.1159f, 0.0458f, -115.5518f };
			}
			else if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { -791.3419f, -2519.918f, 15.0172f };
				uParam0->f_163[4 /*3*/] = { -2.267f, 0.0182f, 170.5412f };
				uParam0->f_138[5 /*3*/] = { -791.8328f, -2519.838f, 15.0171f };
				uParam0->f_163[5 /*3*/] = { -2.267f, 0.0182f, 171.6637f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { -796.4111f, -2523.561f, 13.9621f };
				uParam0->f_163[4 /*3*/] = { -2.3601f, -0.0691f, -153.523f };
				uParam0->f_138[5 /*3*/] = { -796.5952f, -2523.708f, 13.9597f };
				uParam0->f_163[5 /*3*/] = { -2.5866f, -0.0094f, -153.6361f };
			}
			if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { -795.2563f, -2531.812f, 15.4606f };
				uParam0->f_163[6 /*3*/] = { -7.3224f, -0.0241f, -23.3218f };
				uParam0->f_138[7 /*3*/] = { -797.5802f, -2532.983f, 15.7165f };
				uParam0->f_163[7 /*3*/] = { -7.3224f, -0.0241f, -24.3511f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { -797.7468f, -2530.266f, 14.2931f };
				uParam0->f_163[6 /*3*/] = { -7.1993f, -0.0094f, -44.5229f };
				uParam0->f_138[7 /*3*/] = { -796.9835f, -2531.192f, 14.3335f };
				uParam0->f_163[7 /*3*/] = { -8.966f, -0.0094f, -29.9138f };
			}
			uParam0->f_188 = 25f;
			break;
		
		case 3:
			uParam0->f_138[0 /*3*/] = { 750.5599f, -1140.983f, 30.1426f };
			uParam0->f_163[0 /*3*/] = { 0.0483f, 0.0013f, -107.741f };
			uParam0->f_138[1 /*3*/] = { 750.0837f, -1141.155f, 30.1422f };
			uParam0->f_163[1 /*3*/] = { 0.0483f, 0.0013f, -117.1716f };
			uParam0->f_138[2 /*3*/] = { 750.0837f, -1141.155f, 40.1422f };
			uParam0->f_163[2 /*3*/] = { 46.0912f, 0.0013f, -117.2112f };
			uParam0->f_138[3 /*3*/] = { 813.1603f, -1161.749f, 38.7039f };
			uParam0->f_163[3 /*3*/] = { 11.999f, 0.0201f, -83.4509f };
			if (iVar0 == unk_0x50B7853132D8438E("DUBSTA3"))
			{
				uParam0->f_138[4 /*3*/] = { 815.0908f, -1162.677f, 29.812f };
				uParam0->f_163[4 /*3*/] = { -13.5952f, 0.056f, -61.7062f };
				uParam0->f_138[5 /*3*/] = { 817.5979f, -1163.707f, 29.4702f };
				uParam0->f_163[5 /*3*/] = { -13.1626f, 0.056f, -11.7796f };
			}
			else if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[4 /*3*/] = { 810.162f, -1160.633f, 30.37f };
				uParam0->f_163[4 /*3*/] = { -12.1619f, 0.0081f, -85.475f };
				uParam0->f_138[5 /*3*/] = { 810.3062f, -1160.876f, 30.3431f };
				uParam0->f_163[5 /*3*/] = { -11.7112f, 0.0081f, -83.0783f };
			}
			else
			{
				uParam0->f_138[4 /*3*/] = { 813.1603f, -1161.749f, 28.7039f };
				uParam0->f_163[4 /*3*/] = { -2.9712f, 0.0059f, -83.4627f };
				uParam0->f_138[5 /*3*/] = { 813.6791f, -1162.024f, 28.6743f };
				uParam0->f_163[5 /*3*/] = { -3.9024f, 0.0059f, -79.3115f };
			}
			if (iVar0 == unk_0x50B7853132D8438E("MONSTER"))
			{
				uParam0->f_138[6 /*3*/] = { 822.7552f, -1160.912f, 29.7837f };
				uParam0->f_163[6 /*3*/] = { -11.332f, 0.004f, 86.003f };
				uParam0->f_138[7 /*3*/] = { 824.2561f, -1162.348f, 30.0892f };
				uParam0->f_163[7 /*3*/] = { -6.1371f, 0.004f, 85.1825f };
			}
			else
			{
				uParam0->f_138[6 /*3*/] = { 821.5195f, -1163.616f, 28.5451f };
				uParam0->f_163[6 /*3*/] = { -4.4063f, -0.0244f, 60.9237f };
				uParam0->f_138[7 /*3*/] = { 822.8655f, -1162.841f, 28.6227f };
				uParam0->f_163[7 /*3*/] = { -0.9147f, -0.0244f, 75.4051f };
			}
			uParam0->f_188 = 25f;
			break;
		
		case 4:
			uParam0->f_138[0 /*3*/] = { -1051.948f, -1152.604f, 1.7317f };
			uParam0->f_163[0 /*3*/] = { 4.3072f, -0.0727f, 97.2603f };
			uParam0->f_138[1 /*3*/] = { -1051.808f, -1152.268f, 1.7187f };
			uParam0->f_163[1 /*3*/] = { 4.3072f, -0.0727f, 90.129f };
			uParam0->f_138[2 /*3*/] = { -1051.808f, -1152.268f, 11.7187f };
			uParam0->f_163[2 /*3*/] = { 52.162f, -0.0727f, 90.129f };
			uParam0->f_138[3 /*3*/] = { -1023.002f, -1126.407f, 12.5596f };
			uParam0->f_163[3 /*3*/] = { 52.162f, -0.0315f, 151.2765f };
			uParam0->f_138[4 /*3*/] = { -1023.002f, -1126.407f, 2.5596f };
			uParam0->f_163[4 /*3*/] = { -2.9801f, -0.0213f, 151.248f };
			uParam0->f_138[5 /*3*/] = { -1023.498f, -1126.546f, 2.5418f };
			uParam0->f_163[5 /*3*/] = { -2.9801f, -0.0213f, 155.1694f };
			uParam0->f_138[6 /*3*/] = { -1028.427f, -1130.713f, 2.3506f };
			uParam0->f_163[6 /*3*/] = { 4.2629f, -0.0213f, -73.0231f };
			uParam0->f_138[7 /*3*/] = { -1028.617f, -1131.717f, 2.6039f };
			uParam0->f_163[7 /*3*/] = { -1.0784f, -0.0213f, -61.3829f };
			uParam0->f_188 = 25f;
			break;
		
		case 5:
			uParam0->f_138[0 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_163[0 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_138[1 /*3*/] = { 3006.734f, 1170.372f, 2.515141f };
			uParam0->f_163[1 /*3*/] = { 4.303476f, 0f, -20.7533f };
			uParam0->f_138[2 /*3*/] = { 3006.734f, 1170.372f, 22.51514f };
			uParam0->f_163[2 /*3*/] = { 54.30347f, 0f, -20.7533f };
			uParam0->f_188 = 35f;
			break;
		
		case 6:
			uParam0->f_138[0 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_163[0 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_138[1 /*3*/] = { 3589.204f, 5155.575f, 11.8528f };
			uParam0->f_163[1 /*3*/] = { -15.707f, -0.0486f, -159.6172f };
			uParam0->f_138[2 /*3*/] = { 3595.856f, 5136.728f, 24.00473f };
			uParam0->f_163[2 /*3*/] = { 50.18856f, 0f, -162.0384f };
			uParam0->f_188 = 35f;
			break;
		
		case 7:
			uParam0->f_138[0 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_163[0 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_138[1 /*3*/] = { -1466.864f, 2631.414f, 2.130511f };
			uParam0->f_163[1 /*3*/] = { 3.075093f, -0.03981f, -114.1416f };
			uParam0->f_138[2 /*3*/] = { -1466.864f, 2631.414f, 22.13051f };
			uParam0->f_163[2 /*3*/] = { 53.07509f, -0.03981f, -114.1416f };
			uParam0->f_188 = 35f;
			break;
		
		case 8:
			uParam0->f_138[0 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_163[0 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_138[1 /*3*/] = { 406.0171f, -2727.061f, 1.925007f };
			uParam0->f_163[1 /*3*/] = { 2.283322f, 0.014f, -41.70963f };
			uParam0->f_138[2 /*3*/] = { 406.0171f, -2727.061f, 21.92501f };
			uParam0->f_163[2 /*3*/] = { 52.28332f, 0.014f, -41.70963f };
			uParam0->f_188 = 35f;
			break;
	}
}

var func_341(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x5E9D1531733B27F6((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_342(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	func_346(uParam0);
	iVar0 = 0;
	sVar1 = "";
	switch (iParam2)
	{
		case 1:
			iVar0 = 3;
			sVar1 = "SPR_1stpl";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "SPR_2ndpl";
			break;
		
		case 3:
			iVar0 = 1;
			sVar1 = "SPR_3rdpl";
			break;
		
		case 4:
			iVar0 = 0;
			sVar1 = "SPR_4thpl";
			break;
		
		case 5:
			iVar0 = 0;
			sVar1 = "SPR_5thpl";
			break;
		
		case 6:
			iVar0 = 0;
			sVar1 = "SPR_6thpl";
			break;
		
		case 7:
			iVar0 = 0;
			sVar1 = "SPR_7thpl";
			break;
		
		case 8:
			iVar0 = 0;
			sVar1 = "SPR_8thpl";
			break;
	}
	switch (iParam1)
	{
		case 0:
			sVar2 = "SLOSSANTOS";
			break;
		
		case 1:
			sVar2 = "CITYCIRCUIT";
			break;
		
		case 2:
			sVar2 = "AIRPORTR";
			break;
		
		case 3:
			sVar2 = "FREEWAY";
			break;
		
		case 4:
			sVar2 = "VERSPUCCI";
			break;
		
		case 5:
			sVar2 = "NORTHCOAST";
			break;
		
		case 6:
			sVar2 = "SOUTHCOAST";
			break;
		
		case 7:
			sVar2 = "CANYON";
			break;
		
		case 8:
			sVar2 = "LOSSANTOS";
			break;
	}
	func_345(uParam0, sVar1, sVar2, 0);
	func_344(uParam0, 18, "SPR_TIME", "", iParam4, 0, 0, 0);
	uParam0->f_561 = 1;
	if ((bLocal_618 && unk_0xED5FFF2E0422067E()) && unk_0xF60A5AF58996CED2())
	{
		if (iLocal_617 > iParam4 || iLocal_617 <= 0)
		{
			iLocal_617 = iParam4;
		}
		func_344(uParam0, 18, "SPR_BESTTIME", "", iLocal_617, 0, 0, 0);
		if (iLocal_616 > iParam4 || iLocal_616 <= 0)
		{
			iLocal_616 = iParam4;
		}
		func_344(uParam0, 18, "LOB_SPLIT_0", "", iLocal_616, 0, 0, 0);
	}
	if (iParam2 <= 3)
	{
		func_343(uParam0, 1, "SPR_RESULT", iParam2, uParam3, 1, iVar0, 0);
	}
	else
	{
		func_343(uParam0, 0, "SPR_RESULT", iParam2, uParam3, 1, iVar0, 0);
	}
}

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = uParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_344(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_345(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_346(var uParam0)
{
	func_228(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_347(var uParam0)
{
	func_134(&(uParam0->f_14), 0, 0, 1, 1);
	func_133(&(uParam0->f_14), "SPR_CONT2", 2, 215, 1, 1, 0);
	func_133(&(uParam0->f_14), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
	if (unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2())
	{
		func_133(&(uParam0->f_14), "HUD_INPUT68", 2, 211, 1, 1, 0);
	}
	func_349(&(uParam0->f_14), 1);
	func_348(&(uParam0->f_14), 1);
}

void func_348(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 16);
	}
	else
	{
		func_122(&(uParam0->f_1), 16);
	}
}

void func_349(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 1024);
	}
	else
	{
		func_122(&(uParam0->f_1), 1024);
	}
}

void func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xED5FFF2E0422067E() && unk_0xF60A5AF58996CED2()) && iLocal_619)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 2;
				break;
			
			case 1:
				iVar0 = 1;
				iVar1 = 1;
				break;
			
			case 2:
				iVar0 = 2;
				iVar1 = 2;
				break;
			
			case 3:
				iVar0 = 3;
				iVar1 = 2;
				break;
			
			case 4:
				iVar0 = 4;
				iVar1 = 2;
				break;
			
			case 5:
				iVar0 = 5;
				iVar1 = 0;
				break;
			
			case 6:
				iVar0 = 6;
				iVar1 = 0;
				break;
			
			case 7:
				iVar0 = 7;
				iVar1 = 0;
				break;
			
			case 8:
				iVar0 = 8;
				iVar1 = 0;
				break;
			
			default:
				break;
		}
		func_351(&Local_175, 91, "", "", iVar0, iVar1, 0, 0);
		iLocal_619 = 0;
	}
}

void func_351(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_358())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_358())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_358())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_358())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_358())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_358())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_358())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_357(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1641087.f_54 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_356(Global_1641087.f_116067) || func_353(Global_1641087.f_116067))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835390.f_2708)
	{
		if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_352(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_352(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_308(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return unk_0x50B7853132D8438E(&cVar0);
}

var func_353(int iParam0)
{
	return (func_355(iParam0) || func_354(iParam0));
}

bool func_354(int iParam0)
{
	return iParam0 == 44;
}

bool func_355(int iParam0)
{
	return iParam0 == 45;
}

bool func_356(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_357(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_358()
{
	if (((((((Global_1641087.f_46375 == 1 || Global_1641087.f_46375 == 3) || Global_1641087.f_46375 == 5) || Global_1641087.f_46375 == 7) || Global_1641087.f_46375 == 8) || Global_1641087.f_46375 == 9) || Global_1641087.f_46375 == 11) || Global_1641087.f_46375 == 13)
	{
		return 1;
	}
	return 0;
}

bool func_359(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xBE91026C1FC72180(iParam0);
	return unk_0x772F801619C83779(iParam0);
}

void func_360()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	int iVar7;
	
	unk_0x76FC214916E76AC2();
	func_443();
	func_441(Local_636.f_0);
	if (Local_636.f_0 == 1)
	{
		if ((Local_642.f_6 > 7 && Local_642.f_6 < 17) || (Local_642.f_8 == 1 && Local_642.f_6 < 2))
		{
			unk_0x68F19FECF821F7A2(0f);
		}
		else if (Local_642.f_6 < 8)
		{
			unk_0x68F19FECF821F7A2(0.4f);
		}
		else
		{
			unk_0x68F19FECF821F7A2(0.1f);
		}
	}
	else if (Local_642.f_8 == 1 && Local_642.f_6 < 3)
	{
		unk_0x68F19FECF821F7A2(0f);
	}
	else
	{
		unk_0x68F19FECF821F7A2(0.1f);
	}
	switch (iLocal_631)
	{
		case 0:
			if (Local_636.f_1 == 3)
			{
				unk_0x03C4BA9F5A120DFE(uLocal_1257);
				unk_0x616FBCC20E22C43A();
			}
			iLocal_632 = 0;
			iLocal_1497 = -1;
			iLocal_1678 = unk_0x31CD6E9F83C10233();
			iLocal_1669 = -1;
			func_440();
			iLocal_1828 = 1;
			func_430(1);
			iLocal_1180 = Local_642.f_11;
			iLocal_1181 = unk_0x31CD6E9F83C10233() + 7500;
			if (Local_636.f_1 != 3 && Global_104439.f_24840.f_5 < 3)
			{
				func_429("FM_IHELP_SLP", -1);
				Global_104439.f_24840.f_5++;
			}
			iLocal_631 = 1;
			break;
		
		case 1:
			func_403(1, 0);
			func_402();
			func_386();
			func_379();
			func_377();
			if (iLocal_635 > unk_0x31CD6E9F83C10233())
			{
				unk_0x4D0E578030545817();
			}
			if (func_376())
			{
				iLocal_629 = 4;
				iLocal_630 = 5;
				iLocal_631 = 0;
			}
			if (func_363() && func_430(1))
			{
				if (Local_636.f_1 == 3)
				{
					unk_0xC4A073BAEF3ECBCE("RADIO_16_SILVERLAKE");
					unk_0xB3E27A9E412BBDF8("SEA_RACE_DURING_RACE");
					unk_0xFD69BDF108B32E5B("SEA_RACES_OUTRO");
				}
				else
				{
					unk_0xB3E27A9E412BBDF8("STREET_RACE_DURING_RACE");
					unk_0xFD69BDF108B32E5B("STREET_RACE_OUTRO");
				}
				Var4 = { Local_654[(Local_654.f_248 - 1) /*3*/] };
				unk_0xB922891BFD232C45(1, &uVar0, &uVar1, &uVar2, &uVar3);
				if (iLocal_1187 != 0)
				{
					unk_0x1EC5FCC706B5D133(iLocal_1187);
				}
				iLocal_1187 = unk_0x73B683754FB54A17(9, Var4 + Vector(6f, 0f, 0f), Local_654[0 /*3*/], (8.5f * 1.333f), uVar0, uVar1, uVar2, 180, 0);
				iLocal_631 = 2;
			}
			break;
		
		case 2:
			iVar7 = unk_0xED1168B8D2D313FA();
			if (unk_0x4B0365EB2D59E6FA(iVar7))
			{
				if (unk_0x2774AF2DE7B6C005(iVar7))
				{
					unk_0xC1352A845590F32D(iVar7);
				}
			}
			if (func_144(0))
			{
				func_142(0);
			}
			func_362();
			iLocal_630 = 3;
			iLocal_631 = 0;
			break;
	}
	func_361();
}

void func_361()
{
	switch (iLocal_633)
	{
		case 0:
			if (iLocal_634 > 0)
			{
				if (unk_0x31CD6E9F83C10233() < iLocal_634)
				{
					if (unk_0xD887E21676314450(0, 71))
					{
						if (func_145(Local_18.f_0) && unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), Local_18.f_0))
						{
							if (unk_0x2076012573940835(unk_0xE9559A12052415BE(Local_18.f_0)))
							{
								unk_0x4AA8096E1879DC54(Local_18.f_0, 1);
							}
							unk_0xF177BD202464664F("RaceTurbo", 0, 0);
							iLocal_634 = unk_0x31CD6E9F83C10233() + 2000;
							iLocal_633 = 1;
						}
					}
				}
				else
				{
					iLocal_633 = 2;
				}
			}
			break;
		
		case 1:
			if (unk_0x31CD6E9F83C10233() > iLocal_634)
			{
				if (func_145(Local_18.f_0) && unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), Local_18.f_0))
				{
					if (unk_0x2076012573940835(unk_0xE9559A12052415BE(Local_18.f_0)))
					{
						unk_0x4AA8096E1879DC54(Local_18.f_0, 0);
					}
					iLocal_633 = 2;
				}
			}
			else if (func_145(Local_18.f_0) && unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), Local_18.f_0))
			{
				unk_0xF6527BEBDCAF220D(Local_18.f_0, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

void func_362()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_116(&(Local_907[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

int func_363()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
		{
			iLocal_629 = 6;
			iLocal_630 = 5;
			iLocal_631 = 0;
			return 0;
		}
	}
	if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
	{
		if (unk_0x432757A9E7AAFA96(Local_18.f_0, 0) && !func_375())
		{
			if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0))
			{
				func_373();
				func_366();
				return 1;
			}
			else if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
			{
				iLocal_629 = 4;
				iLocal_630 = 5;
				iLocal_631 = 0;
			}
			else
			{
				func_146(0);
				if (func_365("RACES_RHELP") && unk_0x31CD6E9F83C10233() > iLocal_1455)
				{
					unk_0x8C361F37C04084F4(1);
				}
				if (!unk_0xA761A0B6072010C8(Local_18.f_1) && !(Local_636.f_1 == 2 && (unk_0xDECC749CB8B5AAB6(Local_18.f_0, 0, 1000) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 1, 1000))))
				{
					Local_18.f_1 = unk_0xE80C2D6BF636C6C4(Local_18.f_0);
					unk_0x8D60956768933D7C(Local_18.f_1, 1);
					unk_0x067D86058370B7EB(Local_18.f_1, 1f);
					if (Local_636.f_1 == 3)
					{
						unk_0x1E420F926A7BC4D2("MGSR_FELL_OFF");
					}
					if (Local_18.f_2 == 0)
					{
						Local_18.f_2 = 1;
						switch (Local_636.f_1)
						{
							case 1:
								func_364("BIKE_BACK", 7500, 1);
								break;
							
							case 2:
								func_364("CAR_BACK", 7500, 1);
								break;
							
							case 3:
								func_364("SEA_BACK", 7500, 1);
								break;
							}
						}
					}
			}
		}
		else
		{
			func_373();
			iLocal_629 = 3;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
	}
	return 0;
}

void func_364(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

bool func_365(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_366()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (func_9(unk_0x0031992CA618A445()))
	{
		unk_0x49544FB997F0AADE(unk_0x0031992CA618A445(), 272, 1);
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (!unk_0x432757A9E7AAFA96(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
			{
				iLocal_1496 = 1;
				iLocal_632 = 3;
			}
			if (!func_365("RACES_RHELP"))
			{
				if (!func_372())
				{
					func_371("RACES_RHELP");
					iLocal_1455 = unk_0x31CD6E9F83C10233() + 1000;
				}
				if (((unk_0xDECC749CB8B5AAB6(Local_18.f_0, 2, 30000) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 3, 60000)) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 0, 20000)) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 1, 3000))
				{
					func_371("RACES_RHELP");
					iLocal_1455 = unk_0x31CD6E9F83C10233() + 1000;
				}
			}
			else if (unk_0x31CD6E9F83C10233() > iLocal_1455)
			{
				if ((((func_372() || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 2, 30000)) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 3, 60000)) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 0, 20000)) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 1, 3000))
				{
					unk_0x8C361F37C04084F4(1);
				}
			}
		}
	}
	if ((unk_0x9148803485DEDF45(0, 75) || unk_0x59ABF4F2C485FC38(0, 75)) || iLocal_1496 == 1)
	{
		switch (iLocal_632)
		{
			case 0:
				iLocal_1497 = unk_0x31CD6E9F83C10233();
				iLocal_632 = 1;
				break;
			
			case 1:
				if ((unk_0x31CD6E9F83C10233() - iLocal_1497) > 500)
				{
					iLocal_1497 = unk_0x31CD6E9F83C10233();
					iLocal_632 = 2;
				}
				break;
			
			case 2:
				func_370((unk_0x31CD6E9F83C10233() - iLocal_1497), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
				if ((unk_0x31CD6E9F83C10233() - iLocal_1497) >= 400)
				{
					unk_0xC9621A9AD282CC14(0, 75, 1);
				}
				if ((unk_0x31CD6E9F83C10233() - iLocal_1497) >= 1500)
				{
					iLocal_632 = 3;
				}
				break;
			
			case 3:
				unk_0xC9621A9AD282CC14(0, 75, 1);
				if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
				{
					if (Local_642.f_6 > 0)
					{
						Var8 = { Local_654[(Local_642.f_6 - 1) /*3*/] };
					}
					else
					{
						Var8 = { Local_654.f_181[Local_654.f_249 /*3*/] };
					}
					unk_0x0C8227B79F317196(sLocal_1486, Var8, &iVar0);
					iVar1 = iVar0 + 1;
					if (iVar1 >= iLocal_1663)
					{
						iVar1 = 0;
					}
					unk_0x7376759FAE2EEEB0(sLocal_1486, iVar0, &Var2);
					unk_0x7376759FAE2EEEB0(sLocal_1486, iVar1, &Var5);
					if (!unk_0x736668867F457F94(Var2, 5f) || func_369(Local_18.f_0, Var2, 1) < 5f)
					{
						unk_0x0A69FBBF51E1A08F(Local_18.f_0, Var2, 1, 0, 0, 1);
						func_367(Local_18.f_0, Var5);
						unk_0xF858E16CD33AF71B(Local_18.f_0);
						if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0))
						{
							unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), Local_18.f_0, -1);
						}
						unk_0xADE985F6BA90AED5(0, 1065353216);
						unk_0x31F42B23A853582E(0);
						if (func_365("RACES_RHELP"))
						{
							unk_0x8C361F37C04084F4(1);
						}
						iLocal_632 = 4;
					}
				}
				break;
			
			case 4:
				unk_0xC9621A9AD282CC14(0, 75, 1);
				if (!unk_0x9148803485DEDF45(0, 75) && !unk_0x59ABF4F2C485FC38(0, 75))
				{
					unk_0x14C5CBCF9E6EB7B5(0, 75, 1);
					iLocal_1497 = -1;
					iLocal_1496 = 0;
					iLocal_632 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_1497 = -1;
		iLocal_1496 = 0;
		iLocal_632 = 0;
	}
}

void func_367(int iParam0, struct<3> Param1)
{
	float fVar0;
	
	fVar0 = func_368(unk_0xF177E0DA126D71C8(iParam0, 1), Param1, 1);
	unk_0x5082D1A6D078DB20(iParam0, fVar0);
}

float func_368(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x3056DED407548E89(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_369(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

void func_370(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_218(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_217(0, iVar0);
		Global_1356070.f_1093[iVar0] = iParam0;
		Global_1356070.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_1093.f_194[iVar0] = iParam3;
		Global_1356070.f_1093.f_183[iVar0] = iParam4;
		Global_1356070.f_1093.f_216[iVar0] = iParam5;
		Global_1356070.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1356070.f_1093.f_258[iVar0] = iParam8;
		Global_1356070.f_1093.f_269[iVar0] = iParam9;
		Global_1356070.f_1093.f_312[iVar0] = iParam10;
		Global_1356070.f_1093.f_323[iVar0] = iParam11;
		Global_1356070.f_1093.f_334[iVar0] = iParam12;
		Global_1356070.f_1093.f_345[iVar0] = iParam13;
		Global_1356070.f_1088 = 1;
		Global_1356070.f_1093.f_356[iVar0] = iParam14;
		Global_1356070.f_1093.f_367[iVar0] = iParam15;
		Global_1356070.f_1093.f_378[iVar0] = iParam16;
		Global_1356070.f_1093.f_389[iVar0] = iParam17;
		Global_1356070.f_1093.f_400[iVar0] = iParam18;
		Global_1356070.f_1093.f_411[iVar0] = iParam19;
		Global_1356070.f_1093.f_422[iVar0] = iParam20;
		Global_1356070.f_1093.f_433[iVar0] = iParam21;
		Global_1356070.f_1093.f_444[iVar0] = iParam22;
		Global_1356070.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_371(char* sParam0)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

int func_372()
{
	if (unk_0x7019CC495F72B3AC(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
	{
		if (Local_636.f_1 == 2 || Local_636.f_1 == 1)
		{
			return 0;
		}
		else if (iLocal_1484 >= 0)
		{
			iLocal_1484 = -1;
		}
	}
	else if (Local_636.f_1 == 3)
	{
		if (unk_0xF6C6ED9F9C63AEC0(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
		{
			iLocal_1484 = -1;
			return 1;
		}
		if (iLocal_1484 < 0)
		{
			iLocal_1484 = unk_0x31CD6E9F83C10233() + 2000;
		}
		else if (unk_0x31CD6E9F83C10233() > iLocal_1484)
		{
			return 0;
		}
	}
	return 1;
}

void func_373()
{
	if (unk_0xA761A0B6072010C8(Local_18.f_1))
	{
		unk_0x0C4BDC77192798AE(&(Local_18.f_1));
		if (Local_636.f_1 == 3)
		{
			unk_0x1E420F926A7BC4D2("MGSR_BACK_ON");
		}
	}
	if ((func_374("CAR_BACK", 0, 0) || func_374("BIKE_BACK", 0, 0)) || func_374("SEA_BACK", 0, 0))
	{
		unk_0x27FC4121D73AF604();
	}
}

var func_374(char* sParam0, int iParam1, char* sParam2)
{
	unk_0xDDF591880CC70341(sParam0);
	if (iParam1 == 1)
	{
		unk_0x7C8A7ECFBAD2C8C4(sParam2);
	}
	return unk_0xD140B300704DB2C2();
}

int func_375()
{
	if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0) && Local_636.f_1 == 2)
	{
		if (unk_0xDECC749CB8B5AAB6(Local_18.f_0, 0, 1000) || unk_0xDECC749CB8B5AAB6(Local_18.f_0, 1, 1000))
		{
			return 1;
		}
	}
	return 0;
}

int func_376()
{
	int iVar0;
	
	if (iLocal_1669 < 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_654.f_249 - 1))
		{
			if (Local_907[iVar0 /*18*/].f_9 > Local_654.f_247)
			{
				iLocal_1669 = (unk_0x31CD6E9F83C10233() + 120000);
			}
			iVar0++;
		}
	}
	if (iLocal_1669 > 0)
	{
		if (unk_0x31CD6E9F83C10233() > iLocal_1669)
		{
			return 1;
		}
	}
	return 0;
}

void func_377()
{
	int iVar0;
	
	if (iLocal_1828 && Local_636.f_0 == 1)
	{
		unk_0x0C8227B79F317196(sLocal_1486, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), &iVar0);
		if (iVar0 > 50 && iVar0 < 70)
		{
			if (!unk_0x76B3C79DE564AFC6(uLocal_1827))
			{
				unk_0xBE91026C1FC72180(joaat("baller"));
				if (unk_0x772F801619C83779(joaat("baller")))
				{
					iLocal_1827 = unk_0x5129A9193468FF77(joaat("baller"), -1080.728f, 454.4489f, 76.54124f, -32.27425f, 1, 1, 0);
				}
			}
		}
		else if (iVar0 > 90)
		{
			if (unk_0x76B3C79DE564AFC6(iLocal_1827))
			{
				unk_0x9793B48C4C8275F8(joaat("baller"));
				func_378(&iLocal_1827);
				iLocal_1828 = 0;
			}
		}
	}
}

void func_378(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0x7A6C051038031EFA(*uParam0, 0);
		if (unk_0xCC234795142FC2D2(*uParam0) && unk_0xC9FBF92709010AC3(*uParam0, 1))
		{
			unk_0x28BB69BE14577487(uParam0);
		}
	}
}

void func_379()
{
	if (func_137() == 1)
	{
		if (Local_642.f_11 < iLocal_1180)
		{
			if (unk_0x31CD6E9F83C10233() > iLocal_1181 && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0))
			{
				func_384(unk_0x0031992CA618A445(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
				iLocal_1180 = Local_642.f_11;
				iLocal_1181 = unk_0x31CD6E9F83C10233() + 7500;
			}
			else
			{
				iLocal_1180 = Local_642.f_11;
			}
		}
		else if (Local_642.f_11 > iLocal_1180)
		{
			if (unk_0x31CD6E9F83C10233() > iLocal_1181 && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0))
			{
				func_384(unk_0x0031992CA618A445(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
				iLocal_1180 = Local_642.f_11;
				iLocal_1181 = unk_0x31CD6E9F83C10233() + 7500;
			}
			else
			{
				iLocal_1180 = Local_642.f_11;
			}
		}
		if (func_145(Local_18.f_0))
		{
			if (unk_0x31CD6E9F83C10233() > iLocal_1181 && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_18.f_0, 0))
			{
				if (func_383())
				{
					func_384(unk_0x0031992CA618A445(), "RACE_CRASH", "FRANKLIN_NORMAL", 10);
					iLocal_1181 = unk_0x31CD6E9F83C10233() + 7500;
				}
			}
		}
	}
	if (Local_636.f_1 != 3)
	{
		if (func_382(unk_0x0031992CA618A445()))
		{
			if (iLocal_1182 < 0)
			{
				iLocal_1182 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(2500, 5000));
			}
			else if (unk_0x31CD6E9F83C10233() > iLocal_1182)
			{
				unk_0x71CE8B25981385FD(iLocal_1183, "DISTANT_RACERS", Local_907[func_380() /*18*/].f_6, "ROAD_RACE_SOUNDSET", 0, 0);
				iLocal_1182 = -1;
			}
		}
		else if (iLocal_1182 > 0)
		{
			iLocal_1182 = -1;
		}
	}
}

int func_380()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		if (func_145(Local_907[iVar0 /*18*/].f_6))
		{
			fVar1 = func_381(unk_0x0031992CA618A445(), Local_907[iVar0 /*18*/].f_6, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_381(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
}

int func_382(int iParam0)
{
	float fVar0;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		fVar0 = unk_0x38A3CC71471EC547(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_383()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		if (func_145(Local_907[iVar0 /*18*/].f_6))
		{
			if (unk_0xE771CD42874080E1(Local_18.f_0, Local_907[iVar0 /*18*/].f_6))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_384(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x90A3B3322B687517(iParam0, sParam1, sParam2, func_385(iParam3), 0);
}

int func_385(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_386()
{
	if ((((Local_636.f_0 == 5 || Local_636.f_0 == 6) || Local_636.f_0 == 7) || Local_636.f_0 == 8) || Local_636.f_0 == 1)
	{
		func_401();
		func_400((unk_0x31CD6E9F83C10233() - Local_642.f_5), 0, "", Local_642.f_11, Local_654.f_249 + 1, "", 0, 1, Local_642.f_6, Local_642.f_7, "", 1, 1, -1, "", -1f, 1, -1f, iLocal_616, 0, -1, -1, 0);
	}
	else
	{
		func_399();
		func_317(1, -1);
		if (unk_0x9148803485DEDF45(0, 20))
		{
			if (!Global_1574109)
			{
				Global_1574109 = 1;
			}
		}
		else if (Global_1574109)
		{
			Global_1574109 = 0;
		}
		func_401();
		func_387((unk_0x31CD6E9F83C10233() - Local_642.f_5), 0, "", Local_642.f_8, Local_654.f_247, "", Local_642.f_11, Local_654.f_249 + 1, "", 0, 1, Local_642.f_6, Local_642.f_7, "", 1, -1, -1, "", 6, Local_642.f_10, "", (unk_0x31CD6E9F83C10233() - Local_642.f_9), "", 0, 1, -1, "", -1f, 1, 1, -1f, iLocal_616, 0, -1, -1, 0, 0);
	}
}

void func_387(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	
	if (bParam24)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam34 != -1)
	{
		func_216(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_398();
	if (fParam27 > -1f)
	{
		func_395(0, "", iParam25, iParam28, 10, 0, sParam26, 1, fParam27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam15 > -1)
	{
		sVar1 = sParam17;
		if (func_394(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		func_370(iParam15, iParam16, sVar1, iParam18, iParam25, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	if (!bParam32 || func_393())
	{
		if (iParam6 > -1 && iParam7 > 0)
		{
			sVar2 = sParam8;
			if (func_394(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			func_392(iParam6, iParam7, sVar2, iParam10, iParam25, 7, 0, 0, 0, iParam10, 0);
		}
	}
	if (iParam3 > -1)
	{
		sVar3 = sParam5;
		if (func_394(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_1574109)
		{
			if (func_391())
			{
				func_390(iParam3, iParam4, sVar3, iParam25, 1, 8, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
			}
		}
	}
	if (iParam11 > -1 && iParam12 > -1)
	{
		sVar4 = sParam13;
		if (func_394(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_1574109)
		{
			func_392(iParam11, iParam12, sVar4, iParam14, iParam25, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_395(0, sVar5, -1, 1, 7, 0, sVar6, 1, fParam30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam19 > -1)
	{
		sVar7 = sParam20;
		if (func_394(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if (((Global_1641087.f_46375 != 1 && Global_1641087.f_46375 != 3) && Global_1641087.f_46375 != 5) && Global_1641087.f_46375 != 7)
	{
		if (iParam21 > -1)
		{
			if (!func_18(unk_0x3D35F9864E4640B1()))
			{
				sVar8 = sParam22;
				if (func_394(sVar8))
				{
					sVar8 = "TIMER_CURLAP";
				}
				func_216(iParam21, sVar8, 0, 1, iParam25, iParam23, 6, 0, iParam29, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (func_394(sVar9))
	{
		sVar9 = func_389(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_1574109) || func_388() == 2)
		{
			if (bParam32)
			{
				if (Global_1574109 && !unk_0x0BD3CCFB6C6CFA91(sParam35))
				{
					func_216(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0);
				}
				else if (iParam31 <= 0)
				{
					func_216(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0);
				}
				else
				{
					func_216(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			else if (func_388() == 2 && !unk_0x0BD3CCFB6C6CFA91(sParam35))
			{
				func_216(iParam31, sParam35, iParam9, 1, iParam25, 0, 5, 1, 1, 0, 0, iParam31 <= 0, 0, 0, 0, 0, 0);
			}
			else if (iParam31 <= 0)
			{
				func_216(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0);
			}
			else
			{
				func_216(iParam31, sVar9, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	else if (Global_1574109 || func_388() == 2)
	{
		if (iParam19 <= 0)
		{
			func_216(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_216(iParam19, sParam20, iParam9, 1, iParam25, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	sVar10 = sParam2;
	if (func_394(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > -1)
	{
		func_216(iParam0, sVar10, iParam9, iVar0, iParam25, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (func_394(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_388()
{
	return Global_1354565.f_68;
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TIMER_WORLDTIME";
			break;
		
		case 1:
			return "FRIEND_WORLDTIME";
			break;
		
		case 2:
			return "CREW_WORLDTIME";
			break;
		
		case 3:
			return "PERS_WORLDTIME";
			break;
	}
	return "";
}

void func_390(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_218(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_217(4, iVar0);
		Global_1356070.f_3098[iVar0] = iParam0;
		Global_1356070.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_3098.f_183[iVar0] = iParam3;
		Global_1356070.f_3098.f_216[iVar0] = iParam5;
		Global_1356070.f_3098.f_194[iVar0] = iParam4;
		Global_1356070.f_3098.f_227[iVar0] = iParam6;
		Global_1356070.f_3098.f_270[iVar0] = iParam7;
		Global_1356070.f_3098.f_281[iVar0] = iParam8;
		Global_1356070.f_3098.f_292[iVar0] = iParam9;
		Global_1356070.f_3098.f_303[iVar0] = iParam10;
		Global_1356070.f_3098.f_314[iVar0] = iParam11;
		Global_1356070.f_3098.f_325[iVar0] = iParam13;
		Global_1356070.f_3098.f_336[iVar0] = iParam14;
		Global_1356070.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x20551D6D924ED04B()) && iParam12)
		{
			Global_1356070.f_1088 = 1;
		}
	}
}

int func_391()
{
	return 1;
	return 0;
}

void func_392(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_218(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_217(5, iVar0);
		Global_1356070.f_3456[iVar0] = iParam0;
		Global_1356070.f_3456.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_3456.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_3456.f_194[iVar0] = uParam3;
		Global_1356070.f_3456.f_183[iVar0] = iParam4;
		Global_1356070.f_3456.f_216[iVar0] = iParam5;
		Global_1356070.f_3456.f_227[iVar0] = iParam6;
		Global_1356070.f_3456.f_270[iVar0] = iParam7;
		Global_1356070.f_3456.f_281[iVar0] = iParam8;
		Global_1356070.f_3456.f_292[iVar0] = iParam9;
		Global_1356070.f_3456.f_303[iVar0] = iParam10;
	}
}

bool func_393()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_140, 2);
}

int func_394(char* sParam0)
{
	if (unk_0x996B09F758C57FBE(uParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(uParam0, "") || unk_0xB3404E397FF56B3B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_395(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_218(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_217(6, iVar0);
		Global_1356070.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_3770.f_183[iVar0] = iParam3;
		Global_1356070.f_3770.f_172[iVar0] = iParam2;
		Global_1356070.f_3770.f_260[iVar0] = iParam4;
		Global_1356070.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_3770.f_443[iVar0] = iParam7;
		Global_1356070.f_3770.f_454[iVar0] = fParam8;
		Global_1356070.f_3770.f_497[iVar0] = iParam9;
		Global_1356070.f_3770.f_508[iVar0] = iParam10;
		Global_1356070.f_3770.f_205[iVar0] = iParam11;
		Global_1356070.f_3770.f_216[iVar0] = iParam12;
		Global_1356070.f_3770.f_227[iVar0] = iParam13;
		Global_1356070.f_3770.f_238[iVar0] = iParam14;
		Global_1356070.f_3770.f_249[iVar0] = iParam15;
		Global_1356070.f_3770.f_519[iVar0] = iParam16;
		Global_1356070.f_3770.f_530[iVar0] = iParam17;
		Global_1356070.f_3770.f_541[iVar0] = iParam18;
		Global_1356070.f_3770.f_552[iVar0] = iParam19;
		Global_1356070.f_3770.f_563[iVar0] = iParam20;
		Global_1356070.f_3770.f_574[iVar0] = iParam21;
		Global_1356070.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_397())
		{
			Global_1356070.f_1088 = 1;
		}
		if (unk_0x20551D6D924ED04B())
		{
			iVar2 = 0;
			unk_0xD9151D5BCEE2689C(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1356070.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1356070.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1356070.f_1088 = 1;
			}
			if (func_396())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_396()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_397()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

void func_398()
{
	char* sVar0;
	int iVar1;
	
	if ((Global_1312323 == 1 || Global_1312330 == 1) || Global_1312319.f_3 == 1)
	{
		if (Global_1312323 == 1)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 1;
		}
		else if (Global_1312330 == 1)
		{
			switch (Global_1312330.f_1)
			{
				case 0:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET";
					break;
				
				case 1:
					iVar1 = 3;
					sVar0 = "HUD_ROCKET_H";
					break;
				
				case 2:
					iVar1 = 2;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_1312319.f_3 == 1)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 4;
		}
		func_395(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0);
	}
	else if (Global_1312346 == 1)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 9;
		func_395(Global_1312346.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0);
	}
}

void func_399()
{
	switch (iLocal_1258)
	{
		case 1:
			uLocal_1259 = unk_0xB1E69EFAB6CB45A3("MIDSIZED_MESSAGE");
			if (unk_0x77FA56883245AD26(uLocal_1259))
			{
				iLocal_1258 = 2;
			}
			break;
		
		case 2:
			unk_0xEBD23F68B1A617FC(uLocal_1259, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x9BC6C9E77AAC792E("BM_LAP_STR");
			unk_0xDBB8FCB00B701798(1);
			unk_0x7C8A7ECFBAD2C8C4("BM_LAP");
			unk_0xDBB8FCB00B701798(1);
			unk_0x96577CAA1D1E72DB(Local_642.f_8);
			unk_0xDBB8FCB00B701798(1);
			unk_0x96577CAA1D1E72DB(Local_654.f_247);
			unk_0xCC5EB3A492FB7D4B();
			unk_0xF55F467DF47A6BB8();
			iLocal_1260 = unk_0x31CD6E9F83C10233() + 3000;
			iLocal_1258 = 3;
			break;
		
		case 3:
			if (unk_0x31CD6E9F83C10233() < (iLocal_1260 - 500))
			{
				if (unk_0x77FA56883245AD26(uLocal_1259))
				{
					unk_0x4237E72FB80FD332(uLocal_1259, 255, 255, 255, 255, 0);
					unk_0x38C75B31337B3454(4);
				}
			}
			else
			{
				unk_0xEBD23F68B1A617FC(uLocal_1259, "SHARD_ANIM_OUT");
				unk_0x32F9127910F63DFA(1);
				unk_0x90495002CD46BD88(0.33f);
				unk_0x1C703A54AB4B12F6();
				iLocal_1258 = 4;
			}
			break;
		
		case 4:
			if (unk_0x31CD6E9F83C10233() < iLocal_1260)
			{
				if (unk_0x77FA56883245AD26(uLocal_1259))
				{
					unk_0x4237E72FB80FD332(uLocal_1259, 255, 255, 255, 255, 0);
					unk_0x38C75B31337B3454(4);
				}
			}
			else
			{
				if (unk_0x77FA56883245AD26(uLocal_1259))
				{
					unk_0x7F165E259CFAC8B8(&uLocal_1259);
				}
				iLocal_1258 = 0;
			}
			break;
	}
}

void func_400(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, char* sParam22)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	
	if (bParam12)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam21 != -1)
	{
		func_216(iParam21, "TIMER_CHALLTIME", iParam6, iVar0, iParam13, 0, 10, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	func_398();
	if (fParam15 > -1f)
	{
		func_395(0, "", iParam13, iParam16, 8, 0, sParam14, 1, fParam15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (!bParam19 || func_393())
	{
		if (iParam3 > -1 && iParam4 > 0)
		{
			sVar1 = sParam5;
			if (func_394(sVar1))
			{
				sVar1 = "TIM_POSIT";
			}
			func_392(iParam3, iParam4, sVar1, iParam7, iParam13, 7, 0, 0, 0, iParam7, 0);
		}
	}
	if (iParam8 > -1 && iParam9 > -1)
	{
		sVar2 = sParam10;
		if (func_394(sVar2))
		{
			sVar2 = "TIM_CHECKPOIN";
		}
		iParam11 = iParam11;
		if (Global_1574109)
		{
			func_392(iParam8, iParam9, sVar2, iParam11, iParam13, 7, 0, 0, 0, 1, 0);
		}
	}
	if (fParam17 > -1f)
	{
		sVar3 = "TIM_DISTANCE";
		sVar4 = "FMMC_LENGTHM";
		func_395(0, sVar3, -1, 1, 6, 0, sVar4, 1, fParam17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	sVar5 = sParam2;
	if (func_394(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	func_216(iParam0, sVar5, iParam6, iVar0, iParam13, 0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	if (func_394(sVar6))
	{
		sVar6 = func_389(iParam1);
	}
	if ((bParam19 || Global_1574109) || func_388() == 2)
	{
		if (bParam19)
		{
			if (Global_1574109 && !unk_0x0BD3CCFB6C6CFA91(sParam22))
			{
				func_216(iParam18, sParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, iParam18 <= 0, 0, 0, 0, 0, 0);
			}
			else if (iParam18 <= 0)
			{
				func_216(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0);
			}
			else
			{
				func_216(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
		else if (func_388() == 2 && !unk_0x0BD3CCFB6C6CFA91(sParam22))
		{
			func_216(iParam18, sParam22, iParam6, iVar0, iParam13, 0, 4, 1, 1, 0, 0, iParam18 <= 0, 0, 0, 0, 0, 0);
		}
		else if (iParam18 <= 0)
		{
			func_216(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_216(iParam18, sVar6, iParam6, iVar0, iParam13, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
	if (func_394(sVar7))
	{
		sVar7 = "TIMER_CHALLTIME";
	}
	iParam20 = iParam20;
}

void func_401()
{
	Global_1356070.f_1088 = 1;
}

void func_402()
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		Local_642.f_11 = 1;
		iVar0 = Local_642.f_6;
		fVar1 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[Local_642.f_6 /*3*/], 1);
		if (fVar1 > (fLocal_1189 + 100f))
		{
			iVar2 = Local_642.f_6 + 1;
			if (iVar2 >= Local_654.f_248)
			{
				iVar2 = 0;
			}
			fVar3 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[iVar2 /*3*/], 1);
			fVar4 = (unk_0x1410333E912D4EC6(Local_654[iVar2 /*3*/], Local_654[Local_642.f_6 /*3*/], 1) + 20f);
			if (fVar3 < fVar4)
			{
				iLocal_629 = 5;
			}
			else
			{
				iLocal_629 = 4;
			}
			iLocal_630 = 5;
			iLocal_631 = 0;
			return;
		}
		else if (fVar1 > (fLocal_1189 + 7.5f))
		{
			iVar5 = 0;
			fVar6 = 9999f;
			iVar5 = 0;
			while (iVar5 < Local_654.f_248)
			{
				if (iVar5 < Local_642.f_6)
				{
					fVar7 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[iVar5 /*3*/], 1);
					if (fVar7 < fVar6)
					{
						fVar6 = fVar7;
						iVar0 = iVar5;
					}
				}
				iVar5++;
			}
		}
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < Local_654.f_249)
		{
			if (func_10(Local_907[iVar9 /*18*/].f_3))
			{
				if (Local_907[iVar9 /*18*/] == 3)
				{
					Local_642.f_11++;
				}
				else if (Local_907[iVar9 /*18*/].f_9 > Local_642.f_8)
				{
					Local_642.f_11++;
				}
				else if (Local_907[iVar9 /*18*/].f_9 == Local_642.f_8)
				{
					if (Local_907[iVar9 /*18*/].f_8 > iVar0)
					{
						Local_642.f_11++;
					}
					else if (Local_907[iVar9 /*18*/].f_8 == iVar0)
					{
						fVar1 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[iVar0 /*3*/], 1);
						fVar8 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(Local_907[iVar9 /*18*/].f_6, 1), Local_654[Local_907[iVar9 /*18*/].f_8 /*3*/], 1);
						if (fVar8 < fVar1)
						{
							Local_642.f_11++;
						}
					}
				}
			}
			iVar9++;
		}
	}
}

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		func_405(iVar0, iParam0, iParam1);
		iVar0++;
	}
	func_404();
}

void func_404()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x31CD6E9F83C10233() > iLocal_1191)
	{
		fVar1 = 1E+07f;
		iVar3 = 0;
		while (iVar3 <= (Local_654.f_249 - 1))
		{
			if (func_145(Local_907[iVar3 /*18*/].f_6))
			{
				fVar0 = func_381(unk_0x0031992CA618A445(), Local_907[iVar3 /*18*/].f_6, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (Local_636.f_1 == 3)
		{
			if (iLocal_1190 > -1 && func_145(Local_907[iLocal_1190 /*18*/].f_6))
			{
				unk_0x8974265328B0DA68(Local_907[iLocal_1190 /*18*/].f_6, 0);
				unk_0x56AE5027D2067D0B(Local_907[iLocal_1190 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			if (func_145(Local_907[iVar2 /*18*/].f_6))
			{
				unk_0x56AE5027D2067D0B(Local_907[iVar2 /*18*/].f_6, "SEA_RACE_DURING_RACE_COLSEST_NPC", 0);
			}
		}
		else
		{
			if (iLocal_1190 > -1 && func_145(Local_907[iLocal_1190 /*18*/].f_6))
			{
				unk_0x8974265328B0DA68(Local_907[iLocal_1190 /*18*/].f_6, 0);
				unk_0x56AE5027D2067D0B(Local_907[iLocal_1190 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
			if (func_145(Local_907[iVar2 /*18*/].f_6))
			{
				unk_0x56AE5027D2067D0B(Local_907[iVar2 /*18*/].f_6, "STREET_RACE_NPC_CLOSEST", 0);
			}
		}
		iLocal_1190 = iVar2;
		iLocal_1191 = unk_0x31CD6E9F83C10233() + 2000;
	}
}

void func_405(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	var uVar5;
	
	if (iParam0 >= 0 || iParam0 < Local_654.f_249)
	{
		if (func_421(iParam0))
		{
			func_417(iParam0, iParam2);
			if (!unk_0xA32DC7E16AD1DFB7(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 0))
			{
				if (!unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), 3f))
				{
					func_416(iParam0);
				}
				else
				{
					func_415(iParam0);
				}
			}
			else if (func_414(iParam0))
			{
				if (!unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), 3f))
				{
					func_416(iParam0);
				}
			}
			else
			{
				func_413(iParam0);
				func_412(iParam0);
				switch (Local_907[iParam0 /*18*/])
				{
					case 0:
						Local_907[iParam0 /*18*/].f_8 = 0;
						Local_907[iParam0 /*18*/].f_9 = 1;
						if (Local_636.f_1 == 2)
						{
							if (uParam1 || iParam0 != 6)
							{
								unk_0x162D4638D393BAB6(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 30, iParam0 + 1 * 100);
							}
						}
						Local_907[iParam0 /*18*/] = 1;
						break;
					
					case 1:
						if (((unk_0x31CD6E9F83C10233() - Local_642.f_5) > iParam0 + 1 * 100 || Local_636.f_1 != 2) && unk_0x44731FF13F4F33EF(sLocal_1486))
						{
							Local_907[iParam0 /*18*/].f_2 = func_411(iParam0);
							if ((((Local_636.f_0 == 0 || Local_636.f_0 == 1) || Local_636.f_0 == 2) || Local_636.f_0 == 3) || Local_636.f_0 == 4)
							{
								if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 4)
								{
									iVar0 = 0;
								}
								else
								{
									iVar0 = 1;
								}
								Var1 = { unk_0xCD59EF1D7098A4B4(Local_907[iVar0 /*18*/].f_6, 0f, 20f, 0f) };
								fVar4 = func_369(Local_907[iParam0 /*18*/].f_6, Var1, 1);
								unk_0x173325AAF2CD766A(&uVar5);
								unk_0x9EA0A7060EF3D099(0, Local_907[iParam0 /*18*/].f_6, Var1, Local_907[iParam0 /*18*/].f_2, 1, unk_0xE9559A12052415BE(Local_907[iParam0 /*18*/].f_6), 17563684, 3f, fVar4);
								unk_0x9EE30C20270C9443(0, Local_907[iParam0 /*18*/].f_6, sLocal_1486, 786468, 0, 24, -1, Local_907[iParam0 /*18*/].f_2, iLocal_1179, 1073741824);
								unk_0xF81AD3C937316CCA(uVar5);
								unk_0xEDD5437C49B7B1F8(Local_907[iParam0 /*18*/].f_3, uVar5);
								unk_0x1F5B34056C3CB80B(&uVar5);
							}
							else
							{
								unk_0x9EE30C20270C9443(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, sLocal_1486, 786468, 0, 16, -1, Local_907[iParam0 /*18*/].f_2, iLocal_1179, 1073741824);
							}
							Local_907[iParam0 /*18*/] = 2;
						}
						break;
					
					case 2:
						if (func_410(iParam0) && Local_907[iParam0 /*18*/].f_15 != 1)
						{
							func_408(iParam0);
						}
						Local_907[iParam0 /*18*/].f_10 = 0;
						break;
					
					case 3:
						break;
					}
			}
			func_406(&(Local_907[iParam0 /*18*/].f_7), Local_907[iParam0 /*18*/].f_6, 1, 1092616192, 1);
		}
	}
}

void func_406(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam4 == 1 && !unk_0xA761A0B6072010C8(*uParam0))
	{
		*uParam0 = func_407(unk_0xF177E0DA126D71C8(iParam1, 1), 0);
		if (bParam2)
		{
			unk_0xEB934A06DDA5027D(*uParam0, 3);
			unk_0x50B5259DFC71B8EC(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			unk_0xEB934A06DDA5027D(*uParam0, 1);
			unk_0x50B5259DFC71B8EC(*uParam0, "BLIP_ENEMY");
		}
		if (unk_0x269F274F1955DE87(iParam1))
		{
			unk_0x067D86058370B7EB(*uParam0, 0.7f);
		}
	}
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		Var0 = { unk_0x453EDE9648F86D8C(*uParam0) };
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
		Var0.f_0 = (Var0.f_0 + ((Var3.f_0 - Var0.f_0) / fParam3));
		Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / fParam3));
		Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / fParam3));
		unk_0xAD390762A82890FB(*uParam0, Var0);
	}
}

var func_407(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_124(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

void func_408(int iParam0)
{
	int iVar0;
	
	if (Local_654.f_247 == 0)
	{
		iVar0 = (Local_654.f_248 - 2);
	}
	else
	{
		iVar0 = (Local_654.f_248 - 1);
	}
	if (Local_907[iParam0 /*18*/].f_8 == iVar0)
	{
		Local_907[iParam0 /*18*/].f_8 = 0;
		Local_907[iParam0 /*18*/].f_9++;
		if (Local_907[iParam0 /*18*/].f_9 > Local_654.f_247)
		{
			unk_0xF48F6EEC1EBEB012(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 30f, 786468);
		}
	}
	else
	{
		Local_907[iParam0 /*18*/].f_8++;
	}
	if (Local_907[iParam0 /*18*/] == 2)
	{
		func_409(iParam0);
	}
}

void func_409(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_411(iParam0);
	fVar1 = func_381(Local_907[iParam0 /*18*/].f_6, unk_0x0031992CA618A445(), 1);
	if ((Local_907[iParam0 /*18*/].f_8 - 1) < Local_642.f_6)
	{
		if (fVar1 > 50f)
		{
			fVar0 = (fVar0 + (fVar0 * 1f));
		}
		else if (fVar1 > 25f)
		{
			fVar0 = (fVar0 + (fVar0 * 0.7f));
		}
		else
		{
			fVar0 = (fVar0 + (fVar0 * 0.3f));
		}
	}
	else if (fVar1 > 100f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.3f));
	}
	else if (fVar1 > 25f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.1f));
	}
	if (Local_907[iParam0 /*18*/].f_2 != fVar0)
	{
		Local_907[iParam0 /*18*/].f_2 = fVar0;
		unk_0xDCDAEB946BEBD18C(Local_907[iParam0 /*18*/].f_3, fVar0);
	}
}

int func_410(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1) };
	if (unk_0x1410333E912D4EC6(Var0, Local_654[Local_907[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
	{
		return 1;
	}
	iVar4 = 0;
	unk_0x0C8227B79F317196(sLocal_1486, unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), &iVar3);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		if ((iVar3 - iVar4) > 0)
		{
			unk_0x7376759FAE2EEEB0(sLocal_1486, (iVar3 - iVar4), &Var0);
			if (unk_0x1410333E912D4EC6(Var0, Local_654[Local_907[iParam0 /*18*/].f_8 /*3*/], 0) <= 12f)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

float func_411(int iParam0)
{
	var uVar0;
	
	switch (Local_907[iParam0 /*18*/].f_1)
	{
		case 0:
			uVar0 = Local_654.f_250;
			break;
		
		case 1:
			uVar0 = Local_654.f_251;
			break;
		
		case 2:
			uVar0 = Local_654.f_252;
			break;
	}
	return uVar0;
}

void func_412(int iParam0)
{
	if (func_145(Local_18.f_0) && func_9(unk_0x0031992CA618A445()))
	{
		if (Local_907[iParam0 /*18*/].f_13)
		{
			if (unk_0xE771CD42874080E1(Local_18.f_0, Local_907[iParam0 /*18*/].f_6))
			{
				Local_907[iParam0 /*18*/].f_13 = 0;
				Local_907[iParam0 /*18*/].f_14 = unk_0x31CD6E9F83C10233() + 4000;
			}
		}
		else if (Local_907[iParam0 /*18*/].f_14 > unk_0x31CD6E9F83C10233())
		{
			unk_0x682A1F7FB2894D9B(Local_907[iParam0 /*18*/].f_3, 1, unk_0x0031992CA618A445(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			Local_907[iParam0 /*18*/].f_13 = 1;
		}
	}
}

void func_413(int iParam0)
{
	struct<3> Var0;
	
	switch (Local_907[iParam0 /*18*/].f_11)
	{
		case 0:
			Var0 = { unk_0x4FCF41D2B316BEF6(unk_0x0031992CA618A445(), unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1)) };
			if ((Var0.f_0 > -2f && Var0.f_0 < 2f) || iParam0 == 0)
			{
				Local_907[iParam0 /*18*/].f_12 = unk_0x31CD6E9F83C10233() + 2000;
				Local_907[iParam0 /*18*/].f_11 = 1;
			}
			else
			{
				Local_907[iParam0 /*18*/].f_11 = 2;
			}
			break;
		
		case 1:
			if (unk_0x31CD6E9F83C10233() > Local_907[iParam0 /*18*/].f_12)
			{
				Local_907[iParam0 /*18*/].f_11 = 2;
			}
			else
			{
				unk_0xF6527BEBDCAF220D(Local_907[iParam0 /*18*/].f_6, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}

int func_414(int iParam0)
{
	if (Local_636.f_1 == 2)
	{
		if ((unk_0x95E4E33CFB8D32BE(Local_907[iParam0 /*18*/].f_6) || unk_0xDECC749CB8B5AAB6(Local_907[iParam0 /*18*/].f_6, 0, 7000)) || unk_0xDECC749CB8B5AAB6(Local_907[iParam0 /*18*/].f_6, 1, 40000))
		{
			return 1;
		}
	}
	if (unk_0x7019CC495F72B3AC(Local_907[iParam0 /*18*/].f_6))
	{
		if (Local_636.f_1 == 2 || Local_636.f_1 == 1)
		{
			return 1;
		}
	}
	if (unk_0xDECC749CB8B5AAB6(Local_907[iParam0 /*18*/].f_6, 2, 30000) || unk_0xDECC749CB8B5AAB6(Local_907[iParam0 /*18*/].f_6, 3, 30000))
	{
		return 1;
	}
	return 0;
}

void func_415(int iParam0)
{
	int iVar0;
	
	if (Local_907[iParam0 /*18*/].f_10 == 0)
	{
		unk_0x0C8227B79F317196(sLocal_1486, unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), &iVar0);
		unk_0x173325AAF2CD766A(&uLocal_1487);
		unk_0x2E0E5BF2A31392F4(0, Local_907[iParam0 /*18*/].f_6, 10000, -1, 1073741824, 1, 0);
		unk_0x9EE30C20270C9443(0, Local_907[iParam0 /*18*/].f_6, sLocal_1486, 786468, iVar0, 16, -1, (func_411(iParam0) * 2f), iLocal_1179, 1073741824);
		unk_0xF81AD3C937316CCA(uLocal_1487);
		unk_0xEDD5437C49B7B1F8(Local_907[iParam0 /*18*/].f_3, uLocal_1487);
		unk_0x1F5B34056C3CB80B(&uLocal_1487);
		Local_907[iParam0 /*18*/].f_10 = 1;
	}
}

void func_416(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	unk_0x0C8227B79F317196(sLocal_1486, unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), &iVar0);
	unk_0x7376759FAE2EEEB0(sLocal_1486, iVar0, &Var1);
	unk_0x7376759FAE2EEEB0(sLocal_1486, iVar0 + 1, &Var4);
	if (!unk_0xAD2B8127B12C130D(Var1, 3f))
	{
		if (!unk_0x736668867F457F94(Var1, 5f) || func_369(Local_907[iParam0 /*18*/].f_6, Var1, 1) < 5f)
		{
			unk_0x0A69FBBF51E1A08F(Local_907[iParam0 /*18*/].f_6, Var1, 1, 0, 0, 1);
			func_367(Local_907[iParam0 /*18*/].f_6, Var4);
			if (!unk_0xA32DC7E16AD1DFB7(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 0))
			{
				unk_0x7E3C622EB2D4D2E2(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, -1);
			}
			unk_0x9EE30C20270C9443(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, sLocal_1486, 786468, iVar0, 16, -1, (func_411(iParam0) * 2f), iLocal_1179, 1073741824);
			iLocal_635 = unk_0x31CD6E9F83C10233() + 1500;
			iLocal_635 = iLocal_635;
		}
	}
}

void func_417(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (iParam1 && iParam0 == (Local_654.f_249 - 1))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 30f;
	}
	switch (Local_907[iParam0 /*18*/].f_15)
	{
		case 0:
			if (((func_420(iParam0, iParam1) && unk_0xA32DC7E16AD1DFB7(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 0)) && unk_0xC6B007187409CF4D(Local_907[iParam0 /*18*/].f_6)) && unk_0x44731FF13F4F33EF(sLocal_1486))
			{
				iVar1 = unk_0x55AD7D9F65C8ABFF(Local_907[iParam0 /*18*/].f_6);
				if (iVar1 < 1)
				{
					iVar1 = 1;
				}
				if (iVar1 < iLocal_1663)
				{
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar3 = 1;
				}
				if ((unk_0x0C8227B79F317196(sLocal_1486, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), &iVar2) && unk_0x7376759FAE2EEEB0(sLocal_1486, iVar3, &Var5)) && unk_0x7376759FAE2EEEB0(sLocal_1486, iVar2, &Var8))
				{
					fVar4 = unk_0x1410333E912D4EC6(Var8, Var5, 1);
					if (((((fVar4 > 40f || Local_907[iParam0 /*18*/].f_9 < Local_642.f_8) && !func_419(unk_0x0031992CA618A445(), Local_907[iParam0 /*18*/].f_6, fVar0, 1)) && !func_418(unk_0x0031992CA618A445(), Var5, fVar0)) && !unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), 5f)) && !unk_0xAD2B8127B12C130D(Var5, 5f))
					{
						if (iParam1 && iParam0 == (Local_654.f_249 - 1))
						{
							Local_907[iParam0 /*18*/].f_17 = unk_0x31CD6E9F83C10233() + 90;
						}
						else
						{
							Local_907[iParam0 /*18*/].f_17 = (unk_0x31CD6E9F83C10233() + 100 + iParam0 * 10);
						}
						Local_907[iParam0 /*18*/].f_16 = iVar3;
						Local_907[iParam0 /*18*/].f_15 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (Local_907[iParam0 /*18*/].f_16 < iLocal_1663)
			{
				iVar11 = Local_907[iParam0 /*18*/].f_16 + 1;
			}
			else
			{
				iVar11 = 1;
			}
			if (unk_0x7376759FAE2EEEB0(sLocal_1486, Local_907[iParam0 /*18*/].f_16, &Var12))
			{
				if (((((func_419(unk_0x0031992CA618A445(), Local_907[iParam0 /*18*/].f_6, fVar0, 1) || func_418(unk_0x0031992CA618A445(), Var12, fVar0)) || unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(Local_907[iParam0 /*18*/].f_6, 1), 5f)) || unk_0xAD2B8127B12C130D(Var12, 5f)) || (Local_907[iParam0 /*18*/].f_9 == Local_642.f_8 && Local_907[iParam0 /*18*/].f_8 >= Local_642.f_6)) || Local_907[iParam0 /*18*/].f_9 > Local_642.f_8)
				{
					unk_0x9EE30C20270C9443(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, sLocal_1486, 786468, iVar11, 16, -1, func_411(iParam0), iLocal_1179, 1073741824);
					if (Local_636.f_1 == 3)
					{
						unk_0x5EF58B2B49A4503B(Local_907[iParam0 /*18*/].f_6, (func_411(iParam0) * 0.25f));
					}
					else
					{
						unk_0x5EF58B2B49A4503B(Local_907[iParam0 /*18*/].f_6, (func_411(iParam0) * 0.5f));
					}
					Local_907[iParam0 /*18*/].f_15 = 0;
				}
				else if (unk_0x31CD6E9F83C10233() > Local_907[iParam0 /*18*/].f_17)
				{
					if (!unk_0x736668867F457F94(Var12, 5f) || func_418(Local_907[iParam0 /*18*/].f_6, Var12, 5f))
					{
						if (unk_0x7376759FAE2EEEB0(sLocal_1486, iVar11, &Var15))
						{
							unk_0x0A69FBBF51E1A08F(Local_907[iParam0 /*18*/].f_6, Var12, 1, 0, 0, 1);
							func_367(Local_907[iParam0 /*18*/].f_6, Var15);
							if (unk_0x1410333E912D4EC6(Var12, Local_654[Local_907[iParam0 /*18*/].f_8 /*3*/], 0) <= (12f * 2f))
							{
								func_408(iParam0);
							}
							Local_907[iParam0 /*18*/].f_16 = iVar11;
							Local_907[iParam0 /*18*/].f_17 = (unk_0x31CD6E9F83C10233() + 100 + iParam0 * 10);
							if (!unk_0xA32DC7E16AD1DFB7(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, 0))
							{
								unk_0x7E3C622EB2D4D2E2(Local_907[iParam0 /*18*/].f_3, Local_907[iParam0 /*18*/].f_6, -1);
							}
							iLocal_635 = unk_0x31CD6E9F83C10233() + 1500;
							iLocal_635 = iLocal_635;
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

bool func_418(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_419(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iParam0, iParam3), unk_0xF177E0DA126D71C8(iParam1, iParam3)) <= (fParam2 * fParam2);
}

int func_420(int iParam0, int iParam1)
{
	if (Local_907[iParam0 /*18*/].f_9 < Local_642.f_8)
	{
		return 1;
	}
	if (Local_907[iParam0 /*18*/].f_9 > Local_642.f_8)
	{
		return 0;
	}
	if (Local_907[iParam0 /*18*/].f_9 == Local_642.f_8 && Local_907[iParam0 /*18*/].f_8 >= Local_642.f_6)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	if (iParam1 && iParam0 != (Local_654.f_249 - 1))
	{
		return 1;
	}
	if ((iParam1 && iParam0 == (Local_654.f_249 - 1)) && Local_907[iParam0 /*18*/].f_8 > 1)
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(Local_907[iParam0 /*18*/].f_3))
	{
		if (unk_0x7A6C051038031EFA(Local_907[iParam0 /*18*/].f_3, 0))
		{
			iLocal_629 = 2;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
		else if (unk_0x8682D8A6269E52C9(Local_907[iParam0 /*18*/].f_3))
		{
			iLocal_629 = 2;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
		else if (func_422(Local_907[iParam0 /*18*/].f_3, 1, 0, 0, 0))
		{
			iLocal_629 = 1;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
	}
	if (unk_0x76B3C79DE564AFC6(Local_907[iParam0 /*18*/].f_6))
	{
		if (unk_0x7A6C051038031EFA(Local_907[iParam0 /*18*/].f_6, 0))
		{
			iLocal_629 = 2;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
		else if (unk_0x7CA73A79B30385F3(Local_907[iParam0 /*18*/].f_6, unk_0x0031992CA618A445(), 0))
		{
			iLocal_629 = 1;
			iLocal_630 = 5;
			iLocal_631 = 0;
		}
	}
	if (func_10(Local_907[iParam0 /*18*/].f_3) && func_10(Local_907[iParam0 /*18*/].f_6))
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(unk_0x0031992CA618A445()) && func_10(iParam0))
	{
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_428(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_423(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x57550D8981DAEF6C(unk_0x0031992CA618A445()))
			{
				if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
				{
					if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_428(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_423(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_423(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_424(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_424(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x358ED862352D8DB6(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_424(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x324758F5AB79458C(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_425(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_427(Param1 - unk_0xF177E0DA126D71C8(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_427(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_426(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_426(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_427(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_428(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_429(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_430(bool bParam0)
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		func_432(bParam0);
		if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[Local_642.f_6 /*3*/], 1) <= 12f)
		{
			unk_0x18F1BFAF88AC511B(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
			if (Local_642.f_6 == (Local_642.f_7 - 1))
			{
				iVar0 = (unk_0x31CD6E9F83C10233() - Local_642.f_9);
				if (Local_642.f_10 < 0 || Local_642.f_10 > iVar0)
				{
					Local_642.f_10 = iVar0;
				}
				Local_642.f_9 = unk_0x31CD6E9F83C10233();
				if (Local_642.f_8 == Local_654.f_247)
				{
					func_147();
					return 1;
				}
				else
				{
					Local_642.f_8++;
					Local_642.f_6 = 0;
					iLocal_1258 = 1;
				}
			}
			else
			{
				Local_642.f_6++;
			}
			func_431();
			func_147();
		}
	}
	return 0;
}

void func_431()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		fLocal_1189 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_654[Local_642.f_6 /*3*/], 1);
	}
}

void func_432(bool bParam0)
{
	int iVar0;
	
	iVar0 = Local_642.f_6 + 1;
	if (Local_636.f_5)
	{
		if (Local_642.f_6 == (Local_654.f_248 - 1))
		{
			func_434((Local_654.f_248 - 1), 1, bParam0);
		}
		else
		{
			func_434(Local_642.f_6, 0, bParam0);
			if (iVar0 == (Local_654.f_248 - 1))
			{
				func_433(Local_654[iVar0 /*3*/], 1);
			}
			else
			{
				func_433(Local_654[iVar0 /*3*/], 0);
			}
		}
	}
	else if (Local_642.f_6 == (Local_654.f_248 - 1))
	{
		if (Local_642.f_8 == Local_654.f_247)
		{
			func_434(Local_642.f_6, 1, bParam0);
		}
		else
		{
			func_434(Local_642.f_6, 0, bParam0);
			func_433(Local_654[0 /*3*/], 0);
		}
	}
	else
	{
		func_434(Local_642.f_6, 0, bParam0);
		if (iVar0 == (Local_654.f_248 - 1))
		{
			func_433(Local_654[iVar0 /*3*/], 1);
		}
		else
		{
			func_433(Local_654[iVar0 /*3*/], 0);
		}
	}
}

void func_433(struct<3> Param0, bool bParam3)
{
	if (!unk_0xA761A0B6072010C8(uLocal_1185))
	{
		uLocal_1185 = unk_0x97AC4FC1EEAC7A8B(Param0);
		unk_0x02C0454478A70EFA(uLocal_1185, 0);
		if (!bParam3)
		{
			unk_0xEB934A06DDA5027D(uLocal_1185, 5);
			unk_0x067D86058370B7EB(uLocal_1185, 0.7f);
		}
		else if (Local_642.f_8 == Local_654.f_247)
		{
			unk_0x3B815A6E8530D3A5(uLocal_1185, 38);
			unk_0x067D86058370B7EB(uLocal_1185, 1.2f);
		}
		unk_0x50B5259DFC71B8EC(uLocal_1185, "BLIP_CPOINT");
	}
}

void func_434(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	bool bVar25;
	
	iVar9 = func_439(iParam0);
	unk_0xB922891BFD232C45(13, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xB922891BFD232C45(134, &uVar4, &uVar5, &uVar6, &uVar7);
	uVar3 = func_438(iParam0);
	if (unk_0xA761A0B6072010C8(uLocal_1184))
	{
		if (iLocal_1186 != 0)
		{
			unk_0x91B60F3EC488BE29(iLocal_1186, uVar0, uVar1, uVar2, uVar3);
			unk_0x98AAA89ACC7FBB81(iLocal_1186, uVar4, uVar5, uVar6, iVar3);
		}
	}
	else
	{
		Var10 = { Local_654[iParam0 /*3*/] };
		Var19 = { Var10 };
		Var19.f_2 = (Var19.f_2 + 20f);
		bVar25 = false;
		if (unk_0x6192E81E5C0DCC27(Var19, &fVar24, 0))
		{
			if (fVar24 > (Var10.f_2 + 1f))
			{
				fVar22 = ((7.5f * 1f) * 0.66f);
				fVar23 = 2f;
				bVar25 = true;
			}
			else
			{
				fVar22 = (8.5f * 1.333f);
				fVar23 = 6f;
			}
		}
		else
		{
			fVar22 = (8.5f * 1.333f);
			fVar23 = 6f;
		}
		if (iParam0 == (Local_654.f_248 - 1))
		{
			Var13 = { Local_654[0 /*3*/] };
		}
		else
		{
			Var13 = { Local_654[iParam0 + 1 /*3*/] };
		}
		iVar8 = (iParam0 - 1);
		if (iVar8 < 0)
		{
			iVar8 = (Local_654.f_248 - 1);
		}
		Var16 = { Local_654[iVar8 /*3*/] };
		uLocal_1184 = unk_0x97AC4FC1EEAC7A8B(Var10);
		unk_0x02C0454478A70EFA(uLocal_1184, 0);
		if (!bParam1)
		{
			unk_0xEB934A06DDA5027D(uLocal_1184, 5);
			unk_0x067D86058370B7EB(uLocal_1184, 1.2f);
			unk_0xC5B4383DA70A2C1A(uLocal_1184, 9);
			if (bVar25)
			{
				switch (iVar9)
				{
					case 17:
					case 7:
						iVar9 = 12;
						break;
					
					case 16:
					case 6:
						iVar9 = 11;
						break;
					
					case 15:
					case 5:
						iVar9 = 10;
						break;
					}
			}
			iLocal_1186 = unk_0x73B683754FB54A17(iVar9, Var10 + Vector(fVar23, 0f, 0f), Var13, fVar22, uVar0, uVar1, uVar2, iVar3, 0);
			unk_0x98AAA89ACC7FBB81(iLocal_1186, uVar4, uVar5, uVar6, iVar3);
			func_435(iLocal_1186, Var10);
		}
		else
		{
			unk_0x3B815A6E8530D3A5(uLocal_1184, 38);
			unk_0xC5B4383DA70A2C1A(uLocal_1184, 7);
			unk_0x067D86058370B7EB(uLocal_1184, 1.2f);
			iLocal_1186 = unk_0x73B683754FB54A17(9, Var10 + Vector(fVar23, 0f, 0f), Var13, fVar22, uVar0, uVar1, uVar2, iVar3, 0);
			unk_0x98AAA89ACC7FBB81(iLocal_1186, uVar4, uVar5, uVar6, iVar3);
			func_435(iLocal_1186, Var10);
		}
		if (bParam2)
		{
			iVar9 = func_439(iVar8);
			unk_0xB922891BFD232C45(1, &uVar0, &uVar1, &uVar2, &iLocal_1188);
			iLocal_1188 = 180;
			if (iLocal_1187 != 0)
			{
				unk_0x1EC5FCC706B5D133(iLocal_1187);
			}
			iLocal_1187 = unk_0x73B683754FB54A17(iVar9, Var16 + Vector(fVar23, 0f, 0f), Var10, fVar22, uVar0, uVar1, uVar2, iLocal_1188, 0);
		}
		if (Local_636.f_1 == 3)
		{
			unk_0x1117B10FE2E243A7(iLocal_1186, 16f, 16f, 100f);
			unk_0x1117B10FE2E243A7(iLocal_1187, 16f, 16f, 100f);
		}
		else
		{
			unk_0x1117B10FE2E243A7(iLocal_1186, 9.5f, 9.5f, 100f);
			unk_0x1117B10FE2E243A7(iLocal_1187, 9.5f, 9.5f, 100f);
		}
		unk_0x50B5259DFC71B8EC(uLocal_1184, "BLIP_CPOINT");
	}
	if (iLocal_1187 != 0)
	{
		iLocal_1188 = (iLocal_1188 - 25);
		if (iLocal_1188 > 0)
		{
			unk_0xB922891BFD232C45(1, &uVar0, &uVar1, &uVar2, &iVar3);
			unk_0x91B60F3EC488BE29(iLocal_1187, uVar0, uVar1, uVar2, iLocal_1188);
		}
		else
		{
			unk_0x1EC5FCC706B5D133(iLocal_1187);
		}
	}
}

void func_435(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1[8];
	float fVar26;
	struct<3> Var27;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Var1[iVar0 /*3*/] = { Param1 + func_437(iVar0) };
		unk_0x6192E81E5C0DCC27(Var1[iVar0 /*3*/], &fVar26, 0);
		if (fVar26 < (Param1.f_2 - 2f) || fVar26 > (Param1.f_2 + 2f))
		{
			Var1[iVar0 /*3*/].f_2 = Param1.f_2;
		}
		else
		{
			Var1[iVar0 /*3*/].f_2 = fVar26;
		}
		iVar0++;
	}
	Var27 = { func_436(&Var1) };
	unk_0xF071491F00C81C47(iParam0, Param1 - Vector(0.3f, 0f, 0f), Var27);
}

Vector3 func_436(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var1 = { *(uParam0[iVar0 /*3*/]) };
		Var4 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		Var7.f_0 = (Var7.f_0 + ((Var1.f_1 - Var4.f_1) * (Var1.f_2 + Var4.f_2)));
		Var7.f_1 = (Var7.f_1 + ((Var1.f_2 - Var4.f_2) * (Var1.f_0 + Var4.f_0)));
		Var7.f_2 = (Var7.f_2 + ((Var1.f_0 - Var4.f_0) * (Var1.f_1 + Var4.f_1)));
		iVar0++;
	}
	return func_427(Var7);
}

Vector3 func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1f;
		
		case 1:
			return (7.5f / 2f), 0f, 1f;
		
		case 2:
			return (-7.5f / 2f), 0f, 1f;
		
		case 3:
			return 0f, (7.5f / 2f), 1f;
		
		case 4:
			return 0f, (-7.5f / 2f), 1f;
		
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_438(int iParam0)
{
	float fVar0;
	int iVar1;
	
	iVar1 = 240;
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		fVar0 = unk_0x1410333E912D4EC6(Local_654[iParam0 /*3*/], unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 1);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_439(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	Var0 = { Local_654[iParam0 /*3*/] };
	if (iParam0 + 1 == Local_654.f_248)
	{
		Var3 = { Local_654[0 /*3*/] };
	}
	else
	{
		Var3 = { Local_654[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var6 = { Local_654[(iParam0 - 1) /*3*/] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = unk_0x65543A6B8B143988(Var9.f_0, Var9.f_1, Var12.f_0, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fLocal_34)
	{
		return 7;
	}
	else if (fVar15 < fLocal_35)
	{
		return 6;
	}
	else if (fVar15 < fLocal_36)
	{
		return 5;
	}
	else
	{
		return 5;
	}
	return 5;
}

void func_440()
{
	iLocal_1183 = unk_0x6307C3D1D866114A();
	iLocal_1182 = -1;
}

void func_441(int iParam0)
{
	if ((!bLocal_618 && unk_0xED5FFF2E0422067E()) && unk_0xF60A5AF58996CED2())
	{
		switch (iParam0)
		{
			case 0:
				iLocal_615 = 0;
				break;
			
			case 1:
				iLocal_615 = 1;
				break;
			
			case 2:
				iLocal_615 = 2;
				break;
			
			case 3:
				iLocal_615 = 3;
				break;
			
			case 4:
				iLocal_615 = 4;
				break;
			
			case 5:
				iLocal_615 = 5;
				break;
			
			case 6:
				iLocal_615 = 6;
				break;
			
			case 7:
				iLocal_615 = 7;
				break;
			
			case 8:
				iLocal_615 = 8;
				break;
		}
		bLocal_618 = func_442(&uLocal_612, &uLocal_613, &uLocal_614, iLocal_615, &iLocal_616, &iLocal_617);
	}
}

int func_442(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	struct<69> Var0;
	struct<69> Var69;
	struct<13> Var138;
	struct<4> Var236;
	struct<13> Var244;
	
	Var0.f_3.f_1 = 4;
	Var69.f_3.f_1 = 4;
	Var138.f_19.f_1 = 4;
	Var244 = { func_210(unk_0x3D35F9864E4640B1()) };
	Var0.f_0 = 817;
	Var0.f_1 = 5;
	Var0.f_3 = 3;
	StringCopy(&(Var0.f_3.f_1[0 /*16*/]), "GameType", 32);
	StringCopy(&(Var0.f_3.f_1[1 /*16*/]), "Location", 32);
	StringCopy(&(Var0.f_3.f_1[2 /*16*/]), "Type", 32);
	StringCopy(&(Var0.f_3.f_1[0 /*16*/].f_8), "SP", 32);
	switch (iParam3)
	{
		case 0:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 1:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 2:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 3:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 4:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 5:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 6:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 7:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 8:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 100:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_01", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 101:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_02", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 102:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_03", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 103:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_04", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 104:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_05", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 105:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_06", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		default:
			break;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_288(uParam1, uParam2, &Var0, 1, 1))
			{
				func_296(&Var236, &Var0);
				if (*uParam2 && unk_0x360655C8E2BDFEC1(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var138);
						if (!func_264(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*iParam4 = unk_0xF8062BE67BAF24C8(0, 3);
							*uParam0 = 1;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					*uParam0 = 2;
				}
				func_194(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		
		case 1:
			if (func_334(uParam1, uParam2, &Var0, &Var244))
			{
				func_296(&Var236, &Var0);
				if (*uParam2 && unk_0x360655C8E2BDFEC1(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var138);
						if (!func_264(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*iParam5 = unk_0xF8062BE67BAF24C8(0, 3);
							*uParam0 = 2;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					*uParam0 = 2;
				}
				func_194(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_443()
{
	Global_17151.f_6 = 1;
}

void func_444()
{
	int iVar0;
	int iVar1;
	
	unk_0x68F19FECF821F7A2(0f);
	func_477();
	func_443();
	func_464();
	func_441(Local_636.f_0);
	switch (iLocal_631)
	{
		case 0:
			func_6(500, 1);
			func_463(&Local_642);
			unk_0x1F1D255CB6501243("HUD_321_GO", 1, -1);
			iLocal_1178 = 0;
			iLocal_634 = -1;
			iLocal_633 = 0;
			func_461(&(Local_642.f_1), 8);
			func_461(&(Local_642.f_1), 4);
			func_461(&(Local_642.f_1), 2);
			func_461(&(Local_642.f_1), 1);
			func_130(&(Local_642.f_2));
			unk_0x59B2F61C9D01132B("MPHUD", 0);
			unk_0x59B2F61C9D01132B("SPROffroad", 0);
			unk_0x59B2F61C9D01132B("SHARED", 0);
			unk_0x1D69C39ECF71C85C("SP_SPR", 3);
			uLocal_1450[0] = func_310();
			uLocal_1820 = func_460();
			func_459(&uLocal_1681, 1050253722, 1073741824);
			if (func_145(Local_18.f_0) && Local_636.f_1 != 3)
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
				unk_0xB17F244BDC69E813(Local_18.f_0, 1);
			}
			iLocal_631 = 1;
			break;
		
		case 1:
			unk_0x1F1D255CB6501243("HUD_321_GO", 1, -1);
			if (func_458(&Local_642))
			{
				if (func_452(&Local_642, 1, 0, 0, 3, 1, 0, 0))
				{
					iLocal_631 = 2;
				}
				if (func_451(Local_642.f_1, 8))
				{
					if (iLocal_634 < 0)
					{
						iLocal_634 = unk_0x31CD6E9F83C10233() + 500;
					}
					if (iLocal_1178 == 0)
					{
						iLocal_1178 = 1;
						func_450();
						unk_0xB3E27A9E412BBDF8("RACE_INTRO_GENERIC");
						func_449();
						if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
						{
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
						}
						if (func_145(Local_18.f_0))
						{
							if (Local_636.f_1 == 3)
							{
								iVar0 = 0;
								while (iVar0 <= (Local_654.f_249 - 1))
								{
									if (func_145(Local_907[iVar0 /*18*/].f_6))
									{
										unk_0xCFB9AB2B03B3D7C9(Local_907[iVar0 /*18*/].f_6, 0);
									}
									iVar0++;
								}
								unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 0);
							}
							else
							{
								unk_0xB17F244BDC69E813(Local_18.f_0, 0);
							}
						}
					}
					func_403(1, 0);
				}
			}
			break;
		
		case 2:
			func_448();
			func_447(&Local_642);
			func_446();
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1193)
			{
				if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[iVar1]))
				{
					unk_0x46B35AD2F641A4A3(iLocal_1193[iVar1], 0);
				}
				iVar1++;
			}
			iLocal_630 = 2;
			iLocal_631 = 0;
			break;
	}
	func_430(0);
	func_361();
	func_445();
}

void func_445()
{
	var uVar0;
	int iVar1;
	
	if ((func_9(unk_0x0031992CA618A445()) && unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445())) && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
	{
		iLocal_629 = 1;
		iLocal_630 = 5;
		iLocal_631 = 0;
		if (func_9(iLocal_1456))
		{
			unk_0x53E150F8F0AD7101(iLocal_1456, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
			unk_0x390D16BCBFB23E1A(iLocal_1456, 1);
		}
		if (func_9(iLocal_1457))
		{
			unk_0x53E150F8F0AD7101(iLocal_1457, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
			unk_0x390D16BCBFB23E1A(iLocal_1457, 1);
		}
		if (func_9(iLocal_1458))
		{
			unk_0x53E150F8F0AD7101(iLocal_1458, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
			unk_0x390D16BCBFB23E1A(iLocal_1458, 1);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_654.f_249)
		{
			if (func_9(Local_907[iVar1 /*18*/].f_3))
			{
				unk_0x173325AAF2CD766A(&uVar0);
				unk_0x8C0D2C1D41B04158(0, iVar1 * 60);
				if (func_145(Local_907[iVar1 /*18*/].f_6) && unk_0xA32DC7E16AD1DFB7(Local_907[iVar1 /*18*/].f_3, Local_907[iVar1 /*18*/].f_6, 0))
				{
					unk_0xF48F6EEC1EBEB012(0, Local_907[iVar1 /*18*/].f_6, 50f, 786468);
				}
				else
				{
					unk_0x53E150F8F0AD7101(0, unk_0x0031992CA618A445(), 500f, -1, 0, 0);
				}
				unk_0xF81AD3C937316CCA(uVar0);
				unk_0xEDD5437C49B7B1F8(Local_907[iVar1 /*18*/].f_3, uVar0);
				unk_0x1F5B34056C3CB80B(&uVar0);
				unk_0x390D16BCBFB23E1A(Local_907[iVar1 /*18*/].f_3, 1);
			}
			iVar1++;
		}
		if (func_145(Local_18.f_0))
		{
			if (Local_636.f_1 == 3)
			{
				unk_0xCFB9AB2B03B3D7C9(Local_18.f_0, 0);
			}
			else
			{
				unk_0xB17F244BDC69E813(Local_18.f_0, 0);
			}
		}
		func_446();
	}
}

void func_446()
{
	int iVar0;
	
	iVar0 = unk_0xED1168B8D2D313FA();
	func_33(&iLocal_1456, 1, 0, 1);
	func_33(&iLocal_1457, 1, 0, 1);
	func_33(&iLocal_1458, 1, 0, 1);
	if (unk_0x4B0365EB2D59E6FA(iVar0))
	{
		unk_0x6650FC093AC9B178(iVar0, 0);
		unk_0xB568492AC80B8832(iVar0, 1, 0);
	}
	if (Local_636.f_1 == 1 || Local_636.f_1 == 2)
	{
		unk_0x04021FF677078694(uLocal_1495, 0);
		unk_0xCE9A728371D47759(Local_1488, Local_1491, fLocal_1494, 1);
	}
	func_13(0, 1, 0, 0);
	unk_0x4C4F62CD43971CED(1);
	unk_0x56A844FA6FE745C3(1);
	unk_0x8C361F37C04084F4(1);
}

void func_447(var uParam0)
{
	unk_0x7F165E259CFAC8B8(uParam0);
	unk_0x616FBCC20E22C43A();
}

void func_448()
{
	var uVar0;
	struct<3> Var1;
	
	if (Local_636.f_1 == 2)
	{
		if (func_9(iLocal_1457))
		{
			Var1 = { unk_0xCD59EF1D7098A4B4(iLocal_1457, 0f, 20f, 0f) };
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0xED5F2A2963728B55(0, Var1, 1f, 20000, 1193033728, 1056964608);
			unk_0x9BE63CB00B240063(0, 1193033728, 0);
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(iLocal_1457, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
		if (func_9(iLocal_1458))
		{
			Var1 = { unk_0xCD59EF1D7098A4B4(iLocal_1458, 0f, 15f, 0f) };
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0xED5F2A2963728B55(0, Var1, 1f, 20000, 1193033728, 1056964608);
			unk_0x9BE63CB00B240063(0, 1193033728, 0);
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(iLocal_1458, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
		func_33(&iLocal_1456, 1, 0, 1);
		func_33(&iLocal_1457, 1, 0, 1);
		func_33(&iLocal_1458, 1, 0, 1);
	}
}

void func_449()
{
	int iVar0;
	
	if (Local_636.f_1 == 3)
	{
		unk_0xFD69BDF108B32E5B("SEA_RACE_DURING_RACE");
	}
	else
	{
		unk_0xFD69BDF108B32E5B("STREET_RACE_DURING_RACE");
	}
	iVar0 = 0;
	while (iVar0 <= (Local_654.f_249 - 1))
	{
		if (func_145(Local_907[iVar0 /*18*/].f_6))
		{
			if (Local_636.f_1 == 3)
			{
				unk_0x56AE5027D2067D0B(Local_907[iVar0 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0);
			}
			else
			{
				unk_0x56AE5027D2067D0B(Local_907[iVar0 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0);
			}
		}
		iVar0++;
	}
}

void func_450()
{
	Local_642.f_5 = unk_0x31CD6E9F83C10233();
	Local_642.f_6 = 0;
	Local_642.f_8 = 1;
	Local_642.f_9 = unk_0x31CD6E9F83C10233();
	Local_642.f_7 = Local_654.f_248;
	func_431();
}

bool func_451(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_452(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_457(&(uParam0->f_2), 1);
	}
	if (!func_132(&(uParam0->f_2)))
	{
		func_3(&(uParam0->f_2));
	}
	unk_0x38C75B31337B3454(1);
	unk_0x45822700F324A838(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_132(&(uParam0->f_2)))
		{
			if (func_128(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_5(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_130(&(uParam0->f_2));
					if (func_451(uParam0->f_1, 1))
					{
						func_455(&(uParam0->f_1), 8);
						unk_0xB922891BFD232C45(18, &uVar5, &uVar6, &uVar7, &uVar8);
						unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
						func_135("CNTDWN_GO");
						unk_0x32F9127910F63DFA(uVar5);
						unk_0x32F9127910F63DFA(uVar6);
						unk_0x32F9127910F63DFA(uVar7);
						unk_0xE8240315678FDE8E(true);
						unk_0x1C703A54AB4B12F6();
						return 1;
					}
					func_3(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = unk_0xF34EE736CF047844(fVar3);
	}
	else
	{
		iVar4 = unk_0xF34EE736CF047844(func_127(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_451(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_451(uParam0->f_1, 1))
		{
			func_455(&(uParam0->f_1), 1);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_454(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_451(uParam0->f_1, 2))
		{
			func_455(&(uParam0->f_1), 2);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_454(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_451(uParam0->f_1, 4))
		{
			func_455(&(uParam0->f_1), 4);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_454(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_451(uParam0->f_1, 16))
		{
			if (unk_0x229F35E7CDDBF757((func_127(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_455(&(uParam0->f_1), 16);
					unk_0x18F1BFAF88AC511B(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_451(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x18F1BFAF88AC511B(-1, sVar1, sVar2, 1);
			}
			func_455(&(uParam0->f_1), 8);
			unk_0xB922891BFD232C45(18, &uVar11, &uVar12, &uVar13, &uVar14);
			unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
			func_135("CNTDWN_GO");
			unk_0x32F9127910F63DFA(uVar11);
			unk_0x32F9127910F63DFA(uVar12);
			unk_0x32F9127910F63DFA(uVar13);
			unk_0xE8240315678FDE8E(true);
			unk_0x1C703A54AB4B12F6();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_453()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_130(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_453()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0x9148803485DEDF45(0, 18) || unk_0x9148803485DEDF45(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_454(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(12, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
	unk_0xDBB8FCB00B701798(-1);
	unk_0x9BC6C9E77AAC792E("NUMBER");
	unk_0x96577CAA1D1E72DB(unk_0x0C58CE21DE9AD283(iParam1));
	unk_0xCC5EB3A492FB7D4B();
	unk_0x32F9127910F63DFA(uVar0);
	unk_0x32F9127910F63DFA(uVar1);
	unk_0x32F9127910F63DFA(uVar2);
	unk_0xE8240315678FDE8E(true);
	unk_0x1C703A54AB4B12F6();
}

void func_455(var uParam0, int iParam1)
{
	func_456(uParam0, iParam1);
}

void func_456(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_457(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0, 4);
	}
	else
	{
		unk_0xD804ACF2A7171150(uParam0, 4);
	}
	if (unk_0x2A3398C6222EB190(*uParam0, 4))
	{
	}
}

bool func_458(var uParam0)
{
	return (unk_0x77FA56883245AD26(*uParam0) && unk_0x1F1D255CB6501243("HUD_321_GO", 0, -1));
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	if (func_132(&(uParam0->f_1)))
	{
		func_130(&(uParam0->f_1));
	}
	if (func_132(&(uParam0->f_4)))
	{
		func_130(&(uParam0->f_4));
	}
	func_120(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

var func_460()
{
	return unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
}

void func_461(var uParam0, int iParam1)
{
	func_462(uParam0, iParam1);
}

void func_462(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_463(var uParam0)
{
	*uParam0 = unk_0xB1E69EFAB6CB45A3("COUNTDOWN");
	unk_0x1F1D255CB6501243("HUD_321_GO", 0, -1);
}

int func_464()
{
	int iVar0;
	int iVar1;
	
	if (Local_636.f_1 == 3)
	{
		if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[0]))
		{
			if (unk_0x31CD6E9F83C10233() > iLocal_1485)
			{
				unk_0xD0E2527DD961F86C(iLocal_1193[1], iLocal_1193[0], 500, 0, 1);
				unk_0xCBD63CEA31220CE4(iLocal_1193[1], 1f);
				unk_0x18F1BFAF88AC511B(-1, "UNDER_WATER_COME_UP", 0, 1);
				unk_0x46B35AD2F641A4A3(iLocal_1193[0], 0);
			}
			else
			{
				func_476(0);
			}
		}
		else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[1]))
		{
			if (!unk_0x0B7CA263460475D0(iLocal_1193[1]))
			{
				unk_0xD0E2527DD961F86C(iLocal_1193[2], iLocal_1193[1], 3000, 0, 1);
				unk_0xE983D49A61E9F0FF(iLocal_1193[2], "HAND_SHAKE", 0.3f);
				unk_0x46B35AD2F641A4A3(iLocal_1193[1], 0);
			}
			else
			{
				func_476(1);
			}
		}
		else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[2]))
		{
			if (!unk_0x0B7CA263460475D0(iLocal_1193[2]))
			{
				unk_0x55CC07D5416539C8(iLocal_1193[3], 1);
				unk_0xD0E2527DD961F86C(iLocal_1193[4], iLocal_1193[3], 5000, 3, 1);
				unk_0xE983D49A61E9F0FF(iLocal_1193[4], "HAND_SHAKE", 0.3f);
				unk_0x46B35AD2F641A4A3(iLocal_1193[2], 0);
				iLocal_1485 = unk_0x31CD6E9F83C10233() + 2000;
			}
			else
			{
				func_476(1);
			}
		}
		else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[4]))
		{
			if (!unk_0x0B7CA263460475D0(iLocal_1193[4]))
			{
				unk_0x6D0D109B83202E2C(0, 0, 3, 0);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_1193)
				{
					if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[iVar0]))
					{
						unk_0x46B35AD2F641A4A3(iLocal_1193[iVar0], 0);
					}
					iVar0++;
				}
			}
			else
			{
				func_476(1);
			}
			if (unk_0x31CD6E9F83C10233() > iLocal_1485)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[1]))
	{
		if (!unk_0x0B7CA263460475D0(iLocal_1193[1]))
		{
			if (iLocal_1485 < 0)
			{
				iLocal_1485 = unk_0x31CD6E9F83C10233() + 1000;
			}
			else if (unk_0x31CD6E9F83C10233() > iLocal_1485)
			{
				unk_0xD0E2527DD961F86C(iLocal_1193[3], iLocal_1193[2], 4000, 0, 1);
				unk_0xE983D49A61E9F0FF(iLocal_1193[2], "HAND_SHAKE", 1f);
				unk_0xE983D49A61E9F0FF(iLocal_1193[3], "HAND_SHAKE", 1f);
				unk_0x46B35AD2F641A4A3(iLocal_1193[1], 0);
			}
		}
		else
		{
			func_476(0);
		}
	}
	else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[3]))
	{
		if (!unk_0x0B7CA263460475D0(iLocal_1193[3]))
		{
			unk_0xD0E2527DD961F86C(iLocal_1193[5], iLocal_1193[4], 4000, 0, 1);
			unk_0xE983D49A61E9F0FF(iLocal_1193[4], "HAND_SHAKE", 1f);
			unk_0xE983D49A61E9F0FF(iLocal_1193[5], "HAND_SHAKE", 1f);
			unk_0x46B35AD2F641A4A3(iLocal_1193[3], 0);
			if (Local_636.f_0 == 2 || Local_636.f_0 == 4)
			{
				if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
				{
					if (unk_0x432757A9E7AAFA96(Local_18.f_0, 0))
					{
						unk_0x0A69FBBF51E1A08F(Local_18.f_0, Local_654.f_181[Local_654.f_249 /*3*/], 1, 0, 0, 1);
						unk_0x5082D1A6D078DB20(Local_18.f_0, Local_654.f_230[Local_654.f_249]);
						unk_0x24B72A49849215AE(Local_18.f_0, 1084227584);
					}
				}
			}
		}
		else
		{
			if (func_9(iLocal_1456))
			{
				if (iLocal_1473)
				{
					if (func_466(&uLocal_1498, "STR1AUD", "STR1_GIRL1", 8, 0, 0, 0))
					{
						iLocal_1473 = 0;
					}
				}
			}
			func_476(1);
		}
	}
	else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[5]))
	{
		if (!unk_0x0B7CA263460475D0(iLocal_1193[5]))
		{
			if (func_465())
			{
				unk_0x55CC07D5416539C8(iLocal_1193[6], 1);
			}
			unk_0xD0E2527DD961F86C(iLocal_1193[7], iLocal_1193[6], 3000, 3, 1);
			unk_0xE983D49A61E9F0FF(iLocal_1193[6], "HAND_SHAKE", 1f);
			unk_0xE983D49A61E9F0FF(iLocal_1193[7], "HAND_SHAKE", 1f);
			unk_0x46B35AD2F641A4A3(iLocal_1193[5], 0);
			return 1;
		}
		else
		{
			if (func_9(iLocal_1458))
			{
				if (iLocal_1474)
				{
					if (func_466(&uLocal_1498, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_1474 = 0;
					}
				}
			}
			func_476(1);
		}
	}
	else if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[7]))
	{
		if (!unk_0x0B7CA263460475D0(iLocal_1193[7]))
		{
			unk_0x6D0D109B83202E2C(0, 0, 3, 0);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_1193)
			{
				if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[iVar1]))
				{
					unk_0x46B35AD2F641A4A3(iLocal_1193[iVar1], 0);
				}
				iVar1++;
			}
		}
		else
		{
			if (func_9(iLocal_1458))
			{
				if (iLocal_1474)
				{
					if (func_466(&uLocal_1498, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_1474 = 0;
					}
				}
			}
			func_476(1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_465()
{
	int iVar0;
	
	if (func_145(Local_18.f_0))
	{
		iVar0 = unk_0xE9559A12052415BE(Local_18.f_0);
		if (iVar0 == unk_0x50B7853132D8438E("MONSTER") || iVar0 == unk_0x50B7853132D8438E("MARSHALL"))
		{
			return 1;
		}
	}
	return 0;
}

bool func_466(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_475(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_467(sParam2, iParam3, 0);
}

int func_467(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_474();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_473(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_472();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_471();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_470())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_469();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_468();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_474();
	}
	return 0;
}

void func_468()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_469()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_470()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_471()
{
	if (func_139(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_137();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_472()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_474()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_475(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_476(bool bParam0)
{
	if (iLocal_1256 == 0)
	{
		if (Local_636.f_1 == 3)
		{
			if (unk_0xC0C140B24FF74590("INTRO_STREAM", "SEA_RACES_SOUNDSET"))
			{
				if (bParam0)
				{
					unk_0x05A7623B408FE532();
					iLocal_1256 = 1;
				}
			}
		}
		else if (Local_636.f_1 == 1)
		{
			if (unk_0xC0C140B24FF74590("VESPUCCI_CANAL_INTRO", "ROAD_RACE_SOUNDSET"))
			{
				if (bParam0)
				{
					unk_0x05A7623B408FE532();
					iLocal_1256 = 1;
				}
			}
		}
		else if (unk_0xC0C140B24FF74590("INTRO_STREAM", "ROAD_RACE_SOUNDSET"))
		{
			if (bParam0)
			{
				unk_0x05A7623B408FE532();
				iLocal_1256 = 1;
			}
		}
	}
}

void func_477()
{
	if (Local_636.f_0 == 4)
	{
		if (unk_0x772F801619C83779(joaat("prop_dumpster_02a")))
		{
			if (!unk_0x76B3C79DE564AFC6(uLocal_2414))
			{
				iLocal_2414 = unk_0x766969A7CEBA91AE(joaat("prop_dumpster_02a"), Local_2415, 1, 1, 0);
				unk_0xB7E3C36A3BE003B5(iLocal_2414, Local_2418, 2, 1);
				unk_0x1F18D3C78C8C1A11(iLocal_2414, 1);
			}
			if (!unk_0x76B3C79DE564AFC6(uLocal_2421))
			{
				iLocal_2421 = unk_0x766969A7CEBA91AE(joaat("prop_dumpster_02a"), Local_2422, 1, 1, 0);
				unk_0xB7E3C36A3BE003B5(iLocal_2421, Local_2425, 2, 1);
				unk_0x1F18D3C78C8C1A11(iLocal_2421, 1);
			}
			if (!unk_0x76B3C79DE564AFC6(uLocal_2428))
			{
				iLocal_2428 = unk_0x766969A7CEBA91AE(joaat("prop_dumpster_02a"), Local_2429, 1, 1, 0);
				unk_0xB7E3C36A3BE003B5(iLocal_2428, Local_2432, 2, 1);
				unk_0x1F18D3C78C8C1A11(iLocal_2428, 1);
			}
			if (!unk_0x76B3C79DE564AFC6(uLocal_2435))
			{
				iLocal_2435 = unk_0x766969A7CEBA91AE(joaat("prop_dumpster_02a"), Local_2436, 1, 1, 0);
				unk_0xB7E3C36A3BE003B5(iLocal_2435, Local_2439, 2, 1);
				unk_0x1F18D3C78C8C1A11(iLocal_2435, 1);
			}
		}
	}
}

void func_478()
{
	int iVar0;
	
	unk_0x68F19FECF821F7A2(0f);
	func_488(Local_1670, 0, 0, 0, 0, iLocal_1676);
	func_477();
	func_441(Local_636.f_0);
	iVar0 = 0;
	switch (iLocal_631)
	{
		case 0:
			func_486(1, 0);
			func_486(7, 0);
			if (unk_0xED5FFF2E0422067E())
			{
				func_338();
			}
			func_476(0);
			func_29();
			unk_0xFD69BDF108B32E5B("RACE_INTRO_GENERIC");
			unk_0x0A6232893373E293("AZ_DISTANT_VEHICLES_CITY_CENTRE", 0, 0);
			unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 0, 0);
			unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 0, 0);
			unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 0, 0);
			unk_0x1D69C39ECF71C85C("HAO1", 0);
			func_11();
			func_485();
			func_484();
			unk_0xF177BD202464664F("SwitchSceneFranklin", 0, 0);
			func_24(0, 0);
			func_482();
			iLocal_1256 = 0;
			bLocal_1834 = false;
			if (func_145(Local_18.f_0))
			{
				if (Local_636.f_1 == 3)
				{
					unk_0x925DD855308C5F32("RADIO_16_SILVERLAKE");
					unk_0x183D9A7E6C75CBF9("RADIO_16_SILVERLAKE");
					unk_0x28572E00B170C44C("RADIO_16_SILVERLAKE", "SEA_RACE_RADIO_PLAYLIST", 1);
					unk_0xBDBED035A8932CFC("RADIO_16_SILVERLAKE");
					unk_0xF73BCDB7C058F04E(Local_18.f_0, 1);
				}
				else
				{
					unk_0x925DD855308C5F32("RADIO_07_DANCE_01");
				}
				unk_0x15DC27C443A94882(1);
			}
			iLocal_631 = 1;
			break;
		
		case 1:
			if (func_464())
			{
				func_481(0.32f);
				if (func_9(unk_0x0031992CA618A445()))
				{
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
				}
				iLocal_630 = 1;
				iLocal_631 = 0;
			}
			if (func_479(1000))
			{
				func_118(500, 1);
				func_148();
				bLocal_1834 = true;
				func_31(&iLocal_1457);
				func_31(&iLocal_1458);
				iLocal_631 = 2;
			}
			if (Local_636.f_0 == 4)
			{
				if (func_9(unk_0x0031992CA618A445()))
				{
					unk_0x49544FB997F0AADE(unk_0x0031992CA618A445(), 236, 1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_654.f_249 - 1))
				{
					if (func_9(Local_907[iVar0 /*18*/].f_3))
					{
						unk_0x49544FB997F0AADE(Local_907[iVar0 /*18*/].f_3, 236, 1);
					}
					iVar0++;
				}
			}
			break;
		
		case 2:
			if (Local_636.f_1 == 3)
			{
				func_23();
			}
			func_481(0.27f);
			func_430(0);
			if (Local_636.f_1 == 3)
			{
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				unk_0x4EDE34FBADD967A6(0);
				unk_0xADE985F6BA90AED5(0, 1065353216);
				unk_0x31F42B23A853582E(0);
			}
			else if (bLocal_1834)
			{
				func_23();
				iVar0 = 0;
				while (iVar0 <= (Local_654.f_249 - 1))
				{
					if (func_9(Local_907[iVar0 /*18*/].f_3))
					{
						unk_0xD706D9D85701BFBD(Local_907[iVar0 /*18*/].f_3);
					}
					if (func_145(Local_907[iVar0 /*18*/].f_6))
					{
						unk_0x0821297CFC3D8B81(Local_907[iVar0 /*18*/].f_6, 0.1f, 1, 0);
						func_7(Local_907[iVar0 /*18*/].f_6, Local_654.f_181[iVar0 /*3*/]);
						unk_0x5082D1A6D078DB20(Local_907[iVar0 /*18*/].f_6, Local_654.f_230[iVar0]);
					}
					iVar0++;
				}
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				unk_0x4EDE34FBADD967A6(500);
				unk_0xADE985F6BA90AED5(0, 1065353216);
				unk_0x31F42B23A853582E(0);
			}
			else
			{
				unk_0x6D0D109B83202E2C(0, 0, 3, 0);
			}
			func_6(500, 1);
			func_430(0);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_1193)
			{
				if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[iVar0]))
				{
					unk_0x46B35AD2F641A4A3(iLocal_1193[iVar0], 0);
				}
				iVar0++;
			}
			iLocal_630 = 1;
			iLocal_631 = 0;
			break;
	}
}

int func_479(int iParam0)
{
	if (unk_0xF9FC07CC13402AEF())
	{
		if ((unk_0x31CD6E9F83C10233() - Global_28) > iParam0)
		{
			Global_27 = unk_0x31CD6E9F83C10233();
		}
		Global_28 = unk_0x31CD6E9F83C10233();
		if ((unk_0x31CD6E9F83C10233() - Global_27) > iParam0)
		{
			if (func_480())
			{
				Global_27 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
	}
	return 0;
}

int func_480()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0xD887E21676314450(0, 18) || unk_0xD887E21676314450(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_481(int iParam0)
{
	var uVar0;
	
	if (Local_636.f_1 == 2)
	{
		if (func_9(iLocal_1456))
		{
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0xBE0E7D38FE7C495C(0, sLocal_1459, "grid_girl_race_start", 4f, -8f, -1, 8, iParam0, 0, 0, 0);
			unk_0xED5F2A2963728B55(0, Local_1470, 1f, 20000, 1193033728, 1056964608);
			unk_0x9BE63CB00B240063(0, 1193033728, 0);
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(iLocal_1456, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
	}
}

void func_482()
{
	var uVar0;
	struct<3> Var1;
	
	if (Local_636.f_1 == 2)
	{
		unk_0xBE91026C1FC72180(joaat("a_f_y_genhot_01"));
		unk_0x9F62787D280BF2EC(sLocal_1459);
		func_483();
		while (!unk_0x772F801619C83779(joaat("a_f_y_genhot_01")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		while (!unk_0xB3379AC2E71D1E7E(sLocal_1459))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iLocal_1456 = unk_0x5618B819E5B9C053(25, joaat("a_f_y_genhot_01"), Local_1460, fLocal_1469, 1, 1);
		func_367(iLocal_1456, Local_1470);
		iLocal_1457 = unk_0x5618B819E5B9C053(25, joaat("a_f_y_genhot_01"), Local_1463, fLocal_1469, 1, 1);
		func_367(iLocal_1457, Local_1470);
		iLocal_1458 = unk_0x5618B819E5B9C053(25, joaat("a_f_y_genhot_01"), Local_1466, fLocal_1469, 1, 1);
		func_367(iLocal_1458, Local_1470);
		unk_0x8C0D2C1D41B04158(iLocal_1456, -1);
		func_322(&uLocal_1498, 3, iLocal_1456, "GIRL1", 0, 1);
		iLocal_1473 = 1;
		Var1 = { unk_0xCD59EF1D7098A4B4(iLocal_1457, 0f, 20f, 0f) };
		unk_0x173325AAF2CD766A(&uVar0);
		unk_0xBE0E7D38FE7C495C(0, sLocal_1459, "grid_girl_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xED5F2A2963728B55(0, Var1, 1f, 20000, 1193033728, 1056964608);
		unk_0x9BE63CB00B240063(0, 1193033728, 0);
		unk_0xF81AD3C937316CCA(uVar0);
		unk_0xEDD5437C49B7B1F8(iLocal_1457, uVar0);
		unk_0x1F5B34056C3CB80B(&uVar0);
		Var1 = { unk_0xCD59EF1D7098A4B4(iLocal_1458, 0f, 15f, 0f) };
		unk_0x173325AAF2CD766A(&uVar0);
		unk_0xBE0E7D38FE7C495C(0, sLocal_1459, "grid_girl_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xED5F2A2963728B55(0, Var1, 1f, 20000, 1193033728, 1056964608);
		unk_0x9BE63CB00B240063(0, 1193033728, 0);
		unk_0xF81AD3C937316CCA(uVar0);
		unk_0xEDD5437C49B7B1F8(iLocal_1458, uVar0);
		unk_0x1F5B34056C3CB80B(&uVar0);
		func_322(&uLocal_1498, 4, iLocal_1458, "GIRL2", 0, 1);
		iLocal_1474 = 1;
		unk_0x9793B48C4C8275F8(joaat("a_f_y_genhot_01"));
	}
}

void func_483()
{
	switch (Local_636.f_0)
	{
		case 0:
			Local_1460 = { -155.6468f, -1566.949f, 33.9936f };
			Local_1463 = { -153.63f, -1563.7f, 34.95f };
			Local_1466 = { -148.09f, -1557.66f, 34.75f };
			fLocal_1469 = -30.86f;
			Local_1470 = { -141.65f, -1550.75f, 33.46f };
			break;
		
		case 1:
			Local_1460 = { 367.6161f, 312.4572f, 102.5861f };
			Local_1463 = { 368.4547f, 312.2108f, 102.5678f };
			Local_1466 = { 375.17f, 310.64f, 103.44f };
			fLocal_1469 = -103.75f;
			Local_1470 = { 386.63f, 307.77f, 102.2f };
			break;
		
		case 2:
			Local_1460 = { -813.8033f, -2546.801f, 12.80013f };
			Local_1463 = { -814.4293f, -2547.748f, 12.80057f };
			Local_1466 = { -816.56f, -2554.45f, 13.77f };
			fLocal_1469 = 157.75f;
			Local_1470 = { -819.68f, -2562.68f, 12.75f };
			break;
		
		case 3:
			Local_1460 = { 777.3962f, -1148.09f, 28.05913f };
			Local_1463 = { 778.6312f, -1148.07f, 28.00819f };
			Local_1466 = { 787f, -1148.06f, 28.92f };
			fLocal_1469 = -89.3f;
			Local_1470 = { 795.3f, -1147.23f, 27.98f };
			break;
	}
}

void func_484()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1193)
	{
		if (unk_0x2A3EA4C0BCED85F2(iLocal_1193[iVar0]))
		{
			unk_0x46B35AD2F641A4A3(iLocal_1193[iVar0], 0);
		}
		iVar0++;
	}
	if (Local_636.f_1 == 3)
	{
		iLocal_1193[0] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1202, Local_1205, 35f, 0, 2);
		unk_0x55CC07D5416539C8(iLocal_1193[0], 1);
		unk_0x087893C6FCE21842(1, 0, 0, 1, 0, 0);
		iLocal_1193[1] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1250, Local_1253, 35f, 0, 2);
		iLocal_1193[2] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1208, Local_1211, 35f, 0, 2);
		iLocal_1193[3] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1214, Local_1217, 50f, 0, 2);
		iLocal_1193[4] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1220, Local_1223, 50f, 0, 2);
		iLocal_1485 = unk_0x31CD6E9F83C10233() + 250;
	}
	else
	{
		if (Local_636.f_0 == 4)
		{
			iLocal_1193[0] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1202, Local_1205, 40f, 0, 2);
		}
		else
		{
			iLocal_1193[0] = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x990E6357D338A9C8(iLocal_1193[0], 40f);
			unk_0xED7F7C0DD93C1D8E(iLocal_1193[0], Local_18.f_0, Local_1202, 1);
			unk_0x15DC0C1FBCB00FAA(iLocal_1193[0], Local_18.f_0, Local_1205, 1);
		}
		iLocal_1193[1] = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
		unk_0x990E6357D338A9C8(iLocal_1193[1], 40f);
		unk_0xED7F7C0DD93C1D8E(iLocal_1193[1], Local_18.f_0, Local_1208, 1);
		unk_0x15DC0C1FBCB00FAA(iLocal_1193[1], Local_18.f_0, Local_1211, 1);
		unk_0x55CC07D5416539C8(iLocal_1193[0], 1);
		unk_0xD0E2527DD961F86C(iLocal_1193[1], iLocal_1193[0], 3000, 1, 1);
		unk_0x087893C6FCE21842(1, 0, 0, 1, 0, 0);
		unk_0xE983D49A61E9F0FF(iLocal_1193[0], "ROAD_VIBRATION_SHAKE", 0.5f);
		unk_0xE983D49A61E9F0FF(iLocal_1193[1], "ROAD_VIBRATION_SHAKE", 0.5f);
		iLocal_1193[2] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1214, Local_1217, 40f, 0, 2);
		iLocal_1193[3] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1220, Local_1223, 40f, 0, 2);
		iLocal_1193[4] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1226, Local_1229, 40f, 0, 2);
		iLocal_1193[5] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1232, Local_1235, 40f, 0, 2);
		if (func_465())
		{
			iLocal_1193[6] = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x990E6357D338A9C8(iLocal_1193[6], 50f);
			unk_0xED7F7C0DD93C1D8E(iLocal_1193[6], Local_18.f_0, Local_1238, 1);
			unk_0x15DC0C1FBCB00FAA(iLocal_1193[6], Local_18.f_0, Local_1241, 1);
			iLocal_1193[7] = unk_0xAC08B32D1D8EFE97("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x990E6357D338A9C8(iLocal_1193[7], 50f);
			unk_0xED7F7C0DD93C1D8E(iLocal_1193[7], Local_18.f_0, Local_1244, 1);
			unk_0x15DC0C1FBCB00FAA(iLocal_1193[7], Local_18.f_0, Local_1247, 1);
		}
		else
		{
			iLocal_1193[6] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1238, Local_1241, 50f, 0, 2);
			iLocal_1193[7] = unk_0x6BE82EFE6EE60BF4(26379945, Local_1244, Local_1247, 50f, 0, 2);
		}
		iLocal_1485 = -1;
	}
}

void func_485()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xD804ACF2A7171150(&Global_2313, 25);
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 11);
}

void func_486(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_25533[iVar0 /*23*/].f_16 == iParam0)
		{
			func_487(iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_487(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	iVar1 = iParam0;
	if (bParam1 != unk_0x2A3398C6222EB190(Global_25533[iVar1 /*23*/].f_11, 3))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar1 /*23*/].f_11), 18);
		if (Global_25530 == 1)
		{
			Global_25531 = 1;
		}
		Global_25530 = 1;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar1 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_25533[iVar1 /*23*/].f_11), 3);
	}
	if (!unk_0x2A3398C6222EB190(Global_25533[iVar1 /*23*/].f_11, 3))
	{
		if (unk_0xA761A0B6072010C8(Global_25533[iVar1 /*23*/].f_19))
		{
			unk_0xDECD64DB818CE695(1);
			unk_0x0C4BDC77192798AE(&(Global_25533[iVar1 /*23*/].f_19));
			unk_0xDECD64DB818CE695(0);
		}
	}
}

void func_488(char[24] cParam0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_71039 != 6)
	{
		if (Global_71041 == -1)
		{
			if (func_502(1, cParam0))
			{
				if (Global_71042 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_24 > fVar0)
				{
					Global_71041 = unk_0x31CD6E9F83C10233();
					Local_25 = { unk_0x4D7D98763DE1BCA0(15) };
					fLocal_24 = 0f;
				}
				else
				{
					fLocal_24 = (fLocal_24 + unk_0xCD70DA50CCD55658());
				}
			}
			else
			{
				fLocal_24 = 0f;
			}
		}
		else
		{
			if (!func_502(0, cParam0))
			{
				Global_71041 = (unk_0x31CD6E9F83C10233() - 9000);
			}
			unk_0xBD1C47D856010F09(7);
			unk_0xBD1C47D856010F09(6);
			unk_0xBD1C47D856010F09(8);
			unk_0xBD1C47D856010F09(9);
			iVar1 = (unk_0x31CD6E9F83C10233() - Global_71041);
			if (iVar1 < 9000 && !unk_0x5114FCEE2A997B95())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71039)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				unk_0x661705F074A804D1(82, 66);
				unk_0x4E250FE9E4D8720F(1);
				unk_0x41D772AFFBD36843(2);
				iVar12 = func_137();
				if (Global_71042 == 1 && Global_71040 == 62)
				{
					iVar12 = Global_104439.f_2244.f_539.f_4302;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xB922891BFD232C45(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xB922891BFD232C45(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xB922891BFD232C45(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x52D4D0409C49DF8C(iVar8, iVar9, iVar10, iVar2);
				unk_0x473B15F195A283BE();
				Var4 = { func_491(Global_71040, Global_71042, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0x399D1A0AE11E61E3(fVar6, fVar7, 0f, 0.01f);
				unk_0xD1F2C9FF58856AEC(0.67f, 0.67f);
				if (!unk_0x3CCF948E5BFC63FE() && !unk_0x21E65D3A8A35D09E())
				{
					fLocal_29 = 0.14f;
				}
				else
				{
					fLocal_29 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_490(&Var4) > fLocal_29)
					{
						if (unk_0x183B017AEEB40CB9(15))
						{
							unk_0xB8281495D778DB56(15, Local_25.f_0, (Local_25.f_1 + fLocal_28));
							Global_71044 = 1;
						}
					}
				}
				unk_0x0B8B91F21AE25854(&Var4);
				unk_0x7E43DE6F9866B44B(fVar6, fVar7, 0);
				unk_0x26742F01C78031C2();
				if (Global_71043 == 1)
				{
					func_489();
					fLocal_24 = 0f;
				}
			}
			else
			{
				func_489();
				fLocal_24 = 0f;
			}
		}
	}
}

void func_489()
{
	if (Global_71039 != 6)
	{
	}
	if (Global_71044)
	{
		unk_0xC030DF4B187326D7(15);
		Global_71044 = 0;
		Global_17290.f_7931 = 0;
	}
	Global_71039 = 6;
	Global_71041 = -1;
	Global_71040 = -1;
}

float func_490(char* sParam0)
{
	unk_0x54412EEBDB162F5C(uParam0);
	return unk_0x51C2CBAC9E5D95A4(1);
}

struct<2> func_491(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_501(iParam0) };
			break;
		
		case 7:
			Var0 = { func_499(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_498(iParam2) };
					break;
				
				case 8:
					Var0 = { func_497(iParam2) };
					break;
				
				case 7:
					Var0 = { func_496(iParam2) };
					break;
				
				case 10:
					Var0 = { func_495(iParam2) };
					break;
				
				case 5:
					Var0 = { func_494(iParam2) };
					break;
				
				case 4:
					Var0 = { func_493(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_492(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_492(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_493(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_494(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_495(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_496(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_497(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_498(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_499(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_500(iParam0) };
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_500(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_501(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83695[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104439.f_8946.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_502(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_504(0) || Global_71054) || Global_71043 == 1) || !unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	switch (Global_71039)
	{
		case 0:
			if (unk_0xB3404E397FF56B3B(&uParam1, "NONE") || unk_0x0BD3CCFB6C6CFA91(&uParam1))
			{
				Global_71039 = 3;
			}
			else
			{
				Global_71039 = 1;
			}
			break;
		
		case 1:
			if (unk_0xAACBB62174DAE158())
			{
				Global_71039 = 2;
			}
			break;
		
		case 2:
			if (unk_0x136B42AA35650CB6())
			{
				Global_71039 = 4;
				return 1;
			}
			else if (!unk_0x9063DC17918D346A())
			{
				Global_71039 = 3;
			}
			break;
		
		case 3:
			if (unk_0x136B42AA35650CB6())
			{
			}
			else
			{
				Global_71039 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x136B42AA35650CB6())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71039 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x136B42AA35650CB6() || func_144(0)) || func_503(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_503(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_504(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_505(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_505(int iParam0)
{
	return func_506(iParam0, Global_35813);
}

int func_506(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_507(int iParam0)
{
	unk_0x05C9FC8771682275(joaat("airbus"), iParam0);
	unk_0x05C9FC8771682275(joaat("benson"), iParam0);
	unk_0x05C9FC8771682275(joaat("biff"), iParam0);
	unk_0x05C9FC8771682275(joaat("coach"), iParam0);
	unk_0x05C9FC8771682275(joaat("firetruk"), iParam0);
	unk_0x05C9FC8771682275(joaat("flatbed"), iParam0);
	unk_0x05C9FC8771682275(joaat("mule"), iParam0);
	unk_0x05C9FC8771682275(joaat("mule2"), iParam0);
	unk_0x05C9FC8771682275(joaat("packer"), iParam0);
	unk_0x05C9FC8771682275(joaat("pounder"), iParam0);
	unk_0x05C9FC8771682275(joaat("rubble"), iParam0);
	unk_0x05C9FC8771682275(joaat("tiptruck"), iParam0);
	unk_0x05C9FC8771682275(joaat("tiptruck2"), iParam0);
	unk_0x05C9FC8771682275(joaat("tourbus"), iParam0);
	unk_0x05C9FC8771682275(joaat("trash"), iParam0);
}

void func_508(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_103495, unk_0x49CAADAD1ABAB70A(), 24);
		Global_103489 = 1;
	}
	else
	{
		StringCopy(&Global_103495, "NULL", 24);
		Global_103489 = 0;
	}
}

void func_509(bool bParam0, int iParam1)
{
	if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
	{
	}
	else if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		func_322(&uLocal_1498, 1, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			Local_18.f_0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
		}
		else
		{
			Local_18.f_0 = unk_0x7899A2987EB03783();
			if (func_145(Local_18.f_0))
			{
				unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), Local_18.f_0, -1);
			}
		}
	}
	iLocal_630 = 0;
	iLocal_631 = 0;
	iLocal_629 = 0;
	func_518(Local_636, &Local_654);
	unk_0x2678FA30C5FB2080(2);
	func_516();
	if (bParam0)
	{
		func_515();
	}
	else
	{
		func_513();
	}
	func_512();
	unk_0xB0DC173831DE0B1C(0);
	unk_0x3C569ABD932ADE4E(1);
	unk_0x18E90C6DABF378AD(2);
	unk_0x14FB221ED8A8D8B9(1);
	unk_0x65EF4B69E1BFCCEF(unk_0x3D35F9864E4640B1(), 0);
	unk_0x862C6F0A4458264C(0);
	unk_0x6FA02813ACFAFB3A(1);
	unk_0xB8EFDF266981AB1A("DRIVE", 0);
	unk_0x1ED966252985F895(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0, 1);
	unk_0x572B183FF881EBF0(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0);
	if ((iParam1 && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (Local_636.f_1 == 1 || Local_636.f_1 == 2)
		{
			uLocal_1495 = func_511(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 60f);
			func_510(Local_636.f_0, &Local_1488, &Local_1491, &fLocal_1494);
			unk_0xF3AB35ADAA20C9A9(Local_1488, Local_1491, fLocal_1494, 0, 0, 1);
		}
		unk_0xD50199C9F3AD72E7(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 500f, 0);
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
	unk_0x15007EAE63C7ECCF(0.1f);
	Local_18.f_2 = 0;
}

void func_510(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

var func_511(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x765BE154A2FACB3E(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_512()
{
	switch (Local_636.f_0)
	{
		case 0:
			Local_1476 = { -168.6f, -1575.16f, 34.7f };
			fLocal_1479 = 141.57f;
			Local_1480 = { -170.0685f, -1573.866f, 34.307f };
			fLocal_1483 = 191.3066f;
			break;
		
		case 1:
			Local_1476 = { 353.12f, 321.39f, 103.65f };
			fLocal_1479 = 77.4f;
			Local_1480 = { 353.4853f, 323.3662f, 103.0862f };
			fLocal_1483 = 127.4f;
			break;
		
		case 2:
			Local_1476 = { -794.5402f, -2527.393f, 12.7891f };
			fLocal_1479 = 332.72f;
			Local_1480 = { -792.37f, -2527.87f, 13.83f };
			fLocal_1483 = 22.72f;
			break;
		
		case 3:
			Local_1476 = { 818.13f, -1161.54f, 28f };
			fLocal_1479 = 76.46f;
			Local_1480 = { 818.5804f, -1159.643f, 27.2778f };
			fLocal_1483 = 126.46f;
			break;
		
		case 4:
			Local_1476 = { -1025.28f, -1130.25f, 1.7f };
			fLocal_1479 = 305.27f;
			Local_1480 = { -1024.548f, -1131.254f, 1.1861f };
			fLocal_1483 = 355.27f;
			break;
	}
}

void func_513()
{
	switch (Local_636.f_0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_907[0 /*18*/].f_5 = joaat("banshee");
			Local_907[1 /*18*/].f_5 = joaat("feltzer2");
			Local_907[2 /*18*/].f_5 = joaat("sentinel");
			Local_907[3 /*18*/].f_5 = joaat("banshee");
			Local_907[4 /*18*/].f_5 = joaat("feltzer2");
			Local_907[5 /*18*/].f_5 = joaat("sentinel");
			Local_907[6 /*18*/].f_5 = joaat("banshee");
			break;
		
		case 4:
			Local_907[0 /*18*/].f_5 = joaat("bati");
			Local_907[1 /*18*/].f_5 = joaat("bati");
			Local_907[2 /*18*/].f_5 = joaat("ruffian");
			Local_907[3 /*18*/].f_5 = joaat("ruffian");
			Local_907[4 /*18*/].f_5 = joaat("bati");
			Local_907[5 /*18*/].f_5 = joaat("ruffian");
			Local_907[6 /*18*/].f_5 = joaat("bati");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			Local_907[0 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[1 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[2 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[3 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[4 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[5 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[6 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[7 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[8 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[9 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[10 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[11 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[12 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[13 /*18*/].f_5 = func_514(Local_636.f_1);
			Local_907[14 /*18*/].f_5 = func_514(Local_636.f_1);
			break;
	}
	switch (Local_636.f_0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_907[0 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_907[1 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_907[2 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_907[3 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_907[4 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_907[5 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_907[6 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_907[7 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_907[8 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_907[9 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_907[10 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_907[11 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			Local_907[12 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
			Local_907[13 /*18*/].f_4 = joaat("a_m_y_hipster_02");
			Local_907[14 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
			break;
		
		case 4:
			Local_907[0 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[1 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[2 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[3 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[4 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[5 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[6 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[7 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[8 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[9 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[10 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[11 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[12 /*18*/].f_4 = joaat("a_m_y_motox_02");
			Local_907[13 /*18*/].f_4 = joaat("a_m_y_motox_01");
			Local_907[14 /*18*/].f_4 = joaat("a_m_y_motox_02");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			Local_907[0 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[1 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[2 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[3 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[4 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[5 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[6 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[7 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[8 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[9 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[10 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[11 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[12 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[13 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			Local_907[14 /*18*/].f_4 = joaat("a_m_y_jetski_01");
			break;
	}
}

int func_514(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_515()
{
	Local_907[0 /*18*/].f_5 = joaat("prairie");
	Local_907[1 /*18*/].f_5 = joaat("dominator");
	Local_907[2 /*18*/].f_5 = joaat("sentinel");
	Local_907[3 /*18*/].f_5 = joaat("prairie");
	Local_907[4 /*18*/].f_5 = joaat("dominator");
	Local_907[5 /*18*/].f_5 = joaat("sentinel");
	Local_907[6 /*18*/].f_5 = joaat("prairie");
	Local_907[0 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_907[1 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_907[2 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_907[3 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_907[4 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_907[5 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_907[6 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_907[7 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_907[8 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_907[9 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_907[10 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_907[11 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
	Local_907[12 /*18*/].f_4 = joaat("a_m_m_socenlat_01");
	Local_907[13 /*18*/].f_4 = joaat("a_m_y_hipster_02");
	Local_907[14 /*18*/].f_4 = joaat("a_m_y_eastsa_01");
}

void func_516()
{
	if (Local_636.f_1 == 2)
	{
		if (func_517())
		{
			Local_1202 = { -0.7054f, 6.3148f, 2.0821f };
			Local_1205 = { 0.9495f, 3.9011f, 2.7419f };
			Local_1208 = { -0.567f, 2.6724f, 1.0077f };
			Local_1211 = { 0.094f, -0.2423f, 0.7483f };
		}
		else if (func_465())
		{
			Local_1202 = { -1.6831f, 6.0271f, 4.2228f };
			Local_1205 = { -0.0245f, 3.5705f, 4.6855f };
			Local_1208 = { -1.0281f, 4.6872f, 0.9868f };
			Local_1211 = { -0.185f, 1.8112f, 1.1221f };
		}
		else
		{
			Local_1202 = { -1.5802f, 5.8398f, 2.2274f };
			Local_1205 = { 0.197f, 3.5006f, 2.8356f };
			Local_1208 = { -0.6678f, 1.974f, 0.6876f };
			Local_1211 = { 0.144f, -0.9013f, 0.417f };
		}
	}
	switch (Local_636.f_0)
	{
		case 0:
			Local_1214 = { -159.2159f, -1564.125f, 34.6164f };
			Local_1217 = { -0.073293f, 0.055f, -119.2735f };
			Local_1220 = { -158.8115f, -1563.369f, 34.61729f };
			Local_1223 = { -0.073293f, 0.055f, -123.7305f };
			Local_1226 = { -156.8608f, -1565.342f, 35.70965f };
			Local_1229 = { -8.040299f, -0.0005f, -49.00647f };
			Local_1232 = { -155.1768f, -1567.141f, 35.70965f };
			Local_1235 = { -8.040299f, -0.0005f, -41.34629f };
			Local_1238 = { -142.3124f, -1550.574f, 34.58047f };
			Local_1241 = { -2.928405f, -0.000499f, 142.6203f };
			Local_1244 = { -141.3225f, -1546.89f, 34.7891f };
			Local_1247 = { -2.8368f, 0f, 139.8128f };
			break;
		
		case 1:
			Local_1214 = { 368.3612f, 317.4821f, 102.8912f };
			Local_1217 = { 4.9194f, 0.0225f, -176.9747f };
			Local_1220 = { 369.0639f, 317.4726f, 102.8941f };
			Local_1223 = { 5.042f, 0.0225f, 178.1396f };
			Local_1226 = { 367.0291f, 314.8014f, 104.37f };
			Local_1229 = { -7.4995f, 0.0233f, -111.5294f };
			Local_1232 = { 366.4452f, 312.9081f, 104.3692f };
			Local_1235 = { -7.4995f, 0.0233f, -100.7122f };
			Local_1238 = { 386.8919f, 308.6107f, 103.2039f };
			Local_1241 = { 0.3447f, 0.0472f, 82.1591f };
			Local_1244 = { 390.2213f, 309.4721f, 103.7617f };
			Local_1247 = { -4.3057f, 0.0299f, 76.2809f };
			break;
		
		case 2:
			Local_1214 = { -809.5582f, -2548.848f, 13.2619f };
			Local_1217 = { 6.3036f, 0.0031f, 78.738f };
			Local_1220 = { -809.6061f, -2549.241f, 13.2619f };
			Local_1223 = { 3.5967f, 0.0031f, 75.5951f };
			Local_1226 = { -811.1327f, -2544.394f, 14.5064f };
			Local_1229 = { -5.1571f, 0.0031f, 151.0646f };
			Local_1232 = { -812.3164f, -2543.757f, 14.5063f };
			Local_1235 = { -5.1571f, 0.0031f, 154.2332f };
			Local_1238 = { -819.8916f, -2564.119f, 13.8366f };
			Local_1241 = { -3.7349f, 0.0039f, -21.4233f };
			Local_1244 = { -819.4815f, -2566.388f, 14.1387f };
			Local_1247 = { -5.6248f, 0.0039f, -24.2558f };
			break;
		
		case 3:
			Local_1214 = { 776.7724f, -1143.73f, 28.3016f };
			Local_1217 = { 11.6472f, -0.0085f, -162.2849f };
			Local_1220 = { 778.136f, -1143.352f, 28.3014f };
			Local_1223 = { 10.4548f, -0.0085f, -170.727f };
			Local_1226 = { 775.2812f, -1146.74f, 29.6806f };
			Local_1229 = { -6.3919f, -0.0085f, -92.6672f };
			Local_1232 = { 775.3398f, -1148.591f, 29.6808f };
			Local_1235 = { -6.3919f, -0.0085f, -84.5603f };
			Local_1238 = { 795.929f, -1146.452f, 29.5086f };
			Local_1241 = { -2.946f, -0.0103f, 96.9974f };
			Local_1244 = { 799.178f, -1144.664f, 29.6776f };
			Local_1247 = { -3.7454f, -0.0103f, 96.6498f };
			break;
		
		case 4:
			Local_1202 = { -1081.793f, -1162.103f, 6.1895f };
			Local_1205 = { 9.5571f, 0.0247f, 143.3313f };
			Local_1208 = { -0.2995f, 1.6679f, 0.9952f };
			Local_1211 = { 0.7073f, -1.1228f, 0.5493f };
			Local_1214 = { -1059.43f, -1154.967f, 1.585626f };
			Local_1217 = { 5.101318f, 0.220638f, 46.04638f };
			Local_1220 = { -1060.099f, -1155.654f, 1.589301f };
			Local_1223 = { 5.101318f, 0.220639f, 55.21057f };
			Local_1226 = { -1057.833f, -1153.64f, 2.157057f };
			Local_1229 = { -1.541381f, 0.155416f, 92.08984f };
			Local_1232 = { -1058.799f, -1151.695f, 3.019048f };
			Local_1235 = { -8.483372f, 0.155417f, 120.0729f };
			Local_1238 = { -1073.324f, -1160.225f, 2.467393f };
			Local_1241 = { -9.078616f, 0.014872f, -56.52562f };
			Local_1244 = { -1074.407f, -1161.541f, 2.727543f };
			Local_1247 = { -9.078616f, 0.014872f, -56.52562f };
			break;
		
		case 5:
			Local_1202 = { 3071.705f, 680.4286f, -0.578093f };
			Local_1205 = { -14.99741f, 0f, 169.4703f };
			Local_1250 = { 3071.258f, 678.9485f, 3.839843f };
			Local_1253 = { -0.639399f, 0f, 168.9246f };
			Local_1208 = { 3070.761f, 677.4249f, 3.822088f };
			Local_1211 = { -0.639399f, 0f, 169.1743f };
			Local_1214 = { 3074.792f, 632.8167f, 2.242464f };
			Local_1217 = { 0.235991f, 0f, 58.90903f };
			Local_1220 = { 3072.679f, 629.8298f, 2.241469f };
			Local_1223 = { 0.235991f, 0f, 32.61848f };
			break;
		
		case 6:
			Local_1202 = { 3482.451f, 5171.12f, -2.622287f };
			Local_1205 = { -12.38926f, 0f, 26.13617f };
			Local_1250 = { 3481.747f, 5172.554f, 6.65429f };
			Local_1253 = { -9.870142f, 0f, 26.13616f };
			Local_1208 = { 3479.127f, 5173.103f, 6.487341f };
			Local_1211 = { -9.603036f, 0f, 21.92711f };
			Local_1214 = { 3457.328f, 5187.86f, 4.6358f };
			Local_1217 = { -24.8126f, 0.0397f, -41.5662f };
			Local_1220 = { 3456.51f, 5197.896f, 3.9627f };
			Local_1223 = { -23.4737f, 0.0397f, -128.4928f };
			break;
		
		case 7:
			Local_1202 = { 190.5428f, 3596.879f, 28.21027f };
			Local_1205 = { -16.6129f, -1E-06f, -17.12342f };
			Local_1250 = { 190.9281f, 3598.446f, 33.46021f };
			Local_1253 = { -6.51379f, 0f, -20.80637f };
			Local_1208 = { 189.0555f, 3599.194f, 33.45909f };
			Local_1211 = { -6.431107f, 0f, -24.99328f };
			Local_1214 = { 187.3536f, 3623.253f, 31.378f };
			Local_1217 = { 0.968793f, 0f, -171.1333f };
			Local_1220 = { 189.6363f, 3623.848f, 31.37059f };
			Local_1223 = { 0.968793f, 0f, 175.6184f };
			break;
		
		case 8:
			Local_1202 = { 617.7053f, -2150.886f, -6.053663f };
			Local_1205 = { -12.89488f, -2E-06f, -21.27229f };
			Local_1250 = { 616.8138f, -2149.222f, 1.441951f };
			Local_1253 = { 5.644659f, -2E-06f, -24.9429f };
			Local_1208 = { 615.142f, -2147.596f, 1.518046f };
			Local_1211 = { 3.451776f, -2E-06f, -29.07558f };
			Local_1214 = { 615.4761f, -2124.192f, 1.467611f };
			Local_1217 = { 0.143961f, 0f, -156.6226f };
			Local_1220 = { 617.9708f, -2122.319f, 1.464393f };
			Local_1223 = { 0.143961f, 0f, 179.0641f };
			break;
	}
	if (func_465())
	{
		Local_1238 = { -2.0797f, -1.409f, 1.3288f };
		Local_1241 = { -2.1875f, 1.5807f, 1.1049f };
		Local_1244 = { -0.6528f, -5.8087f, 2.317f };
		Local_1247 = { -0.7557f, -2.8423f, 1.8806f };
	}
}

int func_517()
{
	int iVar0;
	
	if (func_145(Local_18.f_0))
	{
		iVar0 = unk_0xE9559A12052415BE(Local_18.f_0);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == unk_0x50B7853132D8438E("huntley")) || iVar0 == unk_0x50B7853132D8438E("DUBSTA3"))
		{
			return 1;
		}
	}
	return 0;
}

void func_518(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
			uParam6->f_247 = 2;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -151.94f, -1566.87f, 34.48f };
			uParam6->f_230[0] = 139.8f;
			uParam6->f_181[1 /*3*/] = { -155.98f, -1563.47f, 34.6f };
			uParam6->f_230[1] = 139.8f;
			uParam6->f_181[2 /*3*/] = { -146.4f, -1560.51f, 34.28f };
			uParam6->f_230[2] = 139.8f;
			uParam6->f_181[3 /*3*/] = { -150.53f, -1556.87f, 34.4f };
			uParam6->f_230[3] = 139.8f;
			uParam6->f_181[4 /*3*/] = { -141.15f, -1553.81f, 33.98f };
			uParam6->f_230[4] = 139.8f;
			uParam6->f_181[5 /*3*/] = { -144.97f, -1550.67f, 34.07f };
			uParam6->f_230[5] = 139.8f;
			uParam6->f_248 = 18;
			*(uParam6[0 /*3*/]) = { -177.4019f, -1594.644f, 33.4994f };
			*(uParam6[1 /*3*/]) = { -181.9884f, -1688.1f, 32.2323f };
			*(uParam6[2 /*3*/]) = { -68.2538f, -1793.952f, 26.8799f };
			*(uParam6[3 /*3*/]) = { 56.0836f, -1894.422f, 20.5566f };
			*(uParam6[4 /*3*/]) = { 102.9353f, -1868.229f, 23.1889f };
			*(uParam6[5 /*3*/]) = { 236.2683f, -1924.712f, 23.29643f };
			*(uParam6[6 /*3*/]) = { 287.2185f, -1884.079f, 25.9619f };
			*(uParam6[7 /*3*/]) = { 397.2169f, -1948.52f, 23.3175f };
			*(uParam6[8 /*3*/]) = { 552.7326f, -1879.798f, 24.4769f };
			*(uParam6[9 /*3*/]) = { 599.2975f, -1699.438f, 21.9581f };
			*(uParam6[10 /*3*/]) = { 603.7488f, -1595.439f, 25.5479f };
			*(uParam6[11 /*3*/]) = { 514.6337f, -1443.954f, 28.3433f };
			*(uParam6[12 /*3*/]) = { 471.4342f, -1433.925f, 28.34211f };
			*(uParam6[13 /*3*/]) = { 293.2f, -1521.2f, 28.3415f };
			*(uParam6[14 /*3*/]) = { 182.5014f, -1585.272f, 28.3099f };
			*(uParam6[15 /*3*/]) = { 16.9636f, -1465.682f, 29.5632f };
			*(uParam6[16 /*3*/]) = { -73.9895f, -1476.329f, 31.1385f };
			*(uParam6[17 /*3*/]) = { -155.8476f, -1566.98f, 34.00011f };
			break;
		
		case 1:
			uParam6->f_247 = 1;
			uParam6->f_250 = 30f;
			uParam6->f_251 = 38f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 368.64f, 309.52f, 103.16f };
			uParam6->f_230[0] = 74.34f;
			uParam6->f_181[1 /*3*/] = { 370.33f, 314.66f, 103.07f };
			uParam6->f_230[1] = 74.34f;
			uParam6->f_181[2 /*3*/] = { 376.31f, 307.58f, 102.9f };
			uParam6->f_230[2] = 74.34f;
			uParam6->f_181[3 /*3*/] = { 377.5f, 313f, 103.04f };
			uParam6->f_230[3] = 74.34f;
			uParam6->f_181[4 /*3*/] = { 383.49f, 305.81f, 102.86f };
			uParam6->f_230[4] = 74.34f;
			uParam6->f_181[5 /*3*/] = { 385.23f, 311.22f, 102.77f };
			uParam6->f_230[5] = 74.34f;
			uParam6->f_248 = 60;
			*(uParam6[0 /*3*/]) = { 176.5163f, 368.2185f, 107.7932f };
			*(uParam6[1 /*3*/]) = { 74.6353f, 326.5884f, 111.1838f };
			*(uParam6[2 /*3*/]) = { 40.98252f, 278.1664f, 108.628f };
			*(uParam6[3 /*3*/]) = { -6.5086f, 269.1777f, 107.8002f };
			*(uParam6[4 /*3*/]) = { -157.2158f, 260.5422f, 92.9641f };
			*(uParam6[5 /*3*/]) = { -306.6567f, 264.1079f, 86.8654f };
			*(uParam6[6 /*3*/]) = { -510.8915f, 258.964f, 82.0697f };
			*(uParam6[7 /*3*/]) = { -677.1512f, 285.4961f, 81.0311f };
			*(uParam6[8 /*3*/]) = { -829.2744f, 291.7629f, 85.4059f };
			*(uParam6[9 /*3*/]) = { -854.5978f, 467.9413f, 86.39626f };
			*(uParam6[10 /*3*/]) = { -877.5402f, 535.0839f, 90.45716f };
			*(uParam6[11 /*3*/]) = { -1006.234f, 596.4271f, 101.8474f };
			*(uParam6[12 /*3*/]) = { -1211.74f, 545.4279f, 96.67117f };
			*(uParam6[13 /*3*/]) = { -1247.746f, 481.3893f, 92.658f };
			*(uParam6[14 /*3*/]) = { -1209.511f, 468.7086f, 88.8673f };
			*(uParam6[15 /*3*/]) = { -1096.542f, 456.5062f, 76.7926f };
			*(uParam6[16 /*3*/]) = { -1077.046f, 385.2891f, 68.0071f };
			*(uParam6[17 /*3*/]) = { -1081.664f, 292.3875f, 63.0137f };
			*(uParam6[18 /*3*/]) = { -1128.989f, 267.3287f, 64.9992f };
			*(uParam6[19 /*3*/]) = { -1274.646f, 228.7755f, 59.809f };
			*(uParam6[20 /*3*/]) = { -1408.295f, 193.1421f, 57.5883f };
			*(uParam6[21 /*3*/]) = { -1429.799f, -18.8745f, 51.4889f };
			*(uParam6[22 /*3*/]) = { -1466.38f, -91.9526f, 49.9463f };
			*(uParam6[23 /*3*/]) = { -1582.228f, -187.6987f, 54.6562f };
			*(uParam6[24 /*3*/]) = { -1633.187f, -302.6338f, 50.4393f };
			*(uParam6[25 /*3*/]) = { -1755.927f, -441.1943f, 41.2927f };
			*(uParam6[26 /*3*/]) = { -1675.621f, -568.3997f, 33.2031f };
			*(uParam6[27 /*3*/]) = { -1556.63f, -662.1553f, 27.9556f };
			*(uParam6[28 /*3*/]) = { -1441.304f, -761.7834f, 22.5293f };
			*(uParam6[29 /*3*/]) = { -1327.756f, -861.1824f, 15.5558f };
			*(uParam6[30 /*3*/]) = { -1254.9f, -1062.5f, 7.4798f };
			*(uParam6[31 /*3*/]) = { -1306.2f, -1091.1f, 6f };
			*(uParam6[32 /*3*/]) = { -1266.1f, -1265.2f, 3f };
			*(uParam6[33 /*3*/]) = { -1206.7f, -1251.5f, 6f };
			*(uParam6[34 /*3*/]) = { -1149.227f, -1305.18f, 4.164155f };
			*(uParam6[35 /*3*/]) = { -933.4516f, -1221.172f, 4.1712f };
			*(uParam6[36 /*3*/]) = { -804.6487f, -1141.681f, 8.1794f };
			*(uParam6[37 /*3*/]) = { -653.9498f, -1049.006f, 16.1054f };
			*(uParam6[38 /*3*/]) = { -635.1398f, -891.9207f, 23.9038f };
			*(uParam6[39 /*3*/]) = { -633.6005f, -739.1533f, 26.37f };
			*(uParam6[40 /*3*/]) = { -627.4288f, -582.9346f, 33.6256f };
			*(uParam6[41 /*3*/]) = { -625.0278f, -397.2912f, 33.7955f };
			*(uParam6[42 /*3*/]) = { -586.7f, -378.4f, 33.9005f };
			*(uParam6[43 /*3*/]) = { -437.4909f, -388.7413f, 32.1535f };
			*(uParam6[44 /*3*/]) = { -231.909f, -410.7465f, 29.6085f };
			*(uParam6[45 /*3*/]) = { -147.8854f, -373.2199f, 32.7875f };
			*(uParam6[46 /*3*/]) = { -115.0438f, -285.8302f, 40.5101f };
			*(uParam6[47 /*3*/]) = { -51.4044f, -257.3596f, 44.7924f };
			*(uParam6[48 /*3*/]) = { 85.9933f, -309.274f, 45.4642f };
			*(uParam6[49 /*3*/]) = { 225.0007f, -356.0629f, 43.2898f };
			*(uParam6[50 /*3*/]) = { 370.0895f, -402.5069f, 44.9239f };
			*(uParam6[51 /*3*/]) = { 481.0543f, -305.9488f, 45.6763f };
			*(uParam6[52 /*3*/]) = { 527.0013f, -220.0025f, 49.7887f };
			*(uParam6[53 /*3*/]) = { 546.5042f, -101.5203f, 64.26041f };
			*(uParam6[54 /*3*/]) = { 636.0579f, -57.7903f, 75.5052f };
			*(uParam6[55 /*3*/]) = { 703.7552f, 18.0953f, 83.1893f };
			*(uParam6[56 /*3*/]) = { 778.6013f, 128.2524f, 78.3677f };
			*(uParam6[57 /*3*/]) = { 751.6663f, 181.9566f, 81.9156f };
			*(uParam6[58 /*3*/]) = { 609.8065f, 232.9736f, 101.0741f };
			*(uParam6[59 /*3*/]) = { 369.29f, 312.41f, 103.24f };
			break;
		
		case 2:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -816.46f, -2547.3f, 13.5f };
			uParam6->f_230[0] = 341.07f;
			uParam6->f_181[1 /*3*/] = { -812.31f, -2549.09f, 13.33f };
			uParam6->f_230[1] = 341.07f;
			uParam6->f_181[2 /*3*/] = { -818.74f, -2553.95f, 13.38f };
			uParam6->f_230[2] = 341.07f;
			uParam6->f_181[3 /*3*/] = { -815.07f, -2555.46f, 13.41f };
			uParam6->f_230[3] = 341.07f;
			uParam6->f_181[4 /*3*/] = { -822.05f, -2559.68f, 13.49f };
			uParam6->f_230[4] = 341.07f;
			uParam6->f_181[5 /*3*/] = { -817.13f, -2562.07f, 13.34f };
			uParam6->f_230[5] = 341.07f;
			uParam6->f_248 = 30;
			*(uParam6[0 /*3*/]) = { -807.6469f, -2469.847f, 12.7351f };
			*(uParam6[1 /*3*/]) = { -846.8392f, -2324.698f, 16.9914f };
			*(uParam6[2 /*3*/]) = { -762.691f, -2198.874f, 14.9078f };
			*(uParam6[3 /*3*/]) = { -656.6849f, -2105.357f, 14.517f };
			*(uParam6[4 /*3*/]) = { -562.5864f, -2083.101f, 26.3678f };
			*(uParam6[5 /*3*/]) = { -336.5846f, -2111.548f, 22.7184f };
			*(uParam6[6 /*3*/]) = { -238.7528f, -2134.771f, 21.7367f };
			*(uParam6[7 /*3*/]) = { -18.5043f, -2050.755f, 18.0635f };
			*(uParam6[8 /*3*/]) = { 109.6071f, -2047.105f, 17.3701f };
			*(uParam6[9 /*3*/]) = { 162.2125f, -2017.698f, 17.2636f };
			*(uParam6[10 /*3*/]) = { 215.2578f, -1946.236f, 20.9418f };
			*(uParam6[11 /*3*/]) = { 200.6974f, -1907.024f, 22.7627f };
			*(uParam6[12 /*3*/]) = { 113.3993f, -1865.566f, 23.4617f };
			*(uParam6[13 /*3*/]) = { 68.2166f, -1891.056f, 20.7378f };
			*(uParam6[14 /*3*/]) = { -111.4028f, -1759.604f, 28.8334f };
			*(uParam6[15 /*3*/]) = { -242.8844f, -1813.055f, 28.7495f };
			*(uParam6[16 /*3*/]) = { -364.17f, -1821.922f, 21.5683f };
			*(uParam6[17 /*3*/]) = { -478.9611f, -1885.955f, 16.6741f };
			*(uParam6[18 /*3*/]) = { -598.0135f, -1999.651f, 16.4316f };
			*(uParam6[19 /*3*/]) = { -720.7257f, -2133.103f, 12.3082f };
			*(uParam6[20 /*3*/]) = { -777.2783f, -2181.116f, 14.8988f };
			*(uParam6[21 /*3*/]) = { -863.5436f, -2251.442f, 17.3272f };
			*(uParam6[22 /*3*/]) = { -948.965f, -2368.096f, 19.205f };
			*(uParam6[23 /*3*/]) = { -990.7916f, -2440.438f, 19.2041f };
			*(uParam6[24 /*3*/]) = { -1089.384f, -2613.615f, 19.2104f };
			*(uParam6[25 /*3*/]) = { -1084.455f, -2680.642f, 19.2111f };
			*(uParam6[26 /*3*/]) = { -996.711f, -2742.934f, 19.206f };
			*(uParam6[27 /*3*/]) = { -926.4546f, -2730.204f, 19.2052f };
			*(uParam6[28 /*3*/]) = { -874.8831f, -2665.625f, 18.6777f };
			*(uParam6[29 /*3*/]) = { -813.0546f, -2546.738f, 12.7888f };
			break;
		
		case 3:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { 780.54f, -1150.96f, 28.65f };
			uParam6->f_230[0] = 93.71f;
			uParam6->f_181[1 /*3*/] = { 780.24f, -1145.74f, 28.56f };
			uParam6->f_230[1] = 93.71f;
			uParam6->f_181[2 /*3*/] = { 787.47f, -1150.53f, 28.5f };
			uParam6->f_230[2] = 93.71f;
			uParam6->f_181[3 /*3*/] = { 787.19f, -1145.74f, 28.66f };
			uParam6->f_230[3] = 93.71f;
			uParam6->f_181[4 /*3*/] = { 794.1f, -1149.95f, 28.66f };
			uParam6->f_230[4] = 93.71f;
			uParam6->f_181[5 /*3*/] = { 793.58f, -1144.73f, 28.59f };
			uParam6->f_230[5] = 93.71f;
			uParam6->f_248 = 24;
			*(uParam6[0 /*3*/]) = { 660.2601f, -1154.407f, 40.641f };
			*(uParam6[1 /*3*/]) = { 571.5685f, -1178.696f, 41.2734f };
			*(uParam6[2 /*3*/]) = { 421.5113f, -1184.212f, 39.7127f };
			*(uParam6[3 /*3*/]) = { 268.5206f, -1176.572f, 37.1933f };
			*(uParam6[4 /*3*/]) = { 186.8177f, -1162.025f, 37.1079f };
			*(uParam6[5 /*3*/]) = { 71f, -1163.3f, 28.7f };
			*(uParam6[6 /*3*/]) = { 74.9529f, -1267.338f, 28.19373f };
			*(uParam6[7 /*3*/]) = { 244.1904f, -1226.699f, 37.3049f };
			*(uParam6[8 /*3*/]) = { 394.5264f, -1224.619f, 39.1224f };
			*(uParam6[9 /*3*/]) = { 519.6835f, -1228.254f, 40.9569f };
			*(uParam6[10 /*3*/]) = { 643.6398f, -1244.262f, 40.9174f };
			*(uParam6[11 /*3*/]) = { 765.5765f, -1242.766f, 25.9457f };
			*(uParam6[12 /*3*/]) = { 851.6f, -1254.2f, 26.9066f };
			*(uParam6[13 /*3*/]) = { 859.1f, -1326.3f, 37.0286f };
			*(uParam6[14 /*3*/]) = { 739.5747f, -1347.013f, 38.903f };
			*(uParam6[15 /*3*/]) = { 695.9282f, -1292.136f, 41.1269f };
			*(uParam6[16 /*3*/]) = { 729.7197f, -1235.624f, 43.9479f };
			*(uParam6[17 /*3*/]) = { 755.8483f, -1195.996f, 44.0202f };
			*(uParam6[18 /*3*/]) = { 724.6743f, -1156.984f, 43.7047f };
			*(uParam6[19 /*3*/]) = { 688.6f, -1101.7f, 40.8716f };
			*(uParam6[20 /*3*/]) = { 732.4061f, -1045.311f, 39.4973f };
			*(uParam6[21 /*3*/]) = { 815.3089f, -1042.096f, 41.2541f };
			*(uParam6[22 /*3*/]) = { 865.2093f, -1093.343f, 35.9246f };
			*(uParam6[23 /*3*/]) = { 777.4238f, -1148.405f, 28.07877f };
			break;
		
		case 4:
			uParam6->f_247 = 2;
			uParam6->f_250 = 34f;
			uParam6->f_251 = 40f;
			uParam6->f_252 = 46f;
			uParam6->f_249 = 5;
			uParam6->f_181[0 /*3*/] = { -1063.95f, -1153.21f, 1.52f };
			uParam6->f_230[0] = 299.67f;
			uParam6->f_181[1 /*3*/] = { -1062.53f, -1155.37f, 1.46f };
			uParam6->f_230[1] = 299.67f;
			uParam6->f_181[2 /*3*/] = { -1068.6f, -1155.54f, 1.61f };
			uParam6->f_230[2] = 299.67f;
			uParam6->f_181[3 /*3*/] = { -1066.89f, -1157.64f, 1.56f };
			uParam6->f_230[3] = 299.67f;
			uParam6->f_181[4 /*3*/] = { -1072.76f, -1158.02f, 1.53f };
			uParam6->f_230[4] = 299.67f;
			uParam6->f_181[5 /*3*/] = { -1072.01f, -1160.27f, 1.48f };
			uParam6->f_230[5] = 299.67f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { -925.4882f, -1072.804f, 1.1502f };
			*(uParam6[1 /*3*/]) = { -838.902f, -1020.697f, 12.2795f };
			*(uParam6[2 /*3*/]) = { -752.4019f, -968.1661f, 15.5933f };
			*(uParam6[3 /*3*/]) = { -660.0514f, -959.4323f, 20.3359f };
			*(uParam6[4 /*3*/]) = { -643.1226f, -996.0269f, 19.6655f };
			*(uParam6[5 /*3*/]) = { -755.0204f, -1100.572f, 9.7347f };
			*(uParam6[6 /*3*/]) = { -844.4481f, -1152.17f, 5.5481f };
			*(uParam6[7 /*3*/]) = { -934.6541f, -1204.102f, 4.1492f };
			*(uParam6[8 /*3*/]) = { -968.2922f, -1181.906f, 2.909f };
			*(uParam6[9 /*3*/]) = { -1023.329f, -1087.952f, 1.0397f };
			*(uParam6[10 /*3*/]) = { -1078.633f, -994.3664f, 1.2191f };
			*(uParam6[11 /*3*/]) = { -1170.782f, -837.8701f, 13.2119f };
			*(uParam6[12 /*3*/]) = { -1312.033f, -658.3402f, 25.5365f };
			*(uParam6[13 /*3*/]) = { -1375.911f, -560.5161f, 29.234f };
			*(uParam6[14 /*3*/]) = { -1446.224f, -460.4871f, 34.1264f };
			*(uParam6[15 /*3*/]) = { -1487.252f, -447.6395f, 34.594f };
			*(uParam6[16 /*3*/]) = { -1638.216f, -562.0701f, 32.4537f };
			*(uParam6[17 /*3*/]) = { -1625.822f, -610.9568f, 31.6803f };
			*(uParam6[18 /*3*/]) = { -1531.39f, -684.85f, 27.8725f };
			*(uParam6[19 /*3*/]) = { -1424.36f, -771.3326f, 21.8328f };
			*(uParam6[20 /*3*/]) = { -1300.448f, -901.4435f, 10.3951f };
			*(uParam6[21 /*3*/]) = { -1257.012f, -1048.034f, 7.5077f };
			*(uParam6[22 /*3*/]) = { -1211.112f, -1198.487f, 6.755771f };
			*(uParam6[23 /*3*/]) = { -1104.378f, -1177.508f, 1.2615f };
			*(uParam6[24 /*3*/]) = { -1062.986f, -1153.365f, 1.129525f };
			break;
		
		case 5:
			uParam6->f_247 = 1;
			uParam6->f_250 = 52f;
			uParam6->f_251 = 56f;
			uParam6->f_252 = 60f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3058.771f, 637.4882f, 0f };
			uParam6->f_230[0] = 24f;
			uParam6->f_181[1 /*3*/] = { 3061.604f, 638.7496f, 0f };
			uParam6->f_230[1] = 24f;
			uParam6->f_181[2 /*3*/] = { 3064.437f, 640.0109f, 0f };
			uParam6->f_230[2] = 24f;
			uParam6->f_181[3 /*3*/] = { 3067.27f, 641.2722f, 0f };
			uParam6->f_230[3] = 24f;
			uParam6->f_181[4 /*3*/] = { 3061.63f, 631.067f, 0f };
			uParam6->f_230[4] = 24f;
			uParam6->f_181[5 /*3*/] = { 3064.463f, 632.3283f, 0f };
			uParam6->f_230[5] = 24f;
			uParam6->f_181[6 /*3*/] = { 3067.296f, 633.5896f, 0f };
			uParam6->f_230[6] = 24f;
			uParam6->f_181[7 /*3*/] = { 3070.129f, 634.851f, 0f };
			uParam6->f_230[7] = 24f;
			uParam6->f_248 = 19;
			*(uParam6[0 /*3*/]) = { 2978.929f, 778.0858f, 0f };
			*(uParam6[1 /*3*/]) = { 2925.586f, 840.1877f, 0f };
			*(uParam6[2 /*3*/]) = { 2913.896f, 1011.495f, 0f };
			*(uParam6[3 /*3*/]) = { 2903.343f, 1120.076f, 0f };
			*(uParam6[4 /*3*/]) = { 2944.478f, 1197.342f, 0f };
			*(uParam6[5 /*3*/]) = { 3020.189f, 1217.427f, 0f };
			*(uParam6[6 /*3*/]) = { 3107.794f, 1212.536f, 0f };
			*(uParam6[7 /*3*/]) = { 3164.754f, 1246.812f, 0f };
			*(uParam6[8 /*3*/]) = { 3185.532f, 1293.382f, 0f };
			*(uParam6[9 /*3*/]) = { 3122.885f, 1432.143f, 0f };
			*(uParam6[10 /*3*/]) = { 3021.7f, 1553.274f, 0f };
			*(uParam6[11 /*3*/]) = { 3014.559f, 1634.445f, 0f };
			*(uParam6[12 /*3*/]) = { 3045.481f, 1681.173f, 0f };
			*(uParam6[13 /*3*/]) = { 3104.443f, 1687.211f, 0f };
			*(uParam6[14 /*3*/]) = { 3147.714f, 1629.84f, 0f };
			*(uParam6[15 /*3*/]) = { 3119.681f, 1571.555f, 0f };
			*(uParam6[16 /*3*/]) = { 3005.006f, 1482.663f, 0f };
			*(uParam6[17 /*3*/]) = { 2973.872f, 1355.766f, 0f };
			*(uParam6[18 /*3*/]) = { 3014.149f, 1187.6f, 0f };
			break;
		
		case 6:
			uParam6->f_247 = 1;
			uParam6->f_250 = 62f;
			uParam6->f_251 = 66f;
			uParam6->f_252 = 70f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 3477.927f, 5203.865f, 0f };
			uParam6->f_230[0] = 227.2083f;
			uParam6->f_181[1 /*3*/] = { 3473.713f, 5199.313f, 0f };
			uParam6->f_230[1] = 227.2083f;
			uParam6->f_181[2 /*3*/] = { 3469.5f, 5194.762f, 0f };
			uParam6->f_230[2] = 227.2083f;
			uParam6->f_181[3 /*3*/] = { 3465.287f, 5190.21f, 0f };
			uParam6->f_230[3] = 227.2083f;
			uParam6->f_181[4 /*3*/] = { 3472.768f, 5208.64f, 0f };
			uParam6->f_230[4] = 227.2083f;
			uParam6->f_181[5 /*3*/] = { 3468.555f, 5204.088f, 0f };
			uParam6->f_230[5] = 227.2083f;
			uParam6->f_181[6 /*3*/] = { 3464.342f, 5199.537f, 0f };
			uParam6->f_230[6] = 227.2083f;
			uParam6->f_181[7 /*3*/] = { 3460.128f, 5194.985f, 0f };
			uParam6->f_230[7] = 227.2083f;
			uParam6->f_248 = 29;
			*(uParam6[0 /*3*/]) = { 3533.901f, 5140.196f, 0f };
			*(uParam6[1 /*3*/]) = { 3561.557f, 5013.942f, 0f };
			*(uParam6[2 /*3*/]) = { 3602.232f, 4928.896f, 0f };
			*(uParam6[3 /*3*/]) = { 3682.408f, 4853.424f, 0f };
			*(uParam6[4 /*3*/]) = { 3776.303f, 4862.4f, 0f };
			*(uParam6[5 /*3*/]) = { 3838.789f, 4851.96f, 0f };
			*(uParam6[6 /*3*/]) = { 3879.336f, 4777.732f, 0f };
			*(uParam6[7 /*3*/]) = { 3875.379f, 4684.574f, 0f };
			*(uParam6[8 /*3*/]) = { 4004.355f, 4513.158f, 0f };
			*(uParam6[9 /*3*/]) = { 4028.42f, 4457.351f, 0f };
			*(uParam6[10 /*3*/]) = { 4011.752f, 4363.838f, 0f };
			*(uParam6[11 /*3*/]) = { 3965.229f, 4321.524f, 0f };
			*(uParam6[12 /*3*/]) = { 3958.307f, 4269.164f, 0f };
			*(uParam6[13 /*3*/]) = { 4007.071f, 4201.311f, 0f };
			*(uParam6[14 /*3*/]) = { 4067.812f, 4155.95f, 0f };
			*(uParam6[15 /*3*/]) = { 4124.166f, 4158.292f, 0f };
			*(uParam6[16 /*3*/]) = { 4173.66f, 4207.495f, 0f };
			*(uParam6[17 /*3*/]) = { 4200.325f, 4325.868f, 0f };
			*(uParam6[18 /*3*/]) = { 4232.361f, 4458.968f, 0f };
			*(uParam6[19 /*3*/]) = { 4212.95f, 4519.744f, 0f };
			*(uParam6[20 /*3*/]) = { 4137.386f, 4562.076f, 0f };
			*(uParam6[21 /*3*/]) = { 3952.561f, 4561.69f, 0f };
			*(uParam6[22 /*3*/]) = { 3850.727f, 4674.479f, 0f };
			*(uParam6[23 /*3*/]) = { 3840.677f, 4729.697f, 0f };
			*(uParam6[24 /*3*/]) = { 3868.624f, 4810.973f, 0f };
			*(uParam6[25 /*3*/]) = { 3861.741f, 4847.778f, 0f };
			*(uParam6[26 /*3*/]) = { 3819.871f, 4912.847f, 0f };
			*(uParam6[27 /*3*/]) = { 3707.324f, 5047.796f, 0f };
			*(uParam6[28 /*3*/]) = { 3603.679f, 5125.124f, 0f };
			break;
		
		case 7:
			uParam6->f_247 = 1;
			uParam6->f_250 = 20f;
			uParam6->f_251 = 30f;
			uParam6->f_252 = 40f;
			uParam6->f_249 = 3;
			uParam6->f_181[0 /*3*/] = { 207.0846f, 3615.2f, 30.1f };
			uParam6->f_230[0] = -188f;
			uParam6->f_181[1 /*3*/] = { 200.9427f, 3616.063f, 30.1f };
			uParam6->f_230[1] = -188f;
			uParam6->f_181[2 /*3*/] = { 194.8008f, 3616.927f, 30.1f };
			uParam6->f_230[2] = -188f;
			uParam6->f_181[3 /*3*/] = { 188.6589f, 3617.79f, 30.1f };
			uParam6->f_230[3] = -188f;
			uParam6->f_248 = 14;
			*(uParam6[0 /*3*/]) = { 156.2047f, 3459.932f, 30f };
			*(uParam6[1 /*3*/]) = { 113.8073f, 3309.78f, 27.996f };
			*(uParam6[2 /*3*/]) = { 36.4057f, 3136.948f, 25.0106f };
			*(uParam6[3 /*3*/]) = { -128.4259f, 3113.228f, 20.7191f };
			*(uParam6[4 /*3*/]) = { -232.13f, 3004.532f, 16.8594f };
			*(uParam6[5 /*3*/]) = { -371.5406f, 3013.692f, 11.5494f };
			*(uParam6[6 /*3*/]) = { -479.2344f, 2908.703f, 12.1299f };
			*(uParam6[7 /*3*/]) = { -611.1117f, 2960.914f, 12.2048f };
			*(uParam6[8 /*3*/]) = { -740.982f, 2867.565f, 12.1505f };
			*(uParam6[9 /*3*/]) = { -863.817f, 2804.024f, 8.5818f };
			*(uParam6[10 /*3*/]) = { -1023.538f, 2833.889f, 2.927f };
			*(uParam6[11 /*3*/]) = { -1160.616f, 2766.003f, -1.4915f };
			*(uParam6[12 /*3*/]) = { -1278.023f, 2669.231f, -0.6163f };
			*(uParam6[13 /*3*/]) = { -1450.428f, 2625.473f, 0f };
			break;
		
		case 8:
			uParam6->f_247 = 1;
			uParam6->f_250 = 72f;
			uParam6->f_251 = 76f;
			uParam6->f_252 = 80f;
			uParam6->f_249 = 7;
			uParam6->f_181[0 /*3*/] = { 626.4072f, -2135.928f, 0f };
			uParam6->f_230[0] = 176f;
			uParam6->f_181[1 /*3*/] = { 623.3137f, -2135.712f, 0f };
			uParam6->f_230[1] = 176f;
			uParam6->f_181[2 /*3*/] = { 620.2201f, -2135.495f, 0f };
			uParam6->f_230[2] = 176f;
			uParam6->f_181[3 /*3*/] = { 617.1265f, -2135.279f, 0f };
			uParam6->f_230[3] = 176f;
			uParam6->f_181[4 /*3*/] = { 626.8975f, -2128.916f, 0f };
			uParam6->f_230[4] = 176f;
			uParam6->f_181[5 /*3*/] = { 623.804f, -2128.7f, 0f };
			uParam6->f_230[5] = 176f;
			uParam6->f_181[6 /*3*/] = { 620.7104f, -2128.483f, 0f };
			uParam6->f_230[6] = 176f;
			uParam6->f_181[7 /*3*/] = { 617.6168f, -2128.267f, 0f };
			uParam6->f_230[7] = 176f;
			uParam6->f_248 = 25;
			*(uParam6[0 /*3*/]) = { 628.2693f, -2361.573f, 0f };
			*(uParam6[1 /*3*/]) = { 624.4983f, -2472.271f, 0f };
			*(uParam6[2 /*3*/]) = { 656.1755f, -2551.063f, 0f };
			*(uParam6[3 /*3*/]) = { 707.1786f, -2577.509f, 0f };
			*(uParam6[4 /*3*/]) = { 821.6584f, -2613.453f, 0f };
			*(uParam6[5 /*3*/]) = { 913.3214f, -2662.629f, 0f };
			*(uParam6[6 /*3*/]) = { 992.793f, -2725.734f, 0f };
			*(uParam6[7 /*3*/]) = { 1010.991f, -2799.774f, 0f };
			*(uParam6[8 /*3*/]) = { 955.9268f, -2841.99f, 0f };
			*(uParam6[9 /*3*/]) = { 838.408f, -2820.556f, 0f };
			*(uParam6[10 /*3*/]) = { 788.3865f, -2739.525f, 0f };
			*(uParam6[11 /*3*/]) = { 781.0709f, -2635.677f, 0f };
			*(uParam6[12 /*3*/]) = { 707.1389f, -2600.342f, 0f };
			*(uParam6[13 /*3*/]) = { 581.391f, -2527.31f, -1f };
			*(uParam6[14 /*3*/]) = { 523.5403f, -2445.459f, 0f };
			*(uParam6[15 /*3*/]) = { 465.708f, -2385.965f, 0f };
			*(uParam6[16 /*3*/]) = { 409.5882f, -2270.467f, 0f };
			*(uParam6[17 /*3*/]) = { 323.1916f, -2259.304f, 0f };
			*(uParam6[18 /*3*/]) = { 271.27f, -2286.134f, 0f };
			*(uParam6[19 /*3*/]) = { 261.3279f, -2344.937f, 0f };
			*(uParam6[20 /*3*/]) = { 295.7343f, -2372.19f, 0f };
			*(uParam6[21 /*3*/]) = { 372.9001f, -2373.087f, 0f };
			*(uParam6[22 /*3*/]) = { 410.8412f, -2413.066f, 0f };
			*(uParam6[23 /*3*/]) = { 412.1277f, -2539.383f, 0f };
			*(uParam6[24 /*3*/]) = { 413.6328f, -2712.87f, 0f };
			break;
	}
}

void func_519(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
	{
		uVar0 = iParam0;
		unk_0x71DCD6EAA8EE9DC4(8, &uVar0, 1, 1);
	}
	else if (unk_0x6EC0C21CF01F429C() || unk_0x43F4A6D2081CC5ED())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x439D53B53DC181D5(8, &cVar1);
	}
}

void func_520(int iParam0)
{
	func_489();
	Global_71040 = iParam0;
	Global_71039 = 0;
	Global_71042 = 3;
}

void func_521(int iParam0)
{
	if ((Local_642.f_11 == 1 || Local_642.f_11 == 2) || Local_642.f_11 == 3)
	{
		switch (Local_636.f_0)
		{
			case 5:
				func_535(132, 0, 0);
				break;
			
			case 6:
				func_535(133, 0, 0);
				break;
			
			case 7:
				func_535(134, 0, 0);
				break;
			
			case 8:
				func_535(135, 0, 0);
				break;
			
			case 0:
				func_535(140, 0, 0);
				break;
			
			case 1:
				func_535(136, 0, 0);
				break;
			
			case 2:
				func_535(137, 0, 0);
				break;
			
			case 3:
				func_535(138, 0, 0);
				break;
			
			case 4:
				func_535(139, 0, 0);
				break;
		}
		if (Local_642.f_11 == 1 && !Global_104439.f_24840.f_4)
		{
			if (((((unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 0) || Local_636.f_0 == 0) && (unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 1) || Local_636.f_0 == 1)) && (unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 2) || Local_636.f_0 == 2)) && (unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 3) || Local_636.f_0 == 3)) && (unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 4) || Local_636.f_0 == 4))
			{
				if (func_534(-974942855, 6, 2, 53, 3, 10000, 10000, -1, -1, 0, -1, 0))
				{
					Global_104439.f_24840.f_4 = 1;
				}
			}
		}
	}
	func_486(1, 1);
	func_486(7, 1);
	func_533(&(Local_636.f_2));
	func_489();
	func_532(&iLocal_2414, 0);
	func_532(&iLocal_2421, 0);
	func_532(&iLocal_2428, 0);
	func_532(&iLocal_2435, 0);
	func_524(iParam0);
	func_507(0);
	func_378(&iLocal_1827);
	func_229();
	func_187(&Local_175);
	if (Local_636.f_1 == 3)
	{
		unk_0xC4A073BAEF3ECBCE("RADIO_16_SILVERLAKE");
	}
	unk_0x0A6232893373E293("AZ_DISTANT_VEHICLES_CITY_CENTRE", 1, 0);
	unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_01", 1, 0);
	unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_02", 1, 0);
	unk_0x0A6232893373E293("AZ_COUNTRYSIDE_DISTANT_CARS_ZONE_03", 1, 0);
	switch (Local_636.f_0)
	{
		case 5:
			func_523(82, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 0);
			break;
		
		case 6:
			func_523(83, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 1);
			break;
		
		case 7:
			func_523(84, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 2);
			break;
		
		case 8:
			func_523(85, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_2), 3);
			break;
		
		case 0:
			func_523(86, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 0);
			break;
		
		case 1:
			func_523(87, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 1);
			break;
		
		case 2:
			func_523(88, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 2);
			break;
		
		case 3:
			func_523(89, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 3);
			break;
		
		case 4:
			func_523(90, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_3), 4);
			break;
	}
	unk_0x84D19A34E1A97ABC(0, 1);
	unk_0x4EDE34FBADD967A6(1000);
	unk_0x14C5CBCF9E6EB7B5(1, 80, 1);
	unk_0x14C5CBCF9E6EB7B5(0, 80, 1);
	unk_0xCF304E352457AD63(0);
	func_522();
	unk_0xBEE2834559A8897A();
}

void func_522()
{
	char cVar0[24];
	
	if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
	{
		unk_0x71DCD6EAA8EE9DC4(StackVal, 0, 0, 0);
	}
	else if (unk_0x6EC0C21CF01F429C() || unk_0x43F4A6D2081CC5ED())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x439D53B53DC181D5(0, &cVar0);
	}
}

void func_523(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 18);
		if (Global_25530 == 1)
		{
			Global_25531 = 1;
		}
		Global_25530 = 1;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 15);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA761A0B6072010C8(Global_25533[iVar0 /*23*/].f_19))
		{
			unk_0xDECD64DB818CE695(1);
			unk_0x0C4BDC77192798AE(&(Global_25533[iVar0 /*23*/].f_19));
			unk_0xDECD64DB818CE695(0);
		}
	}
}

void func_524(int iParam0)
{
	unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	func_196(&Local_1261, 1, 0);
	unk_0x2678FA30C5FB2080(0);
	if ((Local_642.f_11 == 1 || Local_642.f_11 == 2) || Local_642.f_11 == 3)
	{
		func_528();
	}
	if (Local_642.f_11 == 1)
	{
		func_525();
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 1);
	}
	if (func_9(unk_0x0031992CA618A445()))
	{
		unk_0x49C384CAABA72CC6(unk_0x0031992CA618A445(), 1);
	}
	unk_0x3C569ABD932ADE4E(0);
	unk_0xB0DC173831DE0B1C(3);
	unk_0x14FB221ED8A8D8B9(0);
	unk_0x18E90C6DABF378AD(3);
	unk_0x65EF4B69E1BFCCEF(unk_0x3D35F9864E4640B1(), 1);
	unk_0x862C6F0A4458264C(1);
	unk_0x15007EAE63C7ECCF(1f);
	unk_0x832028B438E813F9(1);
	unk_0xB8EFDF266981AB1A("DRIVE", 1);
	unk_0x1ED966252985F895(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 1, 1);
	func_146(1);
	func_32(iParam0);
	if (!unk_0x0BD3CCFB6C6CFA91(sLocal_1486))
	{
		unk_0xD4B8FC41ABE48E25(sLocal_1486);
	}
	func_33(&iLocal_1475, 1, 0, 1);
	func_33(&iLocal_1456, 1, 0, 1);
	func_33(&iLocal_1457, 1, 0, 1);
	func_33(&iLocal_1458, 1, 0, 1);
	if (unk_0x76B3C79DE564AFC6(Local_18.f_0))
	{
		if (!unk_0x7A6C051038031EFA(Local_18.f_0, 0))
		{
			unk_0x9DFCC19370F919F3(Local_18.f_0, 0);
			unk_0x014C5648BA70BF8B(Local_18.f_0, 0);
			if ((Local_636.f_1 == 3 && func_9(unk_0x0031992CA618A445())) && unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				unk_0x1ADB46574E80A3AE(unk_0x0031992CA618A445(), 0);
			}
		}
		func_378(&Local_18);
	}
	unk_0x6FA02813ACFAFB3A(0);
	Global_1574109 = 0;
	if (Local_636.f_1 == 3)
	{
		unk_0x03C4BA9F5A120DFE(uLocal_1257);
		unk_0x616FBCC20E22C43A();
	}
	else
	{
		unk_0xE1BF8DD763F714D0();
	}
	if (Local_636.f_1 == 3)
	{
		unk_0x1E420F926A7BC4D2("MGSR_STOP");
	}
}

void func_525()
{
	switch (Local_636.f_0)
	{
		case 5:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24837.f_1, 0))
			{
				func_527(82, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_1), 0);
				func_526();
			}
			break;
		
		case 6:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24837.f_1, 1))
			{
				func_527(83, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_1), 1);
				func_526();
			}
			break;
		
		case 7:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24837.f_1, 2))
			{
				func_527(84, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_1), 2);
				func_526();
			}
			break;
		
		case 8:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24837.f_1, 3))
			{
				func_527(85, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24837.f_1), 3);
				func_526();
			}
			break;
		
		case 0:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 0))
			{
				func_527(86, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_2), 0);
				func_526();
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 1))
			{
				func_527(87, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_2), 1);
				func_526();
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 2))
			{
				func_527(88, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_2), 2);
				func_526();
			}
			break;
		
		case 3:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 3))
			{
				func_527(89, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_2), 3);
				func_526();
			}
			break;
		
		case 4:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_2, 4))
			{
				func_527(90, 1);
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_2), 4);
				func_526();
			}
			break;
	}
}

int func_526()
{
	if (func_186(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

void func_527(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 20);
	}
	if (Global_25530 == 1)
	{
		Global_25531 = 1;
	}
	Global_25530 = 1;
	unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 20);
}

void func_528()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = -1;
	switch (Local_636.f_0)
	{
		case 0:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24840.f_1), 1);
				bVar0 = true;
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 2) && Global_104439.f_24840 != 2)
			{
				Global_104439.f_24840 = 2;
				iVar1 = -527573502;
				bVar0 = true;
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 3) && Global_104439.f_24840 != 3)
			{
				Global_104439.f_24840 = 3;
				iVar1 = 277048894;
				bVar0 = true;
			}
			break;
		
		case 3:
			if (!unk_0x2A3398C6222EB190(Global_104439.f_24840.f_1, 4) && Global_104439.f_24840 != 4)
			{
				Global_104439.f_24840 = 4;
				iVar1 = 477030223;
				bVar0 = true;
			}
			break;
		
		case 4:
			break;
	}
	if (bVar0)
	{
		if (iVar1 != -1)
		{
			func_529(iVar1, 1, 2, 53, 2880000, 10000, -1, 189, -1, 0, 1);
		}
		func_526();
	}
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_186(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104439.f_7549.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_531(iParam1);
		Var0.f_4 = (unk_0x31CD6E9F83C10233() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		unk_0xD804ACF2A7171150(&(Var0.f_1), 0);
		Global_104439.f_7549.f_651[Global_104439.f_7549.f_764 /*14*/] = { Var0 };
		Global_104439.f_7549.f_764++;
		func_530(0);
		func_530(1);
		func_530(2);
		return 1;
	}
	return 0;
}

void func_530(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_85(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_136)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_7549[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104439.f_7549[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104439.f_7549[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104439.f_7549.f_764)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_7549.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104439.f_7549.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104439.f_7549.f_919[iParam0] = iVar1;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_532(var uParam0, bool bParam1)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0x729737A6C2176E42(*uParam0))
		{
			unk_0x2C49E28C76DBD67B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x4738E36A70E50A92(uParam0);
		}
		else
		{
			unk_0x03EEF0CEE1B75237(*uParam0);
		}
	}
}

void func_533(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

int func_534(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_186(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104439.f_7549.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_104439.f_7549.f_911 == Var0.f_0)
		{
			Global_104439.f_7549.f_911 = -1;
		}
		Var0.f_3 = func_531(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x31CD6E9F83C10233() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xD804ACF2A7171150(&(Var0.f_1), 1);
		unk_0xD804ACF2A7171150(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Var0.f_1), 10);
		}
		Global_104439.f_7549[Global_104439.f_7549.f_136 /*15*/] = { Var0 };
		Global_104439.f_7549.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x2A3398C6222EB190(iParam2, iVar15))
			{
				func_530(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_535(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_538((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = iParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_536();
	}
}

void func_536()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_177(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_537() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_526();
				}
			}
		}
	}
}

int func_537()
{
	return Global_25222;
}

int func_538(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

