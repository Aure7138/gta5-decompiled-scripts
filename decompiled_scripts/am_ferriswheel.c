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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 16;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	var uLocal_115 = 0;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	char* sLocal_159 = NULL;
	int iLocal_160[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_177 = 0;
	float fLocal_178 = 0f;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_185 = { 0, 0, 0 } ;
	float fLocal_188 = 0f;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	var uLocal_194 = 0;
	struct<22> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 2;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 2;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 2;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1027211264;
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
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	char* sLocal_269 = NULL;
	char cLocal_270[24] = "";
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	char cLocal_276[24] = "";
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	char cLocal_282[24] = "";
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 12;
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
	var uLocal_356 = 0;
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
	var uLocal_427 = 0;
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
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 1065353216;
	struct<9> Local_986 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	struct<263> Local_997 = { 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 32, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0 } ;
	var uLocal_1260 = 0;
	struct<5> Local_1261[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_157 = joaat("prop_ld_ferris_wheel");
	iLocal_158 = joaat("prop_ferris_car_01");
	sLocal_159 = "MISSFINALE_C2IG_5";
	fLocal_178 = 2f;
	Local_179 = { -1663.97f, -1126.7f, 30.7f };
	Local_182 = { 0.5f, 0.5f, -1.94f };
	fLocal_188 = 13f;
	iLocal_189 = -1;
	iLocal_190 = -1;
	iLocal_191 = -1;
	iLocal_192 = -1;
	bLocal_193 = true;
	sLocal_269 = "anim@mp_ferris_wheel";
	iLocal_297 = 1;
	bVar0 = unk_0x03A753E2C8458335();
	if (bVar0)
	{
		if (!func_184(ScriptParam_0))
		{
			func_175();
		}
		func_172();
		unk_0xF73FBE4845C43B5B(&Global_68493, 6);
	}
	while (true)
	{
		func_171();
		if (func_163())
		{
			func_175();
		}
		if (((!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -1645.555f, -1123.872f, 17.3436f, 300f, 300f, 300f, 0, 1, 0) || func_162()) || unk_0xB8A3683DF4C96A44()) || (func_157() && !func_155()))
		{
			Local_1261[unk_0x2473988062EBFC53() /*5*/] = 3;
		}
		func_142();
		if (unk_0x4ED6CFDFE8D4131A(uLocal_288, 3))
		{
			if (!Global_90014.f_1318)
			{
				unk_0x7D1D4A3602B6AD4E(&uLocal_288, 3);
			}
		}
		switch (func_141(unk_0x2473988062EBFC53()))
		{
			case 0:
				if (func_140() > 0)
				{
					Local_1261[unk_0x2473988062EBFC53() /*5*/] = 1;
				}
				break;
			
			case 1:
				if (func_140() > 1)
				{
					if (func_135())
					{
						Local_1261[unk_0x2473988062EBFC53() /*5*/] = 2;
					}
				}
				break;
			
			case 2:
				if (func_140() == 2)
				{
					func_30();
				}
				break;
			
			case 3:
				if (!func_29(&uLocal_995))
				{
					if (!unk_0xEEA50AAE36800059())
					{
						func_21(64, 0, 0, 1, 0);
					}
				}
				if (((func_19(&uLocal_995, 3000, 0) || func_18()) || func_17()) || func_13(unk_0x217E9DC48139933D()))
				{
					func_175();
				}
				break;
		}
		if (unk_0x6A4C37E16775564D())
		{
			switch (func_140())
			{
				case 0:
					if (func_11())
					{
						Local_997.f_1 = 1;
					}
					break;
				
				case 1:
					if (func_10())
					{
						Local_997.f_1 = 2;
					}
					break;
				
				case 2:
					func_6();
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	
	if (iLocal_267 == 0)
	{
	}
	if (unk_0xA21FA760E7F8F050(unk_0x58FF971FC8F2702C(iLocal_267)))
	{
		uVar1 = unk_0xB7D92AD06F1D842B(unk_0x58FF971FC8F2702C(iLocal_267));
		switch (Local_997.f_0)
		{
			case 0:
				if (unk_0x4ED6CFDFE8D4131A(Local_1261[iLocal_267 /*5*/].f_2, 4) && !unk_0x4ED6CFDFE8D4131A(Local_997.f_3[iLocal_267], 1))
				{
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 0);
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_3[iLocal_267]), 0);
					unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 2);
					iLocal_291 = 30000;
					Local_997.f_0 = 1;
					func_5(&uLocal_289);
					unk_0xF73FBE4845C43B5B(&(Local_997.f_3[iLocal_267]), 1);
				}
				if (unk_0x4ED6CFDFE8D4131A(Local_1261[iLocal_267 /*5*/].f_2, 3) && !unk_0x4ED6CFDFE8D4131A(Local_997.f_3[iLocal_267], 0))
				{
					iVar0 = func_4(iLocal_267);
					if (iVar0 == -1)
					{
					}
					else
					{
						Local_997.f_197[iLocal_267 /*2*/].f_1 = uVar1;
						Local_997.f_197[iLocal_267 /*2*/] = iVar0;
						Local_997.f_262 = func_2();
						unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 0);
						unk_0xF73FBE4845C43B5B(&(Local_997.f_3[iLocal_267]), 0);
					}
				}
				break;
			
			case 1:
				if (unk_0x4ED6CFDFE8D4131A(Local_997.f_3[iLocal_267], 1))
				{
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_3[iLocal_267]), 1);
				}
				break;
		}
	}
	else if ((Local_997.f_3[iLocal_267] != 0 || Local_997.f_197[iLocal_267 /*2*/] != -1) || Local_997.f_197[iLocal_267 /*2*/].f_1 != 0)
	{
		Local_997.f_3[iLocal_267] = 0;
		Local_997.f_197[iLocal_267 /*2*/] = -1;
		Local_997.f_197[iLocal_267 /*2*/].f_1 = 0;
		Local_997.f_262 = func_2();
	}
	iLocal_267++;
	if (iLocal_267 == unk_0x80FC871DFB777007())
	{
		iLocal_267 = 0;
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = func_3();
	iVar0 = iVar2;
	while (iVar0 != iVar2 || !bVar3)
	{
		if (!bVar3)
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < unk_0x80FC871DFB777007())
		{
			if (Local_997.f_197[iVar1 /*2*/] == iVar0)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
		if (iVar0 == 16)
		{
			iVar0 = 0;
		}
	}
	return -1;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (Local_997.f_36[iVar0 /*10*/].f_6 >= Global_2451157)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (Local_997.f_36[0 /*10*/].f_6 >= Global_2451157)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (unk_0x4ED6CFDFE8D4131A(Local_1261[iParam0 /*5*/].f_2, 0))
		{
			return Local_1261[iParam0 /*5*/].f_3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (iVar0 == 0)
				{
					iVar0 = 1;
				}
				if (!Local_997.f_36[iVar0 /*10*/].f_3 >= 2)
				{
					if (Local_997.f_36[iVar0 /*10*/].f_6 >= Global_2451157)
					{
						if (!Local_997.f_36[iVar0 /*10*/].f_3 > 0 || bVar2)
						{
							return iVar0;
						}
					}
				}
				iVar0++;
			}
			if (!Local_997.f_36[0 /*10*/].f_3 >= 2)
			{
				if (Local_997.f_36[0 /*10*/].f_6 >= Global_2451157)
				{
					if (!Local_997.f_36[0 /*10*/].f_3 > 0 || bVar2)
					{
						return 0;
					}
				}
				else
				{
					return 1;
				}
			}
			if (!bVar2)
			{
				bVar2 = true;
			}
			else
			{
				return -1;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6()
{
	int iVar0;
	int iVar1;
	
	switch (Local_997.f_0)
	{
		case 0:
			break;
		
		case 1:
			if (func_19(&uLocal_289, iLocal_291, 0))
			{
				if (func_9())
				{
					if (Local_997.f_262 != -1)
					{
						iVar1 = Local_997.f_197[Local_997.f_262 /*2*/];
						iVar0 = 0;
						while (iVar0 < 32)
						{
							if (Local_997.f_197[iVar0 /*2*/] == iVar1)
							{
								unk_0x7D1D4A3602B6AD4E(&(Local_997.f_3[iVar0]), 0);
								unk_0x7D1D4A3602B6AD4E(&(Local_997.f_3[iVar0]), 1);
								Local_997.f_197[iVar0 /*2*/] = -1;
								Local_997.f_197[iVar0 /*2*/].f_1 = 0;
							}
							iVar0++;
						}
						Local_997.f_197[Local_997.f_262 /*2*/] = -1;
						Local_997.f_197[Local_997.f_262 /*2*/].f_1 = 0;
					}
					if (func_8())
					{
						Local_997.f_262 = func_2();
					}
					else
					{
						Local_997.f_262 = -1;
					}
					if (Local_997.f_262 != -1)
					{
						unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 0);
					}
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 3);
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 4);
					Local_997.f_0 = 0;
				}
				else
				{
					iLocal_291 = 1000;
					func_5(&uLocal_289);
				}
			}
			else
			{
				if ((30000 - func_7(&uLocal_289, 0, 0)) < 4000)
				{
					unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 4);
				}
				if ((30000 - func_7(&uLocal_289, 0, 0)) < 3000)
				{
					unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 3);
				}
				if (((Local_997.f_262 != -1 && !unk_0x4ED6CFDFE8D4131A(Local_1261[Local_997.f_262 /*5*/].f_2, 6)) && unk_0x5E58342602E94718(unk_0x275F255ED201B937(Local_997.f_197[Local_997.f_262 /*2*/].f_1), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0)) && unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 2))
				{
					if (!unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 1))
					{
						unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 1);
					}
				}
				else if (unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 1))
				{
					unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 1);
				}
			}
			break;
	}
}

