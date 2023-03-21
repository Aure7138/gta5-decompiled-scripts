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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 38;
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
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	struct<20> Local_166 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0 } ;
	var uLocal_186 = 10;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 12;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
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
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	var uLocal_875 = 1065353216;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	func_223();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_45(&Local_166);
		if (((func_44() || func_43()) || func_42()) || func_41())
		{
			if (Local_166.f_19 == 3)
			{
				func_5(&Local_166, 0);
			}
		}
		else
		{
			func_45(&Local_166);
		}
		if (func_3())
		{
			func_5(&Local_166, 1);
			func_1();
		}
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	unk_0x95E4B6F3ED223F5A();
}

int func_3()
{
	if ((!Global_2499166 || (!unk_0x7AF0088ABFA713B6() && !func_4())) || (!unk_0xC404A53993BF8595() && !func_4()))
	{
		return 1;
	}
	return 0;
}

bool func_4()
{
	return Global_1312831;
}

void func_5(var uParam0, bool bParam1)
{
	func_12(uParam0, bParam1);
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 0))
	{
		func_11();
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 1))
	{
		func_10();
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 1);
	}
	if (uParam0->f_18 != -1)
	{
		func_8(&(uParam0->f_18));
	}
	func_7(uParam0, 10);
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_6(uParam0, 0);
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_8(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_10()
{
	Global_2436641.f_1151.f_10 = 0;
}

void func_11()
{
	Global_2436641.f_1151.f_9 = 0;
}

void func_12(var uParam0, bool bParam1)
{
	unk_0x7CB6FD92BE491AD9(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_396), 0);
	unk_0x786556581D95BCB2("helicopterhud");
	func_40(uParam0);
	func_39(uParam0);
	func_38(uParam0);
	func_37(uParam0);
	func_36(uParam0);
	func_35(uParam0);
	unk_0xDA70546257A3ED8B("DLC_CHRISTMAS2017/XM_ION_CANNON");
	unk_0xC1300D0F3A74E20B("dlc_xm_orbital_cannon_camera_active_scene");
	func_34(&(uParam0->f_718));
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	if (unk_0xF2E8BA66AD4CCC0E("MP_OrbitalCannon"))
	{
		unk_0x1A058EB0D1ACEC78("MP_OrbitalCannon");
	}
	uParam0->f_9 = 0;
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 3))
	{
		unk_0x7A89E6B582BCD8C2();
		unk_0xECE5D27939BC44ED(0);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 3);
	}
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 15);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 16);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 17);
	func_34(&(uParam0->f_712));
	func_32();
	func_25();
	if (unk_0xFA30DFD0084E92FE(uParam0->f_8, 1))
	{
		unk_0xDF089F4E40A431F9(0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_8, 0))
	{
		unk_0xB3B265086303B76F();
	}
	unk_0xAB61D19452914F41(1);
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
	{
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
	}
	unk_0xB0B0FE33F4F22679(&(uParam0->f_22));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 185, 0);
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
	if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
	{
		unk_0x829FA4611BD56B44(1000);
	}
	unk_0x7A89E6B582BCD8C2();
	Global_2499167 = -1;
	if (bParam1)
	{
		if (func_24(unk_0xB5CEFD608600A09F(), 1, 1) && unk_0xFA30DFD0084E92FE(uParam0->f_8, 3))
		{
			func_13(unk_0xB5CEFD608600A09F(), 1, 524288);
		}
	}
	uParam0->f_8 = 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)
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
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x778F0492FD6A3D74())
		{
			unk_0xC4248B71D9B26306(0);
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		uVar0 = iParam2;
		unk_0xDDCAA2E64649E083(iParam0, bParam1, uVar0);
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
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_22())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x96B1061E8F3CBC9A(iParam0) && unk_0x6A9CDB766DF7216F(iParam0))
		{
			uVar25 = unk_0xA95CF30C72EB526E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x7AF0088ABFA713B6())
				{
					unk_0x32E44624A62DB55D(1);
				}
				else if (bVar13 || (!func_19(unk_0xB5CEFD608600A09F(), 0) && !func_18()))
				{
					unk_0xDC078F87049ECECE(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x7AF0088ABFA713B6() && !bVar18)
					{
						unk_0x32E44624A62DB55D(0);
					}
					Global_2423644[iParam0 /*406*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_17(uVar25) && !unk_0xE55B9B1B2A172FD4(uVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(uVar25, true, 0);
					}
				}
				if (!unk_0xE7E55F7532DEE345(uVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(uVar25, false);
					}
					unk_0x656194E145691D3E(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(uVar25, false);
				}
				unk_0xB105531EDD3DE51B(uVar25, true);
				unk_0x3D7FF8418367D451(iParam0, 0);
				if (unk_0xE58FD1D062663A04(uVar25) && unk_0xCF9FD9F078487083(uVar25))
				{
					unk_0xF1B63714B0383791(uVar25);
				}
				unk_0xF1FC2182A76AD7FC(uVar25, 1);
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_16();
					func_15();
				}
				if (unk_0x9C8234ED756EFA0E())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x719413B40BB63D86())
				{
				}
				Global_2423644[iParam0 /*406*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_17(uVar25) && !unk_0xE55B9B1B2A172FD4(uVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(uVar25, !bVar14, 0);
					}
					if (!unk_0xE7E55F7532DEE345(uVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x656194E145691D3E(uVar25, 1);
						}
					}
					if (func_14(Global_4456448.f_148478))
					{
						unk_0x346478B12F69D4E3(uVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x3D7FF8418367D451(iParam0, 0);
				}
				else
				{
					unk_0x3D7FF8418367D451(iParam0, 1);
				}
				unk_0xB105531EDD3DE51B(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xC3532F7D5B045BFC(uVar25) && !unk_0x5237AF95232D78C5(uVar25, 0))
					{
						unk_0x49D46EE47C9CCB66(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar26);
		}
	}
}

bool func_14(int iParam0)
{
	return iParam0 == 17;
}

void func_15()
{
	struct<3> Var0;
	
	Global_2436641.f_1228 = 0;
	Global_2436641.f_1229 = 0;
	Global_2436641.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436641.f_1235 = -1;
	Global_2436641.f_1236 = 0;
	Global_2405070.f_2671 = { Var0 };
}

void func_16()
{
	Global_2405070.f_690 = 0;
	Global_2405070.f_2714 = 0;
	Global_2405070.f_508 = 0;
	Global_2405070.f_596 = 0;
	Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_203 = 0;
	Global_2405070.f_2670 = 0;
}

int func_17(var uParam0)
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF4FCC3C1048FF2AB(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_20(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_21()
{
	return Global_1312736;
}

int func_22()
{
	if (func_23() == 0)
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	return Global_1312466.f_18;
}

int func_24(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	func_26(0);
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_31();
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_2364, 16);
		}
		Global_14493.f_1 = 1;
		if (func_30(0))
		{
			func_27(0);
		}
	}
	else if (Global_14493.f_1 == 1)
	{
		if (!Global_14493.f_1 == 0)
		{
			Global_14493.f_1 = 3;
		}
	}
}

void func_27(int iParam0)
{
	if (Global_14659)
	{
		func_29(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_28())
	{
		Global_14493.f_1 = 3;
	}
}

int func_28()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_30(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_31()
{
	if (Global_14493.f_1 == 9 || Global_14493.f_1 == 10)
	{
		Global_15853 = 0;
		Global_15849 = 1;
	}
}

void func_32()
{
	func_33(unk_0xB5CEFD608600A09F(), 0);
}

void func_33(int iParam0, int iParam1)
{
	Global_2423644[iParam0 /*406*/].f_63.f_3 = iParam1;
}

void func_34(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_35(var uParam0)
{
	if (uParam0->f_16 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_16);
		unk_0x26D344275839A25E(uParam0->f_16);
		uParam0->f_16 = -1;
	}
}

void func_36(var uParam0)
{
	if (uParam0->f_15 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_15);
		unk_0x26D344275839A25E(uParam0->f_15);
		uParam0->f_15 = -1;
	}
}

void func_37(var uParam0)
{
	if (uParam0->f_12 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_12);
		unk_0x26D344275839A25E(uParam0->f_12);
		uParam0->f_12 = -1;
	}
}

void func_38(var uParam0)
{
	if (uParam0->f_13 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_13);
		unk_0x26D344275839A25E(uParam0->f_13);
		uParam0->f_13 = -1;
	}
}

void func_39(var uParam0)
{
	if (uParam0->f_14 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_14);
		unk_0x26D344275839A25E(uParam0->f_14);
		uParam0->f_14 = -1;
	}
}

void func_40(var uParam0)
{
	if (uParam0->f_6 != -1)
	{
		unk_0x38FF8CB6377D36F6(uParam0->f_6);
		unk_0x26D344275839A25E(uParam0->f_6);
		uParam0->f_6 = -1;
	}
}