int func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x03A753E2C8458335() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0);
		}
		else
		{
			return unk_0x720C9CED76527377(unk_0xCCF575E20D375E1B(), *uParam0);
		}
	}
	return unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0);
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x80FC871DFB777007())
	{
		if (Local_997.f_197[iVar0 /*2*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	iVar0 = 30;
	while (iVar0 >= 0)
	{
		if (unk_0xA21FA760E7F8F050(unk_0x58FF971FC8F2702C(iVar0)))
		{
			if (unk_0x4ED6CFDFE8D4131A(Local_1261[iVar0 /*5*/].f_2, 9) || unk_0x4ED6CFDFE8D4131A(Local_1261[iVar0 /*5*/].f_2, 10))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Local_997.f_36[iVar0 /*10*/].f_6 = (((360f / 16f) * IntToFloat(iVar0)) - 21.5f);
		iVar0++;
	}
	Local_997.f_36[0 /*10*/].f_6 = (Local_997.f_36[0 /*10*/].f_6 + 360f);
	return 1;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x748B3A65C2604C33(iVar0);
		if (func_12(iVar1, 0, 1))
		{
			if (unk_0x5E58342602E94718(unk_0x275F255ED201B937(iVar1), -1662.01f, -1126.869f, 12.6973f, 500f, 500f, 500f, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x1DB8366B5C46DA9E(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		if (Global_1582596[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_15(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	return func_16(iParam0);
}

bool func_16(int iParam0)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

bool func_17()
{
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_31.f_18, 0);
}

var func_18()
{
	return Global_1315900;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (unk_0x03A753E2C8458335() && !bParam2)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
		}
		uParam0->f_1 = 1;
	}
}

void func_21(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_68245)
		{
			Global_2422140.f_73.f_226[iParam0] = iParam1;
		}
		else
		{
			Global_97353.f_5518.f_226[iParam0] = iParam1;
		}
		Global_31962[iParam0] = iParam2;
		Global_32161[iParam0] = 1;
		func_24(iParam0, bParam3, iParam4, 0);
		func_22(iParam0, iParam1);
	}
}

void func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xEA3501FBD3AD7398("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xEA3501FBD3AD7398("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x860988492D14BFEB("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x860988492D14BFEB("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_23(0, 0);
			}
			else
			{
				func_23(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xEA3501FBD3AD7398("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xEA3501FBD3AD7398("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xB7CE84F23F1000BD("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x4298FEFC65883759("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x4298FEFC65883759("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x4298FEFC65883759("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x4298FEFC65883759("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&Global_95994, iParam0);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_95994, iParam0);
	}
	Global_95993 = 1;
}

bool func_24(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_28(&Var3, iParam0);
	if (func_25())
	{
		iVar1 = Global_97353.f_5518.f_226[iParam0];
	}
	else
	{
		iVar1 = Global_2422140.f_73.f_226[iParam0];
	}
	iVar2 = Global_32360[iParam0];
	if (unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0xFD340785ADF8CFB7(unk_0x8F77B33B6A34D8BA()) != unk_0xFD340785ADF8CFB7("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_31962[iParam0] && unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) || unk_0x3029D40B71AB2E64(unk_0x096275889B8E0EE0()))
				{
					if (!unk_0xF5472C80DF2FF847())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0xEEA50AAE36800059() && (!unk_0xED20CB1F5297791D() || unk_0xEC4E85B30EC75438() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x3F38A98576F6213A(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x069848B3FB3C4426(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_33556[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES")) && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
						{
							if (!unk_0x4A5A22615B284C0D(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xA9E0EA15782C4BEE(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_34)) != unk_0xFD340785ADF8CFB7(""))
						{
							if (!unk_0x4A5A22615B284C0D(&(Var3.f_34)))
							{
								unk_0xA9E0EA15782C4BEE(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_34)) != unk_0xFD340785ADF8CFB7(""))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_34)))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_34));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES")) && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
						{
							if (!unk_0x4A5A22615B284C0D(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xA9E0EA15782C4BEE(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_34)) != unk_0xFD340785ADF8CFB7(""))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_34)))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_34));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4A5A22615B284C0D(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x47AA556033E94AA2(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES"))
						{
							if (!unk_0x4A5A22615B284C0D(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xA9E0EA15782C4BEE(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_33357[iParam0] = 1;
					Global_33556[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0xAAD6170AA33B13C0(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0xFD340785ADF8CFB7(&(Var3.f_50)) != unk_0xFD340785ADF8CFB7(""))
						{
							if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_50)))
							{
								unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES")) && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (!unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x174D0AAB11CED739(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES")) && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (!unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x174D0AAB11CED739(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[0 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[1 /*8*/])) != unk_0xFD340785ADF8CFB7(""))
							{
								if (unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x33B81A2C07A51FFF(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("") && unk_0xFD340785ADF8CFB7(&(Var3.f_8[2 /*8*/])) != unk_0xFD340785ADF8CFB7("REMOVE_ALL_STATES"))
							{
								if (!unk_0x32810CA2125F5842(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x174D0AAB11CED739(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF56718E2752FF762(iVar100);
						}
					}
					Global_33556[iParam0] = 1;
					Global_33357[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x0BE7F4E3CDBAFB28(Var3, unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), 1) < 250f)
					{
						uVar98 = unk_0x54CD25E2C34FD195(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x6ECF2FC60369DE64(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x65E02DDD80B1D07F(uVar98, 3);
								Global_33556[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xFAE55955EE14AA2B(uVar98) != 6 && unk_0xFAE55955EE14AA2B(uVar98) != 7) && unk_0xFAE55955EE14AA2B(uVar98) != 8)
								{
									unk_0x65E02DDD80B1D07F(uVar98, 10);
									Global_33556[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x824E1C26A14CB817(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x7D1D4A3602B6AD4E(&(Global_31709[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x10B2218320B6F5AC(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0xF73FBE4845C43B5B(&(Global_31709[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32161[iParam0] = 0;
				Global_32360[iParam0] = iVar1;
				if (!func_25())
				{
					if (!Global_32957[iParam0])
					{
						Global_32957[iParam0] = 1;
						Global_33156++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_25()
{
	if ((func_27() == -1 || func_27() == 999) && !func_26() == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	return Global_24445;
}

int func_27()
{
	return Global_24444;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

bool func_29(var uParam0)
{
	return uParam0->f_1;
}

void func_30()
{
	switch (Local_1261[unk_0x2473988062EBFC53() /*5*/].f_1)
	{
		case 0:
			if (Local_997.f_0 == 1)
			{
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x7D1D4A3602B6AD4E(&uLocal_288, 1);
				unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 4);
				iLocal_268 = 0;
				Local_1261[unk_0x2473988062EBFC53() /*5*/].f_1 = 1;
			}
			else
			{
				if (unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 0))
				{
					if (Local_997.f_262 != -1)
					{
						if (Global_2451157 != Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6)
						{
							func_131();
						}
					}
				}
				else
				{
					func_131();
				}
				if (unk_0x4ED6CFDFE8D4131A(Local_997.f_3[unk_0x2473988062EBFC53()], 0))
				{
					Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 = Local_997.f_197[unk_0x2473988062EBFC53() /*2*/];
					if (Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 != -1)
					{
						if (Global_2451157 != Local_997.f_36[Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 /*10*/].f_6)
						{
							if (unk_0x4ED6CFDFE8D4131A(uLocal_288, 0))
							{
								unk_0x0BFC2C61FB5B6CA1(1);
								unk_0x7D1D4A3602B6AD4E(&uLocal_288, 0);
							}
							if (!unk_0x4ED6CFDFE8D4131A(uLocal_288, 1))
							{
								if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
								{
									func_130("AMFW_WAIT_OFF", -1);
								}
								else
								{
									func_130("AMFW_WAIT", -1);
								}
								unk_0xF73FBE4845C43B5B(&uLocal_288, 1);
							}
						}
						else if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 4))
						{
							unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 4);
							unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 3);
							iLocal_297 = 1;
						}
					}
					else
					{
						unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 3);
						iLocal_297 = 1;
					}
				}
				else if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 8))
				{
					if (((!func_129(0) && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) && !unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) && unk_0x52F45D033645181B(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
					{
						if (!func_126())
						{
							if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
							{
								if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
								{
									func_125("AMFW_ENTER", Global_262145.f_6109, -1);
									unk_0xF73FBE4845C43B5B(&uLocal_288, 0);
									if (unk_0xCCBB0BB9790E1F47(2, 51))
									{
										func_111();
										unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 3);
									}
								}
								else if (unk_0x4ED6CFDFE8D4131A(uLocal_288, 0))
								{
									unk_0x0BFC2C61FB5B6CA1(1);
									unk_0x7D1D4A3602B6AD4E(&uLocal_288, 0);
								}
							}
						}
						else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
						{
						}
					}
				}
			}
			func_85();
			break;
		
		case 1:
			if (Local_997.f_0 == 0)
			{
				if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 5) || unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 7))
				{
					func_77();
					func_62(25);
				}
				if (!unk_0x4ED6CFDFE8D4131A(Local_997.f_3[unk_0x2473988062EBFC53()], 0))
				{
					unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 8);
				}
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 7);
				unk_0x7D1D4A3602B6AD4E(&uLocal_288, 2);
				unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 11);
				unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 6);
				Local_1261[unk_0x2473988062EBFC53() /*5*/].f_1 = 0;
				if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
				{
					func_85();
				}
			}
			else
			{
				if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
				{
					if ((Local_997.f_262 != -1 && Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 != -1) && Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 == Local_997.f_197[Local_997.f_262 /*2*/])
					{
						if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 7))
						{
							if (!unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 4))
							{
								func_130("AMFW_GET_OUT", -1);
							}
							func_61(&uLocal_265, 0);
							func_61(&uLocal_194, 0);
							func_60(&Local_195, 0, 1);
							unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 7);
						}
						if (!unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 3))
						{
							if (unk_0xCCBB0BB9790E1F47(2, 23))
							{
								func_58(func_59(1));
							}
						}
					}
					else
					{
						func_85();
					}
				}
				else if (((!func_129(0) && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) && !unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) && unk_0x52F45D033645181B(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
				{
					if (!func_126())
					{
						if (unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 1))
						{
							if (Local_997.f_197[Local_997.f_262 /*2*/].f_1 == unk_0x217E9DC48139933D())
							{
								if (!unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 3))
								{
									if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 11))
									{
										func_58(func_59(1));
										unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 11);
									}
								}
							}
						}
						else if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
						{
							if ((!unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 3) && !unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 9)) && Local_997.f_262 != -1)
							{
								if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 >= 2)
								{
									if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 8))
									{
										func_130("AMFW_GET_IN", -1);
									}
									else
									{
										func_125("AMFW_GET_IN_P", Global_262145.f_6109, -1);
									}
									if (unk_0xCCBB0BB9790E1F47(0, 23))
									{
										if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 8))
										{
											func_111();
										}
										func_58(func_59(1));
									}
								}
								else if (!unk_0x4ED6CFDFE8D4131A(uLocal_288, 2))
								{
									func_130("AMFW_CAR_FULL", -1);
									unk_0xF73FBE4845C43B5B(&uLocal_288, 2);
								}
							}
						}
					}
					else if ((unk_0x4F67E8ECA7D3F667() % 1000) < 50)
					{
					}
				}
				if (Local_997.f_262 != -1)
				{
					if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 9))
					{
						func_50();
					}
					if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 10))
					{
						func_36();
					}
				}
			}
			break;
	}
	if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
	{
		func_32();
	}
	if (!unk_0xEEA50AAE36800059())
	{
		unk_0x47AA556033E94AA2("ferris_finale_Anim");
	}
	func_31();
}