int func_41()
{
	if (unk_0xB731B8C5BCE89836(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return Global_1312854;
}

int func_43()
{
	if (func_23() == 3 || func_23() == 2)
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (func_23() == 1 || func_23() == 4)
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0)
{
	switch (uParam0->f_19)
	{
		case 0:
			func_6(uParam0, 1);
			break;
		
		case 1:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 0))
			{
				func_11();
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 0);
			}
			if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 1))
			{
				func_10();
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 1);
			}
			if (func_206(uParam0))
			{
				unk_0xAB61D19452914F41(0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 2);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 3);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
				unk_0xF0059F27F7BB6680(&(uParam0->f_10), 2);
				unk_0x8AA3F48A15444B98("helicopterhud", 0);
				func_6(uParam0, 3);
				unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_396), 0);
			}
			break;
		
		case 3:
			func_205();
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				func_13(unk_0xB5CEFD608600A09F(), 0, 524288);
				unk_0xF0059F27F7BB6680(&(uParam0->f_8), 3);
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 185, 1);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				}
			}
			if (!func_204())
			{
				func_203();
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 0);
			}
			if (!func_202())
			{
				func_201();
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 1);
			}
			unk_0xA66AB2A3D4820ED1();
			unk_0xE1F4DF3B8A6E8B8F(1f);
			unk_0x52EC9FA76E533BD4(1, 1);
			unk_0x03679E7C1F43864E(unk_0x8AB4E14F6E158D9D());
			if (func_147(0, 1, 0))
			{
				if (func_52(uParam0))
				{
					func_12(uParam0, 1);
					func_6(uParam0, 1);
				}
			}
			func_50(1);
			break;
	}
	if (uParam0->f_19 == 3)
	{
		unk_0xA66AB2A3D4820ED1();
		unk_0xE1F4DF3B8A6E8B8F(1f);
		unk_0x52EC9FA76E533BD4(1, 1);
		unk_0x03679E7C1F43864E(unk_0x8AB4E14F6E158D9D());
		if (!uParam0->f_3)
		{
			if (!func_49(&(uParam0->f_718), 5000, 0))
			{
				if (unk_0x284F2ACE6839D3C0("DLC_CHRISTMAS2017/XM_ION_CANNON", 0, -1))
				{
					uParam0->f_3 = 1;
				}
				else if (!func_48(&(uParam0->f_718)))
				{
					func_47(&(uParam0->f_718), 0, 0);
				}
			}
		}
		func_46();
		func_50(1);
	}
}

void func_46()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

void func_47(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

bool func_48(var uParam0)
{
	return uParam0->f_1;
}

int func_49(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_47(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_50(bool bParam0)
{
	if (bParam0)
	{
		if (func_51())
		{
			Global_2447942.f_33 = 1;
		}
	}
	else
	{
		Global_2447942.f_33 = 0;
	}
}

bool func_51()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 11);
}

int func_52(var uParam0)
{
	func_146();
	unk_0x726068DEB457ED5B(0);
	unk_0x60F2EB0ADD1B70BC(0);
	unk_0x4E0EC60D119222B1(19);
	unk_0x4E0EC60D119222B1(2);
	func_50(1);
	unk_0xDE7B9CB38D019BF0();
	func_145();
	unk_0x4E0EC60D119222B1(1);
	unk_0x4E0EC60D119222B1(3);
	unk_0x4E0EC60D119222B1(4);
	func_144(0);
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 2))
	{
		if (func_114(uParam0))
		{
			if (func_54(uParam0))
			{
				if (unk_0xFA30DFD0084E92FE(uParam0->f_8, 0))
				{
					unk_0xB3B265086303B76F();
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_8), 0);
				}
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 2);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 3);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
				unk_0xF0059F27F7BB6680(&(uParam0->f_10), 3);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 2);
			}
		}
	}
	else if (func_114(uParam0))
	{
		func_53(uParam0);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 2);
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 3))
	{
		unk_0x7A89E6B582BCD8C2();
		unk_0xECE5D27939BC44ED(0);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 3);
	}
	unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
	unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
	return 1;
}

int func_54(var uParam0)
{
	struct<3> Var0;
	bool bVar3;
	
	if (func_48(&(uParam0->f_716)) && func_49(&(uParam0->f_716), 5000, 0))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 8);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 10);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 9);
		func_34(&(uParam0->f_710));
		func_34(&(uParam0->f_716));
	}
	if (func_48(&(uParam0->f_714)))
	{
		if (func_49(&(uParam0->f_714), 3000, 0))
		{
			func_38(uParam0);
			unk_0xC4BA30B532FE260F(-1, "cannon_active", "dlc_xm_orbital_cannon_sounds", 1);
			func_34(&(uParam0->f_714));
			unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
		}
	}
	if ((((!unk_0xE186ACC7BE9B244E() && !func_30(0)) && !func_113()) && !func_42()) && func_112(uParam0) == 10)
	{
		unk_0x9601F9343A2063DE(2);
		unk_0xBBC4195AD74D153D(0, 24, 1);
		unk_0xBBC4195AD74D153D(0, 257, 1);
		unk_0xBBC4195AD74D153D(0, 142, 1);
		unk_0xBBC4195AD74D153D(0, 141, 1);
		unk_0xBBC4195AD74D153D(0, 140, 1);
		unk_0xBBC4195AD74D153D(0, 263, 1);
		unk_0xBBC4195AD74D153D(0, 264, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(2, 200, 1);
		if (((((unk_0xD3C4A010282C31F2(2, 24) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 8)) && !func_48(&(uParam0->f_714))) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 15)) && !unk_0x18158A50125911B6()) && unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
		{
			uParam0->f_1 = 1;
			if (!func_48(&(uParam0->f_710)))
			{
				func_47(&(uParam0->f_710), 0, 0);
				func_111(uParam0);
				unk_0xF715C239F71B95D6(0, 1000, 50);
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 19))
				{
					unk_0x8B34879B92B3B225(uParam0->f_6, "Firing", 0f);
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 19);
				}
			}
			else if (func_49(&(uParam0->f_710), 3000, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 8))
				{
					Var0 = { unk_0x4BE5AF1A5ACF14E5(uParam0->f_4) };
					unk_0x8B34879B92B3B225(uParam0->f_6, "Firing", 1f);
					func_64(Var0);
					unk_0xF715C239F71B95D6(0, 500, 256);
					unk_0x2FB83B8BD6C05FD2(uParam0->f_4, "GAMEPLAY_EXPLOSION_SHAKE", 1.5f);
					func_47(&(uParam0->f_716), 0, 0);
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 8);
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
					*uParam0 = 1;
				}
			}
			else if (func_49(&(uParam0->f_710), 2000, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 10))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 10);
					unk_0xF715C239F71B95D6(0, 1000, 50);
				}
			}
			else if (func_49(&(uParam0->f_710), 1000, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 9))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 9);
					unk_0xF715C239F71B95D6(0, 1000, 50);
				}
			}
		}
		else
		{
			bVar3 = false;
			if ((unk_0xF7DDAAF0EFDAFA22(2, 24) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 15)) && !unk_0x18158A50125911B6())
			{
				unk_0xC4BA30B532FE260F(-1, "inactive_fire_fail", "dlc_xm_orbital_cannon_sounds", 1);
			}
			uParam0->f_1 = 0;
			func_40(uParam0);
			if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 19))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 19);
			}
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 8))
			{
				func_63(uParam0);
			}
			if ((unk_0xF7DDAAF0EFDAFA22(2, 202) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 15)) && !bVar3)
			{
				func_37(uParam0);
				func_36(uParam0);
				func_35(uParam0);
				func_63(uParam0);
				unk_0xF3F01A78937DC905(0);
				unk_0x2B9AEC08E469E384(0, 1065353216);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
				unk_0x7CB6FD92BE491AD9(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_405), 1);
				return 1;
			}
			if (unk_0xCB3E71B7B7FACCAF(2, 203))
			{
				func_63(uParam0);
				uParam0->f_11 = 0;
				func_7(uParam0, 0);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 2);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 3);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
				unk_0xF0059F27F7BB6680(&(uParam0->f_10), 2);
				func_6(uParam0, 3);
			}
		}
		if (!unk_0xA3AE65489EB30BF4(uParam0->f_4))
		{
			func_55(uParam0);
		}
	}
	return 0;
}

void func_55(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	float fVar16;
	
	fVar0 = unk_0x5F9521C8EE73F79F(2, 221);
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 5))
	{
		if (!unk_0x50465D2C022B9E04(2))
		{
			if (fVar0 == 0f)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 5);
			}
		}
		else if (!unk_0x8FCEEB789599BD9B(2, 242) && !unk_0x8FCEEB789599BD9B(2, 241))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 5);
		}
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
	{
		bVar1 = false;
		bVar2 = false;
		uVar3 = unk_0x3C44FF85A9132C9F(uParam0->f_4);
		fVar4 = (35f + func_62(uParam0->f_7));
		fVar5 = unk_0x5F9521C8EE73F79F(2, 218);
		fVar6 = unk_0x5F9521C8EE73F79F(2, 219);
		Var7 = { unk_0x4BE5AF1A5ACF14E5(uParam0->f_4) };
		if (uParam0->f_1)
		{
			fVar4 = 50f;
		}
		if (fVar5 > 0.1f)
		{
			if ((Var7.f_0 + (unk_0x357058E632979E65((fVar4 * fVar5)) * unk_0x0000000050597EE2())) <= 4000f)
			{
				bVar1 = true;
				Var7.f_0 = (Var7.f_0 + (unk_0x357058E632979E65((fVar4 * fVar5)) * unk_0x0000000050597EE2()));
			}
		}
		else if (fVar5 < -0.1f)
		{
			if ((Var7.f_0 - (unk_0x357058E632979E65((fVar4 * fVar5)) * unk_0x0000000050597EE2())) >= -4000f)
			{
				bVar1 = true;
				Var7.f_0 = (Var7.f_0 - (unk_0x357058E632979E65((fVar4 * fVar5)) * unk_0x0000000050597EE2()));
			}
		}
		if (fVar6 > 0.1f)
		{
			if ((Var7.f_1 - (unk_0x357058E632979E65((fVar4 * fVar6)) * unk_0x0000000050597EE2())) >= -4000f)
			{
				bVar1 = true;
				Var7.f_1 = (Var7.f_1 - (unk_0x357058E632979E65((fVar4 * fVar6)) * unk_0x0000000050597EE2()));
			}
		}
		else if (fVar6 < -0.1f)
		{
			if ((Var7.f_1 + (unk_0x357058E632979E65((fVar4 * fVar6)) * unk_0x0000000050597EE2())) <= 8000f)
			{
				bVar1 = true;
				Var7.f_1 = (Var7.f_1 + (unk_0x357058E632979E65((fVar4 * fVar6)) * unk_0x0000000050597EE2()));
			}
		}
		fVar10 = func_61(Var7);
		if (Var7.f_2 != fVar10)
		{
			if (Var7.f_2 < fVar10)
			{
				Var7.f_2 = (Var7.f_2 + (unk_0x357058E632979E65(fVar4) * unk_0x0000000050597EE2()));
				if (Var7.f_2 > fVar10)
				{
					Var7.f_2 = fVar10;
				}
			}
			else if (Var7.f_2 > fVar10)
			{
				Var7.f_2 = (Var7.f_2 - (unk_0x357058E632979E65(fVar4) * unk_0x0000000050597EE2()));
				if (Var7.f_2 < fVar10)
				{
					Var7.f_2 = fVar10;
				}
			}
			bVar1 = true;
		}
		if (!unk_0xFA30DFD0084E92FE(uParam0->f_5, 5))
		{
			if (!unk_0x50465D2C022B9E04(2))
			{
				if (fVar0 > 0.3f)
				{
					if ((!unk_0xFA30DFD0084E92FE(uParam0->f_5, 7) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 6)) && uParam0->f_7 > 0)
					{
						unk_0x29CD142125FE177B(uParam0->f_22, "SET_ZOOM_LEVEL");
						unk_0xD44E04EBBDC4CE88(func_60(uParam0, 1));
						unk_0xF9FBC2F3F73D94C9();
						unk_0xF0059F27F7BB6680(&(uParam0->f_5), 7);
						unk_0xF0059F27F7BB6680(&(uParam0->f_5), 5);
					}
				}
				else if (fVar0 < -0.3f)
				{
					if ((!unk_0xFA30DFD0084E92FE(uParam0->f_5, 6) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 7)) && uParam0->f_7 < 4)
					{
						unk_0x29CD142125FE177B(uParam0->f_22, "SET_ZOOM_LEVEL");
						unk_0xD44E04EBBDC4CE88(func_60(uParam0, 0));
						unk_0xF9FBC2F3F73D94C9();
						unk_0xF0059F27F7BB6680(&(uParam0->f_5), 6);
						unk_0xF0059F27F7BB6680(&(uParam0->f_5), 5);
					}
				}
			}
			else if (unk_0x694514BD37EC4E94(2, 242))
			{
				if ((!unk_0xFA30DFD0084E92FE(uParam0->f_5, 7) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 6)) && uParam0->f_7 > 0)
				{
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0xD44E04EBBDC4CE88(func_60(uParam0, 1));
					unk_0xF9FBC2F3F73D94C9();
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 7);
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 5);
				}
			}
			else if (unk_0x694514BD37EC4E94(2, 241))
			{
				if ((!unk_0xFA30DFD0084E92FE(uParam0->f_5, 6) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 7)) && uParam0->f_7 < 4)
				{
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0xD44E04EBBDC4CE88(func_60(uParam0, 0));
					unk_0xF9FBC2F3F73D94C9();
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 6);
					unk_0xF0059F27F7BB6680(&(uParam0->f_5), 5);
				}
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 6) || unk_0xFA30DFD0084E92FE(uParam0->f_5, 7))
		{
			bVar2 = true;
		}
		fVar11 = 0f;
		fVar12 = 0f;
		Var13 = { unk_0x4BE5AF1A5ACF14E5(uParam0->f_4) };
		if (Var13.f_0 < Var7.f_0)
		{
			fVar11 = 50f;
		}
		else if (Var13.f_0 > Var7.f_0)
		{
			fVar11 = -50f;
		}
		if (Var13.f_1 < Var7.f_1)
		{
			fVar12 = 50f;
		}
		else if (Var13.f_1 > Var7.f_1)
		{
			fVar12 = -50f;
		}
		if (bVar1 || bVar2)
		{
			if (func_112(uParam0) == 10)
			{
				if (bVar1)
				{
					func_59(uParam0);
				}
				else
				{
					func_37(uParam0);
					func_36(uParam0);
					func_35(uParam0);
				}
				if (bVar2)
				{
					if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 6))
					{
						func_58(uParam0);
					}
					else if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 7))
					{
						func_57(uParam0);
					}
				}
				else
				{
					func_36(uParam0);
					func_35(uParam0);
				}
			}
			func_56(uParam0, &uVar3);
			unk_0x9DF315A9EFFF87AC(uParam0->f_4, uVar3);
			unk_0x6125108F6208C1F6(uParam0->f_4, Var7);
		}
		else
		{
			func_37(uParam0);
			func_36(uParam0);
			func_35(uParam0);
		}
		unk_0xC5CC0E0547FD5291(Var7, &fVar16, 1, 0);
		unk_0x220E291081F3885D((Var7.f_0 + fVar11), (Var7.f_1 + fVar12), (fVar16 + 50f), -90f, 0f, 0f);
	}
}

void func_56(var uParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 125f;
	if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 7))
	{
		*uParam1 = (*uParam1 + (fVar0 * unk_0x0000000050597EE2()));
		switch (uParam0->f_7)
		{
			case 1:
				if (*uParam1 > 100f)
				{
					*uParam1 = 100f;
					uParam0->f_7 = 0;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 7);
				}
				break;
			
			case 2:
				if (*uParam1 > 80f)
				{
					*uParam1 = 80f;
					uParam0->f_7 = 1;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 7);
				}
				break;
			
			case 3:
				if (*uParam1 > 60f)
				{
					*uParam1 = 60f;
					uParam0->f_7 = 2;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 7);
				}
				break;
			
			case 4:
				if (*uParam1 > 40f)
				{
					*uParam1 = 40f;
					uParam0->f_7 = 3;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 7);
				}
				break;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 6))
	{
		*uParam1 = (*uParam1 - (fVar0 * unk_0x0000000050597EE2()));
		switch (uParam0->f_7)
		{
			case 0:
				if (*uParam1 < 80f)
				{
					*uParam1 = 80f;
					uParam0->f_7 = 1;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 6);
				}
				break;
			
			case 1:
				if (*uParam1 < 60f)
				{
					*uParam1 = 60f;
					uParam0->f_7 = 2;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 6);
				}
				break;
			
			case 2:
				if (*uParam1 < 40f)
				{
					*uParam1 = 40f;
					uParam0->f_7 = 3;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 6);
				}
				break;
			
			case 3:
				if (*uParam1 < 20f)
				{
					*uParam1 = 20f;
					uParam0->f_7 = 4;
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 6);
				}
				break;
			}
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_16 == -1)
	{
		uParam0->f_16 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_16, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_15 == -1)
	{
		uParam0->f_15 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_15, "zoom_out_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_59(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_12, "pan_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

float func_60(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (uParam0->f_7)
		{
			case 0:
				return 0.25f;
				break;
			
			case 1:
				return 0.5f;
				break;
			
			case 2:
				return 0.75f;
				break;
			
			case 3:
				return 1f;
				break;
		}
	}
	else
	{
		switch (uParam0->f_7)
		{
			case 1:
				return 0f;
				break;
			
			case 2:
				return 0.25f;
				break;
			
			case 3:
				return 0.5f;
				break;
			
			case 4:
				return 0.75f;
				break;
			}
	}
	return 0f;
}

float func_61(struct<2> Param0, var uParam2)
{
	if (((Param0.f_1 >= 1000f && Param0.f_1 <= 1700f) && Param0.f_0 >= -700f) && Param0.f_0 <= 1100f)
	{
		return 500f;
	}
	if (((Param0.f_1 >= 3600f && Param0.f_1 <= 4100f) && Param0.f_0 >= -1700f) && Param0.f_0 <= -700f)
	{
		return 550f;
	}
	if (((Param0.f_1 >= 4880f && Param0.f_1 <= 6150f) && Param0.f_0 >= -500f) && Param0.f_0 <= 1900f)
	{
		return 850f;
	}
	return 400f;
}