void func_31()
{
	struct<3> Var0;
	
	if (unk_0x5698BA4FD04D39C4(-1666.711f, -1127.518f, 12.6973f, 3f) && (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -1666.711f, -1127.518f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0) || unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -1666.383f, -1126.286f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0)))
	{
		if (!unk_0x4ED6CFDFE8D4131A(uLocal_288, 5))
		{
			if (((unk_0x3932A7CBDE0E62E6(unk_0x096275889B8E0EE0()) || unk_0x8BF1632810FCA984(unk_0x096275889B8E0EE0())) || unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0())) || unk_0x68C50F9735BFE348(unk_0x096275889B8E0EE0()))
			{
				func_5(&uLocal_292);
				unk_0xF73FBE4845C43B5B(&uLocal_288, 5);
			}
		}
		else if (func_19(&uLocal_292, 2000, 0))
		{
			if (((unk_0x3932A7CBDE0E62E6(unk_0x096275889B8E0EE0()) || unk_0x8BF1632810FCA984(unk_0x096275889B8E0EE0())) || unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0())) || unk_0x68C50F9735BFE348(unk_0x096275889B8E0EE0()))
			{
				Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
				unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), Var0.f_0, Var0.f_1, (Var0.f_2 + 2f), 1, 0, 0, 1);
				unk_0x7D1D4A3602B6AD4E(&uLocal_288, 5);
			}
		}
	}
}

void func_32()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_129(0))
		{
			func_33(0);
		}
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14551)
	{
		func_35(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_34())
	{
		Global_14393.f_1 = 3;
	}
}

int func_34()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_35(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_129(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

void func_36()
{
	StringCopy(&cLocal_282, "exit_player_", 24);
	if (Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4 == 0)
	{
		StringConCat(&cLocal_282, "one", 24);
	}
	else
	{
		StringConCat(&cLocal_282, "two", 24);
	}
	uLocal_295 = unk_0x7F4098D5D46B185D(Local_185, 0f, 0f, 0f, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x60373A0100E04D6D(unk_0x096275889B8E0EE0(), uLocal_295, sLocal_269, &cLocal_282, 8f, -8f, 131072, 0, 1148846080, 0);
	unk_0x12FF12EA6E23E3B3(uLocal_295);
	unk_0x0BFC2C61FB5B6CA1(1);
	func_46(unk_0x217E9DC48139933D(), 1, 0, 1);
	func_40();
	if (func_39(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xEE6AD63ABF59C0B7(unk_0x096275889B8E0EE0()))
		{
			unk_0x64CDE9D6BF8ECAD3(unk_0x096275889B8E0EE0(), 1, 1);
		}
	}
	func_38(func_59(0));
	if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 6);
	unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 7);
	unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 0);
	unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 5);
	unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 10);
	Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_316 = 0;
	func_37(func_59(1), Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4, 0);
	Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4 = -1;
	unk_0xA68CCA30E7D525ED(0);
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 347;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = uParam1;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 4, iParam0);
	}
}

void func_38(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 343;
	Var0.f_1 = unk_0x217E9DC48139933D();
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 2, iParam0);
	}
}

bool func_39(var uParam0)
{
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	return !unk_0x7D5B1F88E7504BBA(uParam0);
}

void func_40()
{
	if (Global_1312418.f_1 == 1)
	{
		func_41(0);
		Global_1312418.f_1 = 0;
		Global_1312418.f_2 = 0;
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		if (iParam0 == 1)
		{
			if (Global_2446554.f_4229 == -1)
			{
				Global_2446554.f_4229 = 60000;
			}
			func_44(&(Global_2446554.f_4227), 0, 0);
			if (Global_2446554.f_4232 == -1)
			{
				Global_2446554.f_4232 = 10000;
			}
			func_44(&(Global_2446554.f_4230), 0, 0);
		}
		else
		{
			Global_1312418 = 0;
			func_43();
		}
		if ((!unk_0xB8A3683DF4C96A44() && !func_42()) && !func_13(unk_0x217E9DC48139933D()))
		{
			Global_971736 = 0;
		}
	}
}

bool func_42()
{
	return Global_2428131.f_711;
}

void func_43()
{
	if (unk_0x03A753E2C8458335())
	{
		if (!func_45())
		{
			if (func_12(unk_0x217E9DC48139933D(), 1, 1))
			{
				unk_0x226FFF85EFDD21F5(unk_0x096275889B8E0EE0(), 1);
				unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 342, 0);
				unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 122, 0);
			}
			unk_0x8491283D997C2647(unk_0x217E9DC48139933D(), 1f);
			unk_0x9001911265623B0A(0);
			unk_0x7284E14C431B31C9(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				unk_0x942C2D8ED0A93AFD(0);
			}
		}
		else
		{
			if (func_12(unk_0x217E9DC48139933D(), 1, 1))
			{
				unk_0x226FFF85EFDD21F5(unk_0x096275889B8E0EE0(), 0);
				unk_0xA1594471C8773FDD(unk_0x096275889B8E0EE0(), joaat("weapon_unarmed"), 1);
				unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 342, 1);
				unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 122, 1);
				unk_0x8491283D997C2647(unk_0x217E9DC48139933D(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x942C2D8ED0A93AFD(1);
				}
			}
			unk_0x9001911265623B0A(1);
			unk_0x7284E14C431B31C9(0);
		}
	}
}

void func_44(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x03A753E2C8458335() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6AEB0DF30A9DB9F1();
		}
		else
		{
			*uParam0 = unk_0xCCF575E20D375E1B();
		}
	}
	else
	{
		*uParam0 = unk_0x4F67E8ECA7D3F667();
	}
	uParam0->f_1 = 1;
}

bool func_45()
{
	return Global_1312418;
}