float func_62(int iParam0)
{
	float fVar0;
	
	fVar0 = 100f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 90f;
			break;
		
		case 1:
			fVar0 = 60f;
			break;
		
		case 2:
			fVar0 = 50f;
			break;
		
		case 3:
			fVar0 = 25f;
			break;
		
		case 4:
			fVar0 = 10f;
			break;
	}
	return fVar0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
	if (unk_0xA3AE65489EB30BF4(uParam0->f_4))
	{
		unk_0x2880294117B40FE9(uParam0->f_4, 0);
	}
	unk_0xB64B4A29A6FE90F2(0);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 8);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 10);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 9);
	func_34(&(uParam0->f_710));
}

void func_64(struct<3> Param0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x2084D4C6C2DF616F(Param0, &(Param0.f_2), 0, 0);
		unk_0x4BA8405CBD278065(Param0, &uVar0, &Var1);
		iVar12 = 0;
		while (iVar12 < 32)
		{
			iVar11 = unk_0x3171C34AB3FE6F2E(iVar12);
			if (func_69(iVar11, 0, 0))
			{
				uVar10 = unk_0xA95CF30C72EB526E(iVar11);
				if (unk_0x724D816EA203A79E(uVar10))
				{
					Var4 = { unk_0x541C2AEF053615BC(uVar10, 0) };
					if (unk_0xF0F2FC9DE291567F(Param0, Var4, 0) < 15f && Var4.f_2 >= (Param0.f_2 - 15f))
					{
						unk_0x3EA866D3659F9BAB(unk_0xBC25C936A095B5BA(), Var4, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar12++;
		}
		iVar13 = unk_0x2E48292BBFCD88A8(&Global_1315823);
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			if (unk_0x724D816EA203A79E(Global_1315823[iVar14]))
			{
				if (((func_68(Global_1315823[iVar14], 0) || func_67(Global_1315823[iVar14], 0)) || func_66(Global_1315823[iVar14], 0)) || func_65(Global_1315823[iVar14], 0))
				{
					Var7 = { unk_0x541C2AEF053615BC(Global_1315823[iVar14], 0) };
					if (unk_0xF0F2FC9DE291567F(Param0, Var7, 0) < 15f && Var7.f_2 >= (Param0.f_2 - 15f))
					{
						unk_0x3EA866D3659F9BAB(unk_0xBC25C936A095B5BA(), Var7, 59, 1f, 1, 0, 1065353216);
					}
				}
			}
			iVar14++;
		}
		unk_0x3EA866D3659F9BAB(unk_0xBC25C936A095B5BA(), Param0, 59, 1f, 1, 0, 1065353216);
		unk_0x2139BB2FC9779BEF("scr_xm_orbital");
		unk_0xCBB675A6F4BECA38("scr_xm_orbital_blast", Param0, Var1, 1065353216, 0, 0, 0, 1);
		if (!Global_1683343)
		{
			unk_0x10B5C0C7337B8420(-1, "DLC_XM_Explosions_Orbital_Cannon", Param0, 0, 1, 0, 0);
		}
	}
}

int func_65(var uParam0, bool bParam1)
{
	if (Global_70978)
	{
		if (unk_0x724D816EA203A79E(uParam0) && (!bParam1 || unk_0xE59B7F5A03335350(uParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(uParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66(var uParam0, bool bParam1)
{
	if (Global_70978)
	{
		if (unk_0x724D816EA203A79E(uParam0) && (!bParam1 || unk_0xE59B7F5A03335350(uParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(uParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(var uParam0, bool bParam1)
{
	if (Global_70978)
	{
		if (unk_0x724D816EA203A79E(uParam0) && (!bParam1 || unk_0xE59B7F5A03335350(uParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(uParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(var uParam0, bool bParam1)
{
	if (Global_70978)
	{
		if (unk_0x724D816EA203A79E(uParam0) && (!bParam1 || unk_0xE59B7F5A03335350(uParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(uParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam0 != func_110() && func_24(iParam0, 1, 1))
	{
		if ((func_109(iParam0) && ((func_108(iParam0) == 88 || func_108(iParam0) == 81) || func_108(iParam0) == 117)) || (((((func_104(iParam0) || func_101(iParam0)) || func_97(iParam0)) && !func_96(iParam0)) && !func_95(iParam0)) && !func_93(iParam0)))
		{
			if (((!func_92(iParam0) && !func_91(iParam0)) && !func_88(iParam0, func_90(), 1)) && !func_87(iParam0))
			{
				if (iParam1 && func_86(iParam0))
				{
					return 0;
				}
				if (iParam2 && (((Global_2423644[iVar0 /*406*/].f_196 || Global_2423644[iVar0 /*406*/].f_197) || Global_2423644[iVar0 /*406*/].f_198) || unk_0xDA36F6F618ED8069(unk_0xA95CF30C72EB526E(iParam0))))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	if (((((((((((((((((((((((((iParam0 != func_110() && func_24(iParam0, 1, 1)) && !func_85(iParam0, 1, 1)) && !func_109(iParam0)) && !func_84(iParam0)) && !func_92(iParam0)) && !func_91(iParam0)) && !unk_0xB28EFAF390C5ECC7(iParam0)) && !unk_0xAB15C6DB1C6A114D(iParam0)) && !func_83(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_2423644[iVar0 /*406*/].f_396, 2)) && !unk_0xFA30DFD0084E92FE(Global_2423644[iVar0 /*406*/].f_396, 3)) && !func_88(iParam0, func_90(), 1)) && !func_87(iParam0)) && !func_19(iParam0, 0)) && !unk_0xFA30DFD0084E92FE(Global_1624079[iVar0 /*558*/].f_1, 14)) && !func_82(iParam0)) && !func_81(iParam0)) && !func_77(iParam0)) && unk_0xFA30DFD0084E92FE(Global_1589291[iVar0 /*770*/].f_142, 22)) && !unk_0xFA30DFD0084E92FE(Global_2423644[iVar0 /*406*/].f_396, 1)) && !unk_0xFA30DFD0084E92FE(Global_2423644[iVar0 /*406*/].f_305.f_9, 31)) && func_76(iParam0) != 136) && !(func_72(iParam0) && func_70(iParam0) == 164)) && !Global_1589291[iVar0 /*770*/].f_649) && !Global_1589291[iVar0 /*770*/].f_648)
	{
		if (iParam1 && func_86(iParam0))
		{
			return 0;
		}
		if (iParam2 && (((Global_2423644[iVar0 /*406*/].f_196 || Global_2423644[iVar0 /*406*/].f_197) || Global_2423644[iVar0 /*406*/].f_198) || unk_0xDA36F6F618ED8069(unk_0xA95CF30C72EB526E(iParam0))))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (func_71(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_71(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_75(iParam0))
	{
		if (func_73(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_74(iParam0, 9);
	}
	return 0;
}

bool func_74(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1624079[iParam0 /*558*/].f_11.f_4, iParam1);
}

int func_75(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_110())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/];
	}
	return -1;
}

bool func_77(int iParam0)
{
	return func_78(func_80(iParam0), 10);
}

bool func_78(int iParam0, int iParam1)
{
	return func_79(iParam0) == iParam1;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
			return 7;
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 155:
			return 6;
		
		case 73:
		case 74:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case joaat("mpsv_lp0_31"):
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 84:
			return 6;
		
		case 83:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 91:
			return 6;
		
		case 92:
			return 6;
		
		case 93:
			return 6;
		
		case 101:
			return 6;
		
		case 94:
			return 6;
		
		case 95:
			return 6;
		
		case 96:
			return 6;
		
		case 97:
			return 6;
		
		case 98:
			return 6;
		
		case 99:
			return 6;
		
		case 100:
			return 6;
		
		case 102:
			return 6;
		
		case 103:
			return 6;
		
		case 104:
			return 6;
		
		case 105:
			return 6;
		
		case 106:
			return 6;
		
		case 107:
			return 6;
		
		case 108:
			return 6;
		
		case 109:
			return 6;
		
		case 110:
			return 6;
		
		case 111:
			return 6;
		
		case 112:
			return 6;
		
		case 113:
			return 7;
		
		case 114:
			return 6;
		
		case 115:
			return 6;
		
		case 116:
			return 6;
		
		case 117:
			return 6;
		
		case 118:
			return 6;
		
		case 119:
			return 6;
		
		case 120:
			return 6;
		
		case 121:
			return 6;
		
		case 122:
			return 6;
		
		case 123:
			return 6;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 124:
			return 6;
		
		case 125:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 128:
			return 6;
		
		case 138:
			return 6;
		
		case 139:
			return 6;
		
		case 140:
			return 6;
		
		case 141:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 136:
			return 6;
		
		case 137:
			return 6;
		
		case 126:
			return 6;
		
		case 129:
			return 6;
		
		case 130:
			return 6;
		
		case 127:
			return 6;
		
		case 131:
			return 6;
		
		case 134:
			return 6;
		
		case 135:
			return 6;
		
		case 142:
			return 6;
		
		case 149:
			return 0;
		
		case 143:
			return 6;
		
		case 150:
			return 0;
		
		case 148:
			return 0;
		
		case 151:
			return 0;
		
		case 144:
			return 6;
		
		case 152:
			return 0;
		
		case 147:
			return 6;
		
		case 153:
			return 0;
		
		case 145:
			return 6;
		
		case 154:
			return 0;
		
		case 146:
			return 6;
		
		case 132:
			return 6;
		
		case 133:
			return 6;
		
		case 158:
			return 6;
		
		case 156:
			return 6;
		
		case 157:
			return 6;
		
		default:
	}
	return 11;
}

int func_80(int iParam0)
{
	if (func_24(iParam0, 0, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_1;
	}
	return 0;
}

bool func_81(int iParam0)
{
	return func_74(iParam0, 24);
}

bool func_82(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_39.f_18, 6);
}

bool func_83(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1622958[iParam0 /*35*/].f_28, 0);
}

int func_84(int iParam0)
{
	if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 11))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_110())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_19, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (func_76(iParam0) == 146)
	{
		if (iParam0 == Global_2519572.f_4807)
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_18())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_110())
	{
		if (!bParam2)
		{
			if (func_89(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1624079[iParam0 /*558*/].f_11 != func_110())
		{
			return iParam1 == Global_1624079[iParam0 /*558*/].f_11;
		}
	}
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 != func_110())
	{
		if (iParam0 != func_110())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 != func_110())
			{
				if (Global_1624079[iParam0 /*558*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_90()
{
	return Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11;
}

bool func_91(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_196 != 0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1624079[iVar0 /*558*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
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
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_95(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (func_100(iParam0, 0))
	{
		iVar0 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar0 != func_110())
		{
			if (!func_99(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_98(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (iParam0 != func_110())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305.f_21, 4);
	}
	return 0;
}

int func_100(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_110())
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (func_103(iParam0))
	{
		iVar0 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar0 != func_110())
		{
			if (!func_102(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_98(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 != func_110())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305, 6);
	}
	return 0;
}

int func_103(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_110())
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (func_107(iParam0))
	{
		iVar0 = Global_2423644[iParam0 /*406*/].f_305.f_4;
		if (iVar0 != func_110())
		{
			if (!func_106(iVar0))
			{
				return 1;
			}
		}
	}
	if (func_105(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	if (iParam0 != func_110())
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305.f_10, 6);
	}
	return 0;
}

int func_107(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_24(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_110())
			{
				return func_94(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_110() && func_24(iParam0, 1, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_305.f_12;
	}
	return -1;
}

int func_109(int iParam0)
{
	if (iParam0 != func_110() && func_24(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_305, 3);
	}
	return 0;
}

int func_110()
{
	return -1;
}

void func_111(var uParam0)
{
	if (uParam0->f_6 == -1)
	{
		uParam0->f_6 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_6, "cannon_charge_fire_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

int func_112(var uParam0)
{
	return uParam0->f_20;
}

bool func_113()
{
	return Global_68280;
}

int func_114(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	struct<9> Var11;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 221;
	iVar3 = 221;
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar2 = 241;
		iVar3 = 242;
	}
	switch (func_112(uParam0))
	{
		case 0:
			if (!unk_0x17FAADF9916EF741())
			{
				if (!unk_0x422F9EDE839E6ABB())
				{
					if (unk_0xFA30DFD0084E92FE(uParam0->f_10, 2))
					{
						unk_0x7A41D32A383895D8(500);
					}
					else
					{
						unk_0x7A41D32A383895D8(0);
					}
				}
			}
			else
			{
				uParam0->f_11 = unk_0x105601648511CC64();
				unk_0x7A41D32A383895D8(250);
				func_7(uParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x17FAADF9916EF741())
			{
				if (unk_0xFA30DFD0084E92FE(uParam0->f_10, 3))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 4);
				}
				func_39(uParam0);
				unk_0xF0059F27F7BB6680(&(uParam0->f_5), 14);
				func_139(1, 2);
				func_7(uParam0, 2);
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_10, 3))
			{
				unk_0x9216004FAC08D1DC("MP_OrbitalCannon", 0, 1);
				uParam0->f_7 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 6);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 7);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 5);
				unk_0x7456702622C62EA0(1);
				unk_0xAA356D909B9C0B43("Clear");
				unk_0x38505EF4199EB062();
				unk_0xDF089F4E40A431F9(1);
				unk_0xF0059F27F7BB6680(&(uParam0->f_8), 0);
				unk_0xF0059F27F7BB6680(&(uParam0->f_8), 1);
				func_138(uParam0);
				func_47(&(uParam0->f_714), 0, 0);
			}
			else
			{
				unk_0x1A058EB0D1ACEC78("MP_OrbitalCannon");
				if (unk_0xFA30DFD0084E92FE(uParam0->f_8, 1))
				{
					unk_0xDF089F4E40A431F9(0);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_8), 1);
				}
				unk_0x7456702622C62EA0(1);
				if (unk_0xFA30DFD0084E92FE(uParam0->f_8, 0))
				{
					unk_0xB3B265086303B76F();
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_8), 0);
				}
			}
			unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
			if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
			{
				unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
			}
			if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 3))
			{
				unk_0xECE5D27939BC44ED(0);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 3);
			}
			func_7(uParam0, 3);
			break;
		
		case 3:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_10, 3))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_10), 0);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 4);
				unk_0xB0B0FE33F4F22679(&(uParam0->f_22));
				uParam0->f_723 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
				uParam0->f_720 = { unk_0x14C8316F37CF95AA(2) };
				bVar0 = true;
			}
			else
			{
				if (!uParam0->f_2)
				{
					unk_0xD6423910AAD8A379("dlc_xm_orbital_cannon_camera_active_scene");
				}
				uParam0->f_2 = 1;
				uParam0->f_22 = unk_0x9934FEFB3B8C6DB8("ORBITAL_CANNON_CAM");
				if (unk_0xA7F138B5B1AB2CF6(uParam0->f_22))
				{
					Var4 = { func_137() };
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_ZOOM_LEVEL");
					unk_0xD44E04EBBDC4CE88(0f);
					unk_0xF9FBC2F3F73D94C9();
					if (((Var4.f_1 != 0f && Var4.f_1.f_1 != 0f) && Var4.f_1.f_2 != 0f) && Var4.f_0 != 0f)
					{
						if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
						{
							unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
						}
						unk_0xF0059F27F7BB6680(&(uParam0->f_10), 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_5), 4);
						uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
						uParam0->f_723 = { Var4.f_1 };
						unk_0x6125108F6208C1F6(uParam0->f_4, Var4.f_1);
						unk_0x3553F2A72957724E(uParam0->f_4, Var4.f_4, 2);
						unk_0x9DF315A9EFFF87AC(uParam0->f_4, Var4.f_0);
						unk_0x348665177DBFB93B(uParam0->f_4, 1);
						unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
						bVar0 = true;
					}
				}
			}
			if (bVar0)
			{
				func_7(uParam0, 7);
			}
			break;
		
		case 7:
			if ((unk_0x105601648511CC64() - uParam0->f_11) > 200)
			{
				func_7(uParam0, 4);
			}
			break;
		
		case 4:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_10, 1))
			{
				unk_0x13D5880CBA449AA9();
			}
			if ((uParam0->f_720 == 0f && uParam0->f_720.f_1 == 0f) && uParam0->f_720.f_2 == 0f)
			{
				unk_0x1732A8A5D2D39430(uParam0->f_723, 300f, 0);
			}
			else
			{
				unk_0x5C4048C4641BDB16(uParam0->f_723, uParam0->f_720, 300f, 0);
			}
			unk_0xF0059F27F7BB6680(&(uParam0->f_10), 1);
			unk_0x220E291081F3885D(uParam0->f_723, -90f, 0f, 0f);
			unk_0xECE5D27939BC44ED(1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_5), 3);
			uParam0->f_11 = unk_0x105601648511CC64();
			func_7(uParam0, 5);
			break;
		
		case 5:
			if (!func_48(&(uParam0->f_712)))
			{
				if (unk_0xF220370B0C08EC20() || (unk_0x105601648511CC64() - uParam0->f_11) > 10000)
				{
					if (unk_0xFA30DFD0084E92FE(uParam0->f_10, 1))
					{
						unk_0x13D5880CBA449AA9();
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 1);
					}
					func_47(&(uParam0->f_712), 0, 0);
				}
			}
			else if (func_49(&(uParam0->f_712), 2000, 0))
			{
				func_34(&(uParam0->f_712));
				func_7(uParam0, 6);
			}
			break;
		
		case 6:
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 0);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 14);
			uParam0->f_723 = { 0f, 0f, 0f };
			uParam0->f_720 = { 0f, 0f, 0f };
			unk_0x4C6F2776AE2C21F9(6);
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_10, 3))
			{
				func_136(uParam0);
			}
			func_7(uParam0, 8);
			break;
		
		case 8:
			if (Global_1667151 == 7 || Global_2499166)
			{
				if (!unk_0x726D9204B160D23E())
				{
					if (!unk_0x26641E1BFD792DBC())
					{
						func_130(1, 0);
						unk_0x829FA4611BD56B44(500);
					}
				}
				else
				{
					func_7(uParam0, 9);
				}
			}
			break;
		
		case 9:
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_10), 0);
			uParam0->f_723 = { 0f, 0f, 0f };
			uParam0->f_720 = { 0f, 0f, 0f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_5), 13);
			func_7(uParam0, 10);
			break;
		
		case 10:
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_10, 3))
			{
				unk_0x2C9598F05E8610C1();
			}
			iVar1 = 1;
			break;
	}
	if (!unk_0xE186ACC7BE9B244E())
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 4) && !unk_0xFA30DFD0084E92FE(uParam0->f_5, 15))
		{
			if (unk_0xA7F138B5B1AB2CF6(uParam0->f_22))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 6))
				{
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_STATE");
					unk_0x1E1FB49121565EB6(3);
					unk_0xF9FBC2F3F73D94C9();
					unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
				}
				if (func_48(&(uParam0->f_710)))
				{
					if (!func_49(&(uParam0->f_710), 1000, 0))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 5))
						{
							unk_0x29CD142125FE177B(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x1E1FB49121565EB6(3);
							unk_0xF9FBC2F3F73D94C9();
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 2);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 3);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 4);
							unk_0xF0059F27F7BB6680(&(uParam0->f_9), 5);
						}
					}
					else if (!func_49(&(uParam0->f_710), 2000, 0))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 4))
						{
							unk_0x29CD142125FE177B(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x1E1FB49121565EB6(2);
							unk_0xF9FBC2F3F73D94C9();
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 2);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 3);
							unk_0xF0059F27F7BB6680(&(uParam0->f_9), 4);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 5);
						}
					}
					else if (!func_49(&(uParam0->f_710), 3000, 0))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 3))
						{
							unk_0x29CD142125FE177B(uParam0->f_22, "SET_COUNTDOWN");
							unk_0x1E1FB49121565EB6(1);
							unk_0xF9FBC2F3F73D94C9();
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 2);
							unk_0xF0059F27F7BB6680(&(uParam0->f_9), 3);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 4);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 5);
						}
					}
					else if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 2))
					{
						unk_0x29CD142125FE177B(uParam0->f_22, "SET_COUNTDOWN");
						unk_0x1E1FB49121565EB6(0);
						unk_0xF9FBC2F3F73D94C9();
						unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 3);
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 4);
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 5);
					}
				}
				else if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 2))
				{
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_COUNTDOWN");
					unk_0x1E1FB49121565EB6(0);
					unk_0xF9FBC2F3F73D94C9();
					unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 3);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 4);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 5);
				}
				if (func_48(&(uParam0->f_714)))
				{
					unk_0x29CD142125FE177B(uParam0->f_22, "SET_CHARGING_LEVEL");
					unk_0xD44E04EBBDC4CE88((IntToFloat(func_129(&(uParam0->f_714), 0, 0)) / 3000f));
					unk_0xF9FBC2F3F73D94C9();
					if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 0))
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 0);
					}
					if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 1))
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 1);
					}
				}
				else if (func_112(uParam0) == 10)
				{
					if (!unk_0xFA30DFD0084E92FE(uParam0->f_9, 0))
					{
						unk_0x29CD142125FE177B(uParam0->f_22, "SET_CHARGING_LEVEL");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xF9FBC2F3F73D94C9();
						unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
						if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 1))
						{
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_9), 1);
						}
					}
				}
				unk_0x996AC9A66B2A5A3F(0);
				unk_0x4B6031094354FED6(uParam0->f_22, 255, 255, 255, 0, 1);
				unk_0x2A025E7CEBB76D14();
				if (unk_0xFA30DFD0084E92FE(uParam0->f_5, 13) || unk_0x8A0D8839261BAEEF(0))
				{
					func_127(&(uParam0->f_23));
					func_126(unk_0xE57EAD1FEA2A6FAF(0, 202, 1), "HUD_INPUT3", &(uParam0->f_23), 0);
					func_126(unk_0xE57EAD1FEA2A6FAF(0, 203, 1), "ORB_CAN_RE", &(uParam0->f_23), 0);
					if (unk_0x50465D2C022B9E04(2))
					{
						func_126(unk_0xE57EAD1FEA2A6FAF(2, iVar3, 1), "ORB_CAN_ZOOMO", &(uParam0->f_23), 0);
						func_126(unk_0xE57EAD1FEA2A6FAF(2, iVar2, 1), "ORB_CAN_ZOOMI", &(uParam0->f_23), 0);
					}
					else
					{
						func_126(unk_0xE57EAD1FEA2A6FAF(2, iVar2, 1), "ORB_CAN_ZOOM", &(uParam0->f_23), 0);
					}
					func_126(unk_0xE57EAD1FEA2A6FAF(2, 24, 1), "ORB_CAN_FIRE", &(uParam0->f_23), 0);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_5), 13);
				}
				Var11 = { func_125() };
				func_124(&(uParam0->f_23), 1f);
				func_116(&(uParam0->f_21), &Var11, &(uParam0->f_23), func_123(&(uParam0->f_23)));
				func_115(1);
			}
		}
	}
	return iVar1;
}

void func_115(int iParam0)
{
	Global_1364578.f_1079 = iParam0;
}

void func_116(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x8A0D8839261BAEEF(2))
	{
		*uParam2 = 0;
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(0);
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
		}
		func_122(uParam2);
	}
	if (Global_1315692 < 2)
	{
		func_121(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			*uParam0 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
		}
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			unk_0x4523F5B652CA041D(*uParam0, "CLEAR_ALL");
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(1);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xFA30DFD0084E92FE(uParam2->f_676, iVar0))
				{
					unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar0);
					if (!unk_0xFA30DFD0084E92FE(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_120(unk_0xE57EAD1FEA2A6FAF(iVar1, iVar2, 1));
						if (iVar3 < 358)
						{
							func_120(unk_0xE57EAD1FEA2A6FAF(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_120(unk_0xC7CF72D26EA6A227(uVar4, uVar5, 1));
					}
					if (unk_0xFA30DFD0084E92FE(uParam2->f_674, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x4C36886AAFD04CF8(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x64989E60CF560CA1();
					}
					else if (unk_0xFA30DFD0084E92FE(uParam2->f_675, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x607C19B90D297FE2(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x64989E60CF560CA1();
					}
					else
					{
						func_119(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (unk_0xFA30DFD0084E92FE(uParam2->f_678, iVar0))
						{
							unk_0x5E5DBD0A6623969E(1);
							unk_0x1E1FB49121565EB6(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(0);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar0);
					func_120(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xF1734B55490E9045(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_120(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xFA30DFD0084E92FE(uParam2->f_674, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x4C36886AAFD04CF8(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x64989E60CF560CA1();
					}
					else if (unk_0xFA30DFD0084E92FE(uParam2->f_675, iVar0))
					{
						unk_0x57016C44F10111F0(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x607C19B90D297FE2(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x64989E60CF560CA1();
					}
					else
					{
						func_119(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						unk_0x5E5DBD0A6623969E(0);
						unk_0x1E1FB49121565EB6(358);
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar0++;
			}
			unk_0x29CD142125FE177B(*uParam0, "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88(uParam2->f_686);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1E1FB49121565EB6(0);
			unk_0xF9FBC2F3F73D94C9();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_118(*uParam0, uParam1);
	}
	func_117();
}

void func_117()
{
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
}

void func_118(var uParam0, var uParam1)
{
	unk_0x4B6031094354FED6(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_119(var uParam0)
{
	unk_0x57016C44F10111F0(uParam0);
	unk_0x64989E60CF560CA1();
}

void func_120(char* sParam0)
{
	unk_0xCB30200B8055CA57(sParam0);
}

void func_121(int iParam0)
{
	Global_1315692 = iParam0;
}

void func_122(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_123(var uParam0)
{
	return uParam0->f_679;
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_686 = fParam1;
}

struct<9> func_125()
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

void func_126(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_127(var uParam0)
{
	func_128(uParam0);
	uParam0->f_679 = 1;
}

void func_128(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
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

int func_129(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_130(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_135(1);
	}
	else
	{
		func_131(iParam1);
	}
}

void func_131(int iParam0)
{
	func_134();
	if (iParam0 == 0)
	{
		if (unk_0x147BDB3FD23B6218())
		{
			return;
		}
	}
	if (func_133() == 0 || unk_0xE186ACC7BE9B244E())
	{
		func_132(1);
		unk_0x42905CE57AFAA9BB(0);
		unk_0x42905CE57AFAA9BB(0);
	}
}

void func_132(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_133()
{
	return Global_1312466.f_20;
}

void func_134()
{
	Global_2459240 = 1;
}

void func_135(int iParam0)
{
	if ((func_133() == 1 || unk_0xE186ACC7BE9B244E()) || iParam0)
	{
		func_132(0);
		unk_0x42905CE57AFAA9BB(1);
		unk_0x42905CE57AFAA9BB(1);
		unk_0x977BAC66E731124F();
	}
}

void func_136(var uParam0)
{
	if (uParam0->f_14 == -1)
	{
		uParam0->f_14 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_14, "background_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

struct<7> func_137()
{
	struct<7> Var0;
	
	Var0.f_1 = { -8.8511f, 6835.003f, 400f };
	Var0.f_4 = { -90f, 0f, 0f };
	Var0.f_0 = 100f;
	if (Global_2499167 > -1)
	{
		Var0.f_1 = Global_4456448.f_53481[Global_2499167 /*130*/];
		Var0.f_1.f_1 = Global_4456448.f_53481[Global_2499167 /*130*/].f_1;
	}
	return Var0;
}

void func_138(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		uParam0->f_13 = unk_0x2F079D1FC5F6CB99();
		unk_0xC4BA30B532FE260F(uParam0->f_13, "cannon_activating_loop", "dlc_xm_orbital_cannon_sounds", 1);
	}
}

void func_139(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0x333E9D5D4EDF334A())
			{
				unk_0x366732E3BB30D96F(Global_1652409);
				Global_1652409 = -1f;
				unk_0xE7C5BCEA607A2AAC(false);
				bVar2 = true;
			}
			unk_0xB5005CEE158E93E5(bVar0);
			unk_0xF0059F27F7BB6680(&(Global_1646040[unk_0xB5CEFD608600A09F() /*199*/].f_198), 0);
		}
		else
		{
			if (unk_0x2CC2FE03B4CB423B() || unk_0x673C9B15B29B7BBA())
			{
				unk_0xB5005CEE158E93E5(false);
				bVar2 = true;
			}
			unk_0xE7C5BCEA607A2AAC(bVar0);
			Global_1652409 = unk_0x0C03C35C143D37FC();
			unk_0x366732E3BB30D96F(0.5f);
			unk_0xF0059F27F7BB6680(&(Global_1646040[unk_0xB5CEFD608600A09F() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1652410 == -1)
			{
				Global_1652410 = unk_0x2F079D1FC5F6CB99();
			}
			if (!Global_1652410 == -1 && unk_0x1BD5EE88F32433CD(Global_1652410))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0xC4BA30B532FE260F(Global_1652410, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0xC4BA30B532FE260F(Global_1652410, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0xC4BA30B532FE260F(Global_1652410, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0xC4BA30B532FE260F(Global_1652410, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x2CC2FE03B4CB423B() || unk_0x673C9B15B29B7BBA())
		{
			unk_0xB5005CEE158E93E5(bVar0);
			unk_0x7CB6FD92BE491AD9(&(Global_1646040[unk_0xB5CEFD608600A09F() /*199*/].f_198), 0);
		}
		if (unk_0x333E9D5D4EDF334A())
		{
			unk_0x366732E3BB30D96F(Global_1652409);
			Global_1652409 = -1f;
			unk_0xE7C5BCEA607A2AAC(bVar0);
			unk_0x7CB6FD92BE491AD9(&(Global_1646040[unk_0xB5CEFD608600A09F() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1652410 == -1)
			{
				Global_1652410 = unk_0x2F079D1FC5F6CB99();
			}
			if (!Global_1652410 == -1 && unk_0x1BD5EE88F32433CD(Global_1652410))
			{
				if (iParam1 == 1)
				{
					unk_0xC4BA30B532FE260F(Global_1652410, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0xC4BA30B532FE260F(Global_1652410, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_140(!bVar0);
}

void func_140(bool bParam0)
{
	func_141(252, bParam0, -1, 1);
}

void func_141(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_143())
	{
		iVar0 = Global_2557346[iParam0 /*3*/][func_142(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, uParam1, iParam3);
		}
	}
}

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_143()
{
	return 1;
	return 0;
}

void func_144(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_30(0))
		{
			func_27(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_145()
{
	Global_17206.f_6 = 1;
}

void func_146()
{
	Global_2519572.f_4518 = 0;
}

int func_147(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	
	if (func_51() || (func_200() && iParam0))
	{
		if (func_198(unk_0xB5CEFD608600A09F()))
		{
			func_197(0);
		}
		if (((!func_196() && !func_195()) && !func_194()) || func_193())
		{
			if (!func_192(bParam2))
			{
				return 0;
			}
		}
		if (!func_191())
		{
			func_190(0);
		}
		bVar0 = func_189();
		bVar1 = func_188();
		bVar2 = func_187();
		bVar3 = func_186();
		bVar4 = func_185();
		bVar5 = func_184();
		bVar6 = func_183();
		bVar7 = func_182();
		bVar8 = func_181();
		iVar9 = func_179();
		func_160(0);
		func_159();
		if (!bParam1)
		{
			if (bVar0)
			{
				func_158();
			}
			if (bVar1)
			{
				func_157();
			}
			if (bVar2)
			{
				func_156();
			}
			if (bVar3)
			{
				func_155();
			}
			if (bVar4)
			{
				func_154();
			}
			if (bVar5)
			{
				func_153();
			}
			if (bVar6)
			{
				func_152();
			}
			if (bVar7)
			{
				func_151();
			}
			if (bVar8)
			{
				func_150();
			}
			if (iVar9 != 30)
			{
				func_149(iVar9);
			}
		}
		func_148(0);
		Global_2448723.f_1.f_2802 = 0;
	}
	return 1;
}

void func_148(int iParam0)
{
	Global_2447942.f_775 = iParam0;
}

void func_149(int iParam0)
{
	Global_2447942.f_34 = iParam0;
}

void func_150()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_3), 6);
}

void func_151()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_3), 3);
}

void func_152()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_3), 1);
}

void func_153()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 30);
}

void func_154()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 29);
}

void func_155()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 9);
}

void func_156()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_3), 5);
}

void func_157()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 26);
}

void func_158()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 21);
}

void func_159()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_2), 12);
}

void func_160(bool bParam0)
{
	var uVar0;
	
	if (func_177() && !func_193())
	{
		func_176();
		func_175();
	}
	else
	{
		uVar0 = func_174();
		func_173();
		func_171(1);
		func_170();
		func_169();
		func_168();
		if (uVar0 && !bParam0)
		{
			func_167();
		}
	}
	if (Global_2455997.f_8)
	{
		func_166();
	}
	func_165();
	func_164();
	func_163();
	func_162();
	if (!func_191())
	{
		func_161();
		func_190(0);
	}
	func_175();
	func_148(0);
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x81359042EBE2402F(0);
	}
}

void func_161()
{
	Global_2447942.f_6 = -1;
}

void func_162()
{
	Global_2447942.f_34 = 30;
}

void func_163()
{
	Global_2447942.f_622 = 0;
}

void func_164()
{
	Global_2447942.f_605 = 0;
}

void func_165()
{
	unk_0x7CB6FD92BE491AD9(&(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18), 15);
}

void func_166()
{
	Global_2455997.f_8 = 0;
	Global_2455997.f_7 = 0;
}

void func_167()
{
	unk_0xF0059F27F7BB6680(&(Global_2447942.f_3), 2);
}

void func_168()
{
	unk_0x7CB6FD92BE491AD9(&Global_2447942, 7);
}

void func_169()
{
	unk_0x7CB6FD92BE491AD9(&Global_2447942, 6);
}

void func_170()
{
	Global_2447942 = 0;
	Global_2447942.f_2 = 0;
	Global_2447942.f_3 = 0;
}

void func_171(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2448723.f_1.f_2798 = 0;
	Global_2448723.f_1.f_2799 = 0;
	Global_2448723.f_1.f_2821 = 0;
	Global_2448723.f_1.f_2805 = 0;
	Global_2448723.f_1.f_2806 = 0;
	Global_2448723.f_1.f_2809 = 0;
	Global_2448723.f_1.f_2810 = 0;
	Global_2448723.f_1.f_2808 = -1;
	Global_2448723.f_1.f_2811 = -1;
	Global_2448723.f_1.f_2813 = 0;
	Global_2448723.f_1.f_2814 = 0;
	Global_2448723.f_1.f_2815 = 0;
	Global_2448723.f_1.f_2816 = 0;
	Global_2448723.f_1.f_2817 = 0;
	Global_2448723.f_1.f_2818 = 0;
	Global_2448723.f_1.f_2822 = -1;
	if (bParam0)
	{
		Global_2448723.f_1.f_2819 = -1;
		Global_2448723.f_1.f_2820 = -1;
	}
	Global_2448723.f_1.f_2841 = 0;
	func_172();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2448723.f_1.f_845[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2444701.f_33 = -1;
	Global_2444701.f_34 = -1;
}

void func_172()
{
	Global_2444701.f_32 = 0;
}

void func_173()
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 32)
	{
		Global_2445696[iVar13 /*37*/] = { Var0 };
		StringCopy(&(Global_2445696[iVar13 /*37*/].f_13), "", 64);
		StringCopy(&(Global_2445696[iVar13 /*37*/].f_29), "", 16);
		Global_2445696[iVar13 /*37*/].f_33 = 0;
		Global_2445696[iVar13 /*37*/].f_34 = 0;
		Global_2445696[iVar13 /*37*/].f_35 = 0;
		iVar13++;
	}
	Global_2445696.f_1185 = 0;
	Global_2445696.f_1186 = 0;
}

bool func_174()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_3, 2);
}

void func_175()
{
	unk_0x7CB6FD92BE491AD9(&(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18), 5);
}

void func_176()
{
	unk_0x7CB6FD92BE491AD9(&(Global_2447942.f_2), 11);
}

int func_177()
{
	if (((func_196() || func_195()) || func_194()) || func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 1);
}

int func_179()
{
	if (func_180())
	{
		return 1;
	}
	return Global_2447942.f_34;
}

bool func_180()
{
	return Global_1312814 == 10;
}

bool func_181()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_3, 6);
}

bool func_182()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_3, 3);
}

bool func_183()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_3, 1);
}

bool func_184()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 30);
}