void func_46(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0x323DAF00687E0F28())
		{
			unk_0x5CB83156AA038F95(0);
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		uVar0 = iParam2;
		unk_0x4D51E59243281D80(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_155())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x1DB8366B5C46DA9E(iParam0) && unk_0xBFFB35986CAAE58C(iParam0))
		{
			uVar23 = unk_0x275F255ED201B937(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x03A753E2C8458335())
				{
					unk_0x30CA38A6AD35A13C(1);
				}
				else
				{
					unk_0x1794B4FCC84D812F(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x03A753E2C8458335() && !bVar18)
					{
						unk_0x30CA38A6AD35A13C(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_49(uVar23) && !unk_0x12DF6E0D2E736749(uVar23))
				{
					if (!bVar21)
					{
						unk_0xF66F820909453B8C(uVar23, true, 0);
					}
				}
				if (!unk_0xEE6AD63ABF59C0B7(uVar23))
				{
					if (!bVar20)
					{
						unk_0x7D9EFB7AD6B19754(uVar23, false);
					}
					unk_0x740CB4F3F602C9F4(uVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0x7D9EFB7AD6B19754(uVar23, false);
				}
				unk_0x5E95290AF8605EA1(uVar23, true);
				unk_0xFEBEEBC9CBDF4B12(iParam0, 0);
				unk_0x91D19B576BF4F612(uVar23);
				unk_0x98FB75840705964B(uVar23, 1);
				func_48();
				func_47();
				if (unk_0x085EEAEB8783FEB5())
				{
				}
				if (unk_0xEEA50AAE36800059())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_49(uVar23) && !unk_0x12DF6E0D2E736749(uVar23))
				{
					if (!bVar21)
					{
						unk_0xF66F820909453B8C(uVar23, !bVar14, 0);
					}
					if (!unk_0xEE6AD63ABF59C0B7(uVar23))
					{
						if (!bVar20)
						{
							unk_0x7D9EFB7AD6B19754(uVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x740CB4F3F602C9F4(uVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xFEBEEBC9CBDF4B12(iParam0, 0);
				}
				else
				{
					unk_0xFEBEEBC9CBDF4B12(iParam0, 1);
				}
				unk_0x5E95290AF8605EA1(uVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1DC391E8CC41219(uVar23) && !unk_0x52BE10F427339B39(uVar23, 0))
					{
						unk_0xFA8B88A1EF049B33(uVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0x4D51E59243281D80(iParam0, bParam1, iVar24);
		}
	}
}

void func_47()
{
	struct<2> Var0;
	
	Global_2422140.f_676 = 0;
	Global_2422140.f_677 = 0;
	Global_2422140.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404548.f_1376 = { Var0 };
}

void func_48()
{
	Global_2404548.f_538 = 0;
	Global_2404548.f_1417 = 0;
	Global_2404548.f_420 = 0;
	Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_204 = 0;
}

int func_49(var uParam0)
{
	int iVar0;
	
	if (unk_0x52BE10F427339B39(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x04932A97CB319DE0(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	Var0 = { -1661.914f, -1126.842f, 12.6973f };
	switch (iLocal_296)
	{
		case 0:
			if (func_12(unk_0x217E9DC48139933D(), 1, 1))
			{
				Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3 = Local_997.f_197[Local_997.f_262 /*2*/];
				Local_185 = { unk_0xC899C78DB72CCBCC(iLocal_160[Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3], 0f, 0f, 0f) };
				if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][0])
				{
					Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4 = 0;
				}
				else if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][1])
				{
					Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4 = 1;
				}
				StringCopy(&cLocal_270, "enter_player_", 24);
				StringCopy(&cLocal_276, "idle_a_player_", 24);
				if (Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4 == 0)
				{
					StringConCat(&cLocal_270, "one", 24);
					StringConCat(&cLocal_276, "one", 24);
				}
				else
				{
					StringConCat(&cLocal_270, "two", 24);
					StringConCat(&cLocal_276, "two", 24);
				}
				func_46(unk_0x217E9DC48139933D(), 0, 260, 1);
				func_56(0);
				unk_0xAF2345A328AF713D(unk_0x096275889B8E0EE0(), Var0, 1f, 20000, 98.6981f, 0.2f);
				Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_316 = 1;
				unk_0xA68CCA30E7D525ED(1);
				func_52();
				iLocal_296 = 1;
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 9);
				func_37(func_59(1), Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4, 1);
			}
			break;
		
		case 1:
			if (unk_0x04932A97CB319DE0(unk_0x096275889B8E0EE0(), 2106541073) != 0 && unk_0x04932A97CB319DE0(unk_0x096275889B8E0EE0(), 2106541073) != 1)
			{
				uLocal_294 = unk_0x7F4098D5D46B185D(Local_185, 0f, 0f, 0f, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x60373A0100E04D6D(unk_0x096275889B8E0EE0(), uLocal_294, sLocal_269, &cLocal_270, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x12FF12EA6E23E3B3(uLocal_294);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			uVar6 = unk_0xDB2B531E65801BE2(uLocal_294);
			if (unk_0x5D6C0F302EC49A67(uVar6) > 0.99f)
			{
				uLocal_294 = unk_0x7F4098D5D46B185D(Local_185, 0f, 0f, 0f, 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x60373A0100E04D6D(unk_0x096275889B8E0EE0(), uLocal_294, sLocal_269, &cLocal_276, 8f, -8f, 131072, 0, 1148846080, 0);
				unk_0x12FF12EA6E23E3B3(uLocal_294);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			if (func_39(unk_0x096275889B8E0EE0()))
			{
				unk_0x5FB407F0A7C877BF(unk_0x096275889B8E0EE0(), 1000);
			}
			Var3 = { unk_0x497C6B1A2C9AE69C(iLocal_160[Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3], unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) };
			unk_0x1B21CF9397F27FEE(unk_0x096275889B8E0EE0(), iLocal_160[Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3], 0, Var3, 0f, 0f, unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0()), 0, 0, 0, 0, 2, 1);
			unk_0x7AD9A4FD9948B467(unk_0x096275889B8E0EE0(), 1);
			func_51(func_59(0), Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3, Var3, unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0()));
			unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 5);
			unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 0);
			unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 9);
			iLocal_296 = 0;
			func_37(func_59(1), Local_1261[unk_0x2473988062EBFC53() /*5*/].f_4, 1);
			break;
	}
}

void func_51(int iParam0, var uParam1, struct<3> Param2, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 342;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = uParam1;
	Var0.f_3 = { Param2 };
	Var0.f_6 = uParam5;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 7, iParam0);
	}
}

void func_52()
{
	if (func_55() || func_54())
	{
		func_53();
	}
}

void func_53()
{
	Global_2428131.f_629 = 1;
}

var func_54()
{
	return Global_2428131.f_608;
}

bool func_55()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131.f_2, 11);
}

void func_56(int iParam0)
{
	if (!func_14(unk_0x217E9DC48139933D(), 1))
	{
		if (!func_45())
		{
			Global_1312418.f_1 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_57();
		}
	}
}

void func_57()
{
	if (!func_45())
	{
		Global_1312418 = 1;
		func_43();
		if ((!unk_0xB8A3683DF4C96A44() && !func_42()) && !func_13(unk_0x217E9DC48139933D()))
		{
			Global_971736 = 1;
		}
	}
}

void func_58(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 345;
	Var0.f_1 = unk_0x217E9DC48139933D();
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 2, iParam0);
	}
}