bool func_185()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 29);
}

bool func_186()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 9);
}

bool func_187()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_3, 5);
}

bool func_188()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 26);
}

bool func_189()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 21);
}

void func_190(int iParam0)
{
	if (iParam0 == -1)
	{
		Global_2447942.f_776++;
	}
	else
	{
		Global_2447942.f_776 = iParam0;
	}
}

bool func_191()
{
	return Global_2447942.f_624;
}

int func_192(bool bParam0)
{
	if ((((unk_0x5F716E419581BD2A() || unk_0x2C4A46DA7B22C32E()) || unk_0x24980EF2727B50E4()) || unk_0x1D2E285AB69C4EBF()) || unk_0x0D3747E8773800EE())
	{
		if (bParam0)
		{
			unk_0x376931B7B928AA1A(43, 0, 0);
			return 1;
		}
		if (unk_0x24980EF2727B50E4() || unk_0x1D2E285AB69C4EBF())
		{
			return 0;
		}
		else if (unk_0x2C4A46DA7B22C32E())
		{
			if (Global_2448723.f_1.f_2802 == 0)
			{
				unk_0x3C5CD1202C000620();
				Global_2448723.f_1.f_2802 = 1;
			}
			return 0;
		}
		else
		{
			return 0;
		}
		return 0;
	}
	return 1;
}

bool func_193()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 27);
}

bool func_194()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 2);
}

bool func_195()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942, 20);
}

bool func_196()
{
	return Global_2447942.f_586;
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_13.f_1), 0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_13.f_1), 0);
	}
}

bool func_198(int iParam0)
{
	return func_199(iParam0);
}

bool func_199(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

var func_200()
{
	return Global_2447942.f_643;
}

void func_201()
{
	Global_2436641.f_1151.f_10 = 1;
}

bool func_202()
{
	return Global_2436641.f_1151.f_10;
}

void func_203()
{
	Global_2436641.f_1151.f_9 = 1;
}

bool func_204()
{
	return Global_2436641.f_1151.f_9;
}

void func_205()
{
	Global_2529958.f_258 = 1;
}

int func_206(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (((((func_24(unk_0xB5CEFD608600A09F(), 1, 1) && !unk_0xFA30DFD0084E92FE(Global_2436641.f_1194.f_4, 0)) && !unk_0xFA30DFD0084E92FE(Global_2359302, 15)) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !func_222()) && !func_221())
	{
		if ((func_220(uParam0) && func_214(uParam0)) && func_211(uParam0))
		{
			iVar0 = 1;
		}
	}
	if (unk_0x8A0D8839261BAEEF(2))
	{
		func_8(&(uParam0->f_18));
		uParam0->f_18 = -1;
	}
	if (iVar0 && !unk_0x8FCEEB789599BD9B(0, 19))
	{
		if (uParam0->f_18 == -1)
		{
			func_210(&(uParam0->f_18), 4, "ORB_CAN_START", 0, 0, 0, 0);
		}
		else if (func_209(uParam0->f_18, 1))
		{
			func_208();
			func_207();
			func_8(&(uParam0->f_18));
			if (!unk_0xFA30DFD0084E92FE(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_405, 1))
			{
				unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_405), 1);
			}
			return 1;
		}
	}
	else
	{
		func_8(&(uParam0->f_18));
	}
	return 0;
}