int func_59(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x80FC871DFB777007())
	{
		if (unk_0xA21FA760E7F8F050(unk_0x58FF971FC8F2702C(iVar1)))
		{
			iVar2 = unk_0xB7D92AD06F1D842B(unk_0x58FF971FC8F2702C(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x217E9DC48139933D() || iParam0)
				{
					unk_0xF73FBE4845C43B5B(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_60(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x153AD457764FD704(*uParam0))
	{
		if (bParam2)
		{
			unk_0x33281167E4942E4F(0, 0, 3000, 1, iParam1, 0);
		}
		if (unk_0x63EFCC7E1810B8E6(*uParam0))
		{
			unk_0x87295BCA613800C8(*uParam0, 0);
		}
		unk_0x4E67E0B6D7FD5145(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		unk_0x5373DE8E179BC2A0();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}

void func_61(var uParam0, int iParam1)
{
	if (unk_0x153AD457764FD704(*uParam0))
	{
		unk_0x33281167E4942E4F(0, iParam1, 3000, 1, 0, 0);
		unk_0x87295BCA613800C8(*uParam0, 0);
		unk_0x4E67E0B6D7FD5145(*uParam0, 0);
		*uParam0 = 0;
	}
}

void func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6828)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_76() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_76() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_76() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_76() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				unk_0xF73FBE4845C43B5B(&Global_2445620, (8 + iVar2));
				func_71(2094, -1);
				func_66(67, -1);
				unk_0x0FD31CF5EEC1B766(1000, iVar1);
				if (iVar3 < 2)
				{
					func_63(15, 0);
				}
			}
		}
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_65(iParam0, iParam1))
	{
		iVar0 = func_64();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_64()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, func_69(iParam1));
	iVar0++;
	func_67(iParam0, iVar0, iParam1);
}

void func_67(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2475233[iParam0 /*6*/][func_69(uParam2)];
	unk_0xA4DDF5DF95E65EED(iVar0, iParam1, 1);
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_69(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_70();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

var func_70()
{
	return Global_1312737;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_69(iParam1), 0);
	iVar0++;
	if (!func_74(iParam0))
	{
		func_73(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

void func_72(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_69(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_69(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_69(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_69(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_69(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_69(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_69(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_69(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_69(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_69(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_69(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_69(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_69(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_69(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_69(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_69(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_69(uParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_69(uParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_69(uParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_69(uParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_69(uParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_69(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_69(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_69(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_69(uParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_69(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_69(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, iParam1, iParam3);
	}
}

int func_74(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_75(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_69(uParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_77()
{
	func_83(&uLocal_226, -1703.854f, -1082.222f, 42.006f, -8.3096f, 0f, -111.8213f, 0, 0);
	func_81(&uLocal_226, &uLocal_265, 0, 0, 1, 1);
	iLocal_189 = unk_0xC488DC56F57F2505();
	unk_0x6856F5517E486379(iLocal_189, "GENERATOR", uLocal_177, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_191 = unk_0xC488DC56F57F2505();
	unk_0x6856F5517E486379(iLocal_191, "SLOW_SQUEAK", uLocal_177, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_192 = unk_0xC488DC56F57F2505();
	unk_0x6856F5517E486379(iLocal_192, "SLOW_SQUEAK", iLocal_160[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_190 = unk_0xC488DC56F57F2505();
	unk_0x6856F5517E486379(iLocal_190, "CARRIAGE", iLocal_160[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	func_78();
	unk_0x7D1D4A3602B6AD4E(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 5);
}

void func_78()
{
	if (func_39(unk_0x096275889B8E0EE0()))
	{
		func_79(&uLocal_249);
		func_60(&Local_195, 0, 1);
		func_81(&uLocal_226, &uLocal_265, 0, 0, 1, 1);
		iLocal_266 = 0;
		if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
		{
			unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE");
		}
		unk_0x5F70787AC4BF7928("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
}

void func_79(var uParam0)
{
	if (unk_0x153AD457764FD704(uParam0->f_10))
	{
		func_80(uParam0);
		unk_0x4E67E0B6D7FD5145(uParam0->f_10, 0);
	}
	uParam0->f_10 = 0;
}

void func_80(var uParam0)
{
	if (unk_0x153AD457764FD704(uParam0->f_10))
	{
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		unk_0x87295BCA613800C8(uParam0->f_10, 0);
	}
}

void func_81(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	func_61(uParam1, 0);
	Var0 = { uParam0->f_1[0 /*3*/] };
	if (bParam2)
	{
		Var0.f_2 = (Var0.f_2 + uParam0->f_18);
	}
	*uParam1 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", Var0, uParam0->f_8[0 /*3*/], uParam0->f_15[0], 1, 2);
	if (!unk_0x153AD457764FD704(*uParam1))
	{
		return;
	}
	uParam0->f_19 = unk_0x4F67E8ECA7D3F667();
	unk_0x87295BCA613800C8(*uParam1, 1);
	unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !func_82(uParam0->f_1[1 /*3*/]))
	{
		Var0 = { uParam0->f_1[1 /*3*/] };
		if (bParam2)
		{
			Var0.f_2 = (Var0.f_2 + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		unk_0xA47BBFFFB83D4D0A(*uParam1, Var0, uParam0->f_8[1 /*3*/], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (func_39(uParam0->f_21))
	{
		unk_0xFC2867E6074D3A61(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}

int func_82(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_83(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8)
{
	func_84(uParam0);
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_8[0 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_21 = iParam7;
	uParam0->f_18 = iParam8;
	uParam0->f_20 = 0;
}

void func_84(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_15[0] = 50f;
	uParam0->f_15[1] = 0f;
	uParam0->f_21 = 0;
	uParam0->f_20 = 0;
}

void func_85()
{
	if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
	{
		unk_0x36CDD81627A6FCD2();
		unk_0x562F5D788AF3FA80(1, 0, 1);
		if (unk_0x29D1C165BCB09391(2))
		{
			iLocal_297 = 1;
		}
		if (!unk_0x535384D6067BA42E())
		{
			if (unk_0xCCBB0BB9790E1F47(2, 236))
			{
				if (iLocal_266 == 0)
				{
					func_107();
				}
				else
				{
					func_78();
				}
			}
			if ((!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 4) && !unk_0x4ED6CFDFE8D4131A(Local_997.f_3[unk_0x2473988062EBFC53()], 0)) && !unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 3))
			{
				if (unk_0xCCBB0BB9790E1F47(2, 51))
				{
					unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 3);
					iLocal_297 = 1;
				}
			}
		}
		if (iLocal_266 == 1)
		{
			if (bLocal_193 == 0)
			{
				func_104(&uLocal_249);
			}
			else
			{
				func_100(&Local_195, 1, 1, 0, 0, 0.1f, 0);
				unk_0x63DFA6810AD78719(Local_195.f_0, unk_0xE09CAF86C32CB48F(unk_0x096275889B8E0EE0(), 2) + Local_195.f_14, 2);
				unk_0xD41FDD0EE4746C2D(0);
			}
		}
	}
	func_86();
}

void func_86()
{
	if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
	{
		if (unk_0x4ED6CFDFE8D4131A(uLocal_288, 4))
		{
			if (unk_0x64BAE9BE701E6C19(uLocal_298))
			{
				if (iLocal_297)
				{
					Local_986 = { func_99() };
					func_97(&uLocal_299);
					func_96(unk_0xF800E35ED8511D66(2, 236, 1), "AMFW_BTNCV", &uLocal_299, 0);
					if (!unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 3))
					{
						func_96(unk_0xF800E35ED8511D66(2, 51, 1), "AMFW_BTNEX", &uLocal_299, 0);
					}
					iLocal_297 = 0;
				}
				unk_0xE550CDE128D56757(unk_0x18D358286D36C0BC());
				unk_0x906B86E6D7896B9E(0);
				func_95(1);
				func_94(1);
				func_87(&uLocal_298, &Local_986, &uLocal_299, func_93(&uLocal_299));
			}
		}
		else
		{
			uLocal_298 = unk_0x67D02A194A2FC2BD("instructional_buttons");
			unk_0xF73FBE4845C43B5B(&uLocal_288, 4);
		}
	}
	else
	{
		unk_0x6215C0F9FFF76BAD(&uLocal_298);
		unk_0x7D1D4A3602B6AD4E(&uLocal_288, 4);
		iLocal_297 = 1;
	}
}

void func_87(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x29D1C165BCB09391(2))
	{
		*uParam2 = 0;
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			if (unk_0xB0FB6CFAA5A1C833())
			{
				unk_0xF6EA2AC68E7C7293(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x58279158C52AF361(0);
				unk_0xD4D85E4148B638AD();
			}
			unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL");
			unk_0xD4D85E4148B638AD();
		}
		func_92(uParam2);
	}
	if (Global_1318744 < 2)
	{
		func_94(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x64BAE9BE701E6C19(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			unk_0x062412DD5E2E6333(*uParam0, "CLEAR_ALL");
			if (unk_0xB0FB6CFAA5A1C833())
			{
				unk_0xF6EA2AC68E7C7293(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x58279158C52AF361(1);
				unk_0xD4D85E4148B638AD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x4ED6CFDFE8D4131A(uParam2->f_676, iVar0))
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(iVar0);
					if (!unk_0x4ED6CFDFE8D4131A(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_91(unk_0xF800E35ED8511D66(iVar1, iVar2, 1));
						if (iVar3 < 332)
						{
							func_91(unk_0xF800E35ED8511D66(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_91(unk_0xDE6887C7BB8A503D(uVar4, uVar5, 1));
					}
					if (unk_0x4ED6CFDFE8D4131A(uParam2->f_674, iVar0))
					{
						unk_0x164FB269C22AF51C(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x3451E7FFDF0EF375(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xF00CED653959DE03(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x5BB4D22B8B03A30B();
					}
					else if (unk_0x4ED6CFDFE8D4131A(uParam2->f_675, iVar0))
					{
						unk_0x164FB269C22AF51C(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x54534D588C114163(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x5BB4D22B8B03A30B();
					}
					else
					{
						func_90(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (unk_0x4ED6CFDFE8D4131A(uParam2->f_678, iVar0))
						{
							unk_0x58279158C52AF361(1);
							unk_0xA734310215BCF528(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x58279158C52AF361(0);
							unk_0xA734310215BCF528(332);
						}
					}
					unk_0xD4D85E4148B638AD();
				}
				else
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT");
					unk_0xA734310215BCF528(iVar0);
					func_91(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x2CF12F9ACF18F048(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_91(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x4ED6CFDFE8D4131A(uParam2->f_674, iVar0))
					{
						unk_0x164FB269C22AF51C(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x3451E7FFDF0EF375(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xF00CED653959DE03(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x5BB4D22B8B03A30B();
					}
					else if (unk_0x4ED6CFDFE8D4131A(uParam2->f_675, iVar0))
					{
						unk_0x164FB269C22AF51C(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x54534D588C114163(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x5BB4D22B8B03A30B();
					}
					else
					{
						func_90(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						unk_0x58279158C52AF361(0);
						unk_0xA734310215BCF528(332);
					}
					unk_0xD4D85E4148B638AD();
				}
				iVar0++;
			}
			unk_0xF6EA2AC68E7C7293(*uParam0, "SET_MAX_WIDTH");
			unk_0xBC38230AD29DBDD4(uParam2->f_686);
			unk_0xD4D85E4148B638AD();
			unk_0xF6EA2AC68E7C7293(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xA734310215BCF528(0);
			unk_0xD4D85E4148B638AD();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_89(*uParam0, uParam1);
	}
	func_88();
}

void func_88()
{
	unk_0xB5F6539FA93ECBF6(7);
	unk_0xB5F6539FA93ECBF6(6);
	unk_0xB5F6539FA93ECBF6(8);
	unk_0xB5F6539FA93ECBF6(9);
}

void func_89(var uParam0, var uParam1)
{
	unk_0x2D8953D6CEBE69D2(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_90(var uParam0)
{
	unk_0x164FB269C22AF51C(uParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_91(char* sParam0)
{
	unk_0x3FB5104DF4233F1D(sParam0);
}

void func_92(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_93(var uParam0)
{
	return uParam0->f_679;
}

void func_94(int iParam0)
{
	Global_1318744 = iParam0;
}

void func_95(int iParam0)
{
	Global_1328872.f_756 = iParam0;
}

void func_96(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

void func_97(var uParam0)
{
	func_98(uParam0);
	uParam0->f_679 = 1;
}

void func_98(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 332;
		uParam0->f_1[iVar0 /*56*/].f_55 = 332;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_99()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_100(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	
	unk_0x66C4FECDA728574E(2);
	func_103(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x1A89600CDAF62A93())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		fVar5 = unk_0xA9F12B50505FB154(2, 239);
		fVar6 = unk_0xA9F12B50505FB154(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -unk_0xF34EE736CF047844(((fVar7 * fParam5) * 127f));
			iVar0[3] = -unk_0xF34EE736CF047844(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = unk_0xF34EE736CF047844(((unk_0xA9F12B50505FB154(2, 290) * fParam5) * 127f));
			iVar0[3] = unk_0xF34EE736CF047844(((unk_0xA9F12B50505FB154(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_102((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_102((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x4F67E8ECA7D3F667())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0x3653C46DD33107D5(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(unk_0xBBDA792448DB5A89(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(unk_0xBBDA792448DB5A89(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * unk_0x0000000050597EE2());
	Var10 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0x3653C46DD33107D5(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var10.f_0;
		uParam0->f_14.f_1 = Var10.f_1;
		uParam0->f_14.f_2 = Var10.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_101((((Var10.f_0 - uParam0->f_14) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_101((((Var10.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar9), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_101((((Var10.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar9), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_101(uParam0->f_14, unk_0xBBDA792448DB5A89(-uParam0->f_21), unk_0xBBDA792448DB5A89(uParam0->f_21));
		uParam0->f_14.f_1 = func_101(uParam0->f_14.f_1, unk_0xBBDA792448DB5A89(-uParam0->f_22), unk_0xBBDA792448DB5A89(uParam0->f_22));
		uParam0->f_14.f_2 = func_101(uParam0->f_14.f_2, unk_0xBBDA792448DB5A89(-uParam0->f_20), unk_0xBBDA792448DB5A89(uParam0->f_20));
	}
	if (unk_0x3653C46DD33107D5(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x3653C46DD33107D5(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (unk_0xA799AFD74BAFEA0F(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0xA799AFD74BAFEA0F(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x4F67E8ECA7D3F667() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_101(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_101(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam3)
		{
			if (unk_0xBBDA792448DB5A89(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	unk_0xA47BBFFFB83D4D0A(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x153AD457764FD704(*uParam0))
	{
		if (unk_0x63EFCC7E1810B8E6(*uParam0))
		{
			if (unk_0x4415F8A6C536D39F(*uParam0))
			{
				unk_0x72ED2136CB143D65();
			}
		}
	}
}

float func_101(float fParam0, float fParam1, float fParam2)
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

int func_102(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_103(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xA9F12B50505FB154(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF2BE793AE446E342(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 218) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 219) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 220) * 127f));
		}
		if (!unk_0xF2BE793AE446E342(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x43701D9ABA44A43F(2, 221) * 127f));
		}
	}
	if (unk_0x3653C46DD33107D5(2))
	{
		if (bParam5)
		{
			if (unk_0x1A89600CDAF62A93())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x7E47E3291155DF3B())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_104(var uParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	unk_0x66C4FECDA728574E(2);
	if (*uParam0 == 1)
	{
		if (unk_0x134549B388167CBF(unk_0x51790FCCF27A8664(2, 220)) > 0.1f)
		{
			uParam0->f_12 = (uParam0->f_12 - ((unk_0x51790FCCF27A8664(2, 220) * 60f) * unk_0x0000000050597EE2()));
			if (uParam0->f_15)
			{
				if (uParam0->f_12 < -180f)
				{
					uParam0->f_12 = (uParam0->f_12 + 360f);
				}
				if (uParam0->f_12 > 180f)
				{
					uParam0->f_12 = (uParam0->f_12 - 360f);
				}
			}
			else
			{
				uParam0->f_12 = func_101(uParam0->f_12, -80f, 80f);
			}
		}
		if (unk_0x134549B388167CBF(unk_0x51790FCCF27A8664(2, 221)) > 0.1f)
		{
			fVar2 = ((unk_0x51790FCCF27A8664(2, 221) * 60f) * unk_0x0000000050597EE2());
			if (unk_0x1A89600CDAF62A93())
			{
				fVar2 = (fVar2 * -1f);
			}
			uParam0->f_11 = (uParam0->f_11 - fVar2);
			if (uParam0->f_14)
			{
				if (uParam0->f_11 < -180f)
				{
					uParam0->f_11 = (uParam0->f_11 + 360f);
				}
				if (uParam0->f_11 > 180f)
				{
					uParam0->f_11 = (uParam0->f_11 - 360f);
				}
			}
			else
			{
				uParam0->f_11 = func_101(uParam0->f_11, -30f, 30f);
			}
		}
		if (unk_0xCCBB0BB9790E1F47(2, 231))
		{
			uParam0->f_11 = 0f;
			uParam0->f_12 = 0f;
		}
		if (unk_0x134549B388167CBF(unk_0x51790FCCF27A8664(2, 219)) > 0.1f)
		{
			fVar2 = ((unk_0x51790FCCF27A8664(2, 219) * (60f / 2f)) * unk_0x0000000050597EE2());
			uParam0->f_13 = (uParam0->f_13 + fVar2);
			uParam0->f_13 = func_101(uParam0->f_13, 20f, 50f);
		}
		if (unk_0x153AD457764FD704(uParam0->f_10))
		{
			unk_0x27666E5988D9D429(uParam0->f_10, uParam0->f_13);
			if (!func_39(uParam0->f_8) && func_39(unk_0x096275889B8E0EE0()))
			{
				unk_0x63DFA6810AD78719(uParam0->f_10, unk_0xE09CAF86C32CB48F(unk_0x096275889B8E0EE0(), 2) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
			else if (func_39(uParam0->f_8) && func_39(uParam0->f_9))
			{
				func_105(unk_0xA86D5F069399F44D(uParam0->f_8, 1), unk_0xA86D5F069399F44D(uParam0->f_9, 1), &uVar0, &uVar1, 1);
				unk_0x63DFA6810AD78719(uParam0->f_10, Vector(uVar1, 0f, uVar0) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
		}
	}
}

void func_105(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	func_106(Var0, uParam6, uParam7, iParam8);
}

void func_106(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0x965B220A066E3F07(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0x965B220A066E3F07(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

void func_107()
{
	struct<3> Var0;
	
	if (func_39(unk_0x096275889B8E0EE0()))
	{
		func_61(&uLocal_265, 0);
		Local_195.f_20 = 160;
		Local_195.f_21 = 20;
		if (bLocal_193)
		{
			Var0 = { unk_0x012B43913EE9671C(unk_0x096275889B8E0EE0(), 31086, 0f, -0.25f, 0f) };
			func_110(&Local_195, Var0, unk_0xE09CAF86C32CB48F(unk_0x096275889B8E0EE0(), 2), 50f, Local_195.f_20, Local_195.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
			unk_0xDFC1E4A44C0324CA(Local_195.f_0, unk_0x096275889B8E0EE0(), 31086, 0f, -0.25f, 0f, 1);
		}
		else
		{
			func_109(&uLocal_249, 1);
			func_108(&uLocal_249, 0, 3000);
		}
		if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
		{
			unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
		}
		unk_0x5F70787AC4BF7928("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_266 = 1;
}

int func_108(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_1 == 1)
	{
		return 0;
	}
	uParam0->f_13 = 50f;
	if (!unk_0x153AD457764FD704(uParam0->f_10))
	{
		uParam0->f_10 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", uParam0->f_2, uParam0->f_5, 50f, 1, 2);
	}
	if (func_39(uParam0->f_8))
	{
		unk_0xFDC0DF7F6FB0A592(uParam0->f_10, uParam0->f_8, 0f, 0f, 0f, 1);
	}
	if (*uParam0 == 1)
	{
		if (func_39(unk_0x096275889B8E0EE0()) && !func_39(uParam0->f_8))
		{
			unk_0xDFC1E4A44C0324CA(uParam0->f_10, unk_0x096275889B8E0EE0(), 31086, 0f, 0.2f, 0f, 1);
		}
		uParam0->f_11 = 0f;
		uParam0->f_12 = 0f;
	}
	else if (func_39(uParam0->f_9))
	{
		unk_0xFC2867E6074D3A61(uParam0->f_10, uParam0->f_9, 0f, 0f, 0f, 1);
	}
	if (unk_0x153AD457764FD704(uParam0->f_10))
	{
		unk_0x87295BCA613800C8(uParam0->f_10, 1);
		unk_0x33281167E4942E4F(1, iParam1, iParam2, 1, 0, 0);
	}
	return 1;
}

void func_109(var uParam0, bool bParam1)
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_9 = unk_0x096275889B8E0EE0();
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	if (bParam1)
	{
		uParam0->f_15 = 1;
	}
}

void func_110(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = uParam8;
	uParam0->f_21 = uParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = iParam11;
	*uParam0 = unk_0xE72CDBA7F0A02DD6("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x87295BCA613800C8(*uParam0, 1);
	unk_0xA47BBFFFB83D4D0A(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		unk_0xF9A7BCF5D050D4E7(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		unk_0xA924028272A61364(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		unk_0x0BFD145EF819FB3A(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_111()
{
	int iVar0;
	
	if (func_124(1) >= Global_262145.f_6109)
	{
		if (unk_0x9CCE732A06CC7A37(Global_262145.f_6109, 0, 0, 1, -1))
		{
			if (func_123())
			{
				func_116(1643659499, Global_262145.f_6109, &iVar0, 0, 1);
				Global_2540096[iVar0 /*69*/].f_8.f_1 = 2;
			}
			else
			{
				unk_0x7BC89E9BFE048525(Global_262145.f_6109, 2, 0, 1);
			}
			unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 8);
		}
	}
	else if (!unk_0x4ED6CFDFE8D4131A(uLocal_288, 3))
	{
		func_112(0, 31, 5);
		unk_0xF73FBE4845C43B5B(&uLocal_288, 3);
	}
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x2EF2A8D19BB476D4())
	{
		return;
	}
	if (unk_0x03A753E2C8458335() && func_14(unk_0x217E9DC48139933D(), 1))
	{
		return;
	}
	if (unk_0x2503EB2EA811EC9A(2, 199) || unk_0x3BFD60A58E503C0D(2, 199))
	{
		return;
	}
	if (unk_0x5DC6DEEB4DB569FB() != 0)
	{
		return;
	}
	if (unk_0x535384D6067BA42E())
	{
		return;
	}
	if (unk_0x908258B6209E71F7())
	{
		return;
	}
	if (unk_0xF0451C6FF481E814())
	{
		return;
	}
	if (func_115())
	{
		return;
	}
	if (!func_113())
	{
		return;
	}
	if (unk_0x03A753E2C8458335() || iParam0)
	{
		if (!Global_90014.f_1318 && !unk_0x4A914DA7CB878095())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2435859 = iParam1;
			Global_90014.f_1318 = 1;
			Global_90014.f_1319 = iParam2;
		}
	}
}

int func_113()
{
	if (func_114())
	{
		return 0;
	}
	if (unk_0x61E3D90420572762() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_114()
{
	return Global_2435308;
}

bool func_115()
{
	return Global_2435880;
}

void func_116(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_123())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_117(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_117(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_117(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_123())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x7F70CF666960A8DF(func_70()) || unk_0xAE17557F345C7705())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xB8F33DB09457CEDF(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x256A47D6B7ABB959(iVar3))
		{
			*uParam0 = func_122(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540096[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2540554 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2540556 = 1;
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_121(1, iParam4);
			Global_2540556 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_118(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_118(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF73FBE4845C43B5B(&(Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_119(iParam0);
	}
}

void func_119(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_123())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_120(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			unk_0x332DDA36BDFC5F0D(Global_2540096[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540096[iParam0 /*69*/] = { Var1 };
	}
}

int func_120(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_121(int iParam0, var uParam1)
{
	Global_2437132 = uParam1;
	Global_2437131 = iParam0;
}

int func_122(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540096[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_123())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540096[iVar0 /*69*/].f_2 = 1;
			Global_2540096[iVar0 /*69*/].f_1 = uParam5;
			Global_2540096[iVar0 /*69*/].f_3 = uParam1;
			Global_2540096[iVar0 /*69*/].f_4 = uParam2;
			Global_2540096[iVar0 /*69*/].f_7 = uParam3;
			Global_2540096[iVar0 /*69*/].f_5 = 0;
			Global_2540096[iVar0 /*69*/] = iParam0;
			Global_2540096[iVar0 /*69*/].f_6 = iParam4;
			Global_2540096[iVar0 /*69*/].f_65 = uParam8;
			Global_2540096[iVar0 /*69*/].f_64 = uParam7;
			Global_2540096[iVar0 /*69*/].f_68 = 0;
			Global_2540554 = 0;
			if (bParam6)
			{
				Global_2540096[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_123()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		return 1;
	}
	return 0;
}

int func_124(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xFD8747D254E70D85();
	}
	iVar0 = (iVar0 + unk_0x9F35DAF765E52E92(-1));
	return iVar0;
}

void func_125(char* sParam0, var uParam1, int iParam2)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0xF00CED653959DE03(uParam1);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam2);
}

bool func_126()
{
	return (((func_128() || func_157()) || func_127() == 2) || func_127() == 16);
}

int func_127()
{
	return Global_971737;
}

bool func_128()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131, 5);
}

int func_129(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_130(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_131()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_268 != 0)
	{
		fVar4 = (IntToFloat(unk_0x720C9CED76527377(unk_0xCCF575E20D375E1B(), iLocal_268)) / 1000f);
	}
	iLocal_268 = unk_0xCCF575E20D375E1B();
	if (((Local_997.f_262 != -1 && unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 0)) && Global_2451157 < Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6) && (Global_2451157 + (fLocal_178 * fVar4)) > Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6)
	{
		Global_2451157 = Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6;
	}
	else
	{
		Global_2451157 = (Global_2451157 + (fLocal_178 * fVar4));
	}
	if (Global_2451157 >= 360f)
	{
		Global_2451157 = (Global_2451157 - 360f);
	}
	if (func_39(uLocal_177))
	{
		unk_0xF6A103413A202C37(uLocal_177, Local_179, 1, 0, 0, 1);
		unk_0x9CC8314DFEDE441E(uLocal_177, (-Global_2451157 - (360f / 16f)), 0f, 0f, 2, 1);
		unk_0x7D9EFB7AD6B19754(uLocal_177, true);
	}
	if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		if (func_39(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
		}
		unk_0x0D10CFF6EAF14B89("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (Var1.f_2 - fLocal_188));
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_132(&(Local_997.f_36[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_132(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { func_134(uParam0->f_5) };
	if (func_133(iLocal_160[uParam0->f_5]))
	{
		unk_0xF6A103413A202C37(iLocal_160[uParam0->f_5], Var0, 1, 0, 0, 1);
		unk_0x5FB407F0A7C877BF(iLocal_160[uParam0->f_5], 1000);
		unk_0x7D9EFB7AD6B19754(iLocal_160[uParam0->f_5], true);
	}
}

int func_133(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	float fVar0;
	
	fVar0 = ((360f / unk_0xBBDA792448DB5A89(16)) * unk_0xBBDA792448DB5A89(iParam0));
	return unk_0xC899C78DB72CCBCC(uLocal_177, 0f, (15.3f * unk_0x0BADBFA3B172435F(fVar0)), (-15.3f * unk_0xD0FFB162F40A139C(fVar0)));
}

int func_135()
{
	unk_0xA862A2AD321F94B4(sLocal_269);
	unk_0xA862A2AD321F94B4(sLocal_159);
	unk_0xFA28FE3A6246FC30(iLocal_157);
	unk_0xFA28FE3A6246FC30(iLocal_158);
	if (!unk_0x27FF6FE8009B40CA(sLocal_269))
	{
		return 0;
	}
	if (!unk_0x27FF6FE8009B40CA(sLocal_159))
	{
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(iLocal_157))
	{
		return 0;
	}
	if (!unk_0x1283B8B89DD5D1B6(iLocal_158))
	{
		return 0;
	}
	func_138();
	func_137(func_59(0));
	func_136(func_59(0));
	iLocal_296 = 0;
	return 1;
}

void func_136(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 341;
	Var0.f_1 = unk_0x217E9DC48139933D();
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 2, iParam0);
	}
}

void func_137(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 344;
	Var0.f_1 = unk_0x217E9DC48139933D();
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 2, iParam0);
	}
}

void func_138()
{
	int iVar0;
	
	iVar0 = 0;
	Global_2451157 = 0f;
	uLocal_177 = unk_0x1A2D7464B1CAA1C8(iLocal_157, 0f, 1f, 2f, 0, 0, 0);
	unk_0xF6A103413A202C37(uLocal_177, Local_179, 1, 0, 0, 1);
	unk_0x9CC8314DFEDE441E(uLocal_177, Global_2451157, 0f, 0f, 2, 1);
	unk_0x7D9EFB7AD6B19754(uLocal_177, true);
	unk_0x5FB407F0A7C877BF(uLocal_177, 1000);
	unk_0xA5C38736C426FCB8(uLocal_177, 1);
	unk_0x7476890D814740BA(uLocal_177, 0);
	if (!unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0x5F70787AC4BF7928("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_139(&(Local_997.f_36[iVar0 /*10*/]), iVar0);
		iVar0++;
	}
	if (!unk_0xEEA50AAE36800059())
	{
		func_21(64, 1, 0, 1, 0);
	}
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	iLocal_160[uParam0->f_5] = unk_0x1A2D7464B1CAA1C8(iLocal_158, 0f, 1f, 2f, 0, 0, 0);
	unk_0xA5C38736C426FCB8(iLocal_160[uParam0->f_5], 1);
	func_132(uParam0);
}

int func_140()
{
	return Local_997.f_1;
}

int func_141(int iParam0)
{
	return Local_1261[iParam0 /*5*/];
}

void func_142()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var2, 2);
				if (func_12(Var2.f_1, 0, 1))
				{
					if (unk_0xE4059DF9B9FAF17F(Var2.f_1))
					{
						switch (Var2.f_0)
						{
							case 344:
								func_154(iVar0);
								break;
							
							case 342:
								func_153(iVar0);
								break;
							
							case 343:
								func_152(iVar0);
								break;
							
							case 340:
								func_151(iVar0);
								break;
							
							case 341:
								func_149(iVar0);
								break;
							
							case 345:
								func_146(iVar0);
								break;
							
							case 346:
								func_145(iVar0);
								break;
							
							case 347:
								func_144(iVar0);
								break;
							
							case 348:
								func_143(iVar0);
								break;
							}
						}
				}
				break;
		}
		iVar0++;
	}
}

void func_143(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6A4C37E16775564D())
	{
		if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
		{
			Local_997.f_3[Var0.f_2] = 0;
			Local_997.f_197[Var0.f_2 /*2*/] = -1;
			Local_997.f_197[Var0.f_2 /*2*/].f_1 = 0;
			Local_997.f_262 = func_2();
		}
	}
}

void func_144(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x6A4C37E16775564D())
	{
		if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 4))
		{
			unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 3);
			unk_0x7D1D4A3602B6AD4E(&(Local_997.f_2), 2);
			if ((Local_997.f_262 != -1 && Local_997.f_197[Local_997.f_262 /*2*/] != -1) && Var0.f_2 != -1)
			{
				if (!Var0.f_3)
				{
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 = (Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 - 1);
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][Var0.f_2] = 0;
				}
				else
				{
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3++;
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][Var0.f_2] = 1;
				}
			}
		}
	}
}

void func_145(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (!Var0.f_2)
		{
			if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
			{
				unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 10);
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2), 9);
			}
		}
	}
}

void func_146(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	
	if (unk_0x6A4C37E16775564D())
	{
		if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 2))
		{
			bVar2 = unk_0x4ED6CFDFE8D4131A(Local_997.f_2, 3);
			func_147(func_148(Var0.f_1), bVar2);
			if (!bVar2)
			{
				unk_0xF73FBE4845C43B5B(&(Local_997.f_2), 3);
			}
		}
	}
}

void func_147(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 346;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 3, iParam0);
	}
}

int func_148(int iParam0)
{
	var uVar0;
	
	unk_0xF73FBE4845C43B5B(&uVar0, iParam0);
	return uVar0;
}

void func_149(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x6A4C37E16775564D())
	{
		if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 2))
		{
			func_150(func_148(Var0.f_1));
		}
	}
}

void func_150(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_0 = 340;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = Global_2451157;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 3, iParam0);
	}
}

void func_151(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		Global_2451157 = Var0.f_2;
	}
}

void func_152(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 2))
	{
		uVar2 = unk_0x275F255ED201B937(Var0.f_1);
		if (func_12(Var0.f_1, 1, 1))
		{
			unk_0x7AD9A4FD9948B467(uVar2, 1);
			unk_0x64CDE9D6BF8ECAD3(uVar2, 0, 1);
		}
	}
}

void func_153(int iParam0)
{
	struct<7> Var0;
	var uVar7;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_2 != -1)
		{
			uVar7 = unk_0x275F255ED201B937(Var0.f_1);
			if (func_12(Var0.f_1, 1, 1))
			{
				unk_0x7AD9A4FD9948B467(uVar7, 1);
				unk_0x1B21CF9397F27FEE(uVar7, iLocal_160[Var0.f_2], 0, Var0.f_3, 0f, 0f, Var0.f_6, 0, 0, 0, 0, 2, 1);
			}
		}
	}
}

void func_154(int iParam0)
{
	struct<2> Var0;
	struct<3> Var2;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 2))
	{
		if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
		{
			unk_0x7AD9A4FD9948B467(unk_0x096275889B8E0EE0(), 1);
			Var2 = { unk_0x497C6B1A2C9AE69C(iLocal_160[Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3], unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) };
			func_51(func_148(Var0.f_1), Local_1261[unk_0x2473988062EBFC53() /*5*/].f_3, Var2, unk_0xC230DD956E2F5507(unk_0x096275889B8E0EE0()));
		}
	}
}

int func_155()
{
	if (func_156() == 0)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	return Global_1312467.f_18;
}

int func_157()
{
	if (((func_161() || func_160()) || func_159()) || func_158())
	{
		return 1;
	}
	return 0;
}

bool func_158()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131, 1);
}

bool func_159()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131, 2);
}

bool func_160()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2428131, 20);
}

bool func_161()
{
	return Global_2428131.f_572;
}

bool func_162()
{
	return Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_165 != 0;
}

int func_163()
{
	bool bVar0;
	
	func_168(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			return 1;
		}
	}
	if (func_167())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_166())
	{
		return 1;
	}
	if (func_165(157))
	{
		if (!func_161())
		{
			return 1;
		}
	}
	if (func_165(155))
	{
		return 1;
	}
	if (!unk_0x4C82BD446C34CACD())
	{
		return 1;
	}
	if (func_164() != 0)
	{
		if (unk_0x8E34C953364A76DD(func_164()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_164()
{
	switch (func_27())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (unk_0xC9F59C0A710ECD34(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_2435238;
}

bool func_167()
{
	return Global_2428131.f_567;
}

void func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x57EC5FA4D4D6AFCA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_169(iVar0);
					break;
				
				case 2:
					unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_169(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x275F255ED201B937(Var0.f_1);
			if (unk_0xD42BD6EB2E0F1677(uVar3))
			{
				if (unk_0x52BE10F427339B39(uVar3, 0))
				{
					uVar4 = unk_0xB3598EA616C3FFC3(uVar3, 0);
					if (unk_0x0E7910A63E05B12C(uVar4, Var0.f_2) && unk_0xB779D92A280DB7F7())
					{
						if (func_170(uVar4, &bVar5))
						{
							unk_0x745F15A215F2DDF1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x6C9B2BE03BBD5C98(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_170(var uParam0, var uParam1)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x138190F64DB4BBD1(uParam0))
		{
			if (unk_0x3BDB448E5390D817(uParam0))
			{
				unk_0xDC19C288082E586E(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x622B1980CBE13332(uParam0, 0))
		{
			if (unk_0x711DB131BD66A278(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_171()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_172()
{
	func_173(&uLocal_39, 3, 4, "SCRIPT\FERRIS_WHALE_01", 0);
	func_173(&uLocal_39, 4, 4, "SCRIPT\FERRIS_WHALE_02", 0);
}

int func_173(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (unk_0x4ED6CFDFE8D4131A(uParam0->f_113, iParam1) || unk_0x4ED6CFDFE8D4131A(uParam0->f_114, iParam1))
	{
		return 1;
	}
	if (unk_0x2CF12F9ACF18F048(sParam3))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 1:
			unk_0xD5DB48C6D9C98BCE(sParam3);
			break;
		
		case 2:
			unk_0xA862A2AD321F94B4(sParam3);
			break;
		
		case 3:
			unk_0x18EBAFC307C79DD2(sParam3);
			break;
		
		case 4:
			unk_0x9C623A934CD60291(sParam3, 0);
			break;
		
		case 5:
			unk_0x7BC40F912450F8F4(sParam3, iParam4);
			break;
		
		case 9:
			unk_0xC1BA29DF5631B0F8(sParam3, 0);
			break;
		
		case 11:
			unk_0x0F4E7383958CD0A4(sParam3);
			break;
		
		default:
			return 0;
	}
	func_174(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = iParam4;
	return 1;
}

void func_174(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_175()
{
	func_180();
	func_178(0);
	func_61(&uLocal_265, 0);
	func_61(&uLocal_194, 0);
	func_60(&Local_195, 0, 1);
	if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_316 = 0;
	if (unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Local_1261[unk_0x2473988062EBFC53() /*5*/].f_2, 0))
		{
			if (unk_0xEE6AD63ABF59C0B7(unk_0x096275889B8E0EE0()))
			{
				unk_0x64CDE9D6BF8ECAD3(unk_0x096275889B8E0EE0(), 1, 1);
			}
			func_40();
			unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
		}
	}
	func_176(&uLocal_39);
	unk_0xA51EE6D83CC90A77("fairgroundHub");
	unk_0x5E8B6D17FF91CD59();
}

void func_176(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_177(uParam0, iVar0);
		iVar0++;
	}
}

int func_177(var uParam0, int iParam1)
{
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_114, iParam1) || (*uParam0)[iParam1 /*7*/] == 0)
	{
		return 1;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 1:
			if (unk_0x37F2F6F4B7FB35C3((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x9A3181B341039704((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 2:
			if (unk_0x27FF6FE8009B40CA((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x4763145053A33D46((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 3:
			if (unk_0xD280D9E0E6D4D29F((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDDB2F6758A3724EF((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 4:
			unk_0x07EED5C86B43D7B5();
			break;
		
		case 5:
			break;
		
		case 6:
			if (unk_0x1283B8B89DD5D1B6((uParam0[iParam1 /*7*/])->f_1))
			{
				unk_0x4AD96EF928BD4F9A((uParam0[iParam1 /*7*/])->f_1);
			}
			break;
		
		case 7:
			if (unk_0x13A3F30A9ED0BC31())
			{
				unk_0x042F9049EA419E86();
			}
			break;
		
		case 8:
			if (unk_0x6C01088174B23EE3((uParam0[iParam1 /*7*/])->f_5))
			{
				unk_0xF3D4779E285B441F((uParam0[iParam1 /*7*/])->f_5, 0);
			}
			break;
		
		case 9:
			if (unk_0x54D6900929CCF162((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x4ACA10A91F66F1E2((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 10:
			if (unk_0xBA9325BE372AB6EA((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x139E35755418F6AA((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 11:
			if (unk_0xB8CB92F21E4B35D4((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x13A29574EBED2C8E((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 12:
			if (unk_0x487F2A1C5AAB89EF((uParam0[iParam1 /*7*/])->f_2))
			{
				unk_0x0C2E596982E1AA32((uParam0[iParam1 /*7*/])->f_2);
			}
			break;
		
		default:
			return 0;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 12:
			break;
		
		default:
			break;
	}
	func_174(uParam0[iParam1 /*7*/]);
	return 1;
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		func_179();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_129(0))
		{
			func_33(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_179()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_180()
{
	int iVar0;
	
	if (!unk_0xEEA50AAE36800059())
	{
		func_21(64, 0, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_997.f_36)
	{
		func_183(&(Local_997.f_36[iVar0 /*10*/]));
		iVar0++;
	}
	if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (unk_0x2E882EA08284F674("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		unk_0xC27FB879C2B9A2EB("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	func_182(&iLocal_192);
	func_182(&iLocal_192);
	func_182(&iLocal_189);
	func_182(&iLocal_190);
	func_181(&uLocal_177);
}

void func_181(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (unk_0xC841153DED2CA89A(*uParam0))
		{
			unk_0x64CDE9D6BF8ECAD3(*uParam0, 1, 1);
		}
		unk_0x931914268722C263(uParam0);
	}
}

void func_182(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x9F36E8A3D2A21276(*iParam0);
		unk_0x80443F20AE28A765(*iParam0);
		*iParam0 = -1;
	}
}

void func_183(var uParam0)
{
	if (iLocal_160[uParam0->f_5] == 0)
	{
		return;
	}
	func_181(&(iLocal_160[uParam0->f_5]));
	iLocal_160[uParam0->f_5] = 0;
}

int func_184(struct<20> Param0)
{
	func_189(func_190(Param0.f_0), Param0);
	unk_0x33B19D5996DAFD60(0);
	func_186(0, -1, 0);
	unk_0x0EA32F14A91BEC57(&Local_997, 264);
	unk_0x770EF39C9CAA1AEE(&Local_1261, 161);
	unk_0x3215376E79F6EA18(0);
	Local_1261[unk_0x2473988062EBFC53() /*5*/] = 0;
	func_185(func_59(1));
	return 1;
}

void func_185(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_0 = 348;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = unk_0x2473988062EBFC53();
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 3, iParam0);
	}
}

int func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x48A97E77DF5DB711();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_188();
			}
			else
			{
				return 0;
			}
		}
		if (!func_187())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x03A753E2C8458335())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_167())
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
				if (func_165(155))
				{
					if (!bParam2)
					{
						func_188();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x47499F21458D3AFA())
			{
				if (!bParam2)
				{
					func_188();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x48A97E77DF5DB711();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			if (!bParam2)
			{
				func_188();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x47499F21458D3AFA())
	{
		if (!bParam2)
		{
			func_188();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_187()
{
	return Global_1315874;
}

void func_188()
{
	unk_0x5E8B6D17FF91CD59();
}

void func_189(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x03A753E2C8458335())
	{
		func_188();
	}
	unk_0x5543668CEF76D321(uParam0, 0, Param1.f_16);
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