void func_207()
{
	if (Global_2436641.f_2703[0 /*80*/].f_2 != 0)
	{
		Global_2436641.f_2703[0 /*80*/].f_2 = 5;
	}
}

void func_208()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 != 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

int func_209(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_30(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/] == 1 && Global_36613[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36613[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36613[iVar0 /*32*/].f_5 = 1;
			Global_36613[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36613[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36613[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_210(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*uParam0 == -1)
		{
			func_8(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/] = 1;
			Global_36613[iVar0 /*32*/].f_1 = Global_36814;
			Global_36814++;
			Global_36613[iVar0 /*32*/].f_4 = 0;
			Global_36613[iVar0 /*32*/].f_29 = 0;
			Global_36613[iVar0 /*32*/].f_5 = 0;
			Global_36613[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36613[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36613[iVar0 /*32*/].f_6 = iParam3;
			Global_36613[iVar0 /*32*/].f_31 = unk_0x8A55B15F4133C912();
			Global_36613[iVar0 /*32*/].f_7 = 0;
			Global_36613[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_36613[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36613[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36613[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36613[iVar0 /*32*/].f_12 = 0;
				Global_36613[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36613[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_211(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	fVar0 = 0f;
	Var1 = { 0f, 0f, 0f };
	Var4 = { 0f, 0f, 0f };
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 1.5f;
			Var1 = { 252.0321f, 6126.419f, -160.3706f };
			Var4 = { 253.1175f, 6126.419f, -158.369f };
			break;
		
		case 1:
			fVar0 = 1.5f;
			Var1 = { 254.3575f, 6126.419f, -160.3894f };
			Var4 = { 255.5235f, 6126.419f, -158.3873f };
			break;
		
		case 2:
			fVar0 = 1.5f;
			Var1 = { 260.6575f, 6126.419f, -160.3736f };
			Var4 = { 262.075f, 6126.419f, -158.3827f };
			break;
		
		case 3:
			fVar0 = 1.5f;
			Var1 = { 263.2076f, 6126.419f, -160.3984f };
			Var4 = { 264.5398f, 6126.419f, -158.3723f };
			break;
	}
	Var8 = { func_213(&uVar7) };
	iVar11 = 0;
	while (iVar11 < 32)
	{
		iVar12 = unk_0x3171C34AB3FE6F2E(iVar11);
		if ((iVar12 != func_110() && iVar12 != unk_0xB5CEFD608600A09F()) && func_24(iVar12, 1, 1))
		{
			if (func_212(Var8))
			{
				if (unk_0x0C265B3C448E6954(unk_0xA95CF30C72EB526E(iVar12), Var1, Var4, fVar0, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (unk_0x4DBCE270B354E123(unk_0xA95CF30C72EB526E(iVar12), Var8, 1f, 1f, 1f, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar11++;
	}
	return 1;
}

int func_212(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_213(var uParam0)
{
	int iVar0;
	
	if (Global_2499167 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2499165, iVar0))
			{
				if (Global_4456448.f_53481[iVar0 /*130*/].f_124 > -1 && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Global_4456448.f_53481[iVar0 /*130*/], 1.5f, 1.5f, 1.5f, 0, 1, 0))
				{
					*uParam0 = Global_4456448.f_53481[iVar0 /*130*/].f_124;
					Global_2499167 = iVar0;
					return Global_4456448.f_53481[iVar0 /*130*/];
				}
			}
			iVar0++;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_2499165, Global_2499167))
	{
		if (Global_4456448.f_53481[Global_2499167 /*130*/].f_124 > -1 && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Global_4456448.f_53481[Global_2499167 /*130*/], 1.5f, 1.5f, 1.5f, 0, 1, 0))
		{
			*uParam0 = Global_4456448.f_53481[Global_2499167 /*130*/].f_124;
			return Global_4456448.f_53481[Global_2499167 /*130*/];
		}
	}
	Global_2499167 = -1;
	*uParam0 = -1;
	return 0f, 0f, 0f;
}

int func_214(var uParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0f;
	switch (uParam0->f_17)
	{
		case 0:
			fVar0 = 0f;
			break;
		
		case 1:
			fVar0 = 0f;
			break;
		
		case 2:
			fVar0 = 0f;
			break;
		
		case 3:
			fVar0 = 0f;
			break;
	}
	if (!func_212(func_213(&iVar1)))
	{
		if (func_216(unk_0xBC25C936A095B5BA(), func_213(&iVar1), 45f))
		{
			if (iVar1 > -1)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_215(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), fVar0, 45f))
	{
		return 1;
	}
	return 0;
}

int func_215(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

bool func_216(var uParam0, struct<3> Param1, float fParam4)
{
	return func_217(unk_0x541C2AEF053615BC(uParam0, 1), unk_0x349C94FFF43E2979(uParam0), Param1, fParam4);
}

bool func_217(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { unk_0x89D97EB4FAE4A574(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_218(func_219(Var0), func_219(Param4 - Param0));
	return unk_0xA0C2D0D31162D0F6(uVar3) <= fParam7;
}

float func_218(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_219(struct<3> Param0)
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

int func_220(var uParam0)
{
	int iVar0;
	
	if (!func_212(func_213(&iVar0)))
	{
		if (iVar0 > -1)
		{
			uParam0->f_17 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_221()
{
	return unk_0x0352C1B6B66A87AC() != 0;
}

int func_222()
{
	if (Global_4253672.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

void func_223()
{
	unk_0xBF463BC3D6FFDE31(32, 0, -1);
	func_224(0, -1, 0);
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_4())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_226())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(155))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_225(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_226()
{
	return Global_2447942.f_581;
}

