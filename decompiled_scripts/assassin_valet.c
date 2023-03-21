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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<39> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 16;
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
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
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
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
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
	var uLocal_281 = 21;
	var uLocal_282 = 6;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 1132396544;
	var uLocal_291 = 0;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 8;
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
	var uLocal_352 = -1;
	var uLocal_353 = 1092616192;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<7> Local_360 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	int iLocal_371 = 0;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	bool bLocal_375 = 0;
	bool bLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
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
	var uLocal_420 = 3;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 1;
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
	var uLocal_441 = 2;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 13;
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
	var uLocal_459 = 13;
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
	var uLocal_668 = 13;
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
	var uLocal_877 = 13;
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
	var uLocal_891 = 13;
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
	var uLocal_905 = 13;
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
	var uLocal_919 = 13;
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
	struct<55> Local_965 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033[3] = { 0, 0, 0 };
	int iLocal_1037[2] = { 0, 0 };
	int iLocal_1040 = 0;
	int iLocal_1041[2] = { 0, 0 };
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	int iLocal_1046 = 0;
	int iLocal_1047[2] = { 0, 0 };
	var uLocal_1050[3] = { 0, 0, 0 };
	var uLocal_1054[2] = { 0, 0 };
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	struct<8> Local_1060[3];
	struct<8> Local_1085[2];
	struct<8> Local_1102[2];
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121[3] = { 0, 0, 0 };
	var uLocal_1125[2] = { 0, 0 };
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	bool bLocal_1135 = 0;
	int iLocal_1136 = 0;
	bool bLocal_1137 = 0;
	int iLocal_1138 = 0;
	bool bLocal_1139 = 0;
	bool bLocal_1140 = 0;
	bool bLocal_1141 = 0;
	bool bLocal_1142 = 0;
	int iLocal_1143 = 0;
	bool bLocal_1144 = 0;
	bool bLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	bool bLocal_1149 = 0;
	bool bLocal_1150 = 0;
	bool bLocal_1151 = 0;
	bool bLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	bool bLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = 0;
	int iLocal_1158 = 0;
	bool bLocal_1159 = 0;
	int iLocal_1160 = 0;
	bool bLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	bool bLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	bool bLocal_1167 = 0;
	int iLocal_1168 = 0;
	bool bLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	bool bLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	bool bLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	bool bLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	bool bLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	var uLocal_1196[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1202 = 0;
	var uLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	var uLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	int iLocal_1216 = 0;
	int iLocal_1217 = 0;
	float fLocal_1218 = 0f;
	float fLocal_1219 = 0f;
	float fLocal_1220 = 0f;
	float fLocal_1221[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1227[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1233 = 0f;
	float fLocal_1234 = 0f;
	float fLocal_1235[3] = { 0f, 0f, 0f };
	var uLocal_1239[3] = { 0, 0, 0 };
	float fLocal_1243 = 0f;
	float fLocal_1244 = 0f;
	float fLocal_1245 = 0f;
	int iLocal_1246 = 0;
	float fLocal_1247 = 0f;
	struct<3> Local_1248[3];
	struct<3> Local_1258[3];
	struct<3> Local_1268[5];
	struct<3> Local_1284 = { 0, 0, 0 } ;
	struct<3> Local_1287 = { 0, 0, 0 } ;
	struct<3> Local_1290 = { 0, 0, 0 } ;
	struct<3> Local_1293 = { 0, 0, 0 } ;
	struct<3> Local_1296 = { 0, 0, 0 } ;
	struct<3> Local_1299 = { 0, 0, 0 } ;
	struct<3> Local_1302 = { 0, 0, 0 } ;
	struct<3> Local_1305 = { 0, 0, 0 } ;
	struct<3> Local_1308 = { 0, 0, 0 } ;
	float fLocal_1311 = 0f;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	var uLocal_1316[2] = { 0, 0 };
	int iLocal_1319 = 0;
	int iLocal_1320[3] = { 0, 0, 0 };
	var uLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	int iLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
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
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	bool bLocal_1363 = 0;
	var uLocal_1364 = 16;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
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
	var uLocal_1386 = 0;
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
	var uLocal_1399 = 0;
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
	var uLocal_1424 = 0;
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
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
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
	var uLocal_1531 = -1;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 1000;
	var uLocal_1539 = 1000;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 8;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 4;
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
	var uLocal_1562 = 4;
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
	var uLocal_1577 = 4;
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
	var uLocal_1592 = 4;
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
	var uLocal_1607 = 4;
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
	var uLocal_1622 = 4;
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
	var uLocal_1637 = 4;
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
	var uLocal_1652 = 4;
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
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	struct<3> Local_1665 = { 0, 0, 0 } ;
	float fLocal_1668 = 0f;
	struct<3> Local_1669 = { 0, 0, 0 } ;
	float fLocal_1672 = 0f;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	struct<3> Local_1675 = { 0, 0, 0 } ;
	struct<3> Local_1678 = { 0, 0, 0 } ;
	struct<3> Local_1681 = { 0, 0, 0 } ;
	struct<3> Local_1684 = { 0, 0, 0 } ;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	int iLocal_1690 = 0;
	struct<12> Local_1691 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	uLocal_54 = unk_0x2C4CAB2984F6DB6B();
	uLocal_55 = unk_0xEB9EC7BD70F671E1();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1031 = 3;
	iLocal_1210 = 37000;
	iLocal_1216 = -1;
	fLocal_1218 = 90000f;
	fLocal_1243 = 135f;
	fLocal_1245 = 0f;
	fLocal_1247 = 0f;
	Local_1293 = { -1162.985f, -161.715f, -38.221f };
	Local_1296 = { -1327.63f, -266.202f, 38.221f };
	Local_1299 = { -1236.661f, -197.316f, 39.6313f };
	Local_1302 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1308 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1311 = 40f;
	iLocal_1325 = joaat("a_m_y_beachvesp_02");
	iLocal_1326 = joaat("fbi2");
	iLocal_1327 = joaat("s_m_m_highsec_01");
	iLocal_1328 = joaat("s_m_m_highsec_02");
	iLocal_1329 = joaat("washington");
	Local_1665 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1668 = 304.201f;
	Local_1669 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1672 = 137.9228f;
	Local_1675 = { -1510.733f, -935.96f, 10.90214f };
	Local_1678 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1681 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1684 = { 4.686822f, -0.024198f, -72.45972f };
	if (unk_0xB9B05E900D325C36(3))
	{
		unk_0x1E420F926A7BC4D2("ASS1_FAIL");
		func_506(&(Global_104439.f_19824.f_1), 1024);
		func_504();
		func_499();
	}
	unk_0xB5533C0C8A2B9BF2(1);
	iLocal_1045 = unk_0x0031992CA618A445();
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
	}
	if (func_498())
	{
		if (func_497())
		{
			iLocal_1153 = 1;
		}
		bLocal_1142 = true;
	}
	else
	{
		bLocal_1142 = false;
	}
	func_496();
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
	func_495();
	iLocal_269 = 0;
	Local_57 = { func_493(iLocal_269) };
	unk_0x3AA3AACE81B0D52A(iLocal_1327, 1);
	unk_0x3AA3AACE81B0D52A(iLocal_1328, 1);
	unk_0x695333ABC0398A65();
	if (func_498())
	{
		bLocal_376 = true;
		iLocal_1209 = func_492();
		if (Global_87084)
		{
			if (iLocal_1209 <= 1)
			{
				iLocal_1209++;
			}
		}
		func_491();
		if (iLocal_1209 == 0)
		{
			if (iLocal_1153)
			{
				func_489();
				while (!func_488())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar0 = func_444(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iVar0)) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iVar0))) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iVar0))) && !unk_0xC4DF0B3808F615ED(iVar0))
				{
					unk_0x24B72A49849215AE(iVar0, 1084227584);
				}
				else
				{
					unk_0xE9F8539D5AF6B052(&iVar0);
				}
			}
			func_443(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1209 == 1)
		{
			if (iLocal_1153)
			{
				func_489();
				while (!func_488())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar1 = func_444(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iVar1)) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iVar1))) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iVar1))) && !unk_0xC4DF0B3808F615ED(iVar1))
				{
					unk_0x24B72A49849215AE(iVar1, 1084227584);
				}
				else
				{
					unk_0xE9F8539D5AF6B052(&iVar1);
				}
			}
			func_443(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1209 == 2)
		{
			if (iLocal_1153)
			{
				func_489();
				while (!func_488())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2 = func_444(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0x9C4740BA7F0AF553(unk_0xE9559A12052415BE(iVar2)) && !unk_0xF9CDF5CA6A1D6756(unk_0xE9559A12052415BE(iVar2))) && !unk_0x1DBFCF939B3B47D0(unk_0xE9559A12052415BE(iVar2))) && !unk_0xC4DF0B3808F615ED(iVar2))
				{
					unk_0x24B72A49849215AE(iVar2, 1084227584);
				}
				else
				{
					unk_0xE9F8539D5AF6B052(&iVar2);
				}
			}
			func_443(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0x2E2DB6385FA6CB7B("M_ASS1", 0);
		if (iLocal_1143)
		{
			if (func_442())
			{
				func_441();
			}
		}
		else if (!unk_0x8682D8A6269E52C9(iLocal_1045))
		{
			func_434();
			if (iLocal_1031 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_144();
			func_92();
			if (iLocal_1158)
			{
				func_87();
			}
			if (!bLocal_1141)
			{
				if (iLocal_1031 >= 9 && iLocal_1031 < 11)
				{
					func_83(&uLocal_1203, &fLocal_1218, &bLocal_1140, &bLocal_1141);
				}
			}
			func_55();
			func_53();
			if (((iLocal_1134 || bLocal_1139) && iLocal_1031 < 11) || (bLocal_1169 && iLocal_1031 < 11))
			{
				if (!func_52(&uLocal_1354) && iLocal_1031 > 8)
				{
					func_49(&uLocal_1354);
				}
				else if (iLocal_1031 < 8 || func_46(&uLocal_1354) > 5f)
				{
					if (iLocal_1044 == 1)
					{
						func_31(1);
					}
					else if (iLocal_1044 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&uLocal_1354) > 2.5f)
				{
					if (!iLocal_1170)
					{
						if (!bLocal_1189)
						{
							iLocal_1057 = func_30(70f, 0);
						}
						else
						{
							iLocal_1057 = func_30(70f, 1);
						}
						if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
						{
							if (!unk_0x8682D8A6269E52C9(iLocal_1057))
							{
								unk_0xD706D9D85701BFBD(iLocal_1057);
								if (iLocal_1044 == 1)
								{
									if (unk_0x76B3C79DE564AFC6(iLocal_1314))
									{
										if (!unk_0x90219307C9D2728D(iLocal_1057, 0))
										{
											unk_0xC6387774FD1AA476(iLocal_1057, iLocal_1314, iLocal_1314, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0x76B3C79DE564AFC6(iLocal_1057) && !unk_0x8682D8A6269E52C9(iLocal_1057))
									{
										func_28(iLocal_1057, 6, "OJAvaGUARD2");
										func_27(&uLocal_1364, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1044 == 8)
								{
									if (unk_0x76B3C79DE564AFC6(iLocal_1312) && unk_0x432757A9E7AAFA96(iLocal_1312, 0))
									{
										unk_0xC6387774FD1AA476(iLocal_1057, iLocal_1312, iLocal_1312, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1364, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0x11E129FEA365DF5C(iLocal_1057, unk_0x0031992CA618A445(), -1, 0);
									func_2(iLocal_1057);
								}
							}
						}
						iLocal_1170 = 1;
					}
				}
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(iLocal_1045, 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(iLocal_1045, 0);
		if (unk_0xE9559A12052415BE(iVar0) == joaat("towtruck") || unk_0xE9559A12052415BE(iVar0) == joaat("towtruck2"))
		{
			bLocal_1144 = true;
		}
	}
	else
	{
		bLocal_1144 = false;
	}
	if (bLocal_1144)
	{
		if (unk_0x3B10248EA2F8B36C(iVar0, iLocal_1312))
		{
			unk_0x36C3BDDDC9B1B7C7(iVar0, iLocal_1312);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1180)
	{
		if ((unk_0x76B3C79DE564AFC6(iParam0) && !unk_0x8682D8A6269E52C9(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_1044 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1044 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1364, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1180 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0xB3404E397FF56B3B(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14611 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()
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

void func_9()
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

int func_10()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
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

void func_12()
{
	if (func_18(14))
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
		Global_14443 = func_13();
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

int func_13()
{
	func_14();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_17(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_16(unk_0x0031992CA618A445());
			if (func_15(iVar0) && (!func_18(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_15(Global_104439.f_2244.f_539.f_4301))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_19()
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

bool func_20(int iParam0, int iParam1)
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

int func_22()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, int iParam1)
{
	return func_24(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)
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

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x8682D8A6269E52C9(uLocal_1050[iVar0]))
		{
			if (func_26(uLocal_1050[iVar0], Local_1290, 1) < fParam0)
			{
				return uLocal_1050[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x8682D8A6269E52C9(uLocal_1054[iVar0]))
		{
			if (func_26(uLocal_1054[iVar0], Local_1290, 1) < fParam0)
			{
				return uLocal_1054[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam0, 1), Param1, iParam4);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		func_29(&uLocal_1364, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x8682D8A6269E52C9(uLocal_1050[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x90219307C9D2728D(uLocal_1050[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1050[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1050[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x8682D8A6269E52C9(uLocal_1054[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x90219307C9D2728D(uLocal_1054[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1054[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1054[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1047[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x90219307C9D2728D(uLocal_1054[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1047[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1047[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)
{
	char* sVar0;
	
	if (iLocal_1143 == 0)
	{
		iLocal_1044 = iParam0;
		func_3();
		unk_0x27FC4121D73AF604();
		unk_0x1E420F926A7BC4D2("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			Global_92762.f_12[0] = 1;
		}
		else
		{
			Global_92762.f_12[0] = 0;
		}
		switch (iLocal_1044)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1143 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	if (Global_104439.f_8946 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		unk_0xCD7E92DE2BFA0B0D(&(Global_83659[iVar0 /*5*/].f_1), 5);
		Global_92798 = iParam0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		unk_0xFA4590DB4BC7D896(5000);
	}
	iVar0 = Global_83659[iParam0 /*5*/];
	iVar1 = Global_71054.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	unk_0x0A1813BDA90AC2EB(unk_0x3D35F9864E4640B1());
	unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
	func_34(&(Global_104439.f_2244.f_539), iVar1);
	if (Global_87082 == Global_92799)
	{
		Global_104439.f_8946.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x2A3398C6222EB190(Global_83695[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0x4FE3D138860DAC8B(0);
		}
	}
	Global_104439.f_8946.f_330[iVar1 /*6*/].f_2++;
	Global_87082 = Global_92799;
	if (iParam0 == -1)
	{
		if (Global_104439.f_8946)
		{
		}
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_83659[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_83659[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_104439.f_18394[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_36(Global_104439.f_18394[iVar0], &Var2, &fVar5))
			{
				Global_104439.f_18394[iVar0] = 318;
				func_35(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90297[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_9 = 0f;
				Global_90297[iVar0 /*29*/].f_12 = 0f;
				Global_90297[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_10 = 0f;
				Global_90297[iVar0 /*29*/].f_13 = 0f;
				Global_90297[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_11 = 0f;
				Global_90297[iVar0 /*29*/].f_14 = 0f;
				Global_90297[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_26 = 0f;
				Global_90297[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_27 = 0f;
				Global_90297[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90297[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_35(var uParam0)
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86892[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86892[iParam0 /*2*/] = 0;
	}
}

void func_38()
{
	Global_92797 = 1;
	if (unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1))
	{
		if (unk_0x0BD3CCFB6C6CFA91(&Global_71017))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_71017, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71017, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71017, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71021, "", 16);
		}
		Global_92797 = 0;
	}
	else if (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x0BD3CCFB6C6CFA91(&Global_71017))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_71017, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71017, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71017, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71021, "", 16);
		}
		Global_92797 = 0;
		unk_0xCD7E92DE2BFA0B0D(&(Global_92762.f_20), 25);
	}
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x2A3398C6222EB190(Global_83659[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_41(char* sParam0)
{
	func_506(&(Global_104439.f_19824.f_1), 1024);
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
{
	if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		if (unk_0xB969E1CEA20D42E1(sParam0) <= 16)
		{
			StringCopy(&Global_71017, sParam0, 16);
			StringCopy(&Global_71021, "", 16);
			if (unk_0x973889DB65CDBCE2())
			{
				unk_0xEEB9A3C116B137E2();
			}
		}
	}
}

void func_43(struct<3> Param0, float fParam3)
{
	if (func_44(Global_71025, 0f, 0f, 0f, 0))
	{
		Global_71025 = { Param0 };
		Global_71028 = fParam3;
	}
}

bool func_44(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_45()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()) || unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(var uParam0)
{
	if (func_52(uParam0))
	{
		if (func_48(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_47(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_47(bool bParam0)
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

bool func_48(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

void func_49(var uParam0)
{
	if (!func_52(uParam0))
	{
		func_50(uParam0);
	}
}

void func_50(var uParam0)
{
	func_51(uParam0, 0f);
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_47(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_52(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_53()
{
	if (func_54(&iLocal_1044))
	{
		func_31(6);
	}
}

int func_54(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1031 > 11)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(iLocal_1046, iLocal_1312, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1164)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_1046))
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_1046))
			{
				if (func_24(iLocal_1045, iLocal_1046, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
						{
							if (unk_0xDBF188DE6334F01A(iLocal_1312) || !unk_0x4096DB4B0B8A982B(iLocal_1312))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0xDBF188DE6334F01A(iLocal_1046))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0xA761A0B6072010C8(uLocal_1120))
				{
					if (func_24(iLocal_1045, iLocal_1046, 1) >= (fVar0 * 0.5f))
					{
						if (!unk_0xAE9B7C71C7C26ED1(uLocal_1120))
						{
							unk_0xB989C497205DF6E8(uLocal_1120, 1);
						}
					}
					else if (unk_0xAE9B7C71C7C26ED1(uLocal_1120))
					{
						unk_0xB989C497205DF6E8(uLocal_1120, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			func_56(&uLocal_1529, iLocal_1046, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		func_82(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_59(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x154C8F16279FF849())
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x996B09F758C57FBE(iVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_81(iVar0))
	{
		func_80();
	}
	if (func_79(iParam1) && unk_0x8CAADD2AA5EDCAAC(iParam1))
	{
		iVar1 = 0;
		if (unk_0x269F274F1955DE87(iParam1))
		{
			unk_0x74C81A83411D14D3(unk_0x4849801147A2BA1E(iParam1));
			unk_0x0FA8F26FCFDFF803(unk_0x4849801147A2BA1E(iParam1), 1);
			if (unk_0x5C428867F8F5FE0C(unk_0x4849801147A2BA1E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x036E1D5EA494CEB2(iParam1))
		{
			unk_0x932BE5F88FA96F6D(unk_0x89C1AD6422029361(iParam1));
			if (unk_0x896AC94320989D6D(unk_0x89C1AD6422029361(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam1))
		{
			unk_0x34CD6EBB80DC5D6B(unk_0x0B603933F47AABAA(iParam1));
			if (unk_0x3754E63199967977(unk_0x0B603933F47AABAA(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x154C8F16279FF849())
		{
			if (func_74(uParam0, bParam7, bParam9, 0))
			{
				func_71(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0)) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if ((iVar1 && !unk_0x068C69D0643C4B95()) && uParam8)
						{
							if (!func_81(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0))
				{
					if (((unk_0x4096DB4B0B8A982B(iParam1) && iVar1) && !unk_0x068C69D0643C4B95()) && uParam8)
					{
						if (!func_81(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
							{
								func_62(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x996B09F758C57FBE(sParam5))
			{
				if (func_81(sParam5))
				{
					unk_0x8C361F37C04084F4(1);
				}
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
			{
				if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
					{
						func_82(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
					{
						func_82(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
					{
						func_82(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
					{
						func_82(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
					{
						func_82(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
				{
					func_82(uParam0, iVar0, 1);
				}
			}
			if (!func_74(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_82(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)
{
	if (func_79(unk_0x0031992CA618A445()))
	{
		unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0xC938B5CB1FF90CA1(1);
		unk_0x59FA14CE9944B95A(0);
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		unk_0xC84CB7879942C3BA("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_61(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x31CD6E9F83C10233()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104439.f_9910.f_100++;
			}
			return Global_104439.f_9910.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104439.f_9910.f_101++;
			}
			return Global_104439.f_9910.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104439.f_9910.f_102++;
			}
			return Global_104439.f_9910.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!unk_0x0BD3CCFB6C6CFA91(sParam0) && func_81(sParam0)) || func_81("CMN_HINT"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (func_70(0))
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				return 0;
			}
			if (unk_0xCE65BA0D5E39A5CB())
			{
				return 0;
			}
		}
	}
	if (func_68() || func_67(Global_1641087.f_116067))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xCF432047F5AFBA06(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), func_66(unk_0x0031992CA618A445(), 0)) || (unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) == joaat("apc") && func_66(unk_0x0031992CA618A445(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_67(int iParam0)
{
	return iParam0 == 51;
}

var func_68()
{
	return Global_2445582.f_13;
}

bool func_69()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_70(int iParam0)
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

void func_71(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316441 == 1)
	{
		return;
	}
	if (unk_0x7A6C051038031EFA(iParam1, 0))
	{
		func_82(uParam0, 0, 0);
	}
	if (func_44(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x269F274F1955DE87(iParam1))
		{
			iVar0 = unk_0x4849801147A2BA1E(iParam1);
			if (!unk_0x90219307C9D2728D(iVar0, 0))
			{
				if (unk_0x972B5786EA49FE1A(iVar0))
				{
					if (!func_72())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA7D1AE4528FB3B74(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xC938B5CB1FF90CA1(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xF539A9F1BCA8C0E9(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iParam1, -1, iVar3, iVar4);
	unk_0xF177BD202464664F("FocusIn", 0, 0);
	unk_0xFD69BDF108B32E5B("HINT_CAM_SCENE");
	unk_0x18F1BFAF88AC511B(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x31CD6E9F83C10233();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_72()
{
	return func_73(unk_0x3D35F9864E4640B1());
}

int func_73(int iParam0)
{
	if (unk_0xE9559A12052415BE(unk_0xD33F4BC17EB987E5(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (func_78(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_77(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_77(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_78(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (!func_78(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x31CD6E9F83C10233();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_77(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_77(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_78(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (!func_78(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_77(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_77(bParam1, bParam2, bParam3) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_78(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (func_76(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_76(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_80();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_75(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x036E1D5EA494CEB2(iParam0))
		{
			if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x269F274F1955DE87(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_80()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 4);
}

bool func_81(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
		{
			return;
		}
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0x59FA14CE9944B95A(iParam2);
		unk_0xC84CB7879942C3BA("FocusIn");
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xC938B5CB1FF90CA1(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x996B09F758C57FBE(sVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x996B09F758C57FBE(uParam0->f_3))
	{
		if (func_81(uParam0->f_3))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	if (!unk_0x996B09F758C57FBE(sVar0))
	{
		if (func_81(sVar0))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
}

void func_83(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&uLocal_1351))
		{
			func_49(&uLocal_1351);
		}
		*bParam2 = 1;
	}
	if (func_52(&uLocal_1351))
	{
		fVar0 = func_46(&uLocal_1351);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1213 = unk_0xF2DB717A73826179((*fParam1 - fVar0));
	iLocal_1213 *= 1000;
	if (iLocal_1213 < 63000)
	{
		iLocal_1147 = 1;
	}
	if (iLocal_1213 < 65000)
	{
		iLocal_1154 = 1;
	}
	if (iLocal_1213 < iLocal_1210)
	{
		iLocal_1177 = 1;
	}
	if (!unk_0x1F1D255CB6501243("SCRIPT\ASSASSINATION_MULTI", 0, -1))
	{
		bLocal_1363 = false;
	}
	else
	{
		bLocal_1363 = true;
	}
	if (iLocal_1213 < 30000)
	{
		iLocal_1168 = 1;
		if (bLocal_1363)
		{
			if (func_52(&uLocal_1360))
			{
				if (func_46(&uLocal_1360) > 1f)
				{
					unk_0x18F1BFAF88AC511B(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1360);
				}
			}
			else
			{
				unk_0x18F1BFAF88AC511B(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1360);
			}
		}
		func_84(iLocal_1213, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_84(iLocal_1213, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_84(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_86(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_85(7, iVar0);
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
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_85(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_86(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

void func_87()
{
	int iVar0;
	
	switch (iLocal_1207)
	{
		case 0:
			if (!func_22())
			{
				if (!unk_0x7A6C051038031EFA(uLocal_1050[0], 0))
				{
					unk_0xCFA3B07B6CEEF62C(uLocal_1050[0]);
				}
				if (!unk_0x7A6C051038031EFA(uLocal_1050[1], 0))
				{
					unk_0xCFA3B07B6CEEF62C(uLocal_1050[1]);
				}
				iVar0 = func_91();
				if (bLocal_1157)
				{
					if (!iLocal_1173)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1173 = 1;
						}
					}
				}
				else if (!bLocal_1164 && unk_0x8682D8A6269E52C9(iLocal_1046))
				{
					if (!iLocal_1173)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1173 = 1;
						}
					}
				}
				if (!func_52(&uLocal_1339))
				{
					func_49(&uLocal_1339);
				}
				else
				{
					func_50(&uLocal_1339);
				}
				iLocal_1207 = 1;
			}
			break;
		
		case 1:
			iLocal_1207 = 2;
			break;
		
		case 2:
			if (iLocal_1173 || !unk_0x8682D8A6269E52C9(iLocal_1046))
			{
				if (!func_22() && !bLocal_1157)
				{
					if (!iLocal_1171)
					{
						iVar0 = func_91();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
					else if (!bLocal_1181 && unk_0x8682D8A6269E52C9(iLocal_1046))
					{
						iVar0 = func_91();
						func_90(iVar0);
					}
				}
			}
			else if (bLocal_1157)
			{
				if (!iLocal_1173)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1173 = 1;
					}
				}
			}
			else if (!bLocal_1164)
			{
				if (!iLocal_1173)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1173 = 1;
					}
				}
			}
			if (func_89(iLocal_1045))
			{
				fLocal_1244 = 2.5f;
			}
			else
			{
				fLocal_1244 = 5f;
			}
			if (func_52(&uLocal_1339))
			{
				if ((func_46(&uLocal_1339) > fLocal_1244 && func_88()) || unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
				{
					func_3();
					if (!iLocal_1134)
					{
						iLocal_1134 = 1;
						iLocal_1178 = 1;
					}
					iLocal_1158 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1050[iVar0]) && !unk_0x7A6C051038031EFA(uLocal_1050[iVar0], 0))
		{
			unk_0x49544FB997F0AADE(uLocal_1050[iVar0], 85, 1);
			if (unk_0xE790C95BCC9F3F62(uLocal_1050[iVar0], unk_0x0031992CA618A445()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1054[iVar0]) && !unk_0x7A6C051038031EFA(uLocal_1054[iVar0], 0))
		{
			unk_0x49544FB997F0AADE(uLocal_1054[iVar0], 85, 1);
			if (unk_0xE790C95BCC9F3F62(uLocal_1054[iVar0], unk_0x0031992CA618A445()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1047[iVar0]) && !unk_0x7A6C051038031EFA(iLocal_1047[iVar0], 0))
		{
			unk_0x49544FB997F0AADE(iLocal_1047[iVar0], 85, 1);
			if (unk_0xE790C95BCC9F3F62(iLocal_1047[iVar0], unk_0x0031992CA618A445()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x417F21FB3F950AEE(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !unk_0x417F21FB3F950AEE(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0)
{
	if (!bLocal_1181)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1046) && unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			if (!func_22())
			{
				if ((unk_0x76B3C79DE564AFC6(iParam0) && !unk_0x8682D8A6269E52C9(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1181 = true;
				}
			}
		}
	}
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1050[iVar1]) && !unk_0x8682D8A6269E52C9(uLocal_1050[iVar1]))
		{
			iVar0 = uLocal_1050[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x76B3C79DE564AFC6(uLocal_1054[iVar1]) && !unk_0x8682D8A6269E52C9(uLocal_1054[iVar1]))
			{
				iVar0 = uLocal_1054[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0x76B3C79DE564AFC6(iLocal_1047[iVar1]) && !unk_0x8682D8A6269E52C9(iLocal_1047[iVar1]))
			{
				iVar0 = iLocal_1047[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_92()
{
	func_99();
	if (!iLocal_1158)
	{
		if (!iLocal_1134)
		{
			if (func_93(&iLocal_1044))
			{
				iLocal_1134 = 1;
			}
		}
	}
}

int func_93(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1134)
	{
		if (iLocal_1168 && !bLocal_1137)
		{
			if (func_98(&iLocal_1044))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x1F510E862BD5CD12(iLocal_1045, 4))
		{
			if (unk_0xD08ED8D7088059C5(iLocal_1045))
			{
				fVar1 = func_26(unk_0x0031992CA618A445(), -1230.599f, -196.5408f, 38.1528f, 1);
				unk_0x1306828A757A10AC(iLocal_1045, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1046))
					{
						iLocal_1158 = 1;
						iLocal_1156 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_97(iLocal_1312) || func_96(iLocal_1312)) || (unk_0x76B3C79DE564AFC6(iLocal_1312) && unk_0x7CA73A79B30385F3(iLocal_1312, iLocal_1045, 1)))
		{
			return 1;
		}
		if (func_97(iLocal_1313) || (unk_0x76B3C79DE564AFC6(iLocal_1313) && unk_0x7CA73A79B30385F3(iLocal_1313, iLocal_1045, 1)))
		{
			return 1;
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_1312) && !unk_0x7A6C051038031EFA(iLocal_1312, 0))
		{
			if (unk_0xA32DC7E16AD1DFB7(iLocal_1045, iLocal_1312, 0))
			{
				unk_0x090B4963A42812BC(iLocal_1312, 1);
				unk_0xB085664BBA8042DE(iLocal_1312);
				return 1;
			}
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_1312))
		{
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (unk_0x90219307C9D2728D(iLocal_1045, 0))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(iLocal_1045, 0);
					if (unk_0xE771CD42874080E1(iVar0, iLocal_1312) || (bLocal_1144 && unk_0x3B10248EA2F8B36C(iVar0, iLocal_1312)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1031 == 12)
		{
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (func_24(iLocal_1045, iLocal_1312, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1033[0] == 2 || iLocal_1033[1] == 2) || iLocal_1033[2] == 2)
		{
			if (func_95())
			{
				return 1;
			}
		}
		if (iLocal_1031 < 11)
		{
			if (unk_0x40F3590C2FDAEDCC(-1, Local_1308, fLocal_1311))
			{
				return 1;
			}
		}
		else if (unk_0x40F3590C2FDAEDCC(-1, Local_1308, fLocal_1311))
		{
			if (func_94())
			{
				iLocal_1188 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94()
{
	if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0xC3B36E687193A3B6(unk_0x3D35F9864E4640B1()))
			{
				if ((unk_0x52559DAD5F31039D(unk_0x0031992CA618A445()) && unk_0x9148803485DEDF45(0, 24)) || (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x9148803485DEDF45(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0xB026720421512310(iParam0) == 3 && unk_0x882388E2A8356C6F(iLocal_1045) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x3251C2B06497863C(iParam0, -1, 0) != 0)
			{
				if (unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(unk_0x0031992CA618A445(), iParam0, 1) < 40f)
						{
							if (unk_0x63683B42C74DE9C9(unk_0x3D35F9864E4640B1(), &iVar1))
							{
								if ((unk_0x036E1D5EA494CEB2(iVar1) && unk_0x89C1AD6422029361(iVar1) == iParam0) || (unk_0x269F274F1955DE87(iVar1) && unk_0x4849801147A2BA1E(iVar1) == unk_0x3251C2B06497863C(iParam0, -1, 0)))
								{
									if ((unk_0x52559DAD5F31039D(unk_0x0031992CA618A445()) && unk_0x9148803485DEDF45(0, 24)) || (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x9148803485DEDF45(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98(int iParam0)
{
	if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
	{
		if (unk_0x850EE08415808AE5(unk_0x0031992CA618A445(), iLocal_1312, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0xE56D9BF30EA65B88(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || unk_0xE56D9BF30EA65B88(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_99()
{
	int iVar0;
	
	func_140();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1050[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_139(uLocal_1050[iVar0], &(Local_1060[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1054[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_139(uLocal_1054[iVar0], &(Local_1085[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1047[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_139(iLocal_1047[iVar0], &(Local_1102[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!unk_0x8682D8A6269E52C9(iLocal_1047[iVar0]))
			{
				if (iLocal_1041[iVar0] == 4)
				{
					unk_0x49544FB997F0AADE(iLocal_1047[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1204 == 0)
	{
		func_137(0);
	}
	else if (iLocal_1204 == 1)
	{
		func_137(1);
	}
	else if (iLocal_1204 == 2)
	{
		if (iLocal_1031 >= 9)
		{
			func_126(0);
		}
	}
	else if (iLocal_1204 == 3)
	{
		if (iLocal_1031 >= 9)
		{
			func_126(1);
		}
	}
	else if (iLocal_1204 == 4)
	{
		if (iLocal_1031 >= 9)
		{
			func_126(2);
			func_125(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1204 == 5)
	{
		func_100(0);
		func_125(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1204 == 6)
	{
		func_100(1);
		func_125(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1204++;
	if (iLocal_1204 > 6)
	{
		iLocal_1204 = 0;
	}
	if (iLocal_1134)
	{
		if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
		{
			unk_0x49544FB997F0AADE(iLocal_1046, 120, 1);
		}
	}
}

void func_100(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	iVar0 = uLocal_1054[iParam0];
	switch (iLocal_1037[iParam0])
	{
		case 0:
			if (iLocal_1147)
			{
				iLocal_1037[iParam0] = 1;
			}
			else if (bLocal_1145)
			{
				iLocal_1037[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
			{
				if (func_124())
				{
					if (!unk_0xC6B007187409CF4D(iLocal_1313))
					{
						if (unk_0x3251C2B06497863C(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
						{
							unk_0x9EE30C20270C9443(uLocal_1054[iParam0], iLocal_1313, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1037[iParam0] = 2;
				}
				else
				{
					func_123(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
			{
				if (!unk_0xC6B007187409CF4D(iLocal_1313))
				{
					Var1 = { unk_0xF177E0DA126D71C8(iLocal_1313, 1) };
					uVar4 = unk_0x69F9721375CE60CF(iLocal_1313);
					iLocal_1147 = 0;
					iLocal_1037[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
			{
				if (!unk_0x7A6C051038031EFA(uLocal_1054[iParam0], 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(uLocal_1054[iParam0], iLocal_1313, 0) && unk_0x432757A9E7AAFA96(iLocal_1312, 0))
					{
						if (!iLocal_1134)
						{
							if (unk_0x3251C2B06497863C(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
							{
								if (unk_0xF57D21B49780A7A8(uLocal_1054[iParam0], -1273030092) != 1)
								{
									unk_0x8C91984EC7E74B71(uLocal_1054[iParam0], iLocal_1313, iLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0x3251C2B06497863C(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
						{
							if (!iLocal_1148)
							{
								if (unk_0x7A6C051038031EFA(iLocal_1046, 0))
								{
									if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
									{
										unk_0x8B4EE19968C93083(iVar0, unk_0x0031992CA618A445(), 0, 16);
									}
									else
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								else
								{
									unk_0x8C91984EC7E74B71(uLocal_1054[iParam0], iLocal_1313, iLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
									unk_0x28B668F5BD1AF745(iVar0, unk_0x0031992CA618A445());
									iLocal_1148 = 1;
								}
							}
						}
						else if (!bLocal_1164)
						{
							if (unk_0xF57D21B49780A7A8(uLocal_1054[iParam0], 780511057) != 1)
							{
								if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
								{
									if (unk_0x38A3CC71471EC547(iLocal_1313) < 5f)
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								unk_0x8B4EE19968C93083(iVar0, unk_0x0031992CA618A445(), 0, 16);
							}
						}
						else if (unk_0xF57D21B49780A7A8(uLocal_1054[iParam0], 780511057) != 1)
						{
							unk_0x8B4EE19968C93083(iVar0, unk_0x0031992CA618A445(), 0, 16);
						}
					}
					else if (!iLocal_1158)
					{
						iLocal_1037[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&uLocal_1333))
			{
				func_50(&uLocal_1333);
			}
			func_120(&(uLocal_1054[iParam0]));
			iLocal_1037[iParam0] = 5;
			break;
		
		case 5:
			if (!func_89(iLocal_1045))
			{
				if (func_46(&uLocal_1333) >= 27f || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
				{
					if (!unk_0x8682D8A6269E52C9(iVar0))
					{
						if (unk_0x830CAE5496B8AD6B(iLocal_1045, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_119(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_123(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1037[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1159)
			{
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0xC5F8FCBA959CFCF8(0, func_118(), unk_0x3AF262D7332EEDF5(1000, 1500), 2048, 4);
				unk_0xC5F8FCBA959CFCF8(0, func_118(), unk_0x3AF262D7332EEDF5(2000, 2500), 2048, 4);
				unk_0x6FB15A51003594A8(0, unk_0x0031992CA618A445(), unk_0x3AF262D7332EEDF5(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0xB616592F05F4F80B(0, unk_0x0031992CA618A445(), func_118(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xF81AD3C937316CCA(uLocal_1324);
				if (!unk_0x8682D8A6269E52C9(uLocal_1054[iParam0]))
				{
					unk_0xEDD5437C49B7B1F8(uLocal_1054[iParam0], uLocal_1324);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			else
			{
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0xD9BDC06F52127118(0, func_118(), unk_0x3AF262D7332EEDF5(3000, 3500), 1, 0);
				unk_0xD9BDC06F52127118(0, func_118(), unk_0x3AF262D7332EEDF5(3000, 3500), 0, 0);
				unk_0xD9BDC06F52127118(0, func_118(), unk_0x3AF262D7332EEDF5(3000, 3500), 0, 0);
				unk_0xD9BDC06F52127118(0, func_118(), unk_0x3AF262D7332EEDF5(3000, 3500), 0, 0);
				unk_0xD9BDC06F52127118(0, func_118(), -1, 0, 0);
				unk_0xF81AD3C937316CCA(uLocal_1324);
				if (!unk_0x8682D8A6269E52C9(uLocal_1054[iParam0]))
				{
					unk_0xEDD5437C49B7B1F8(uLocal_1054[iParam0], uLocal_1324);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			iLocal_1037[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0x8682D8A6269E52C9(uLocal_1054[iParam0]))
			{
				if (unk_0xF57D21B49780A7A8(uLocal_1054[iParam0], 1435919172) != 1)
				{
					unk_0xC6387774FD1AA476(uLocal_1054[iParam0], iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1044 != 4 && iLocal_1044 != 5)
			{
				func_117(iVar0);
			}
			else
			{
				func_116(iVar0);
			}
			iLocal_1037[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1044 != 4)
				{
					func_115(iLocal_1313, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_90(iVar0);
			break;
	}
	if (!iLocal_1134)
	{
		if (iLocal_1158)
		{
			if (iLocal_1037[iParam0] != 6 && iLocal_1037[iParam0] != 7)
			{
				iLocal_1037[iParam0] = 6;
			}
		}
		else if (func_108(iVar0, iLocal_1313, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_107(iLocal_1313))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_106(unk_0xF177E0DA126D71C8(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_105())
			{
				iLocal_1134 = 1;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_104(iVar0, 10f))
			{
				if (iLocal_1037[iParam0] != 4 && iLocal_1037[iParam0] != 5)
				{
					if (!bLocal_1135)
					{
						func_102(&Local_360, 4);
						iLocal_1037[iParam0] = 4;
					}
					else if (!func_89(iLocal_1045))
					{
						iLocal_1134 = 1;
						if (!unk_0x76B3C79DE564AFC6(iLocal_1046))
						{
							iLocal_1044 = 5;
						}
						iLocal_1037[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0x8682D8A6269E52C9(iVar0))
	{
		if (unk_0xA32DC7E16AD1DFB7(iVar0, iLocal_1313, 0))
		{
			if (((!unk_0x432757A9E7AAFA96(iLocal_1313, 0) || !unk_0x432757A9E7AAFA96(iLocal_1312, 0)) || iLocal_1146) || !bLocal_1137)
			{
				if (iLocal_1037[iParam0] < 8)
				{
					iLocal_1037[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1037[iParam0] < 8)
		{
			iLocal_1037[iParam0] = 8;
		}
	}
	func_101(iVar0, uLocal_1125[iParam0]);
}

void func_101(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x8682D8A6269E52C9(iParam0))
		{
			if (unk_0xA761A0B6072010C8(uParam1))
			{
				unk_0x0C4BDC77192798AE(&uParam1);
			}
		}
	}
}

void func_102(var uParam0, int iParam1)
{
	func_103(uParam0, iParam1);
}

void func_103(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_104(int iParam0, float fParam1)
{
	if (!iLocal_1134)
	{
		if (!func_89(iLocal_1045))
		{
			if (unk_0x76B3C79DE564AFC6(iParam0))
			{
				if (!unk_0x8682D8A6269E52C9(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (unk_0x51D10CE903646C26(iParam0, iLocal_1045, 120f))
						{
							if (unk_0x367C9FFCB04B45EF(iParam0, iLocal_1045, 17))
							{
								if (!unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x76B3C79DE564AFC6(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(iParam0))
			{
				if (unk_0x830CAE5496B8AD6B(iLocal_1045, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0x51D10CE903646C26(iParam0, iLocal_1045, 120f))
					{
						if (unk_0x367C9FFCB04B45EF(iParam0, iLocal_1045, 17))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_105()
{
	if (iLocal_1158 || bLocal_1159)
	{
		return 1;
	}
	return 0;
}

void func_106(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		return;
	}
	if (!unk_0x76B3C79DE564AFC6(iLocal_1312))
	{
		return;
	}
	if (unk_0x7A6C051038031EFA(iLocal_1312, 0) || iLocal_1188)
	{
		bLocal_1157 = true;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		if (((unk_0xD49C1297C878C526(iLocal_1046, joaat("weapon_sniperrifle"), 0) || unk_0xD49C1297C878C526(iLocal_1046, joaat("weapon_heavysniper"), 0)) || unk_0xD49C1297C878C526(iLocal_1046, joaat("weapon_remotesniper"), 0)) || unk_0xD49C1297C878C526(iLocal_1046, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1156 = 1;
			iLocal_1032 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!unk_0xC6B007187409CF4D(iLocal_1312))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1134)
	{
		if ((iLocal_1156 || bLocal_1157) || iVar0)
		{
			fVar1 = func_26(unk_0x0031992CA618A445(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1158 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1159 = true;
				}
			}
		}
	}
}

int func_107(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					if (unk_0x76B3C79DE564AFC6(iVar0) && unk_0x432757A9E7AAFA96(iVar0, 0))
					{
						fVar1 = unk_0x38A3CC71471EC547(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0xE771CD42874080E1(iVar0, iParam0) || unk_0x7CA73A79B30385F3(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x0031992CA618A445();
	if (!unk_0x7A6C051038031EFA(iVar0, 0) && !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (!func_114(*uParam2, 1))
		{
			if (func_113(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_114(*uParam2, 2))
		{
			if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_114(*uParam2, 4))
		{
			if (func_112(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_114(*uParam2, 8))
		{
			if (func_111(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_114(*uParam2, 128);
		if (bParam4)
		{
			if (func_109(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_114(*uParam2, 16))
		{
			if (func_109(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (iParam7 && unk_0x7CA73A79B30385F3(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_356)
		{
			iLocal_357 = unk_0x8DB158934E64B062(iParam0);
			bLocal_356 = true;
		}
		iLocal_358 = unk_0x8DB158934E64B062(iParam0);
		iLocal_359 = (iLocal_357 - iLocal_358);
		iVar0 = unk_0x7899A2987EB03783();
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_356)
		{
			if (unk_0x7CA73A79B30385F3(iParam0, unk_0x0031992CA618A445(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7CA73A79B30385F3(iParam0, unk_0x0031992CA618A445(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x7899A2987EB03783();
		if (!unk_0x7A6C051038031EFA(iVar1, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			if (unk_0x20BE8D7B7834CA2D(iParam0))
			{
				if (unk_0xB6903829A19F7017(iParam0) == unk_0x0031992CA618A445())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
		{
			if (unk_0xF041E50CF58AF6F9(iParam0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x564AF6CD09937A47(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xBEF1D13D84429BDD(unk_0x0031992CA618A445()))
	{
		if (unk_0xD81E58A8E3A98DEA(iParam0))
		{
			return 1;
		}
	}
	if (func_110(unk_0x0031992CA618A445(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xABB40063444DEDAA(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), unk_0xCFA31F1E461A6BB5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iParam0))
		{
			return 1;
		}
		if (!unk_0x7A6C051038031EFA(iParam1, 0))
		{
			if (unk_0x7CA73A79B30385F3(iParam1, unk_0x0031992CA618A445(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x1306828A757A10AC(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xD08ED8D7088059C5(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 1), unk_0xF177E0DA126D71C8(iParam1, 1)) < 2.5f)
			{
				if (unk_0x51D10CE903646C26(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_111(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x1F510E862BD5CD12(iParam0, 4))
	{
		if (unk_0xD08ED8D7088059C5(iParam0) && !unk_0x57550D8981DAEF6C(iParam0))
		{
			if (unk_0xF041E50CF58AF6F9(iParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_112(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	if (unk_0xA836CB82D16639AD(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x1EE8F1A6A0B08F95(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x1F510E862BD5CD12(iParam0, 2))
	{
		if (unk_0xD08ED8D7088059C5(iParam0))
		{
			if (unk_0xF041E50CF58AF6F9(iParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x51D10CE903646C26(unk_0x4849801147A2BA1E(iParam1), iParam0, 120f) && unk_0x367C9FFCB04B45EF(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x90219307C9D2728D(unk_0x4849801147A2BA1E(iParam1), 0))
			{
				iVar3 = unk_0xCFA31F1E461A6BB5(unk_0x4849801147A2BA1E(iParam1), 0);
			}
			if (unk_0x4409826A2E8B7CC7(iParam0) || func_97(iVar3))
			{
				if (unk_0xF041E50CF58AF6F9(iParam1, unk_0xF177E0DA126D71C8(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x51D10CE903646C26(unk_0x4849801147A2BA1E(iParam1), iParam0, 120f) && unk_0x367C9FFCB04B45EF(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x358ED862352D8DB6((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, var uParam1)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
		{
			if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
			{
				if (unk_0x51D10CE903646C26(iParam0, unk_0x0031992CA618A445(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x31CD6E9F83C10233();
						}
						else if ((unk_0x31CD6E9F83C10233() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_115(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x8682D8A6269E52C9(iParam1))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!unk_0xA32DC7E16AD1DFB7(iParam1, iParam0, 0))
					{
						if (unk_0xF57D21B49780A7A8(iParam1, -1794415470) != 1)
						{
							unk_0x2E0E5BF2A31392F4(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0xF57D21B49780A7A8(iParam1, -1273030092) != 1)
					{
						unk_0x535099724E85FE80(iParam1, iParam0, unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x28B668F5BD1AF745(iParam1, unk_0x0031992CA618A445());
					}
				}
				else if (!unk_0xA32DC7E16AD1DFB7(iParam1, iParam0, 0))
				{
					if (unk_0xF57D21B49780A7A8(iParam1, 780511057) != 1)
					{
						unk_0x8B4EE19968C93083(iParam1, unk_0x0031992CA618A445(), 0, 16);
					}
				}
			}
			else if (unk_0xA32DC7E16AD1DFB7(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (unk_0xF57D21B49780A7A8(iParam1, -1273030092) != 1)
					{
						unk_0xF67CC1918ACD3BB7(iParam1, iParam0, unk_0x0031992CA618A445(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x28B668F5BD1AF745(iParam1, unk_0x0031992CA618A445());
					}
				}
				else if (unk_0xF57D21B49780A7A8(iParam1, 780511057) != 1)
				{
					unk_0x8B4EE19968C93083(iParam1, unk_0x0031992CA618A445(), 0, 16);
				}
			}
		}
		else if (unk_0xF57D21B49780A7A8(iParam1, 780511057) != 1)
		{
			unk_0x8B4EE19968C93083(iParam1, unk_0x0031992CA618A445(), 0, 16);
		}
	}
}

void func_116(int iParam0)
{
	var uVar0;
	
	if (!unk_0x8682D8A6269E52C9(iLocal_1045) && !unk_0x8682D8A6269E52C9(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			unk_0xA8A16396F3E7CD41(iParam0, 3, 1);
		}
		unk_0x1F5B34056C3CB80B(&uVar0);
		unk_0x173325AAF2CD766A(&uVar0);
		unk_0x471E558A661279DE(0, 0, 256);
		unk_0x11E129FEA365DF5C(0, iLocal_1045, -1, 0);
		unk_0xF81AD3C937316CCA(uVar0);
		unk_0xEDD5437C49B7B1F8(iParam0, uVar0);
		unk_0x1F5B34056C3CB80B(&uVar0);
	}
}

void func_117(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(iLocal_1045, 0))
	{
		if (!unk_0x90219307C9D2728D(iLocal_1045, 0))
		{
			if (!unk_0x7A6C051038031EFA(iParam0, 0))
			{
				unk_0xA8A16396F3E7CD41(iParam0, 3, 1);
			}
			unk_0x1F5B34056C3CB80B(&uLocal_1324);
			unk_0x173325AAF2CD766A(&uLocal_1324);
			unk_0x471E558A661279DE(0, 0, 256);
			unk_0x8B4EE19968C93083(0, iLocal_1045, 0, 16);
			unk_0xF81AD3C937316CCA(uLocal_1324);
			if (!unk_0x7A6C051038031EFA(iParam0, 0))
			{
				unk_0xEDD5437C49B7B1F8(iParam0, uLocal_1324);
			}
			unk_0x1F5B34056C3CB80B(&uLocal_1324);
		}
		else if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			if (unk_0xF57D21B49780A7A8(iParam0, 780511057) != 1)
			{
				unk_0xD706D9D85701BFBD(iParam0);
				unk_0x8B4EE19968C93083(iParam0, iLocal_1045, 0, 16);
			}
		}
	}
}

Vector3 func_118()
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (unk_0x3AF262D7332EEDF5(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_119(int iParam0, struct<3> Param1)
{
	if (!iLocal_1134)
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			if (unk_0x830CAE5496B8AD6B(iLocal_1045, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0x51D10CE903646C26(iParam0, iLocal_1045, 160f))
				{
					if (unk_0x367C9FFCB04B45EF(iParam0, iLocal_1045, 17))
					{
						unk_0xC6387774FD1AA476(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1044 = 5;
						iLocal_1134 = 1;
					}
				}
			}
			else if (!unk_0x90219307C9D2728D(iParam0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iParam0, -1207174364) != 1)
				{
					unk_0xC6387774FD1AA476(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_120(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1057 == 0)
	{
		iLocal_1057 = func_30(70f, 0);
	}
	if (!unk_0x8682D8A6269E52C9(*iParam0))
	{
		if (!unk_0x90219307C9D2728D(*iParam0, 0))
		{
			if (!iLocal_1136)
			{
				if (*iParam0 == iLocal_1057)
				{
					unk_0x1F5B34056C3CB80B(&uVar0);
					unk_0x173325AAF2CD766A(&uVar0);
					unk_0x6FB15A51003594A8(0, iLocal_1045, 20000, 2f, 1f, 1073741824, 0);
					unk_0x3933C434ECC3BB69(0, iLocal_1045, -1);
					unk_0xF81AD3C937316CCA(uVar0);
					unk_0xEDD5437C49B7B1F8(*iParam0, uVar0);
					unk_0x1F5B34056C3CB80B(&uVar0);
					iLocal_1136 = 1;
					Var1 = { unk_0xF177E0DA126D71C8(*iParam0, 1) };
				}
				else if (unk_0xF57D21B49780A7A8(*iParam0, 1227113341) != 1)
				{
					unk_0x3933C434ECC3BB69(*iParam0, iLocal_1045, -1);
				}
			}
			else if (*iParam0 != iLocal_1057)
			{
				if (unk_0xF57D21B49780A7A8(*iParam0, 1227113341) != 1)
				{
					unk_0x3933C434ECC3BB69(*iParam0, iLocal_1045, -1);
				}
			}
		}
		unk_0x0EB00C68DDFABE19(*iParam0, 1);
		func_121();
	}
}

void func_121()
{
	int iVar0;
	
	if (!iLocal_1138)
	{
		if (!bLocal_1149)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_122())
				{
					func_6(&uLocal_1364, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1138 = 1;
				}
				else
				{
					func_27(&uLocal_1364, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1138 = 1;
				}
			}
		}
	}
}

int func_122()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
		if (!unk_0x7A6C051038031EFA(iLocal_1312, 0))
		{
			Var3 = { unk_0xF177E0DA126D71C8(iLocal_1312, 1) };
		}
		fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0)
{
	int iVar0;
	
	bLocal_1135 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0x7A6C051038031EFA(uLocal_1054[iParam0], 0))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
		{
			if (!unk_0xA32DC7E16AD1DFB7(uLocal_1054[iParam0], iLocal_1313, 0))
			{
				if (unk_0xF57D21B49780A7A8(uLocal_1054[iParam0], -1794415470) != 1)
				{
					unk_0x2E0E5BF2A31392F4(uLocal_1054[iParam0], iLocal_1313, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_124()
{
	if (!unk_0x8682D8A6269E52C9(uLocal_1054[0]) && !unk_0x8682D8A6269E52C9(uLocal_1054[1]))
	{
		if (unk_0xA32DC7E16AD1DFB7(uLocal_1054[0], iLocal_1313, 0) && unk_0xA32DC7E16AD1DFB7(uLocal_1054[1], iLocal_1313, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_125(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!iLocal_1134)
	{
		if (unk_0xE56D9BF30EA65B88(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1134 = 1;
		}
	}
}

void func_126(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1050[iParam0];
	switch (iLocal_1033[iParam0])
	{
		case 0:
			if (!unk_0x8682D8A6269E52C9(iVar0))
			{
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0xE10E20B323527002(0, Local_1268[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0xCBA311EF4F32CB8A(0, fLocal_1221[iParam0], 0);
				unk_0xF81AD3C937316CCA(uLocal_1324);
				unk_0xEDD5437C49B7B1F8(iVar0, uLocal_1324);
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
				iLocal_1033[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				if (!unk_0x7A6C051038031EFA(iVar0, 0))
				{
					if (!bLocal_1169)
					{
						if (unk_0xF57D21B49780A7A8(iVar0, -2017877118) != 1 && unk_0xF57D21B49780A7A8(iVar0, 242628503) != 1)
						{
							if (unk_0xF041E50CF58AF6F9(iVar0, Local_1268[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_134(iVar0, &(uLocal_1196[iParam0]), 1);
							}
							else
							{
								iLocal_1033[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&uLocal_1333))
			{
				func_50(&uLocal_1333);
				func_120(&iVar0);
				iLocal_1033[iParam0] = 2;
			}
			else if (func_46(&uLocal_1333) > uLocal_1227[iParam0] || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				func_120(&iVar0);
				iLocal_1033[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_89(iLocal_1045))
			{
				iLocal_1162 = 1;
				if (bLocal_1161)
				{
					iLocal_1033[iParam0] = 4;
					break;
				}
				else if (func_46(&uLocal_1333) >= 27f && iLocal_1138)
				{
					func_119(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&uLocal_1333) >= 15f)
				{
					func_132(iVar0);
				}
			}
			else
			{
				iLocal_1162 = 0;
				bLocal_1135 = true;
				if (!bLocal_1155)
				{
					iLocal_1033[iParam0] = 0;
				}
				else
				{
					iLocal_1033[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0x8682D8A6269E52C9(iVar0))
			{
				unk_0x0EB00C68DDFABE19(iVar0, 1);
				unk_0x49544FB997F0AADE(iVar0, 60, 1);
			}
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (!unk_0x8682D8A6269E52C9(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0x43EC517AF665D2B9(uLocal_1050[0], uLocal_1050[1], -1, 0, 2);
						if (!unk_0xA32DC7E16AD1DFB7(iVar0, iLocal_1312, 0))
						{
							unk_0x2E0E5BF2A31392F4(iVar0, iLocal_1312, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0x43EC517AF665D2B9(uLocal_1050[1], uLocal_1050[0], -1, 0, 2);
						if (!unk_0xA32DC7E16AD1DFB7(iVar0, iLocal_1312, 0))
						{
							unk_0x2E0E5BF2A31392F4(iVar0, iLocal_1312, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
						{
							if (!unk_0xA32DC7E16AD1DFB7(iVar0, iLocal_1313, 0))
							{
								unk_0x2E0E5BF2A31392F4(iVar0, iLocal_1313, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1033[iParam0] = 5;
			}
			else
			{
				iLocal_1033[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0x8682D8A6269E52C9(iVar0))
			{
				unk_0x49544FB997F0AADE(iVar0, 60, 1);
			}
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0x43EC517AF665D2B9(uLocal_1050[iParam0], uLocal_1050[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0x43EC517AF665D2B9(uLocal_1050[iParam0], uLocal_1050[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (!func_130())
				{
					if (iLocal_1134)
					{
						if (!unk_0x8682D8A6269E52C9(iVar0))
						{
							if (unk_0xF57D21B49780A7A8(iVar0, 780511057) != 1)
							{
								if (func_129(uLocal_1050[0]))
								{
									unk_0xCFA3B07B6CEEF62C(uLocal_1050[0]);
								}
								if (func_129(uLocal_1050[1]))
								{
									unk_0xCFA3B07B6CEEF62C(uLocal_1050[1]);
								}
								unk_0x8B4EE19968C93083(iVar0, iLocal_1045, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1033[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1033[iParam0] = 10;
			}
			if (bLocal_1150)
			{
				if (iLocal_1033[iParam0] != 10 && iLocal_1033[iParam0] != 11)
				{
					iLocal_1033[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1134)
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
				{
					if (unk_0x3251C2B06497863C(iLocal_1312, -1, 0) == iVar0)
					{
						if (!unk_0x8682D8A6269E52C9(iVar0))
						{
							unk_0x56B418F469976565(iLocal_1312, 1, 1, 0);
							if (func_128())
							{
								unk_0x9EE30C20270C9443(iVar0, iLocal_1312, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0x9EE30C20270C9443(iVar0, iLocal_1312, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1033[iParam0] = 7;
				}
			}
			else
			{
				if (func_129(uLocal_1050[0]))
				{
					unk_0xCFA3B07B6CEEF62C(uLocal_1050[0]);
				}
				if (func_129(uLocal_1050[1]))
				{
					unk_0xCFA3B07B6CEEF62C(uLocal_1050[1]);
				}
				iLocal_1033[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1134)
			{
				if ((unk_0x432757A9E7AAFA96(iLocal_1312, 0) && unk_0x3251C2B06497863C(iLocal_1312, -1, 0) == iVar0) && unk_0x3251C2B06497863C(iLocal_1312, 1, 0) == iLocal_1046)
				{
					if (!unk_0x8682D8A6269E52C9(iVar0))
					{
						if (bLocal_1149 || (iLocal_1163 && !unk_0xC6B007187409CF4D(iLocal_1312)))
						{
							unk_0xD706D9D85701BFBD(iVar0);
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
							{
								if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
								{
									if (unk_0xF57D21B49780A7A8(iVar0, -1273030092) != 1)
									{
										unk_0x535099724E85FE80(iVar0, iLocal_1312, unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0xF57D21B49780A7A8(iVar0, -1273030092) != 1)
								{
									unk_0xF67CC1918ACD3BB7(iVar0, iLocal_1312, unk_0x0031992CA618A445(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0x8682D8A6269E52C9(iVar0))
				{
					if (unk_0xF57D21B49780A7A8(iVar0, 780511057) != 1)
					{
						unk_0x8B4EE19968C93083(iVar0, iLocal_1045, 0, 16);
					}
				}
			}
			else if (bLocal_1149 || (iLocal_1163 && !unk_0xC6B007187409CF4D(iLocal_1312)))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
				{
					if (unk_0x3251C2B06497863C(iLocal_1312, -1, 0) == iVar0)
					{
						if (!unk_0x7A6C051038031EFA(iVar0, 0))
						{
							if (unk_0xF57D21B49780A7A8(iVar0, -1273030092) != 1)
							{
								unk_0x07291D38009EE0D2(iVar0, iLocal_1312, Local_1290, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1159)
			{
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0xC5F8FCBA959CFCF8(0, func_118(), unk_0x3AF262D7332EEDF5(1000, 1500), 2048, 4);
				unk_0x6FB15A51003594A8(0, unk_0x0031992CA618A445(), unk_0x3AF262D7332EEDF5(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0xB616592F05F4F80B(0, unk_0x0031992CA618A445(), func_118(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xF81AD3C937316CCA(uLocal_1324);
				if (!unk_0x7A6C051038031EFA(uLocal_1050[iParam0], 0))
				{
					unk_0xEDD5437C49B7B1F8(uLocal_1050[iParam0], uLocal_1324);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			else
			{
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0xD9BDC06F52127118(0, func_118(), unk_0x3AF262D7332EEDF5(3000, 3500), 1, 0);
				unk_0xB616592F05F4F80B(0, unk_0x0031992CA618A445(), func_118(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xF81AD3C937316CCA(uLocal_1324);
				if (!unk_0x7A6C051038031EFA(uLocal_1050[iParam0], 0))
				{
					unk_0xEDD5437C49B7B1F8(uLocal_1050[iParam0], uLocal_1324);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			iLocal_1033[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0x8682D8A6269E52C9(uLocal_1050[iParam0]))
			{
				if (unk_0xF57D21B49780A7A8(uLocal_1050[iParam0], 1435919172) != 1)
				{
					unk_0xC6387774FD1AA476(uLocal_1050[iParam0], iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1044 == 4 || iLocal_1044 == 5)
			{
				func_116(iVar0);
			}
			else if (iLocal_1044 != 8)
			{
				func_117(iVar0);
				iLocal_1033[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_115(iLocal_1312, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_90(iVar0);
			break;
	}
	if (iLocal_1031 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1234;
	}
	if (!iLocal_1134)
	{
		if (iLocal_1158)
		{
			if (iLocal_1033[iParam0] != 8 && iLocal_1033[iParam0] != 9)
			{
				iLocal_1033[iParam0] = 8;
			}
		}
		else if (func_127(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_106(unk_0xF177E0DA126D71C8(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_105())
			{
				iLocal_1134 = 1;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_104(iVar0, fVar1))
			{
				if ((iLocal_1033[iParam0] != 3 && iLocal_1033[iParam0] != 2) && !bLocal_1161)
				{
					if (!bLocal_1135)
					{
						func_102(&Local_360, 4);
						iLocal_1033[iParam0] = 3;
					}
					else if (!func_89(iLocal_1045))
					{
						iLocal_1134 = 1;
						if (!unk_0x76B3C79DE564AFC6(iLocal_1046))
						{
							iLocal_1044 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1033[iParam0] != 10 && iLocal_1033[iParam0] != 11) && iLocal_1033[iParam0] != 7)
	{
		iLocal_1033[iParam0] = 10;
	}
	func_101(iVar0, uLocal_1121[iParam0]);
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1134)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(iParam0))
			{
				if (unk_0x90219307C9D2728D(iParam0, 0))
				{
					iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_108(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (unk_0xABB40063444DEDAA(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1212 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &iVar1);
	uLocal_1212 = uLocal_1212;
	uLocal_1212 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x76B3C79DE564AFC6(iVar1[iVar0]) && !unk_0x7A6C051038031EFA(iVar1[iVar0], 0))
		{
			if (unk_0x417F21FB3F950AEE(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1211++;
			}
		}
		iVar0++;
	}
	if (iLocal_1211 >= 1)
	{
		iLocal_1163 = 1;
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
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

int func_130()
{
	if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			if (!iLocal_1134)
			{
				if (unk_0xA32DC7E16AD1DFB7(iLocal_1046, iLocal_1312, 0) && func_131())
				{
					return 1;
				}
			}
			else if (unk_0xA32DC7E16AD1DFB7(iLocal_1046, iLocal_1312, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_131()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1047[iVar0]))
		{
			if (!unk_0x90219307C9D2728D(iLocal_1047[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_132(int iParam0)
{
	switch (iLocal_1208)
	{
		case 0:
			if (!unk_0x7A6C051038031EFA(iParam0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iParam0, 1630799643) != 1)
				{
					unk_0x11E129FEA365DF5C(iParam0, unk_0x0031992CA618A445(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1364, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1138 = 1;
				iLocal_1208 = 1;
			}
			break;
		
		case 1:
			func_133(iParam0);
			break;
	}
}

void func_133(int iParam0)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (unk_0xF57D21B49780A7A8(iParam0, -1207174364) != 1 && unk_0xF57D21B49780A7A8(iParam0, 1630799643) != 1)
			{
				unk_0x11E129FEA365DF5C(iParam0, iLocal_1045, -1, 0);
			}
		}
		else if (unk_0xF57D21B49780A7A8(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1057)
			{
				unk_0xC6387774FD1AA476(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0xF57D21B49780A7A8(iParam0, 1630799643) != 1)
			{
				unk_0x11E129FEA365DF5C(iParam0, iLocal_1045, -1, 0);
			}
		}
	}
}

void func_134(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (bParam2)
		{
			func_135(iParam0, uParam1);
		}
	}
}

void func_135(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_136(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0xBE0E7D38FE7C495C(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0xDFF7E223DB3CBA25(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0xBE0E7D38FE7C495C(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0xDFF7E223DB3CBA25(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0xBE0E7D38FE7C495C(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0xDFF7E223DB3CBA25(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0xBE0E7D38FE7C495C(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0xDFF7E223DB3CBA25(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x3AF262D7332EEDF5(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x3AF262D7332EEDF5(iParam0, iParam1);
	}
	return iVar0;
}

void func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!unk_0x76B3C79DE564AFC6(iLocal_1047[iParam0]))
	{
		return;
	}
	switch (iLocal_1041[iParam0])
	{
		case 0:
			if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
			{
				if (!unk_0x90219307C9D2728D(iLocal_1046, 0))
				{
					if (!unk_0x8682D8A6269E52C9(iLocal_1047[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x06DEF8F41E4A8DBB(iLocal_1047[iParam0], iLocal_1046, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0x432757A9E7AAFA96(iLocal_1313, 0))
							{
								unk_0x173325AAF2CD766A(&uVar2);
								unk_0xE10E20B323527002(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0x3A85AE9FA7967993(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0x2E0E5BF2A31392F4(0, iLocal_1313, 30000, 2, 1f, 1, 0);
								unk_0xF81AD3C937316CCA(uVar2);
								unk_0xEDD5437C49B7B1F8(iLocal_1047[iParam0], uVar2);
								unk_0x1F5B34056C3CB80B(&uVar2);
							}
						}
						iLocal_1041[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1312;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1313;
				iVar1 = 2;
			}
			if (!unk_0x7A6C051038031EFA(iLocal_1047[iParam0], 0))
			{
				if (unk_0x432757A9E7AAFA96(iVar0, 0))
				{
					if (!unk_0x7A6C051038031EFA(iLocal_1047[iParam0], 0))
					{
						if (!unk_0xA32DC7E16AD1DFB7(iLocal_1047[iParam0], iVar0, 0))
						{
							if (unk_0x90219307C9D2728D(iLocal_1046, 0))
							{
								if (unk_0xF57D21B49780A7A8(iLocal_1047[iParam0], -1794415470) != 1)
								{
									unk_0x2E0E5BF2A31392F4(iLocal_1047[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1041[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1312;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1313;
			}
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (!unk_0x7A6C051038031EFA(iLocal_1047[iParam0], 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(iLocal_1047[iParam0], iVar0, 0) && unk_0x432757A9E7AAFA96(iLocal_1312, 0))
					{
						if (iLocal_1134)
						{
							if (!bLocal_1164)
							{
								if (unk_0xF57D21B49780A7A8(iLocal_1047[iParam0], 780511057) != 1)
								{
									if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
									{
										if (unk_0x38A3CC71471EC547(iVar0) < 5f)
										{
											iLocal_1041[iParam0] = 5;
										}
									}
									unk_0x8B4EE19968C93083(iLocal_1047[iParam0], unk_0x0031992CA618A445(), 0, 16);
								}
							}
							else if (unk_0xF57D21B49780A7A8(iLocal_1047[iParam0], 780511057) != 1)
							{
								unk_0x8B4EE19968C93083(iLocal_1047[iParam0], unk_0x0031992CA618A445(), 0, 16);
							}
						}
					}
					else if (!iLocal_1158)
					{
						iLocal_1041[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x8682D8A6269E52C9(iLocal_1047[iParam0]))
			{
				if (unk_0x14784726FFD7D135(iLocal_1047[iParam0]))
				{
					unk_0xE9F82182FF45FA6F(iLocal_1047[iParam0]);
				}
			}
			if (bLocal_1159)
			{
				unk_0x173325AAF2CD766A(&uLocal_1324);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0xC5F8FCBA959CFCF8(0, func_118(), unk_0x3AF262D7332EEDF5(2000, 2500), 2048, 4);
				unk_0x6FB15A51003594A8(0, unk_0x0031992CA618A445(), unk_0x3AF262D7332EEDF5(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0xB616592F05F4F80B(0, unk_0x0031992CA618A445(), func_118(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xF81AD3C937316CCA(uLocal_1324);
				unk_0xEDD5437C49B7B1F8(iLocal_1047[iParam0], uLocal_1324);
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			else if (!unk_0x8682D8A6269E52C9(iLocal_1047[iParam0]))
			{
				unk_0xB3AC5619AC4F84DC(iLocal_1047[iParam0], Local_1305, 15f, 0, 0);
				unk_0x541B678DB67C7CF0(iLocal_1047[iParam0], 1);
				unk_0xA8A16396F3E7CD41(iLocal_1047[iParam0], 0, 1);
				unk_0x3470926F7E037B53(iLocal_1047[iParam0], 2f);
				if (!iLocal_1131 && !unk_0x90219307C9D2728D(iLocal_1047[iParam0], 0))
				{
					unk_0x173325AAF2CD766A(&uLocal_1324);
					if (unk_0x8682D8A6269E52C9(iLocal_1046))
					{
						unk_0xBE0E7D38FE7C495C(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0xD9BDC06F52127118(0, func_118(), 3000, 0, 1);
						unk_0x11E129FEA365DF5C(0, unk_0x0031992CA618A445(), -1, 0);
					}
					else
					{
						unk_0xBE0E7D38FE7C495C(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x06DEF8F41E4A8DBB(0, iLocal_1046, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0xF81AD3C937316CCA(uLocal_1324);
					iLocal_1131 = 1;
				}
				else
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1312) && unk_0x432757A9E7AAFA96(iLocal_1312, 0))
					{
						Var4 = { unk_0xA8FEF376976A5F94(iLocal_1312, unk_0x074C5D79DFD8396C(iLocal_1312, "wheel_lr")) };
						Var7 = { unk_0xF177E0DA126D71C8(iLocal_1312, 1) };
						Var7 = { Var4 - Var7 };
						unk_0xC5B9966BE61C2F63(iLocal_1047[iParam0], iLocal_1312, Var7, 1.5f, 0);
					}
					unk_0x173325AAF2CD766A(&uLocal_1324);
					unk_0x471E558A661279DE(0, 0, 0);
					if (unk_0x8682D8A6269E52C9(iLocal_1046) && !func_44(func_138(), Var4, 0))
					{
						unk_0xC8EDCC2579294762(0, Var4, func_118(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x98BA2EAB5474280B(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0xD9BDC06F52127118(0, func_118(), 1500, 1, 0);
						if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
						{
							unk_0x06DEF8F41E4A8DBB(0, iLocal_1046, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0xF81AD3C937316CCA(uLocal_1324);
				}
				if (!unk_0x7A6C051038031EFA(iLocal_1047[iParam0], 0))
				{
					unk_0xEDD5437C49B7B1F8(iLocal_1047[iParam0], uLocal_1324);
				}
				unk_0x1F5B34056C3CB80B(&uLocal_1324);
			}
			iLocal_1041[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0x7A6C051038031EFA(iLocal_1047[iParam0], 0))
			{
				if (unk_0x4CB2F72EA418C083(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x2D1A3279FE1D23D4(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0x11B110DE93DCDA0C(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0x11B110DE93DCDA0C(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1312;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1313;
			}
			if (!unk_0x8682D8A6269E52C9(iLocal_1046))
			{
				if (!unk_0x8682D8A6269E52C9(iLocal_1047[iParam0]))
				{
					if (unk_0x90219307C9D2728D(iLocal_1046, 0))
					{
						unk_0x8B4EE19968C93083(iLocal_1047[iParam0], iLocal_1045, 0, 16);
					}
					else
					{
						unk_0xC6387774FD1AA476(iLocal_1047[iParam0], iLocal_1046, unk_0x0031992CA618A445(), 3f, 1, 0.005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1041[iParam0] = 6;
			}
			else if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x38A3CC71471EC547(iVar0) < 5f)
				{
					func_117(iLocal_1047[iParam0]);
					iLocal_1041[iParam0] = 6;
				}
				else if (unk_0xF57D21B49780A7A8(iLocal_1047[iParam0], 780511057) != 1)
				{
					unk_0x8B4EE19968C93083(iLocal_1047[iParam0], iLocal_1045, 0, 16);
				}
			}
			else
			{
				func_117(iLocal_1047[iParam0]);
				iLocal_1041[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1047[iParam0]);
			func_90(iLocal_1047[iParam0]);
			break;
	}
	if (!iLocal_1134)
	{
		if (iLocal_1158)
		{
			if (iLocal_1041[iParam0] != 3 && iLocal_1041[iParam0] != 4)
			{
				iLocal_1041[iParam0] = 3;
			}
		}
		else if (func_127(iLocal_1047[iParam0]))
		{
			iLocal_1134 = 1;
		}
	}
	else if (iLocal_1041[iParam0] < 5)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1047[iParam0]))
		{
			if (unk_0x14784726FFD7D135(iLocal_1047[iParam0]))
			{
				unk_0xE9F82182FF45FA6F(iLocal_1047[iParam0]);
			}
			unk_0x3F312071A698862D(iLocal_1047[iParam0]);
			unk_0x541B678DB67C7CF0(iLocal_1047[iParam0], 2);
			unk_0xA8A16396F3E7CD41(iLocal_1047[iParam0], 13, 1);
		}
		iLocal_1041[iParam0] = 5;
	}
}

Vector3 func_138()
{
	struct<3> Var0;
	
	return Var0;
}

int func_139(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xED1168B8D2D313FA();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (!unk_0x8E124932BCA8337D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xFAE7EEA9EC6C8B59(iParam0, 1);
			}
			else
			{
				unk_0xC1F8D3D339E714E3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xCF88C2F9C02AE277(iParam0, iParam2);
			unk_0x7F39688B4D1E8A5B(iParam0, fParam6);
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x042302634EF280A7(iParam0, iParam9);
		}
		unk_0xF856340FF6FF9351(iParam0, iParam4);
		unk_0x0F321108A38FDEEF(iParam0, iParam5);
		*uParam1 = unk_0x92EB201D24EEB65C(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB934A06DDA5027D(*uParam1, iParam8);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
				{
					unk_0xA23268A8852A45E8("STRING");
					if (bParam10)
					{
						unk_0x50B3C23D0902259F(sParam7);
					}
					else
					{
						unk_0x7C8A7ECFBAD2C8C4(sParam7);
					}
					unk_0x05064114393805B9(*uParam1);
				}
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_6, 2))
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			uParam1->f_1 = unk_0x44DF128826D07906(iParam0);
			if (!unk_0x2A3398C6222EB190(uParam1->f_6, 3))
			{
				if (unk_0xA761A0B6072010C8(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xEB934A06DDA5027D(uParam1->f_1, iParam8);
					}
					if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
					{
						unk_0xA23268A8852A45E8("STRING");
						if (bParam10)
						{
							unk_0x50B3C23D0902259F(sParam7);
						}
						else
						{
							unk_0x7C8A7ECFBAD2C8C4(sParam7);
						}
						unk_0x05064114393805B9(uParam1->f_1);
					}
					unk_0xC5B4383DA70A2C1A(uParam1->f_1, 7);
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA761A0B6072010C8(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA761A0B6072010C8(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		Local_1305 = { unk_0xF177E0DA126D71C8(iLocal_1046, 0) };
	}
	switch (iLocal_1040)
	{
		case 0:
			if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0) && !unk_0x7A6C051038031EFA(uLocal_1050[0], 0))
				{
					if (!unk_0xA32DC7E16AD1DFB7(iLocal_1046, iLocal_1312, 0))
					{
						if (unk_0xF57D21B49780A7A8(iLocal_1046, -1794415470) != 1)
						{
							if (!iLocal_1134 && !iLocal_1158)
							{
								unk_0x2E0E5BF2A31392F4(iLocal_1046, iLocal_1312, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0x2E0E5BF2A31392F4(iLocal_1046, iLocal_1312, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&uLocal_1342))
							{
								func_49(&uLocal_1342);
							}
							else
							{
								func_50(&uLocal_1342);
							}
						}
						if (!iLocal_1160)
						{
							if (func_52(&uLocal_1342))
							{
								if (func_46(&uLocal_1342) > 3.5f)
								{
									if (!unk_0x8682D8A6269E52C9(iLocal_1046))
									{
										func_29(&uLocal_1364, 4, iLocal_1046, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1160 = 1;
										}
									}
								}
							}
						}
						if (func_143(iLocal_1046))
						{
							func_3();
							iLocal_1040 = 4;
						}
					}
					else
					{
						bLocal_1137 = true;
						iLocal_1040 = 1;
					}
				}
				else
				{
					iLocal_1040 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1160)
			{
				if (!unk_0x8682D8A6269E52C9(iLocal_1046))
				{
					func_29(&uLocal_1364, 4, iLocal_1046, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1160 = 1;
					}
				}
			}
			if (!iLocal_1179)
			{
				if (func_142())
				{
					if (func_24(iLocal_1046, unk_0x0031992CA618A445(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_141())
							{
								iLocal_1179 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(iLocal_1046, iLocal_1312, 0))
				{
					if (unk_0xF57D21B49780A7A8(iLocal_1046, -828834893) != 1)
					{
						unk_0x471E558A661279DE(iLocal_1046, 0, 256);
					}
				}
				else if (!bLocal_1164)
				{
					unk_0x3470926F7E037B53(iLocal_1046, 2f);
					unk_0x1F5B34056C3CB80B(&uVar0);
					unk_0x173325AAF2CD766A(&uVar0);
					unk_0xBE0E7D38FE7C495C(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x53E150F8F0AD7101(0, iLocal_1045, 200f, -1, 0, 0);
					unk_0xF81AD3C937316CCA(uVar0);
					if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
					{
						unk_0xEDD5437C49B7B1F8(iLocal_1046, uVar0);
					}
					unk_0x1F5B34056C3CB80B(&uVar0);
					bLocal_1164 = true;
				}
				else if (unk_0xF57D21B49780A7A8(iLocal_1046, 1435919172) != 1)
				{
					unk_0x53E150F8F0AD7101(iLocal_1046, iLocal_1045, 200f, -1, 0, 0);
				}
				if (!iLocal_1179)
				{
					if (!func_22() && !unk_0x2C4568A5B00B34DA())
					{
						func_6(&uLocal_1364, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1179 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1134)
	{
		if (iLocal_1158)
		{
		}
		else if (func_127(iLocal_1046) || iLocal_1188)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_106(unk_0xF177E0DA126D71C8(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_105())
			{
				iLocal_1134 = 1;
			}
		}
	}
}

int func_141()
{
	switch (iLocal_1214)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&uLocal_1342);
				iLocal_1214++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&uLocal_1342) > 7f)
			{
				func_27(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&uLocal_1342);
				iLocal_1214++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&uLocal_1342) > 8f)
			{
				func_27(&uLocal_1364, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
	{
		iVar0 = unk_0x3251C2B06497863C(iLocal_1312, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0x8682D8A6269E52C9(iVar0)))
		{
			iVar0 = unk_0x3251C2B06497863C(iLocal_1312, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0x8682D8A6269E52C9(iVar0)))
			{
				iVar0 = unk_0x3251C2B06497863C(iLocal_1312, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0x8682D8A6269E52C9(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	var uVar0;
	
	if ((iLocal_1134 || iLocal_1158) || bLocal_1159)
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			if (func_22())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!unk_0x90219307C9D2728D(iParam0, 0))
			{
				if (!bLocal_1164)
				{
					unk_0x1F5B34056C3CB80B(&uVar0);
					unk_0x173325AAF2CD766A(&uVar0);
					unk_0xBE0E7D38FE7C495C(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x53E150F8F0AD7101(0, iLocal_1045, 200f, -1, 0, 0);
					unk_0xF81AD3C937316CCA(uVar0);
					if (!unk_0x7A6C051038031EFA(iLocal_1046, 0))
					{
						unk_0xEDD5437C49B7B1F8(iLocal_1046, uVar0);
					}
					unk_0x1F5B34056C3CB80B(&uVar0);
					bLocal_1164 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_144()
{
	if (!iLocal_1165)
	{
		if (iLocal_1031 > 15)
		{
			unk_0x1E420F926A7BC4D2("ASS1_ALERT");
			iLocal_1165 = 1;
		}
	}
	if (!iLocal_1166)
	{
		if (iLocal_1134 && !func_22())
		{
			func_433();
			iLocal_1166 = 1;
			if (!iLocal_1165)
			{
				unk_0x1E420F926A7BC4D2("ASS1_ALERT");
				iLocal_1165 = 1;
			}
		}
	}
	func_432();
	switch (iLocal_1031)
	{
		case 3:
			if (func_498())
			{
				iLocal_1031 = 4;
				break;
			}
			func_431();
			func_429();
			break;
		
		case 4:
			if (func_498())
			{
				if (func_497())
				{
					iLocal_1153 = 1;
				}
				bLocal_1142 = true;
			}
			func_428();
			func_427();
			func_426();
			func_425(1);
			func_424();
			func_506(&Local_360, 2);
			iLocal_1031 = 5;
			break;
		
		case 5:
			if (func_423())
			{
				iLocal_1031 = 6;
			}
			break;
		
		case 6:
			func_422();
			func_421();
			if (bLocal_1142)
			{
				if (Global_104439.f_19824.f_5 != 0f)
				{
					func_51(&uLocal_1336, Global_104439.f_19824.f_5);
				}
				iLocal_1209 = func_492();
				if (Global_87084)
				{
					if (iLocal_1209 <= 2)
					{
						iLocal_1209++;
					}
				}
				if (iLocal_1209 == 0)
				{
					func_420();
				}
				else if (iLocal_1209 == 1)
				{
					func_419();
				}
				else if (iLocal_1209 == 2)
				{
					func_415();
				}
			}
			else
			{
				if (!func_52(&uLocal_1336))
				{
					func_49(&uLocal_1336);
					Global_104439.f_19824.f_5 = 0f;
				}
				iLocal_1031 = 7;
			}
			break;
		
		case 7:
			func_409();
			func_394();
			break;
		
		case 8:
			func_360();
			break;
		
		case 9:
			func_409();
			func_359();
			func_267();
			break;
		
		case 10:
			func_359();
			func_263();
			break;
		
		case 11:
			func_249();
			func_248();
			break;
		
		case 12:
			func_247();
			func_248();
			break;
		
		case 13:
			func_243();
			func_248();
			break;
		
		case 15:
			func_241();
			break;
		
		case 16:
			func_238();
			break;
		
		case 17:
			func_232();
			break;
		
		case 18:
			func_145();
			break;
	}
}

void func_145()
{
	unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
	func_146();
}

void func_146()
{
	func_231();
	switch (iLocal_1215)
	{
		case 0:
			if (!iLocal_377)
			{
				if (iLocal_1032 == 1)
				{
					bLocal_375 = true;
					func_230();
				}
				Global_104439.f_19824.f_5 = func_46(&uLocal_1336);
				fLocal_372 = Global_104439.f_19824.f_5;
				func_223();
				iLocal_377 = 1;
				iLocal_1215 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1187)
			{
				unk_0xE784DA9DBB23459B("FRANKLIN_BIG_01");
				iLocal_1187 = 1;
			}
			if (func_219(&uLocal_388, 1, 0) && unk_0xEB3778E953CA5D7C())
			{
				func_218(&uLocal_1541, 0, 0, 0, 1);
				func_217(&uLocal_1541, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_217(&uLocal_1541, "ES_XPAND", 2, 216, 1, 1, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1215 = 2;
			}
			break;
		
		case 2:
			if (func_192(&uLocal_388, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1185 = true;
			}
			if (!bLocal_1185)
			{
				func_184(&uLocal_1541, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0xD887E21676314450(2, 215) || unk_0x42F812C5F1AA300A(2, 200))
			{
				if (!bLocal_1185)
				{
					bLocal_1185 = true;
					func_183(&uLocal_388);
				}
			}
			if (bLocal_1185)
			{
				if (func_192(&uLocal_388, 0, 1065353216, 0, 0, 0))
				{
					func_181(&uLocal_388);
					Global_104439.f_19824++;
					func_180();
					func_151(Local_57);
					func_149(0, 0);
					func_147();
					func_499();
				}
			}
			break;
	}
}

void func_147()
{
	func_148();
}

int func_148()
{
	if (func_40(0))
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

void func_149(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55856)
	{
		Global_55856 = iParam1;
	}
	if (bParam0)
	{
		if ((func_40(0) && Global_71031.f_1 == 1) && func_150(Global_71031))
		{
		}
		else
		{
			Global_55854 = 1;
		}
	}
	if (Global_104439.f_8946 || func_40(0))
	{
		iVar0 = func_39();
		iVar1 = Global_83659[iVar0 /*5*/];
		uVar2 = Global_71054.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104439.f_8946)
			{
			}
			return;
		}
		if (unk_0x2A3398C6222EB190(Global_83659[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x2A3398C6222EB190(Global_83659[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xCD7E92DE2BFA0B0D(&(Global_83659[iVar0 /*5*/].f_1), 4);
		unk_0xCD7E92DE2BFA0B0D(&Global_71033, 1);
		Global_71049 = uVar2;
		Global_71050 = unk_0x31CD6E9F83C10233();
	}
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_151(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;
	
	fVar0 = (1f + func_179());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_114(Global_104439.f_19824.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_152(func_13(), 96, unk_0xF2DB717A73826179(fVar0), 0, 0);
}

void func_152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_153(Global_104439.f_27911[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_178();
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
					func_177(99, 1);
					func_176(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_161(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_160(5))
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
							func_176(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_160(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_176(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_176(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_176(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_176(joaat("sp2_money_spent_property"), iParam3);
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
									func_176(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_160(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_176(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_176(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_176(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_159(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_177(95, iParam3);
					break;
				
				case 1:
					func_177(97, iParam3);
					break;
				
				case 2:
					func_177(96, iParam3);
					break;
			}
			func_177(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_156(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_156(iVar1);
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
					func_176(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_176(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_176(joaat("sp2_total_cash_earned"), iParam3);
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
	func_155(iParam0);
	if (Global_35813 == 15)
	{
		func_154(0);
	}
	return 1;
}

void func_154(bool bParam0)
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

void func_155(int iParam0)
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

void func_156(int iParam0)
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
	else if (unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0) || unk_0x2A3398C6222EB190(Global_2097152[func_158() /*11035*/].f_7550.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD804ACF2A7171150(&(Global_104439.f_20425.f_471), iParam0);
		unk_0xD804ACF2A7171150(&(Global_2097152[func_158() /*11035*/].f_7550.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xC8EBA5D7FC75C1C0("COUP_RED");
		unk_0x7C8A7ECFBAD2C8C4(func_157(iParam0));
		unk_0x10DFDE006F19F20F(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_157(int iParam0)
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

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_159(int iParam0)
{
	func_177(93, iParam0);
	func_177(29, iParam0);
	func_177(30, iParam0);
}

bool func_160(int iParam0)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20425.f_471, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2097152[func_158() /*11035*/].f_7550.f_10, iParam0);
}

int func_161(bool bParam0)
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
		func_175(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_162(27, 1);
	return 1;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_163(iParam0, iParam1);
}

int func_163(int iParam0, int iParam1)
{
	if (func_18(14) && !func_174(iParam0))
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
	if (func_173(&Global_2608378))
	{
		if (func_171(&Global_2608378, iParam0))
		{
			return 0;
		}
		if (func_164(&Global_2608378, iParam0))
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

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_174(iParam1))
	{
		return 0;
	}
	if (func_171(uParam0, iParam1))
	{
		return 0;
	}
	if (func_170(uParam0) < 0f)
	{
		func_169(uParam0, 0);
	}
	func_167(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_165(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_165(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x38260021B4E87C3F(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_174(iParam1))
	{
		return 0;
	}
	if (func_171(uParam0, iParam1))
	{
		return 0;
	}
	if (func_170(uParam0) < 0f)
	{
		func_169(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_166(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_166(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_167(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_168(uParam0, iVar0);
		iVar0++;
	}
	func_169(uParam0, (Global_2608377 - 0.5f));
}

void func_168(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_169(var uParam0, float fParam1)
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

float func_170(var uParam0)
{
	return uParam0->f_72;
}

bool func_171(var uParam0, int iParam1)
{
	return func_172(uParam0, iParam1) != -1;
}

int func_172(var uParam0, int iParam1)
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

bool func_173(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1)
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

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x2553A7EB99AABF55(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE931A869061F7BD2(iParam0, iVar0, 1);
}

void func_177(int iParam0, int iParam1)
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

void func_178()
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

float func_179()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_114(Global_104439.f_19824.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_114(Global_104439.f_19824.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_114(Global_104439.f_19824.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_114(Global_104439.f_19824.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_114(Global_104439.f_19824.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_114(Global_104439.f_19824.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_114(Global_104439.f_19824.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_114(Global_104439.f_19824.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_114(Global_104439.f_19824.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_180()
{
	func_506(&(Global_104439.f_19824.f_1), 2048);
}

void func_181(var uParam0)
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
				if (unk_0x5114FCEE2A997B95() && !func_40(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_182(0);
}

void func_182(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

void func_183(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_184(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
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
	if (!func_191(uParam0))
	{
		return;
	}
	unk_0x2745EC8E79BD57E0();
	unk_0x38C75B31337B3454(iParam2);
	if (!func_190(uParam0->f_1, 256) || (func_190(uParam0->f_1, 8192) && unk_0xDE25F26B6B16CF7A(2)))
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
			unk_0xE8240315678FDE8E(func_190(uParam0->f_1, 4096));
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
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xE344F89A3A395F9C(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x295E4023D39A7295(iVar0, iVar1, bVar2);
						}
						if (!unk_0x0BD3CCFB6C6CFA91(uVar3))
						{
							func_189(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x0BD3CCFB6C6CFA91(uParam0->f_2[iVar6 /*15*/]))
					{
						func_188(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (func_190(uParam0->f_1, 4096))
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
		fVar8 = func_187(bParam4, func_187(func_190(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEBD23F68B1A617FC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x90495002CD46BD88(fVar8);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(80f);
		unk_0x1C703A54AB4B12F6();
		func_186(&(uParam0->f_1), 256);
		func_185(&(uParam0->f_1), 128);
	}
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 0, 0);
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_187(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_188(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_189(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

bool func_190(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_191(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			func_186(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_192(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
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
	func_214(0);
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
		switch (func_16(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
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
		uParam0->f_560 = (uParam0->f_560 + func_213(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_213(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_213((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_213(30f) - func_213(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_182(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_195(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_194(uParam0->f_30, 0f, 1f);
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
		uParam0->f_547 = func_194(uParam0->f_547, 0f, 1f);
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
		uParam0->f_548 = func_194(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0xDE25F26B6B16CF7A(2))
			{
				if (unk_0x77FA56883245AD26(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_193(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				func_193(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
				uParam0->f_559 = func_194((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_194((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_194((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_194((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
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
				func_182(0);
			}
			return !bVar0;
		}
	}
	func_182(0);
	return 1;
}

void func_193(var uParam0, bool bParam1)
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
	func_189(unk_0xE344F89A3A395F9C(2, 215, true));
	func_188("ES_HELP");
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
		func_189(unk_0xE344F89A3A395F9C(2, 216, true));
		func_188("ES_XPAND");
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

float func_194(float fParam0, float fParam1, float fParam2)
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

void func_195(var uParam0, float fParam1, bool bParam2)
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
	var uVar13;
	var uVar14;
	var uVar15;
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
	fVar1 = (func_212() * 0.25f);
	if (unk_0x77FA56883245AD26(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEBD23F68B1A617FC(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_188(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_211(&(uParam0->f_13));
				}
				else
				{
					func_188(&(uParam0->f_13));
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
				unk_0xE8240315678FDE8E(iParam2);
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
		func_210();
		unk_0x4237E72FB80FD332(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_213((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_212());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_209(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x5E61619C36D9095B(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_209(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_212()) / 2.5f);
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
						func_84((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
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
	unk_0xB922891BFD232C45(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x52D4D0409C49DF8C(uVar13, uVar14, uVar15, iVar0);
	unk_0x7A1F4BBECE23C9E3(fVar9, fVar10);
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, 0.4f);
	fVar1 = (fVar1 - func_213(6f));
	fVar1 = (fVar1 + (func_213(30f) - func_213((2f * 2f))));
	fVar11 = (fVar2 - func_213((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_194((fVar11 / (0.6f * func_213(25f))), 0f, 1f);
		func_210();
		unk_0x45A34FA87FBE9599(0.5f, (fVar1 - (func_213((2f - 0.5f)) - 0.001388889f)), fVar6, func_208(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_213((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_213((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_212())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_194((fVar11 / (0.8f * func_213(25f))), 0f, 1f);
			func_205(uParam0, iVar17, (fVar1 + func_213(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_213(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_213((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_212())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_213(2f));
					fVar12 = func_194((fVar11 / (0.6f * func_213(25f))), 0f, 1f);
					func_210();
					unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_213((2f * 0.5f))), fVar6, func_208(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_213((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_213((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_213((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_212())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_213(2f));
			fVar12 = func_194((fVar11 / (0.6f * func_213(25f))), 0f, 1f);
			func_210();
			unk_0x45A34FA87FBE9599(0.5f, (fVar1 + func_213((2f * 0.5f))), fVar6, func_208(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_213((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_212())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_194((fVar11 / (0.8f * func_213(25f))), 0f, 1f);
			unk_0x52D4D0409C49DF8C(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_198(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x2DA8A432EC3C3D33() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_212()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_212()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_212()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_212()) / 2.5f));
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
			func_197(&(uParam0->f_550), fVar20, (fVar1 + func_213((2f * 2f))), 0, 0, 0);
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar21);
			unk_0x41D772AFFBD36843(2);
			unk_0xD1F2C9FF58856AEC(1f, 0.4f);
			unk_0xAC1B647E90E8412A(0);
			func_210();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x7A1F4BBECE23C9E3(fVar20, fVar22);
			unk_0x52D4D0409C49DF8C(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x0B8B91F21AE25854("PERCENTAGE");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_213((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x0B8B91F21AE25854("FO_TWO_NUM");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x96577CAA1D1E72DB(uParam0->f_555);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_213((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x0B8B91F21AE25854("MTPHPER_XPNO");
					unk_0x96577CAA1D1E72DB(uParam0->f_554);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_213((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x0B8B91F21AE25854("ESDOLLA");
					unk_0xCA44A68ABB26D497(uParam0->f_554, 1);
					unk_0x7E43DE6F9866B44B(fVar20, (fVar1 + func_213((2f * 2f))), 0);
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
				fVar42 = ((fVar21 + func_196(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_213(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x1638116285563DAD(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_213(30f) - 2f));
		}
	}
}

float func_196(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_197(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAC1B647E90E8412A(iParam3);
	unk_0x4E250FE9E4D8720F(iParam5);
	func_210();
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

int func_198(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_204(iParam0), 64);
	StringCopy(&cVar16, func_201(iParam0, bParam1), 64);
	if (unk_0x50B7853132D8438E(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xD9151D5BCEE2689C(&iVar32, &iVar33);
			fVar35 = unk_0x5E61619C36D9095B(0);
			if (func_200())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_200())
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
		Var37.f_0 = (Var37.f_0 * (func_199(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_199(iParam0) / fVar34));
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

float func_199(int iParam0)
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

int func_200()
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

var func_201(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_203(unk_0x3D35F9864E4640B1()) };
			if (unk_0xFCA40B20F5AC75B0(&Var19, &uVar3))
			{
				return func_202(&uVar3);
			}
		}
		else
		{
			return func_202(&(Global_17290.f_6719[iParam0 /*16*/]));
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

var func_202(var uParam0)
{
	return uParam0;
}

struct<13> func_203(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

char* func_204(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x50B7853132D8438E(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_203(unk_0x3D35F9864E4640B1()) };
			unk_0xFCA40B20F5AC75B0(&Var16, &uVar0);
			return func_202(&uVar0);
		}
		else
		{
			return func_202(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_205(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xB922891BFD232C45(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x52D4D0409C49DF8C(uVar0, uVar1, uVar2, iParam5);
	unk_0x7A1F4BBECE23C9E3(fParam3, fParam4);
	unk_0x41D772AFFBD36843(1);
	unk_0xD1F2C9FF58856AEC(1f, func_207(14f));
	unk_0xAC1B647E90E8412A(0);
	unk_0x4E250FE9E4D8720F(0);
	func_210();
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
			func_198(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_201(7, 0), (fParam4 - 0.006f), ((fParam2 + func_213(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_198(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_201(5, 0), (fParam4 - 0.006f), ((fParam2 + func_213(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_198(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x1638116285563DAD("CommonMenu", func_201(6, 0), (fParam4 - 0.006f), ((fParam2 + func_213(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
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
	unk_0xD1F2C9FF58856AEC(1f, func_207(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x7A1F4BBECE23C9E3(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x52D4D0409C49DF8C(uVar0, uVar1, uVar2, iParam5);
	func_206(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_206(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_210();
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
			unk_0xD1F2C9FF58856AEC(1f, func_207(18f));
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
			unk_0xD1F2C9FF58856AEC(1f, func_207(14f));
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
			unk_0xD1F2C9FF58856AEC(1f, func_207(18f));
		
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
			unk_0xD1F2C9FF58856AEC(1f, func_207(14f));
		}
		else
		{
			unk_0x7E43DE6F9866B44B(fParam2, fParam3, 0);
		}
	}
}

float func_207(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_208(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_209(char* sParam0)
{
	unk_0x54412EEBDB162F5C(sParam0);
	return (unk_0x51C2CBAC9E5D95A4(1) / 2f);
}

void func_210()
{
	unk_0x38C75B31337B3454(1);
	if (unk_0x229840854A80E0D9() || unk_0x5114FCEE2A997B95())
	{
		unk_0x38C75B31337B3454(7);
	}
	unk_0xED9541AF8190B3D1(0);
}

void func_211(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

float func_212()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x20551D6D924ED04B())
	{
	}
	return fVar0;
}

float func_213(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_214(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_70(0))
		{
			func_215(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_215(int iParam0)
{
	if (Global_14604)
	{
		func_216(0, 0);
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
	if (!func_10())
	{
		Global_14443.f_1 = 3;
	}
}

void func_216(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_70(0))
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

int func_217(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_218(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA429A9A606DF2BC3("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_186(&(uParam0->f_1), 32);
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		func_186(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xA51E81D5CF49E5C7(*uParam0, 1);
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (bParam3)
		{
			func_186(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_186(&(uParam0->f_1), 8192);
	}
}

int func_219(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_222(uParam0);
	func_221(uParam0);
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
			func_220(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_193(uParam0, 1);
		}
		else
		{
			func_193(uParam0, 0);
		}
	}
	Global_71046 = 1;
	return 1;
}

void func_220(var uParam0)
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
	func_189(unk_0xE344F89A3A395F9C(2, 188, true));
	func_188("ES_HELP_TU");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(1);
	func_189(unk_0xE344F89A3A395F9C(2, 187, true));
	func_188("ES_HELP_TD");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(0);
	func_189(unk_0xE344F89A3A395F9C(2, 202, true));
	func_188("ES_HELP_AB");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x1C703A54AB4B12F6();
}

void func_221(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x41D772AFFBD36843(0);
	unk_0xD1F2C9FF58856AEC(1f, func_207(16f));
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

void func_222(var uParam0)
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

void func_223()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		func_229(&uLocal_388, &Local_965, &Global_55869, 0);
		fLocal_372 = (fLocal_372 * 1000f);
		if (Global_87084)
		{
			func_228(&uLocal_388, 6, &(Local_965.f_12), "MTPHPERSKI", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			func_228(&uLocal_388, 6, &(Local_965.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_228(&uLocal_388, 6, &(Local_965.f_30), "MTPHPERSKI", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 3, 0);
			func_227();
		}
		else
		{
			if (bLocal_376)
			{
				func_228(&uLocal_388, 6, &(Local_965.f_12), "MTPHPERRET", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_228(&uLocal_388, 9, &(Local_965.f_12), "", unk_0xF34EE736CF047844(fLocal_372), 0, 0, 0);
			}
			if (!unk_0x0BD3CCFB6C6CFA91(&(Local_965.f_18)))
			{
				if (bLocal_375)
				{
					func_228(&uLocal_388, 6, &(Local_965.f_24), "", 0, 0, 2, 0);
					func_228(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 2, 0);
				}
				else
				{
					func_228(&uLocal_388, 6, &(Local_965.f_24), "", 0, 0, 1, 0);
					func_228(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_228(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_87084)
		{
			iVar1 = 0;
			while (iVar1 < Global_67949)
			{
				if (Global_67950[iVar1 /*9*/] >= 0 && !Global_56079[Global_67950[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_67950[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_226(&uLocal_388, 1, &(Local_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		else if (bLocal_375)
		{
			if (bLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_226(&uLocal_388, 1, &(Local_965.f_42), iLocal_383, 0, 0, 2, 0);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_226(&uLocal_388, 1, &(Local_965.f_36), iLocal_383, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_375 && !bLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_226(&uLocal_388, 1, &(Local_965.f_42), iLocal_383, 0, 0, 2, 0);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_226(&uLocal_388, 1, &(Local_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		func_224();
		iLocal_377 = 1;
	}
}

void func_224()
{
	if (unk_0x7832F791572D5809(joaat("assassin_valet")) == 1)
	{
		func_225(38, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_225(39, 1, 1);
		}
		else
		{
			func_225(39, 0, 1);
		}
		if (bLocal_375)
		{
			func_225(40, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_225(40, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_225(41, iLocal_383, 1);
		func_225(42, iLocal_384, 1);
	}
	else if (unk_0x7832F791572D5809(joaat("assassin_multi")) == 1)
	{
		func_225(52, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_225(53, 1, 1);
		}
		else
		{
			func_225(53, 0, 1);
		}
		if (bLocal_375)
		{
			func_225(56, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_225(56, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_225(54, iLocal_383, 1);
		func_225(55, iLocal_384, 1);
	}
	else if (unk_0x7832F791572D5809(joaat("assassin_hooker")) == 1)
	{
		func_225(66, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_225(67, 1, 1);
		}
		else
		{
			func_225(67, 0, 1);
		}
		if (bLocal_375)
		{
			func_225(68, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_225(68, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_225(69, iLocal_383, 1);
		func_225(70, iLocal_384, 1);
	}
	else if (unk_0x7832F791572D5809(joaat("assassin_bus")) == 1)
	{
		func_225(81, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_225(82, 1, 1);
		}
		else
		{
			func_225(82, 0, 1);
		}
		if (bLocal_375)
		{
			func_225(83, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_225(83, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_225(84, iLocal_383, 1);
		func_225(85, iLocal_384, 1);
	}
	else if (unk_0x7832F791572D5809(joaat("assassin_construction")) == 1)
	{
		func_225(97, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_225(98, 1, 1);
		}
		else
		{
			func_225(98, 0, 1);
		}
		if (bLocal_375)
		{
			func_225(99, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_225(99, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_225(100, iLocal_383, 1);
		func_225(101, iLocal_384, 1);
	}
}

void func_225(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67949)
	{
		if (Global_67950[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67950[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67950[iVar0 /*9*/].f_1 = (Global_67950[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67950[iVar0 /*9*/] != -1)
	{
		if (Global_56079[Global_67950[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67950[iVar0 /*9*/].f_1 > 1)
			{
				Global_67950[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67950[iVar0 /*9*/].f_1 < 0)
			{
				Global_67950[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_226(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_227()
{
	Global_87083 = 0;
	Global_87084 = 0;
}

void func_228(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_229(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_230()
{
	func_506(&(Global_104439.f_19824.f_1), 4194304);
}

void func_231()
{
	int iVar0;
	
	if (!bLocal_1175)
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iVar0, 0))
				{
					if (unk_0xEA9A1C2927FFD16C(iVar0))
					{
						if (unk_0x5C7A4C010111DAF5("ASS1_LOST"))
						{
							bLocal_1175 = true;
						}
					}
				}
			}
		}
	}
}

void func_232()
{
	float fVar0;
	
	if (!iLocal_1172)
	{
		if (!unk_0x2C4568A5B00B34DA())
		{
			if (!func_22())
			{
				func_237("ASS_VA_GO", 7500, -1);
				iLocal_1172 = 1;
			}
		}
	}
	func_236(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			iLocal_1193++;
			break;
		
		case 1:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				fVar0 = func_26(unk_0x0031992CA618A445(), Local_1299, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_1167 = true;
					func_234();
					iLocal_1193++;
				}
				else
				{
					unk_0x06FEA3DFCA4E3ED1(unk_0x3D35F9864E4640B1());
				}
			}
			break;
		
		case 2:
			if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_231();
					if (func_233())
					{
						iLocal_1031 = 18;
					}
				}
			}
			else if (!iLocal_1183)
			{
				if (!func_22())
				{
					if (!unk_0x2C4568A5B00B34DA())
					{
						func_237("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1193++;
						iLocal_1183 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				iLocal_1193 = 2;
			}
			break;
	}
}

int func_233()
{
	if (bLocal_1175)
	{
		unk_0x1E420F926A7BC4D2("ASS1_LOST");
		iLocal_1176 = 1;
	}
	func_234();
	return 1;
}

void func_234()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1047[iVar0]))
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_1047[iVar0]))
			{
				func_235(&(Local_1102[iVar0 /*8*/]));
				unk_0xD706D9D85701BFBD(iLocal_1047[iVar0]);
				unk_0x056049D9941BD43D(&(iLocal_1047[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			unk_0xD706D9D85701BFBD(iLocal_1046);
			unk_0x056049D9941BD43D(&iLocal_1046);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1050[iVar0]))
		{
			if (!unk_0x8682D8A6269E52C9(uLocal_1050[iVar0]))
			{
				func_235(&(Local_1060[iVar0 /*8*/]));
				unk_0xD706D9D85701BFBD(uLocal_1050[iVar0]);
				unk_0x056049D9941BD43D(&(uLocal_1050[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76B3C79DE564AFC6(uLocal_1054[iVar0]))
		{
			if (!unk_0x8682D8A6269E52C9(uLocal_1054[iVar0]))
			{
				func_235(&(Local_1085[iVar0 /*8*/]));
				unk_0xD706D9D85701BFBD(uLocal_1054[iVar0]);
				unk_0x056049D9941BD43D(&(uLocal_1054[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x9793B48C4C8275F8(iLocal_1325);
}

void func_235(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
		bVar0 = true;
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_1))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x76B3C79DE564AFC6(uParam0->f_7))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_7, 0))
		{
			if (unk_0x8E124932BCA8337D(uParam0->f_7))
			{
				unk_0xFAE7EEA9EC6C8B59(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_236(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_237(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

void func_238()
{
	func_236(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				if (!iLocal_1183)
				{
					if (!func_22())
					{
						if (!unk_0x2C4568A5B00B34DA())
						{
							func_237("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1193++;
							iLocal_1183 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_1172)
				{
					if (!func_22())
					{
						if (!unk_0x2C4568A5B00B34DA())
						{
							func_237("ASS_VA_GO", 7500, -1);
							iLocal_1193++;
							iLocal_1172 = 1;
						}
					}
				}
			}
			else if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0) && func_30(125f, 1) == 0)
			{
				func_231();
				func_234();
				func_240(1);
				func_239();
				iLocal_1193++;
			}
			break;
		
		case 2:
			func_231();
			iLocal_1031 = 18;
			break;
	}
}

void func_239()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1312))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
		{
			unk_0xFABEFEE17018AE2A(iLocal_1312, 1);
		}
		unk_0x28BB69BE14577487(&iLocal_1312);
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_1313))
	{
		if (!unk_0x7A6C051038031EFA(iLocal_1313, 0))
		{
			if ((unk_0x4096DB4B0B8A982B(iLocal_1313) && !unk_0xDBF188DE6334F01A(iLocal_1313)) && !unk_0x5114FCEE2A997B95())
			{
				unk_0x28BB69BE14577487(&iLocal_1313);
			}
			else
			{
				if (unk_0x76B3C79DE564AFC6(uLocal_1054[0]) && !unk_0x7A6C051038031EFA(uLocal_1054[0], 0))
				{
					if (!unk_0x7A6C051038031EFA(iLocal_1313, 0))
					{
						if (unk_0xA32DC7E16AD1DFB7(uLocal_1054[0], iLocal_1313, 0))
						{
							unk_0x3000ECF14A659126(uLocal_1054[0]);
						}
					}
				}
				if (unk_0x76B3C79DE564AFC6(uLocal_1054[1]) && !unk_0x7A6C051038031EFA(uLocal_1054[1], 0))
				{
					if (!unk_0x7A6C051038031EFA(iLocal_1313, 0))
					{
						if (unk_0xA32DC7E16AD1DFB7(uLocal_1054[1], iLocal_1313, 0))
						{
							unk_0x3000ECF14A659126(uLocal_1054[1]);
						}
					}
				}
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_1313, 0))
					{
						unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
					}
				}
				unk_0x28BB69BE14577487(&iLocal_1313);
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(uLocal_1316[0]))
	{
		unk_0x28BB69BE14577487(&(uLocal_1316[0]));
	}
	if (unk_0x76B3C79DE564AFC6(uLocal_1316[1]))
	{
		unk_0x28BB69BE14577487(&(uLocal_1316[1]));
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_1319) && !unk_0x7A6C051038031EFA(iLocal_1319, 0))
	{
		if (unk_0xCC234795142FC2D2(iLocal_1319) && unk_0xC9FBF92709010AC3(iLocal_1319, 1))
		{
			unk_0x28BB69BE14577487(&iLocal_1319);
		}
	}
}

void func_240(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xA761A0B6072010C8(uLocal_1120))
		{
			unk_0x0C4BDC77192798AE(&uLocal_1120);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA761A0B6072010C8(uLocal_1121[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1121[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA761A0B6072010C8(uLocal_1125[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xA761A0B6072010C8(uLocal_1125[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
}

void func_241()
{
	if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Local_1293, Local_1296, fLocal_1243, 1, 0, 0))
	{
		bLocal_1152 = true;
	}
	else
	{
		bLocal_1152 = false;
	}
	if (unk_0xA761A0B6072010C8(uLocal_1120))
	{
		unk_0x0C4BDC77192798AE(&uLocal_1120);
	}
	unk_0x15007EAE63C7ECCF(0.5f);
	if (bLocal_1152)
	{
		func_242();
		iLocal_1031 = 17;
	}
	else
	{
		func_242();
		iLocal_1031 = 16;
	}
	func_82(&uLocal_1529, 0, 0);
}

void func_242()
{
	iLocal_1193 = 0;
}

void func_243()
{
	if (!bLocal_1149)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1312))
		{
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				unk_0xFABEFEE17018AE2A(iLocal_1312, 3);
				if (func_245(iLocal_1312, 5f))
				{
					bLocal_1149 = true;
				}
			}
		}
	}
	if (!iLocal_1146)
	{
		if (func_244(iLocal_1312, 10000))
		{
			iLocal_1146 = 1;
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (((unk_0xDECC749CB8B5AAB6(iParam0, 0, iParam1) || unk_0xDECC749CB8B5AAB6(iParam0, 2, iParam1)) || unk_0xDECC749CB8B5AAB6(iParam0, 3, iParam1)) || unk_0xDECC749CB8B5AAB6(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0, float fParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (func_246(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_246(int iParam0, struct<3> Param1, int iParam4)
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

void func_247()
{
	switch (iLocal_1193)
	{
		case 0:
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				if (func_130())
				{
					if (!unk_0x8682D8A6269E52C9(uLocal_1050[0]))
					{
						if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
						{
							if (unk_0xA32DC7E16AD1DFB7(uLocal_1050[0], iLocal_1312, 0))
							{
								bLocal_1145 = true;
								func_242();
								iLocal_1031 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_248()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1046))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_1046))
		{
			if (unk_0x7A6C051038031EFA(iLocal_1046, 0))
			{
				bLocal_1150 = true;
				if (unk_0xA761A0B6072010C8(uLocal_1120))
				{
					unk_0x0C4BDC77192798AE(&uLocal_1120);
				}
				func_106(Local_1305, 1097859072, 1116471296);
			}
			unk_0xD3C34C5B35DF59C8(3f, 1073741824, 3);
			func_242();
			iLocal_1031 = 15;
		}
	}
}

void func_249()
{
	func_240(0);
	func_256();
	func_254();
	func_251();
	func_250();
	func_237("ASS_VA_KILL", 7500, -1);
	unk_0xC1B1E9A034A63A62(0);
	bLocal_1161 = true;
	func_242();
	iLocal_1031 = 12;
}

void func_250()
{
	unk_0x9793B48C4C8275F8(iLocal_1327);
	unk_0x9793B48C4C8275F8(iLocal_1328);
}

void func_251()
{
	func_253(&(Local_1691.f_4));
	func_252(&(Local_1691[0]));
	func_252(&(Local_1691[1]));
	func_252(&(Local_1691.f_8[0]));
	func_252(&(Local_1691.f_8[1]));
	func_252(&(Local_1691.f_5[0]));
	func_252(&(Local_1691.f_5[1]));
	func_252(&(Local_1691.f_3));
}

void func_252(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0xDBF188DE6334F01A(*uParam0))
		{
			unk_0xA50DE967C5813F23(uParam0);
		}
		else
		{
			unk_0x056049D9941BD43D(uParam0);
		}
	}
}

void func_253(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0xDBF188DE6334F01A(*uParam0))
		{
			unk_0x28BB69BE14577487(uParam0);
		}
	}
}

void func_254()
{
	struct<3> Var0[2];
	struct<3> Var7;
	float fVar10;
	int iVar11;
	
	if (unk_0x76B3C79DE564AFC6(iLocal_1046) && !unk_0x7A6C051038031EFA(iLocal_1046, 0))
	{
		Var7 = { unk_0xF177E0DA126D71C8(iLocal_1046, 1) };
		fVar10 = unk_0x69F9721375CE60CF(iLocal_1046);
	}
	Var0[0 /*3*/] = { unk_0x261E7847B591A8DC(Var7, fVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0x261E7847B591A8DC(Var7, fVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1047[iVar11] = unk_0x5618B819E5B9C053(26, iLocal_1327, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, 1);
		}
		else
		{
			iLocal_1047[iVar11] = unk_0x5618B819E5B9C053(26, iLocal_1328, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, 1);
		}
		unk_0xCFC7B014BB928D6D(iLocal_1047[iVar11], 1, 1);
		unk_0x8B834E0A7CC522D8(iLocal_1047[iVar11]);
		unk_0xA8A16396F3E7CD41(iLocal_1047[iVar11], 3, 0);
		unk_0xA8A16396F3E7CD41(iLocal_1047[iVar11], 23, 1);
		unk_0xA8A16396F3E7CD41(iLocal_1047[iVar11], 30, 0);
		unk_0xA8A16396F3E7CD41(iLocal_1047[iVar11], 13, 1);
		unk_0xA84451B91C2933E5(iLocal_1047[iVar11], 2);
		unk_0x390D16BCBFB23E1A(iLocal_1047[iVar11], 1);
		func_255(iLocal_1047[iVar11], 1);
		unk_0x1470C70D8E47C379(iLocal_1047[iVar11], 1);
		iVar11++;
	}
}

void func_255(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_1046)
	{
		unk_0xD5D9B48EB10FA2C0(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0x541B678DB67C7CF0(iParam0, 1);
		unk_0xA8A16396F3E7CD41(iParam0, 0, 1);
	}
	else
	{
		unk_0x541B678DB67C7CF0(iParam0, 2);
		unk_0xA8A16396F3E7CD41(iParam0, 13, 1);
	}
	unk_0xBCEFFDCF42E59903(iParam0, 60);
	unk_0x49F78C32179F3B1F(iParam0, 2);
	unk_0xEB9B39274C401888(iParam0, 1);
	unk_0xAB83B3D37016BD26(iParam0, 1);
	unk_0x7F53E53C6F32D196(iParam0, iLocal_1332);
}

void func_256()
{
	func_258();
	iLocal_1202 = unk_0x3AF262D7332EEDF5(0, iLocal_1195);
	iLocal_1046 = unk_0x5618B819E5B9C053(26, iLocal_1325, Local_1258[iLocal_1202 /*3*/], uLocal_1239[iLocal_1202], 1, 1);
	unk_0xCFC7B014BB928D6D(iLocal_1046, 1, 1);
	unk_0x8B834E0A7CC522D8(iLocal_1046);
	func_255(iLocal_1046, 1);
	unk_0x9793B48C4C8275F8(iLocal_1325);
	if (!unk_0xA761A0B6072010C8(uLocal_1120))
	{
		uLocal_1120 = func_257(iLocal_1046, 0, 0);
	}
	unk_0x067D86058370B7EB(uLocal_1120, 1f);
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_187(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, iParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_187(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, iParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_187(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_258()
{
	int iVar0;
	
	iLocal_1195 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAD2B8127B12C130D(Local_1248[iVar0 /*3*/], 5f) && !func_262(iVar0, 6f))
		{
			Local_1258[iLocal_1195 /*3*/] = { Local_1248[iVar0 /*3*/] };
			uLocal_1239[iLocal_1195] = fLocal_1235[iVar0];
			iLocal_1195++;
		}
		iVar0++;
	}
	if (iLocal_1195 == 0)
	{
		if (func_94())
		{
			Local_1258[0 /*3*/] = { Local_1248[1 /*3*/] };
			uLocal_1239[0] = fLocal_1235[1];
			iLocal_1195++;
		}
		else if (func_261())
		{
			Local_1258[0 /*3*/] = { Local_1248[0 /*3*/] };
			uLocal_1239[0] = fLocal_1235[0];
			iLocal_1195++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_260(Local_1248[iVar0 /*3*/], 1) > 30f && !func_262(iVar0, 6f))
				{
					Local_1258[iLocal_1195 /*3*/] = { Local_1248[iVar0 /*3*/] };
					uLocal_1239[iLocal_1195] = fLocal_1235[iVar0];
					iLocal_1195++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1195 == 0)
	{
		func_259();
	}
}

void func_259()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = unk_0x2A488C176D52CCA5(Var1, Local_1248[iVar0 /*3*/]);
		if (fVar4 > fLocal_1247)
		{
			fLocal_1247 = fVar4;
			iLocal_1246 = iVar0;
		}
		iVar0++;
	}
	Local_1258[0 /*3*/] = { Local_1248[iLocal_1246 /*3*/] };
	uLocal_1239[0] = fLocal_1235[iLocal_1246];
}

float func_260(struct<3> Param0, int iParam3)
{
	return func_26(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), Param0, iParam3);
}

int func_261()
{
	if (func_26(unk_0x0031992CA618A445(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0, float fParam1)
{
	if (unk_0x736668867F457F94(Local_1248[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	switch (iLocal_1193)
	{
		case 0:
			if (!iLocal_1162)
			{
				func_102(&Local_360, 4);
				func_266();
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (((bLocal_1141 && !bLocal_1139) && func_265()) && func_264())
			{
				func_242();
				iLocal_1031 = 11;
			}
			break;
	}
}

int func_264()
{
	int iVar0;
	
	unk_0xBE91026C1FC72180(iLocal_1325);
	if (unk_0x772F801619C83779(iLocal_1325))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_265()
{
	if (((unk_0x76B3C79DE564AFC6(uLocal_1050[0]) && unk_0x76B3C79DE564AFC6(uLocal_1050[1])) && !unk_0x8682D8A6269E52C9(uLocal_1050[0])) && !unk_0x8682D8A6269E52C9(uLocal_1050[1]))
	{
		if (unk_0xA32DC7E16AD1DFB7(uLocal_1050[0], iLocal_1312, 0) && unk_0xA32DC7E16AD1DFB7(uLocal_1050[1], iLocal_1312, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_266()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1033[iVar0] = 4;
		iVar0++;
	}
	bLocal_1155 = true;
}

void func_267()
{
	switch (iLocal_1193)
	{
		case 0:
			func_288(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_102(&Local_360, 2);
			if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
			{
				unk_0x56B418F469976565(iLocal_1312, 0, 1, 0);
			}
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1319) && !unk_0x7A6C051038031EFA(iLocal_1319, 0))
					{
						func_275(iLocal_1319);
					}
				}
			}
			func_272();
			func_271();
			unk_0x1E420F926A7BC4D2("ASS1_START");
			unk_0xCD7E92DE2BFA0B0D(&Local_360, 4);
			func_237("ASS_VA_PLANT", 7500, 1);
			iLocal_1193++;
			break;
		
		case 1:
			if (iLocal_1168)
			{
				if (((!func_270(&iLocal_1314) && !func_269(&(iLocal_1320[0]), &bLocal_1189)) && !func_269(&(iLocal_1320[1]), &bLocal_1189)) && !func_269(&(iLocal_1320[2]), &bLocal_1189))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_242();
					iLocal_1031 = 10;
				}
				else
				{
					func_268();
				}
			}
			break;
	}
}

void func_268()
{
	iLocal_1044 = 1;
	bLocal_1139 = true;
}

int func_269(var uParam0, int iParam1)
{
	if (!unk_0x76B3C79DE564AFC6(*uParam0))
	{
		return 0;
	}
	if (!unk_0x76B3C79DE564AFC6(iLocal_1313))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1313, 1) <= 5f)
	{
		iLocal_1314 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_270(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0x2A1786470CB06BC9(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1312) && *uParam0 != iLocal_1313) && *uParam0 != Local_1691.f_4)
	{
		if (unk_0x76B3C79DE564AFC6(*uParam0) && !unk_0x7A6C051038031EFA(*uParam0, 0))
		{
			if (unk_0x3251C2B06497863C(*uParam0, -1, 0) == 0)
			{
				Var0 = { unk_0xF177E0DA126D71C8(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1319 != 0)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_1319) && !unk_0x7A6C051038031EFA(iLocal_1319, 0))
		{
			if (!func_89(iLocal_1319))
			{
				Var0 = { unk_0xF177E0DA126D71C8(iLocal_1319, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_271()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_1050[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1328;
			}
			else
			{
				iVar0 = iLocal_1327;
			}
			uLocal_1050[iVar1] = unk_0x5618B819E5B9C053(26, iVar0, Local_1268[iVar1 /*3*/], fLocal_1221[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 0, 0, 2, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 3, 0, 0, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 4, 0, 1, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 0, 1, 2, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 3, 0, 1, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 4, 0, 0, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 0, 1, 2, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 3, 0, 2, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 4, 0, 1, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xD5FF2158C8907CA9(uLocal_1050[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0x8682D8A6269E52C9(uLocal_1050[iVar1]))
		{
			unk_0x0EB00C68DDFABE19(uLocal_1050[iVar1], 0);
			unk_0x390D16BCBFB23E1A(uLocal_1050[iVar1], 1);
			unk_0xA8A16396F3E7CD41(uLocal_1050[iVar1], 23, 1);
			unk_0xA8A16396F3E7CD41(uLocal_1050[iVar1], 30, 0);
			unk_0xA84451B91C2933E5(uLocal_1050[iVar1], 2);
			unk_0xD6A092D1F1B9A9F1(uLocal_1050[iVar1], 104, 1);
			func_255(uLocal_1050[iVar1], 1);
		}
		iVar1++;
	}
}

void func_272()
{
	func_274();
	func_273();
	unk_0x9793B48C4C8275F8(iLocal_1329);
}

void func_273()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_1054[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1054[iVar0] = unk_0x4E2448BB7576232A(iLocal_1313, 26, iLocal_1327, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1054[iVar0] = unk_0x4E2448BB7576232A(iLocal_1313, 26, iLocal_1328, 0, 1, 1);
			}
			func_255(uLocal_1054[iVar0], 1);
			unk_0xA8A16396F3E7CD41(uLocal_1054[iVar0], 3, 0);
			unk_0xA8A16396F3E7CD41(uLocal_1054[iVar0], 23, 1);
			unk_0xA8A16396F3E7CD41(uLocal_1054[iVar0], 30, 0);
			unk_0xA84451B91C2933E5(uLocal_1054[iVar0], 2);
			unk_0x390D16BCBFB23E1A(uLocal_1054[iVar0], 1);
		}
		iVar0++;
	}
}

void func_274()
{
	if (!unk_0x76B3C79DE564AFC6(iLocal_1313))
	{
		iLocal_1313 = unk_0x5129A9193468FF77(iLocal_1329, Local_1284, fLocal_1233, 1, 1, 0);
		unk_0x8D0385AF2136C38C(iLocal_1313, 0);
	}
}

void func_275(int iParam0)
{
	func_276(&(Global_98003.f_2875), &Global_98003, iParam0, 1);
}

int func_276(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x432757A9E7AAFA96(iParam2, 0))
	{
		func_278(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_277(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92762.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	func_284(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_281(iParam1, 145, 0);
	uParam0->f_11 = func_280(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_279(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
		uParam0->f_6 = unk_0x69F9721375CE60CF(iParam1);
		uParam0->f_3 = { unk_0xC267F33BC0EB4D24(iParam1) };
		if (unk_0x417F21FB3F950AEE(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70512 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[iVar0]))
		{
			if (iParam0 == Global_69607.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_280(int iParam0)
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

int func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (Global_90238[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90248[iVar0])
				{
					if (iParam2 == 0 || unk_0xE9559A12052415BE(iParam0) == func_282(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_282(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_283(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_283(int iParam0, var uParam1, int iParam2)
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

void func_284(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_287(uParam1);
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
		func_286(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_285(iVar0 + 1));
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

int func_285(int iParam0)
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

int func_286(int iParam0, var uParam1, var uParam2)
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

void func_287(var uParam0)
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

void func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xB3404E397FF56B3B("FinaleC2", unk_0x49CAADAD1ABAB70A()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92799)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92799)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_154(1);
		if (iParam0 <= Global_92799)
		{
		}
		iVar1 = func_357(unk_0x49CAADAD1ABAB70A(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_104439.f_8946.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_355(iVar1);
			cVar3 = { Global_83695[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_104439.f_8946.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1577BCCE070C215F(&cVar3, uVar2, Global_92799, iParam0);
		}
		else
		{
			iVar5 = func_350(unk_0x49CAADAD1ABAB70A(), 1);
			if (iVar5 != -1)
			{
				Global_104439.f_18435[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_349(iVar5)}, 4);
				unk_0x1577BCCE070C215F(&uVar6, 0, Global_92799, iParam0);
			}
			else
			{
				iVar10 = func_348(&(Global_92762.f_3));
				if (iVar10 > -1)
				{
					Global_104439.f_24847.f_4[iVar10] = 0;
				}
			}
		}
		Global_87085 = iParam2;
		Global_92799 = iParam0;
		func_289(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xB3404E397FF56B3B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92799)
	{
	}
}

void func_289(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_290(&Global_98003, unk_0x49CAADAD1ABAB70A(), iParam0, uParam1, iParam3, iParam2);
}

void func_290(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_337();
	unk_0xCBEC9882A9EC8D90(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		func_312(&(uParam0->f_2869), 0);
		func_311(unk_0x0031992CA618A445());
		func_304(unk_0x0031992CA618A445(), 0);
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104439.f_2244.f_539.f_294[iVar1];
		if (iVar1 == func_303())
		{
			func_296(unk_0x0031992CA618A445(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92552[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92552[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92552[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92552[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92552[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92552[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92552[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92552[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92552[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92552[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104439.f_2244.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104439.f_2244.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x2553A7EB99AABF55(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104439.f_20425.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53028[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104439.f_2244.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104439.f_2244.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104439.f_2244.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104439.f_2244.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104439.f_2244.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104439.f_2244[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104439.f_2244[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x2553A7EB99AABF55(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0x2553A7EB99AABF55(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0x2553A7EB99AABF55(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_292(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_291(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_291(var uParam0)
{
	*uParam0 = Global_88756;
	uParam0->f_1 = Global_88757;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_292(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x0031992CA618A445();
	}
	if (unk_0x76B3C79DE564AFC6(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_293(iParam2, &iVar0, iParam3, iParam5))
	{
		func_276(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x76B3C79DE564AFC6(iVar0))
	{
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0xEE37D610E00A6E4E(iVar0, joaat("skylift")) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iVar0, 0))
			{
				func_276(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_293(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			if (iParam0 == unk_0x0031992CA618A445())
			{
				*uParam1 = unk_0x7899A2987EB03783();
			}
			else
			{
				*uParam1 = unk_0xCFA31F1E461A6BB5(iParam0, 1);
			}
			if (unk_0x76B3C79DE564AFC6(*uParam1))
			{
				if (unk_0x432757A9E7AAFA96(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(*uParam1, 1), unk_0xF177E0DA126D71C8(iParam0, 1), 1) < 100f)
					{
						if (unk_0xEE37D610E00A6E4E(*uParam1, joaat("taxi")))
						{
							if (unk_0x3251C2B06497863C(*uParam1, -1, 0) != iParam0 && unk_0x3251C2B06497863C(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_294(*uParam1, func_13(), 1))
						{
							sVar0 = unk_0x49CAADAD1ABAB70A();
							if (!unk_0xB3404E397FF56B3B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x90219307C9D2728D(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x8B0523D9EF9595C2(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x0E340E113E76A82F(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xEE37D610E00A6E4E(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_295(iParam1, iVar0, &sVar1, &iVar9))
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

int func_295(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_296(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_302(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_301(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104439.f_2244.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x27CA09C6DFAB1E79() && unk_0xE9559A12052415BE(iParam0) == unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			if (func_300(161, -1))
			{
				uParam1->f_59 = func_297(2048, Global_70597, 0);
			}
			else
			{
				uParam1->f_59 = func_297(749, Global_70597, 0);
			}
			uParam1->f_60 = func_297(750, Global_70597, 0);
			uParam1->f_61 = func_297(751, Global_70597, 0);
		}
		if (unk_0x27CA09C6DFAB1E79() && iParam0 == unk_0x0031992CA618A445())
		{
			if (func_300(161, -1))
			{
				uParam1->f_59 = func_297(2048, Global_70597, 0);
			}
			else
			{
				uParam1->f_59 = func_297(749, Global_70597, 0);
			}
		}
	}
}

int func_297(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_298(iParam1)];
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_298(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_299();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_299()
{
	return Global_1312735;
}

int func_300(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_298(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_301(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x6C5A6C5A6F492576(iParam0, iParam1);
		*uParam3 = unk_0x04FAC202A4D72E17(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x10E51EA4FB366520(iParam0) && unk_0x9663DE0922A20351(iParam0) != -1)
				{
					*uParam2 = unk_0x9663DE0922A20351(iParam0);
					*uParam3 = unk_0x3E5CAB641FAAD6F8(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_302(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x2BCDCFC2AA7EC715(iParam0, iParam1);
		*uParam3 = unk_0xBE6AC2A79C0215BC(iParam0, iParam1);
		*uParam4 = unk_0x714117FD7685E7C1(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_303()
{
	func_14();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_304(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x8682D8A6269E52C9(iParam0))
	{
		if (iParam0 == unk_0x0031992CA618A445())
		{
			func_305(iParam0, &(Global_104439.f_2244.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104439.f_2244.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0xB0F1218E340966F7(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x80436C602C724981();
					if (Global_104439.f_2244.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104439.f_2244.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xA2B0D8D38E90B883(unk_0x3D35F9864E4640B1(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xE931A869061F7BD2(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xE931A869061F7BD2(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xE931A869061F7BD2(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_305(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_310(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBB38D82BA7BB561E(iParam0, func_310(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x63D43044461F40BD(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x04F6B15941CFED0C(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xAEB47F9C59EA2BA2(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEDCFD95A6C331420(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_308(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x83DAE3376C3BEE9C(iParam0, Var4.f_0, iVar2))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_308(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0 = (iVar0 + 1);
		}
		iVar10 = unk_0x5AF51568FFC04EE8();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x4BEBDDD8F31C07D6(iVar9, &Var11) && !func_307(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0x03CF889BDA5553A9(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x63D43044461F40BD(iParam0, Var4.f_0);
					if (unk_0x23F97C67F3C947C8(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x04F6B15941CFED0C(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xAEB47F9C59EA2BA2(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEDCFD95A6C331420(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x81C71AD83E3AEF24(iVar9))
					{
						if (unk_0x7C1C1A3DCE06F2B9(iVar9, iVar1, &Var50))
						{
							if (!func_306(Var50.f_3))
							{
								if (unk_0x83DAE3376C3BEE9C(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xCD7E92DE2BFA0B0D(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x23F97C67F3C947C8(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_309(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x81C71AD83E3AEF24(iVar1))
					{
						if (unk_0x7C1C1A3DCE06F2B9(iVar1, iVar2, &Var43))
						{
							if (!func_306(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_309(int iParam0, var uParam1)
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

int func_310(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x8682D8A6269E52C9(iParam0))
	{
		Global_104439.f_2244.f_539.f_294[iVar0] = unk_0x0D51FDA843F851F7(iParam0);
	}
}

void func_312(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	uParam0->f_3 = unk_0x69F9721375CE60CF(unk_0x0031992CA618A445());
	uParam0->f_5 = unk_0xA2DA265833F05359(unk_0x0031992CA618A445());
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		uParam0->f_4 = unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x7832F791572D5809(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x2A3398C6222EB190(Global_71033, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x2A3398C6222EB190(Global_71033, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x2A3398C6222EB190(Global_71033, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x2A3398C6222EB190(Global_71033, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x50C0AC4AD9CD152D(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_315(&iVar0))
		{
			if (func_314(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_13();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_313(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_313(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7899B7264D3ED0A1(Param0))
	{
		iVar0 = unk_0x50C0AC4AD9CD152D(Param4, sParam3);
		if (!unk_0x68BBDCBE8B7849EB(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x0ADE1704CC2C41C7(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_314(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

int func_315(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (func_336())
		{
			*uParam0 = func_321(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 6, -1, 0, 1, -1);
			if (func_320(*uParam0) && !func_316(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_316(int iParam0)
{
	return func_317(iParam0, 0, 1);
}

int func_317(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x2A3398C6222EB190(Global_92814.f_1315[iParam0], iParam1);
	}
	else if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_319() == 0)
		{
			return unk_0x2A3398C6222EB190(func_297(func_318(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 6632;
			break;
		
		case 45:
			return 3787;
			break;
		
		case 46:
			return 5362;
			break;
		
		default:
			break;
	}
	return 7237;
}

int func_319()
{
	return Global_25222;
}

int func_320(int iParam0)
{
	return func_317(iParam0, 5, 1);
}

int func_321(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 46)
	{
		if (iParam3 == 6 || iParam3 == func_335(iVar0))
		{
			if (!bParam5 || func_334(iVar0))
			{
				fVar1 = unk_0x1410333E912D4EC6(Param0, func_322(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_322(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_333(Global_94295);
			break;
		
		case 46:
			if (Global_1592923 != func_332())
			{
				if (func_331(Global_1592923))
				{
					return func_324(2, 2);
				}
				else if (func_323(Global_1592923))
				{
					return func_324(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_323(int iParam0)
{
	if (iParam0 != func_332())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_324(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1592923 != func_332())
	{
		if (iParam1 == 3)
		{
			if (func_325(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x2A3398C6222EB190(Global_1593076[Global_1592923 /*647*/].f_259.f_230, 4))
			{
				if (func_325(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[Global_1592923 /*647*/].f_259.f_230, 5))
			{
				if (func_325(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_325(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_330(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_330(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_328(iParam0) };
	}
	else
	{
		Var12 = { func_327(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_326(Var18, -Var0.f_3.f_2) };
	Var18 = { func_326(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x261E7847B591A8DC(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_326(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_327(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_328(int iParam0)
{
	return func_329(iParam0);
}

struct<6> func_329(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_330(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_331(int iParam0)
{
	if (iParam0 != func_332())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 3) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 4)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_332()
{
	return -1;
}

Vector3 func_333(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_334(int iParam0)
{
	return func_317(iParam0, 0, 0);
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
	}
	return 6;
}

bool func_336()
{
	return Global_92814.f_309 > 0;
}

var func_337()
{
	var uVar0;
	
	func_347(&uVar0, unk_0x6676AD594A1E113E());
	func_346(&uVar0, unk_0xE647A8424B4399CE());
	func_345(&uVar0, unk_0x41413FABD538FC3A());
	func_340(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_339(&uVar0, unk_0x1A7BD52C0A88E679());
	func_338(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

void func_338(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_339(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_340(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_344(*uParam0);
	iVar1 = func_342(*uParam0);
	if (iParam1 < 1 || iParam1 > func_341(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_341(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_342(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_343(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_343(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_344(var uParam0)
{
	return uParam0 & 15;
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_348(char* sParam0)
{
	if (unk_0xB3404E397FF56B3B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xB3404E397FF56B3B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xB3404E397FF56B3B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_349(int iParam0)
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

int func_350(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x50B7853132D8438E(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_351(iVar0, &sVar1);
		if (unk_0x50B7853132D8438E(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_351(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_352(uParam1, "Abigail1", func_354(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 1:
			func_352(uParam1, "Abigail2", func_354(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 2:
			func_352(uParam1, "Barry1", func_354(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 3:
			func_352(uParam1, "Barry2", func_354(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 4:
			func_352(uParam1, "Barry3", func_354(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 5:
			func_352(uParam1, "Barry3A", func_354(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 6:
			func_352(uParam1, "Barry3C", func_354(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 7:
			func_352(uParam1, "Barry4", func_354(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_353(iParam0), 0, 0);
			break;
		
		case 8:
			func_352(uParam1, "Dreyfuss1", func_354(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 9:
			func_352(uParam1, "Epsilon1", func_354(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 10:
			func_352(uParam1, "Epsilon2", func_354(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 11:
			func_352(uParam1, "Epsilon3", func_354(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 12:
			func_352(uParam1, "Epsilon4", func_354(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 13:
			func_352(uParam1, "Epsilon5", func_354(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 14:
			func_352(uParam1, "Epsilon6", func_354(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 15:
			func_352(uParam1, "Epsilon7", func_354(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 16:
			func_352(uParam1, "Epsilon8", func_354(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 17:
			func_352(uParam1, "Extreme1", func_354(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 18:
			func_352(uParam1, "Extreme2", func_354(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 19:
			func_352(uParam1, "Extreme3", func_354(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 20:
			func_352(uParam1, "Extreme4", func_354(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 21:
			func_352(uParam1, "Fanatic1", func_354(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_353(iParam0), 1, 0);
			break;
		
		case 22:
			func_352(uParam1, "Fanatic2", func_354(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_353(iParam0), 1, 0);
			break;
		
		case 23:
			func_352(uParam1, "Fanatic3", func_354(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_353(iParam0), 0, 1);
			break;
		
		case 24:
			func_352(uParam1, "Hao1", func_354(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_353(iParam0), 0, 1);
			break;
		
		case 25:
			func_352(uParam1, "Hunting1", func_354(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 26:
			func_352(uParam1, "Hunting2", func_354(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 27:
			func_352(uParam1, "Josh1", func_354(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 28:
			func_352(uParam1, "Josh2", func_354(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 29:
			func_352(uParam1, "Josh3", func_354(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 30:
			func_352(uParam1, "Josh4", func_354(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 31:
			func_352(uParam1, "Maude1", func_354(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 32:
			func_352(uParam1, "Minute1", func_354(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 33:
			func_352(uParam1, "Minute2", func_354(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 34:
			func_352(uParam1, "Minute3", func_354(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 35:
			func_352(uParam1, "MrsPhilips1", func_354(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 36:
			func_352(uParam1, "MrsPhilips2", func_354(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 37:
			func_352(uParam1, "Nigel1", func_354(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 38:
			func_352(uParam1, "Nigel1A", func_354(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 39:
			func_352(uParam1, "Nigel1B", func_354(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_353(iParam0), 1, 1);
			break;
		
		case 40:
			func_352(uParam1, "Nigel1C", func_354(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_353(iParam0), 1, 1);
			break;
		
		case 41:
			func_352(uParam1, "Nigel1D", func_354(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_353(iParam0), 1, 1);
			break;
		
		case 42:
			func_352(uParam1, "Nigel2", func_354(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 43:
			func_352(uParam1, "Nigel3", func_354(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_353(iParam0), 1, 1);
			break;
		
		case 44:
			func_352(uParam1, "Omega1", func_354(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 45:
			func_352(uParam1, "Omega2", func_354(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 46:
			func_352(uParam1, "Paparazzo1", func_354(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 47:
			func_352(uParam1, "Paparazzo2", func_354(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 48:
			func_352(uParam1, "Paparazzo3", func_354(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 49:
			func_352(uParam1, "Paparazzo3A", func_354(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 50:
			func_352(uParam1, "Paparazzo3B", func_354(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 51:
			func_352(uParam1, "Paparazzo4", func_354(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 52:
			func_352(uParam1, "Rampage1", func_354(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 54:
			func_352(uParam1, "Rampage3", func_354(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 55:
			func_352(uParam1, "Rampage4", func_354(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 56:
			func_352(uParam1, "Rampage5", func_354(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_353(iParam0), 0, 0);
			break;
		
		case 53:
			func_352(uParam1, "Rampage2", func_354(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_353(iParam0), 1, 0);
			break;
		
		case 57:
			func_352(uParam1, "TheLastOne", func_354(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 58:
			func_352(uParam1, "Tonya1", func_354(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 59:
			func_352(uParam1, "Tonya2", func_354(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 60:
			func_352(uParam1, "Tonya3", func_354(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 61:
			func_352(uParam1, "Tonya4", func_354(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		case 62:
			func_352(uParam1, "Tonya5", func_354(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_353(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_352(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_354(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_349(iParam0) };
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

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_356(Global_104439.f_8946.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_356(Global_104439.f_8946.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_356(Global_104439.f_8946.f_99.f_205[11]);
			break;
		
		case 90:
			return func_356(Global_104439.f_8946.f_99.f_205[7]);
			break;
		
		case 93:
			return func_356(Global_104439.f_8946.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_357(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x50B7853132D8438E(sParam0);
	iVar1 = func_358(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83695[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_359()
{
	int iVar0;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		}
		if (unk_0x76B3C79DE564AFC6(iVar0))
		{
			if (unk_0x417F21FB3F950AEE(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iVar0, 0))
			{
				if (unk_0x38A3CC71471EC547(iVar0) <= 0.5f)
				{
					if (!func_52(&uLocal_1345))
					{
						func_49(&uLocal_1345);
					}
				}
				else if (func_52(&uLocal_1345))
				{
					func_50(&uLocal_1345);
				}
				if (func_52(&uLocal_1345))
				{
					if (func_46(&uLocal_1345) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&uLocal_1345))
			{
				func_50(&uLocal_1345);
			}
		}
	}
}

void func_360()
{
	switch (iLocal_1193)
	{
		case 0:
			if (func_391(1084227584, 1) || (bLocal_1151 && unk_0xABA8B23FE71102D5(uLocal_1130)))
			{
				func_390(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1665, fLocal_1668, 1, 1, 1, 0, 0);
				unk_0xE882E0C18562237F(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
				unk_0xEC025B0914244C52(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_389();
				func_388();
				if (!unk_0x7A6C051038031EFA(iLocal_1312, 0))
				{
					if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
					{
						unk_0xFC8BF5BFAA9D0B8D(iLocal_1312, 107, "ASSOJva", 1);
						unk_0x4D4B1968630AE471(iLocal_1312, 2500f);
					}
				}
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						unk_0x3A34071ED707A472(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), "OFF");
					}
				}
				iLocal_1193++;
			}
			else if (unk_0xABA8B23FE71102D5(uLocal_1130))
			{
			}
			break;
		
		case 1:
			if (func_361())
			{
				iLocal_1194 = 0;
				unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
				func_491();
				func_242();
				iLocal_1031 = 9;
			}
			break;
	}
}

int func_361()
{
	int iVar0;
	
	switch (iLocal_1194)
	{
		case 0:
			func_387(0, 0, 1);
			func_386();
			unk_0xE983D49A61E9F0FF(uLocal_1330, "HAND_SHAKE", 0.2f);
			unk_0xE983D49A61E9F0FF(uLocal_1331, "HAND_SHAKE", 0.2f);
			unk_0xD0E2527DD961F86C(uLocal_1331, uLocal_1330, 6000, 0, 0);
			unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
			unk_0x8C361F37C04084F4(1);
			unk_0x27FC4121D73AF604();
			func_237("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1151)
			{
				func_385();
				unk_0x31F42B23A853582E(0);
				unk_0xADE985F6BA90AED5(0, 1065353216);
			}
			else
			{
				func_376();
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_1194++;
			break;
		
		case 1:
			if (!unk_0x7A6C051038031EFA(iLocal_1312, 0))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x6459D7B9F825DBCF(iLocal_1312))
						{
							unk_0x6562DA95A43F027D(iLocal_1312);
						}
						unk_0xFC8BF5BFAA9D0B8D(iLocal_1312, 102, "ASSOJva", 1);
						unk_0x4D4B1968630AE471(iLocal_1312, 4500f);
						unk_0x8CF1E0EE037C2E1C(iLocal_1312, 1);
						func_237("ASS_VA_SNIPE2", 7500, 1);
						unk_0xAD89EC3A4DD15FAA(uLocal_1330, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						unk_0xDBA06AE638DAF0F5(uLocal_1330, 0.5f);
						unk_0x7D7C45A38E2A93D6(uLocal_1330, 7f);
						unk_0xE983D49A61E9F0FF(uLocal_1330, "HAND_SHAKE", 0.2f);
						unk_0xAD89EC3A4DD15FAA(uLocal_1331, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						unk_0xDBA06AE638DAF0F5(uLocal_1331, 0.7f);
						unk_0x7D7C45A38E2A93D6(uLocal_1331, 10f);
						unk_0xE983D49A61E9F0FF(uLocal_1331, "HAND_SHAKE", 0.2f);
						unk_0xD0E2527DD961F86C(uLocal_1331, uLocal_1330, 2000, 3, 3);
						iLocal_1194++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x7A6C051038031EFA(iLocal_1312, 0))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
				{
					if (unk_0x5ED8B90BB2789528(iLocal_1312) >= 7000f)
					{
						unk_0xB3BF8FD9CDEEBC80(iLocal_1312);
						iLocal_1192 = 0;
						while (iLocal_1192 < 3)
						{
							if (!unk_0x7A6C051038031EFA(uLocal_1050[iLocal_1192], 0))
							{
								if (iLocal_1192 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1192 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0xF57D21B49780A7A8(uLocal_1050[iLocal_1192], 242628503) != 1)
								{
									unk_0x1F5B34056C3CB80B(&uLocal_1324);
									unk_0x173325AAF2CD766A(&uLocal_1324);
									unk_0x471E558A661279DE(0, iVar0, 0);
									unk_0x276406356F4120BB(0, Local_1248[iLocal_1192 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xF81AD3C937316CCA(uLocal_1324);
									unk_0xEDD5437C49B7B1F8(uLocal_1050[iLocal_1192], uLocal_1324);
									unk_0x1F5B34056C3CB80B(&uLocal_1324);
								}
							}
							iLocal_1192++;
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1194++;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() >= 2000)
			{
				if (unk_0x986A18248DD6F7CD() == 4)
				{
					unk_0xAD89EC3A4DD15FAA(uLocal_1330, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0xE983D49A61E9F0FF(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0xAD89EC3A4DD15FAA(uLocal_1331, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0xE983D49A61E9F0FF(uLocal_1331, "HAND_SHAKE", 0.2f);
					unk_0xD0E2527DD961F86C(uLocal_1331, uLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				else
				{
					unk_0xAD89EC3A4DD15FAA(uLocal_1330, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					unk_0xE983D49A61E9F0FF(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0xAD89EC3A4DD15FAA(uLocal_1331, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					unk_0xE983D49A61E9F0FF(uLocal_1331, "HAND_SHAKE", 0.2f);
					unk_0xD0E2527DD961F86C(uLocal_1331, uLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1194++;
			}
			break;
		
		case 4:
			if (!iLocal_1190)
			{
				if (unk_0x986A18248DD6F7CD() == 4)
				{
					if (unk_0x83666F9FB8FEBD4B() >= (iLocal_1217 - 300))
					{
						unk_0xF177BD202464664F("CamPushInNeutral", 0, 0);
						unk_0x18F1BFAF88AC511B(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1190 = 1;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() >= iLocal_1217)
			{
				if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
				{
					if (unk_0x6459D7B9F825DBCF(iLocal_1312))
					{
						unk_0x6562DA95A43F027D(iLocal_1312);
					}
				}
				unk_0x0EA5304CED5FD5D1(102, "ASSOJva");
				unk_0x0EA5304CED5FD5D1(107, "ASSOJva");
				unk_0x424767E89542F684(iLocal_1312, 1, 1);
				unk_0x424767E89542F684(iLocal_1312, 0, 1);
				unk_0x424767E89542F684(iLocal_1312, 2, 1);
				unk_0x8C361F37C04084F4(1);
				if (unk_0x986A18248DD6F7CD() == 4)
				{
					unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x6D0D109B83202E2C(1, 0f, 1, 0);
				}
				func_366(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_364(iLocal_382))
	{
		unk_0x8C361F37C04084F4(1);
		func_362(1);
		return 1;
	}
	return 0;
}

void func_362(bool bParam0)
{
	unk_0x31F42B23A853582E(0);
	unk_0xADE985F6BA90AED5(0, 1065353216);
	if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
	{
		if (unk_0x6459D7B9F825DBCF(iLocal_1312))
		{
			unk_0x6562DA95A43F027D(iLocal_1312);
		}
		unk_0x0EA5304CED5FD5D1(102, "ASSOJva");
		unk_0x0EA5304CED5FD5D1(107, "ASSOJva");
		unk_0x0A69FBBF51E1A08F(iLocal_1312, Local_1290, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(iLocal_1312, fLocal_1220);
		unk_0x424767E89542F684(iLocal_1312, 0, 1);
		unk_0x424767E89542F684(iLocal_1312, 1, 1);
		unk_0x424767E89542F684(iLocal_1312, 2, 1);
		unk_0x424767E89542F684(iLocal_1312, 2, 1);
		iLocal_1194 = 0;
		unk_0x27FC4121D73AF604();
		unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
		func_366(1, 1, 1);
		if (bParam0)
		{
			func_363();
		}
	}
}

void func_363()
{
	unk_0x18D7C8000EDEAAB4(1000);
	while (!unk_0xF9FC07CC13402AEF())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_364(int iParam0)
{
	if (func_365() && unk_0x31CD6E9F83C10233() >= iParam0 + 1000)
	{
		unk_0x8351F65655759E0C(500);
		while (!unk_0x5114FCEE2A997B95())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_215(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_365()
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

void func_366(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 1, 0);
	}
	unk_0x11AA938960F52423(1);
	func_368(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x4C4F62CD43971CED(1);
		unk_0x56A844FA6FE745C3(1);
	}
	func_367(23, 0);
}

void func_367(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_25466, iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_25466, iParam0);
	}
}

void func_368(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_375(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_10())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_374(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_375(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_374(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_372(unk_0x3D35F9864E4640B1())) && !func_370(unk_0x3D35F9864E4640B1(), 0)) && !func_369())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_372(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_369()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_370(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_371(-1, 0) == 8;
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

int func_371(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_299();
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

int func_372(int iParam0)
{
	if (func_370(iParam0, 0))
	{
		return 1;
	}
	if (func_373())
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

bool func_373()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_374(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_375(int iParam0)
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

void func_376()
{
	func_377(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_384(), 1, 1, 1, 0, 0);
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
		unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), 310.0126f);
	}
}

void func_377(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_378(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_378(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x7899A2987EB03783();
	if (unk_0x76B3C79DE564AFC6(iVar0))
	{
		if (!unk_0xCC234795142FC2D2(iVar0))
		{
			unk_0x1581691D748490F3(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x432757A9E7AAFA96(iVar0, 0))
		{
			if (bParam18)
			{
				func_383(iVar0);
			}
			if (unk_0x417F21FB3F950AEE(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_380(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0xEE37D610E00A6E4E(iVar0, joaat("taxi")))
				{
					if (unk_0x3251C2B06497863C(iVar0, -1, 0) != unk_0x0031992CA618A445() && unk_0x3251C2B06497863C(iVar0, -1, 0) != 0)
					{
						if (unk_0x1410333E912D4EC6(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xF177E0DA126D71C8(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_294(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_379(Param11))
				{
					if (unk_0x432757A9E7AAFA96(iVar0, 0))
					{
						iVar13 = unk_0xE9559A12052415BE(iVar0);
						unk_0x7B724B70F40AF075(iVar0, &Var4, &Var7);
						if (unk_0x1DBFCF939B3B47D0(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x432757A9E7AAFA96(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xE882E0C18562237F(Param7, 5f, 0, 0, 0, 0, 0, 0);
						unk_0x5082D1A6D078DB20(iVar0, fParam10);
						unk_0x0A69FBBF51E1A08F(iVar0, Param7, 1, 0, 0, 1);
						unk_0x24B72A49849215AE(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x56B418F469976565(iVar0, 0, 1, 0);
							unk_0xC6DC608BBC52BB6A(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xCC234795142FC2D2(iVar0) || !unk_0xC9FBF92709010AC3(iVar0, 1))
						{
							unk_0x1581691D748490F3(iVar0, 1, 1);
						}
						if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iVar0, 0))
						{
							unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), unk_0xF177E0DA126D71C8(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xE9F8539D5AF6B052(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x31EF165888D9A75B(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x76B3C79DE564AFC6(iVar0))
				{
					if (unk_0xCC234795142FC2D2(iVar0))
					{
						unk_0x28BB69BE14577487(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xCC234795142FC2D2(iVar0))
			{
				unk_0x1581691D748490F3(iVar0, 1, 0);
			}
			iVar14 = unk_0x3251C2B06497863C(iVar0, -1, 0);
			if (unk_0x76B3C79DE564AFC6(iVar14) && !unk_0x8682D8A6269E52C9(iVar14))
			{
				unk_0x0A69FBBF51E1A08F(iVar14, unk_0xF177E0DA126D71C8(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x3251C2B06497863C(iVar0, 0, 0);
				if (unk_0x76B3C79DE564AFC6(iVar14) && !unk_0x8682D8A6269E52C9(iVar14))
				{
					unk_0x0A69FBBF51E1A08F(iVar14, unk_0xF177E0DA126D71C8(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x3251C2B06497863C(iVar0, 1, 0);
				if (unk_0x76B3C79DE564AFC6(iVar14) && !unk_0x8682D8A6269E52C9(iVar14))
				{
					unk_0x0A69FBBF51E1A08F(iVar14, unk_0xF177E0DA126D71C8(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x3251C2B06497863C(iVar0, 2, 0);
				if (unk_0x76B3C79DE564AFC6(iVar14) && !unk_0x8682D8A6269E52C9(iVar14))
				{
					unk_0x0A69FBBF51E1A08F(iVar14, unk_0xF177E0DA126D71C8(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xE9F8539D5AF6B052(&iVar0);
		}
	}
}

int func_379(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_382(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xCD59EF1D7098A4B4(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xCD59EF1D7098A4B4(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xCD59EF1D7098A4B4(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xCD59EF1D7098A4B4(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_381(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_381(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_381(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_381(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_381(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_381(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_381(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_381(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_381(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_381(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_381(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_381(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_381(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_381(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_381(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_381(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_381(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
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
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_382(struct<3> Param0)
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

void func_383(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x9944C9C4DBEAB270(iParam0) <= 200f)
			{
				unk_0xCB78392CBBC0CB2F(iParam0, 500f);
			}
			if (unk_0xAF956B2E8BE2DC97(iParam0) <= 700f)
			{
				unk_0xCB78392CBBC0CB2F(iParam0, 900f);
			}
			if (unk_0x8DB158934E64B062(iParam0) < 200)
			{
				unk_0xCB78392CBBC0CB2F(iParam0, 500f);
			}
		}
	}
}

Vector3 func_384()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_385()
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
		unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_1302, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), 299.4985f);
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_1315))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_1315, 0))
		{
			unk_0x56B418F469976565(iLocal_1315, 0, 1, 0);
			unk_0x0A69FBBF51E1A08F(iLocal_1315, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			unk_0x5082D1A6D078DB20(iLocal_1315, 296.7603f);
			unk_0x24B72A49849215AE(iLocal_1315, 1084227584);
		}
	}
}

int func_386()
{
	iLocal_382 = unk_0x31CD6E9F83C10233();
	return iLocal_382;
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, iParam0);
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0xB8BC2FD710896F98(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 15f);
	}
	unk_0x11AA938960F52423(iParam1);
	func_215(0);
	func_368(1, 1, iParam2, 0);
	unk_0x4C4F62CD43971CED(0);
	unk_0x56A844FA6FE745C3(0);
	func_367(23, 1);
}

void func_388()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1312))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_1312, 0))
		{
			iLocal_1192 = 0;
			while (iLocal_1192 < 3)
			{
				if (!unk_0x76B3C79DE564AFC6(uLocal_1050[iLocal_1192]))
				{
					if (iLocal_1192 == 0)
					{
						uLocal_1050[iLocal_1192] = unk_0x4E2448BB7576232A(iLocal_1312, 26, iLocal_1327, -1, 1, 1);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 0, 0, 2, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 3, 0, 0, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 4, 0, 1, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 11, 0, 0, 0);
					}
					else if (iLocal_1192 == 1)
					{
						uLocal_1050[iLocal_1192] = unk_0x4E2448BB7576232A(iLocal_1312, 26, iLocal_1327, 0, 1, 1);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 0, 1, 2, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 3, 0, 1, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 4, 0, 0, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 11, 0, 2, 0);
					}
					else if (iLocal_1192 == 2)
					{
						uLocal_1050[iLocal_1192] = unk_0x4E2448BB7576232A(iLocal_1312, 26, iLocal_1328, 1, 1, 1);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 0, 1, 2, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 3, 0, 2, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 4, 0, 1, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xD5FF2158C8907CA9(uLocal_1050[iLocal_1192], 11, 1, 1, 0);
					}
				}
				iLocal_1192++;
			}
		}
	}
}

void func_389()
{
	if (!unk_0x76B3C79DE564AFC6(iLocal_1312))
	{
		iLocal_1312 = unk_0x5129A9193468FF77(iLocal_1326, Local_1287, fLocal_1219, 1, 1, 0);
		unk_0x9793B48C4C8275F8(iLocal_1326);
		unk_0x5B8D16E3613D9A4D(iLocal_1312, 1);
		unk_0xCFC7B014BB928D6D(iLocal_1312, 1, 1);
		unk_0x6D8EEEFBCDE85FA4(iLocal_1312, 1);
	}
}

void func_390(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_378(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && func_392(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), iParam0, 1, 1056964608, 0, 1, 0)) && !unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!func_52(&uLocal_367))
		{
			func_50(&uLocal_367);
			if (unk_0x76B3C79DE564AFC6(unk_0x7899A2987EB03783()))
			{
				iVar0 = unk_0x7899A2987EB03783();
				if (unk_0x432757A9E7AAFA96(iVar0, 0))
				{
					unk_0x5EF58B2B49A4503B(iVar0, 0f);
				}
			}
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
		}
		else if (func_46(&uLocal_367) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_393(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, uParam1, iParam2, iParam4);
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

void func_393(int iParam0)
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

void func_394()
{
	int iVar0;
	
	switch (iLocal_1193)
	{
		case 0:
			func_408(500);
			func_288(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				func_237("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0xE882E0C18562237F(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
			iLocal_1193++;
			break;
		
		case 1:
			func_407();
			if (!unk_0x76B3C79DE564AFC6(iLocal_1319))
			{
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
						{
							iLocal_1319 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
							if (unk_0x76B3C79DE564AFC6(iLocal_1319) && !unk_0x7A6C051038031EFA(iLocal_1319, 0))
							{
								func_275(iLocal_1319);
							}
						}
					}
				}
			}
			if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				if (!func_404())
				{
					if (!unk_0xA761A0B6072010C8(uLocal_1119))
					{
						uLocal_1119 = func_403(Local_1302, 1);
						unk_0x50B5259DFC71B8EC(uLocal_1119, "ASS_VA_DESTBLIP");
						func_402(&uLocal_1119, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1133)
						{
							func_237("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1133 = 1;
						}
						else if (func_401("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0x27FC4121D73AF604();
						}
					}
				}
				else if (unk_0xABA8B23FE71102D5(uLocal_1130) && func_400())
				{
					func_399();
					func_242();
					iLocal_1031 = 8;
				}
			}
			else if (!func_404())
			{
				func_398(uLocal_1119, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_395();
			break;
	}
}

void func_395()
{
	if (!iLocal_1132)
	{
		if (func_260(Local_1302, 1) <= 100f)
		{
			func_397();
			uLocal_1130 = unk_0x33CE65AA6F4C9162(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1132 = 1;
		}
	}
	else if (func_260(Local_1302, 1) > 120f)
	{
		if (unk_0x0029E1C070813DB8(uLocal_1130))
		{
			unk_0xD695CA0F92333FAF(uLocal_1130);
			func_250();
			iLocal_1132 = 0;
		}
	}
	else if (!unk_0x0029E1C070813DB8(uLocal_1130))
	{
		if (!func_396())
		{
			iLocal_1132 = 0;
		}
	}
}

int func_396()
{
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0xEE37D610E00A6E4E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), joaat("taxi")))
		{
			if (unk_0x3251C2B06497863C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), -1, 0) != unk_0x0031992CA618A445())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_397()
{
	unk_0xBE91026C1FC72180(iLocal_1327);
	unk_0xBE91026C1FC72180(iLocal_1328);
}

void func_398(var uParam0, char* sParam1)
{
	if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0xA761A0B6072010C8(uParam0))
		{
			unk_0x0C4BDC77192798AE(&uParam0);
			unk_0x27FC4121D73AF604();
			func_237(sParam1, 7500, 1);
		}
	}
}

void func_399()
{
	if (unk_0xA761A0B6072010C8(uLocal_1119))
	{
		unk_0x0C4BDC77192798AE(&uLocal_1119);
	}
}

int func_400()
{
	int iVar0;
	
	func_397();
	if (unk_0x772F801619C83779(iLocal_1327) && unk_0x772F801619C83779(iLocal_1328))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_401(char* sParam0, int iParam1, int iParam2)
{
	unk_0xDDF591880CC70341(sParam0);
	if (iParam1 == 1)
	{
		unk_0x7C8A7ECFBAD2C8C4(iParam2);
	}
	return unk_0xD140B300704DB2C2();
}

void func_402(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		Global_103475 = *uParam0;
		Global_103480 = { Param1 };
		Global_103484 = fParam4;
	}
}

var func_403(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_187(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

int func_404()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_1045, Local_1302, 1);
	if (fVar0 < 200f)
	{
		func_406();
	}
	if (func_405())
	{
		if (unk_0xF041E50CF58AF6F9(iLocal_1045, Local_1302, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0)
	{
		if ((fVar0 < 2f || unk_0xF041E50CF58AF6F9(iLocal_1045, Local_1302, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_405() && iVar1)
				{
					return 1;
				}
				else if (!unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_405()
{
	int iVar0;
	
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		return 0;
	}
	if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()) || unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
	{
		iLocal_1315 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		iVar0 = unk_0xE9559A12052415BE(iLocal_1315);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1151 = true;
			return 1;
		}
	}
	return 0;
}

void func_406()
{
	var uVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			unk_0xBE91026C1FC72180(joaat("a_m_m_bevhills_01"));
			unk_0xBE91026C1FC72180(joaat("a_f_m_bevhills_01"));
			unk_0xBE91026C1FC72180(joaat("a_f_m_bevhills_02"));
			unk_0xBE91026C1FC72180(joaat("a_m_y_hipster_01"));
			unk_0xBE91026C1FC72180(joaat("taxi"));
			unk_0x8EC6855B27DBF450("OJAS_HotelTaxi01");
			unk_0x9F62787D280BF2EC("oddjobs@assassinate@hotel@");
			if ((((((unk_0x772F801619C83779(joaat("a_m_m_bevhills_01")) && unk_0x772F801619C83779(joaat("a_f_m_bevhills_01"))) && unk_0x772F801619C83779(joaat("a_f_m_bevhills_02"))) && unk_0x772F801619C83779(joaat("taxi"))) && unk_0x772F801619C83779(joaat("a_m_y_hipster_01"))) && unk_0xB3379AC2E71D1E7E("oddjobs@assassinate@hotel@")) && unk_0x44731FF13F4F33EF("OJAS_HotelTaxi01"))
			{
				iLocal_1205++;
			}
			break;
		
		case 1:
			Local_1691[0] = unk_0x5618B819E5B9C053(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1691[1] = unk_0x5618B819E5B9C053(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			unk_0xEB9B39274C401888(Local_1691[0], 1);
			unk_0xEB9B39274C401888(Local_1691[1], 1);
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0x43EC517AF665D2B9(0, Local_1691[1], -1, 0, 2);
			unk_0x1E78D4CEFEC4E825(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			unk_0xF81AD3C937316CCA(uVar0);
			if (!unk_0x7A6C051038031EFA(Local_1691[0], 0))
			{
				unk_0xEDD5437C49B7B1F8(Local_1691[0], uVar0);
			}
			unk_0x1F5B34056C3CB80B(&uVar0);
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0x43EC517AF665D2B9(0, Local_1691[0], -1, 0, 2);
			unk_0x1E78D4CEFEC4E825(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			unk_0xF81AD3C937316CCA(uVar0);
			if (!unk_0x7A6C051038031EFA(Local_1691[1], 0))
			{
				unk_0xEDD5437C49B7B1F8(Local_1691[1], uVar0);
			}
			unk_0x1F5B34056C3CB80B(&uVar0);
			Local_1691.f_4 = unk_0x5129A9193468FF77(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1, 0);
			unk_0x24B72A49849215AE(Local_1691.f_4, 1084227584);
			Local_1691.f_3 = unk_0x4E2448BB7576232A(Local_1691.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0xEB9B39274C401888(Local_1691.f_3, 1);
			unk_0x43EC517AF665D2B9(Local_1691.f_3, Local_1691[0], -1, 0, 2);
			Local_1691.f_8[0] = unk_0x5618B819E5B9C053(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1691.f_8[1] = unk_0x5618B819E5B9C053(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			unk_0xEB9B39274C401888(Local_1691.f_8[0], 1);
			unk_0xEB9B39274C401888(Local_1691.f_8[1], 1);
			unk_0xBE0E7D38FE7C495C(Local_1691.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xBE0E7D38FE7C495C(Local_1691.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1691.f_5[0] = unk_0x5618B819E5B9C053(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1691.f_5[1] = unk_0x5618B819E5B9C053(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			unk_0xEB9B39274C401888(Local_1691.f_5[0], 1);
			unk_0xEB9B39274C401888(Local_1691.f_5[1], 1);
			unk_0xBE0E7D38FE7C495C(Local_1691.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xBE0E7D38FE7C495C(Local_1691.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1691.f_11 = 1;
			unk_0x9793B48C4C8275F8(joaat("a_m_m_bevhills_01"));
			unk_0x9793B48C4C8275F8(joaat("a_f_m_bevhills_01"));
			unk_0x9793B48C4C8275F8(joaat("a_f_m_bevhills_02"));
			unk_0x9793B48C4C8275F8(joaat("a_m_y_hipster_01"));
			unk_0x9793B48C4C8275F8(joaat("taxi"));
			iLocal_1205++;
			break;
		
		case 2:
			break;
	}
}

void func_407()
{
	struct<3> Var0;
	
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
	{
		iLocal_1186 = 1;
		return;
	}
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
	}
	if (iLocal_1186)
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			fLocal_1245 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_1302);
			iLocal_1186 = 0;
		}
	}
	else if (fLocal_1245 == 0f)
	{
		fLocal_1245 = unk_0x2A488C176D52CCA5(-1510.291f, -946.9932f, 8.278f, Local_1302);
	}
	if (unk_0x2A488C176D52CCA5(Var0, Local_1302) > (fLocal_1245 + 400f))
	{
		func_31(7);
	}
	else if (unk_0x2A488C176D52CCA5(Var0, Local_1302) > (fLocal_1245 + 200f))
	{
		if (!iLocal_1182)
		{
			func_237("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1182 = 1;
		}
	}
}

void func_408(int iParam0)
{
	if (!unk_0xF9FC07CC13402AEF())
	{
		unk_0x18D7C8000EDEAAB4(iParam0);
		while (!unk_0xF9FC07CC13402AEF())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_409()
{
	var uVar0;
	float fVar1;
	
	if (unk_0x76B3C79DE564AFC6(iLocal_1058))
	{
		func_414();
		if (!unk_0x8682D8A6269E52C9(iLocal_1058))
		{
			fVar1 = func_23(iLocal_1058, 1);
			unk_0x9C8949CB342B3559(iLocal_1058, 0);
			unk_0x1481FD3C9C94FB39(iLocal_1058, 0);
			unk_0x0EB00C68DDFABE19(iLocal_1058, 0);
			unk_0xA8BB581B2FB87711(iLocal_1058, 16);
			unk_0xD6A092D1F1B9A9F1(iLocal_1058, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_52(&uLocal_1357))
				{
					if (!func_22())
					{
						if (func_411(&uLocal_1357, 10f))
						{
							func_29(&uLocal_1364, 3, iLocal_1058, "LESTER", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0xDBF188DE6334F01A(iLocal_1058) || !unk_0x4096DB4B0B8A982B(iLocal_1058))
				{
					func_410();
				}
			}
			switch (iLocal_1191)
			{
				case 0:
					if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
					{
						if ((unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()) || (unk_0x76B3C79DE564AFC6(iLocal_1058) && unk_0x7CA73A79B30385F3(iLocal_1058, unk_0x0031992CA618A445(), 1))) || unk_0x7CA73A79B30385F3(iLocal_1690, unk_0x0031992CA618A445(), 1))
						{
							if (unk_0x7CA73A79B30385F3(iLocal_1690, unk_0x0031992CA618A445(), 1))
							{
							}
							unk_0x9031F5D078437286(iLocal_1058, "move_lester_CaneUp", 1048576000);
							unk_0xBE0E7D38FE7C495C(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1191 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x4CB2F72EA418C083(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x2D1A3279FE1D23D4(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0x173325AAF2CD766A(&uVar0);
							unk_0x276406356F4120BB(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x276406356F4120BB(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0x9BE63CB00B240063(0, unk_0x69F9721375CE60CF(iLocal_1058), 0);
							unk_0xF81AD3C937316CCA(uVar0);
							unk_0xEDD5437C49B7B1F8(iLocal_1058, uVar0);
							unk_0x1F5B34056C3CB80B(&uVar0);
							unk_0xF7B450DAAEDE7290(iLocal_1058, joaat("MotionState_Walk"), 0, 0, 0);
							iLocal_1191 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_410()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1058))
	{
		unk_0xA50DE967C5813F23(&iLocal_1058);
	}
}

int func_411(var uParam0, float fParam1)
{
	if (func_413(uParam0, fParam1))
	{
		func_412(uParam0);
		return 1;
	}
	return 0;
}

void func_412(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_413(var uParam0, float fParam1)
{
	if (func_52(uParam0))
	{
		if (func_46(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_414()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_1058))
	{
		if (unk_0x7CA73A79B30385F3(iLocal_1058, unk_0x0031992CA618A445(), 1))
		{
			func_31(9);
		}
	}
}

void func_415()
{
	unk_0x1E420F926A7BC4D2("ASS1_STOP");
	if (!unk_0x2A3398C6222EB190(Global_92762.f_20, 13))
	{
		func_491();
	}
	func_416(0, -1, 1);
	unk_0x31F42B23A853582E(0);
	unk_0xADE985F6BA90AED5(0, 1065353216);
	iLocal_1031 = 18;
	func_408(500);
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	if (func_498() && func_418())
	{
		while (Global_92757 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5BF9AA7BD6376F82(0);
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0x6086ABE329F045A1(unk_0x0031992CA618A445());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x76B3C79DE564AFC6(iParam0))
				{
					if (unk_0x432757A9E7AAFA96(iParam0, 0))
					{
						if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iParam0, 0))
						{
							unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), iParam0, iParam1);
							unk_0xADE985F6BA90AED5(0f, 1065353216);
							unk_0x31F42B23A853582E(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			}
		}
		unk_0x9EE910F9C61CBE89();
		func_417(0);
	}
}

void func_417(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_92762.f_20), 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_92762.f_20), 13);
	}
}

bool func_418()
{
	return unk_0x2A3398C6222EB190(Global_92762.f_20, 13);
}

void func_419()
{
	while (iLocal_1205 < 2)
	{
		func_406();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_389();
	func_362(0);
	if (!unk_0x2A3398C6222EB190(Global_92762.f_20, 13))
	{
		func_491();
	}
	iLocal_1160 = 0;
	iLocal_1184 = 0;
	unk_0xE882E0C18562237F(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
	unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
	unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
	unk_0x1E420F926A7BC4D2("ASS1_RESTART1");
	while (!func_400())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_416(0, -1, 1);
	unk_0x31F42B23A853582E(0);
	unk_0xADE985F6BA90AED5(0, 1065353216);
	iLocal_1031 = 9;
	func_408(500);
}

void func_420()
{
	func_416(0, -1, 1);
	unk_0x31F42B23A853582E(0);
	unk_0xADE985F6BA90AED5(0, 1065353216);
	func_408(500);
	iLocal_1031 = 7;
}

void func_421()
{
	uLocal_1316[0] = unk_0x5129A9193468FF77(iLocal_1329, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1, 0);
	uLocal_1316[1] = unk_0x5129A9193468FF77(iLocal_1329, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1, 0);
}

void func_422()
{
	uLocal_1330 = unk_0x6BE82EFE6EE60BF4(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1331 = unk_0x6BE82EFE6EE60BF4(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_423()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0x772F801619C83779(iLocal_1326) && unk_0x772F801619C83779(iLocal_1329)) && unk_0x4B59C07015859DF4(102, "ASSOJva")) && unk_0x4B59C07015859DF4(107, "ASSOJva")) && unk_0x44731FF13F4F33EF("OJASva_101")) && unk_0x44731FF13F4F33EF("OJASva_101a")) && unk_0x44731FF13F4F33EF("OJASva_104")) && unk_0xB3379AC2E71D1E7E("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xB3379AC2E71D1E7E("oddjobs@assassinate@hotel@")) && unk_0xF376F1492C8D737F(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_424()
{
	unk_0xBE91026C1FC72180(iLocal_1326);
	unk_0xBE91026C1FC72180(iLocal_1329);
	unk_0x9F62787D280BF2EC("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x9F62787D280BF2EC("oddjobs@assassinate@hotel@");
	unk_0x1D69C39ECF71C85C("ASS_VA", 3);
	unk_0xB1F4C6EA4D59C5D0(102, "ASSOJva");
	unk_0xB1F4C6EA4D59C5D0(107, "ASSOJva");
	unk_0x8EC6855B27DBF450("OJASva_101");
	unk_0x8EC6855B27DBF450("OJASva_101a");
	unk_0x8EC6855B27DBF450("OJASva_104");
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		unk_0x1ED966252985F895(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0x4684D9ED3F94B4A8(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		unk_0x1ED966252985F895(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		unk_0xEE470B9028B06E0A(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_426()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1364, 1, iLocal_1045, "FRANKLIN", 0, 1);
	unk_0x15007EAE63C7ECCF(0.2f);
	unk_0x659E5E147E8E6635("Guards", &iLocal_1332);
	unk_0x85F49C37BE784CD7(1, joaat("COP"), iLocal_1332);
	unk_0x85F49C37BE784CD7(1, iLocal_1332, joaat("COP"));
	unk_0x85F49C37BE784CD7(5, iLocal_1332, joaat("player"));
	unk_0x85F49C37BE784CD7(5, joaat("player"), iLocal_1332);
	unk_0x963AAB0E6FFD7E02(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	unk_0x8AB6084B63613D29(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1128 = unk_0x765BE154A2FACB3E(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1129 = unk_0x765BE154A2FACB3E(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_427()
{
	StringCopy(&Local_965, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_965.f_6), {Global_55869}, 6);
	StringCopy(&(Local_965.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_965.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_965.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_965.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_965.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_54), "ASS_VA_COMP", 24);
}

void func_428()
{
	Local_1284 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1233 = 260.3612f;
	Local_1287 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1219 = 96.8755f;
	Local_1290 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1220 = 201.0763f;
	fLocal_1234 = 40f;
	Local_360.f_2 = 40f;
	Local_1248[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1248[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1248[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1235[0] = 157.3177f;
	fLocal_1235[1] = 58.3594f;
	fLocal_1235[2] = 65.6443f;
	Local_1268[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1268[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1268[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1268[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1268[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1221[0] = 160.0748f;
	fLocal_1221[1] = 58.3365f;
	fLocal_1221[2] = 58.0214f;
	fLocal_1221[3] = 97.6664f;
	fLocal_1221[4] = 225.8689f;
	iLocal_1192 = 0;
	while (iLocal_1192 <= 4)
	{
		uLocal_1227[iLocal_1192] = unk_0xDFF7E223DB3CBA25(0f, 2f);
		iLocal_1192++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1044 = 0;
	iLocal_1180 = 0;
	bLocal_1181 = false;
	iLocal_1166 = 0;
	bLocal_1189 = false;
	iLocal_1188 = 0;
}

void func_429()
{
	switch (iLocal_1193)
	{
		case 0:
			unk_0x1C3232B31013A8DF("ASS_INT_2_ALT1", 8);
			unk_0xBE91026C1FC72180(joaat("ig_lestercrest"));
			unk_0xBE91026C1FC72180(joaat("prop_cs_walking_stick"));
			unk_0x9F62787D280BF2EC("oddjobs@assassinate@hotel@leadin");
			unk_0x9F62787D280BF2EC("oddjobs@assassinate@hotel@leaning@");
			unk_0x9CA1D58A37E9394C("move_lester_CaneUp");
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
			unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
			if ((((unk_0x772F801619C83779(joaat("ig_lestercrest")) && unk_0x772F801619C83779(joaat("prop_cs_walking_stick"))) && unk_0xB3379AC2E71D1E7E("oddjobs@assassinate@hotel@leadin")) && unk_0xB3379AC2E71D1E7E("oddjobs@assassinate@hotel@leaning@")) && unk_0x88D617EDD6923CC0("move_lester_CaneUp"))
			{
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				func_387(56, 0, 1);
				func_390(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				unk_0x963AAB0E6FFD7E02(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_1669, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), fLocal_1672);
				unk_0x7E54A33202605E52(unk_0x0031992CA618A445(), 0, 0);
				unk_0xBE0E7D38FE7C495C(unk_0x0031992CA618A445(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x2A3EA4C0BCED85F2(uLocal_1673))
				{
					uLocal_1673 = unk_0x6BE82EFE6EE60BF4(26379945, Local_1675, Local_1678, 42.2032f, 1, 2);
					unk_0xE983D49A61E9F0FF(uLocal_1673, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0x2A3EA4C0BCED85F2(uLocal_1674))
				{
					uLocal_1674 = unk_0x6BE82EFE6EE60BF4(26379945, Local_1681, Local_1684, 42.2032f, 0, 2);
					unk_0xD0E2527DD961F86C(uLocal_1674, uLocal_1673, 5000, 1, 1);
					unk_0xE983D49A61E9F0FF(uLocal_1673, "HAND_SHAKE", 0.3f);
				}
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
				iLocal_1193++;
			}
			break;
		
		case 2:
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x4CB2F72EA418C083(unk_0x0031992CA618A445(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&uLocal_1687))
					{
						func_49(&uLocal_1687);
					}
				}
				if (func_52(&uLocal_1687))
				{
					if (func_46(&uLocal_1687) > 6f)
					{
						iLocal_1193++;
					}
				}
			}
			break;
		
		case 3:
			if (func_430())
			{
				iLocal_1193++;
			}
			break;
		
		case 4:
			func_368(1, 1, 1, 0);
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				unk_0xB4203951ECFEACA7(unk_0x0031992CA618A445(), "Franklin", 0, 0, 0);
			}
			unk_0xB4203951ECFEACA7(iLocal_1058, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0xB4203951ECFEACA7(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0x834CC4DB815D9C93(0);
			unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
			iLocal_1193++;
			break;
		
		case 5:
			if (unk_0x136B42AA35650CB6())
			{
				unk_0xD3254A56D0C37068(0);
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				iLocal_1193++;
			}
			break;
		
		case 6:
			if (unk_0x154C8F16279FF849())
			{
				unk_0x59FA14CE9944B95A(0);
			}
			if (!unk_0x76B3C79DE564AFC6(iLocal_1058))
			{
				if (unk_0xA6E5D6D84588FB0E("Lester", 0))
				{
					if (unk_0x76B3C79DE564AFC6(unk_0x926974705C09EAA2("Lester", 0)))
					{
						iLocal_1058 = unk_0x4849801147A2BA1E(unk_0x926974705C09EAA2("Lester", 0));
					}
				}
			}
			if (!unk_0x76B3C79DE564AFC6(iLocal_1059))
			{
				if (unk_0xA6E5D6D84588FB0E("WalkingStick_Lester", 0))
				{
					if (unk_0x76B3C79DE564AFC6(unk_0x926974705C09EAA2("WalkingStick_Lester", 0)))
					{
						iLocal_1059 = unk_0x926974705C09EAA2("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0x31F42B23A853582E(0);
			unk_0xADE985F6BA90AED5(0, 1065353216);
			if (unk_0x2B9CEC19C2A93E97("Franklin", 0))
			{
			}
			if (unk_0x76B3C79DE564AFC6(unk_0x926974705C09EAA2("Lester", 0)))
			{
				if (unk_0x2B9CEC19C2A93E97("Lester", 0))
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1058) && !unk_0x8682D8A6269E52C9(iLocal_1058))
					{
						unk_0x0A69FBBF51E1A08F(iLocal_1058, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						unk_0x5082D1A6D078DB20(iLocal_1058, -11f);
						unk_0xBE0E7D38FE7C495C(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0x7E54A33202605E52(iLocal_1058, 0, 0);
					}
				}
			}
			if (unk_0x76B3C79DE564AFC6(unk_0x926974705C09EAA2("Lester", 0)))
			{
				if (unk_0x2B9CEC19C2A93E97("WalkingStick_Lester", 0))
				{
					if (unk_0x76B3C79DE564AFC6(iLocal_1058) && !unk_0x8682D8A6269E52C9(iLocal_1058))
					{
						unk_0x251439A7DA10B1A9(iLocal_1059, iLocal_1058, unk_0xB5B293DE66E91B64(iLocal_1058, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (unk_0xFB3670F71C8DA8A5() && !unk_0x136B42AA35650CB6())
			{
				func_368(0, 1, 1, 0);
				if (!unk_0x8682D8A6269E52C9(iLocal_1058))
				{
					unk_0x31EFA4297B872C86(iLocal_1058, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x825129266C8D3F32(iLocal_1058, 1);
				}
				unk_0x31F42B23A853582E(0);
				unk_0xADE985F6BA90AED5(0, 1065353216);
				if (unk_0x5114FCEE2A997B95())
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x18D7C8000EDEAAB4(500);
				}
				func_366(1, 1, 1);
				iLocal_1193++;
			}
			break;
		
		case 7:
			func_50(&uLocal_1357);
			func_242();
			iLocal_1031 = 4;
			break;
	}
}

bool func_430()
{
	bool bVar0;
	
	bVar0 = unk_0xAACBB62174DAE158();
	if (!Global_70784)
	{
		if (!bVar0)
		{
			Global_70784 = 1;
		}
	}
	return bVar0;
}

void func_431()
{
	if (!unk_0x76B3C79DE564AFC6(iLocal_1690))
	{
		iLocal_1690 = unk_0xE5277EB89570BEE8(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_432()
{
	int iVar0;
	
	if (iLocal_1031 > 7)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xE604180FAF2816DA();
				if (unk_0x76B3C79DE564AFC6(iVar0))
				{
					if (unk_0x432757A9E7AAFA96(iVar0, 0))
					{
						if ((iVar0 != iLocal_1320[0] && iVar0 != iLocal_1320[1]) && iVar0 != iLocal_1320[2])
						{
							if (iLocal_1216 >= 2)
							{
								iLocal_1216 = -1;
							}
							iLocal_1320[iLocal_1216 + 1] = iVar0;
							unk_0x1581691D748490F3(iLocal_1320[iLocal_1216 + 1], 1, 0);
							unk_0x0E00B875F507DECE(iLocal_1320[iLocal_1216 + 1], 0);
							iLocal_1216++;
						}
					}
				}
			}
		}
	}
}

void func_433()
{
	int iVar0;
	
	if (iLocal_1178)
	{
		iVar0 = func_30(1116471296, 1);
		if (!unk_0x8682D8A6269E52C9(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1364, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_434()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1691.f_11)
	{
		if (!bLocal_1169)
		{
			if (iLocal_1031 < 10)
			{
				if (func_440())
				{
					iVar0 = func_30(1116471296, 1);
					if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x7A6C051038031EFA(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
							Var1 = { Var1 };
							func_29(&uLocal_1364, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_439();
					bLocal_1169 = true;
				}
				if (iLocal_1134)
				{
					func_439();
					bLocal_1169 = true;
				}
				else
				{
					func_438();
					func_435();
				}
			}
		}
	}
}

void func_435()
{
	if (bLocal_1140)
	{
		if (IntToFloat(iLocal_1213) < (IntToFloat(iLocal_1210) - 5f))
		{
			func_437(Local_1691.f_8[0], 1);
			func_437(Local_1691.f_8[1], 1);
			func_437(Local_1691.f_5[0], 1);
			func_437(Local_1691.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1691.f_8[0], 0) < 1f || func_23(Local_1691.f_8[1], 0) < 1f) || iLocal_1138)
			{
				func_436(Local_1691.f_8[0], 1);
				func_436(Local_1691.f_8[1], 1);
			}
			if (!iLocal_1138)
			{
				func_436(Local_1691.f_5[0], 0);
				func_436(Local_1691.f_5[1], 0);
			}
			else
			{
				func_436(Local_1691.f_5[0], 1);
				func_436(Local_1691.f_5[1], 1);
			}
		}
	}
}

void func_436(int iParam0, int iParam1)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0xF57D21B49780A7A8(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_437(iParam0, 1);
			}
		}
	}
}

void func_437(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if ((bParam1 && unk_0xF57D21B49780A7A8(iParam0, 242628503) != 1) || !bParam1)
		{
			unk_0x173325AAF2CD766A(&uVar0);
			unk_0xE10E20B323527002(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0x9BE63CB00B240063(0, 1193033728, 0);
			unk_0xF81AD3C937316CCA(uVar0);
			unk_0xEDD5437C49B7B1F8(iParam0, uVar0);
			unk_0x1F5B34056C3CB80B(&uVar0);
		}
	}
}

void func_438()
{
	int iVar0;
	
	switch (iLocal_1206)
	{
		case 0:
			if (((iLocal_1154 || iLocal_1138) || func_23(Local_1691[0], 0) < 1f) || func_23(Local_1691[1], 0) < 1f)
			{
				if (!unk_0x7A6C051038031EFA(Local_1691[0], 0) && !unk_0x7A6C051038031EFA(Local_1691[1], 0))
				{
					unk_0x43EC517AF665D2B9(Local_1691[0], Local_1691[1], -1, 0, 2);
					unk_0x43EC517AF665D2B9(Local_1691[1], Local_1691[0], -1, 0, 2);
				}
				if (((unk_0x76B3C79DE564AFC6(Local_1691[1]) && unk_0x76B3C79DE564AFC6(Local_1691.f_4)) && !unk_0x8682D8A6269E52C9(Local_1691[1])) && unk_0x432757A9E7AAFA96(Local_1691.f_4, 0))
				{
					unk_0xD706D9D85701BFBD(Local_1691[1]);
					unk_0x2E0E5BF2A31392F4(Local_1691[1], Local_1691.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&uLocal_1348))
				{
					func_49(&uLocal_1348);
				}
				iLocal_1206++;
			}
			break;
		
		case 1:
			if (!iLocal_1174)
			{
				if (func_52(&uLocal_1348))
				{
					if (func_46(&uLocal_1348) > 3f)
					{
						if (((unk_0x76B3C79DE564AFC6(Local_1691[0]) && unk_0x76B3C79DE564AFC6(Local_1691.f_4)) && !unk_0x8682D8A6269E52C9(Local_1691[0])) && unk_0x432757A9E7AAFA96(Local_1691.f_4, 0))
						{
							if (unk_0xF57D21B49780A7A8(Local_1691[0], -1794415470) != 1)
							{
								unk_0xD706D9D85701BFBD(Local_1691[0]);
								unk_0x2E0E5BF2A31392F4(Local_1691[0], Local_1691.f_4, 20000, 1, 1f, 1, 0);
								iLocal_1174 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&uLocal_1348);
				}
			}
			if (!unk_0x8682D8A6269E52C9(Local_1691[0]) && !unk_0x8682D8A6269E52C9(Local_1691[1]))
			{
				if (unk_0xA32DC7E16AD1DFB7(Local_1691[0], Local_1691.f_4, 0) && unk_0xA32DC7E16AD1DFB7(Local_1691[1], Local_1691.f_4, 0))
				{
					if (!unk_0x7A6C051038031EFA(Local_1691.f_3, 0) && !unk_0x7A6C051038031EFA(Local_1691.f_4, 0))
					{
						unk_0xCFA3B07B6CEEF62C(Local_1691.f_3);
						func_50(&uLocal_1348);
					}
					iLocal_1206++;
				}
			}
			break;
		
		case 2:
			if (func_52(&uLocal_1348))
			{
				if (func_46(&uLocal_1348) > 3f)
				{
					if (!unk_0x8682D8A6269E52C9(Local_1691.f_3) && unk_0x432757A9E7AAFA96(Local_1691.f_4, 0))
					{
						unk_0x9EE30C20270C9443(Local_1691.f_3, Local_1691.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1206++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x7A6C051038031EFA(Local_1691.f_3, 0) && !unk_0x7A6C051038031EFA(Local_1691.f_4, 0))
			{
				if (!unk_0xC6B007187409CF4D(Local_1691.f_4) || iLocal_1177)
				{
					unk_0xF48F6EEC1EBEB012(Local_1691.f_3, Local_1691.f_4, 10f, 786603);
					iLocal_1206++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1177)
			{
				if (!unk_0x8682D8A6269E52C9(uLocal_1054[0]))
				{
					iVar0 = uLocal_1054[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (unk_0x76B3C79DE564AFC6(iVar0))
				{
					if (!unk_0x8682D8A6269E52C9(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1364, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&uLocal_1348);
				iLocal_1206++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_439()
{
	if ((unk_0x76B3C79DE564AFC6(Local_1691.f_3) && !unk_0x7A6C051038031EFA(Local_1691.f_3, 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691.f_3, unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691[0]) && !unk_0x7A6C051038031EFA(Local_1691[0], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691[0], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
		unk_0x67ABC034CBFBD349(Local_1691[0], 2, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691[1]) && !unk_0x7A6C051038031EFA(Local_1691[1], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691[1], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
		unk_0x67ABC034CBFBD349(Local_1691[1], 2, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691.f_8[0]) && !unk_0x7A6C051038031EFA(Local_1691.f_8[0], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691.f_8[0], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691.f_8[1]) && !unk_0x7A6C051038031EFA(Local_1691.f_8[1], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691.f_8[1], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691.f_5[0]) && !unk_0x7A6C051038031EFA(Local_1691.f_5[0], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691.f_5[0], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
	}
	if ((unk_0x76B3C79DE564AFC6(Local_1691.f_5[1]) && !unk_0x7A6C051038031EFA(Local_1691.f_5[1], 0)) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x53E150F8F0AD7101(Local_1691.f_5[1], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
	}
}

int func_440()
{
	if (!unk_0x7A6C051038031EFA(Local_1691.f_3, 0))
	{
		if (unk_0x20BE8D7B7834CA2D(Local_1691.f_3))
		{
			if (unk_0xB6903829A19F7017(Local_1691.f_3) == unk_0x0031992CA618A445())
			{
				return 1;
			}
		}
	}
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x7A6C051038031EFA(Local_1691.f_4, 0))
	{
		if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_1691.f_4, 0))
		{
			return 1;
		}
	}
	if (func_108(Local_1691[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(Local_1691[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(Local_1691.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(Local_1691.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(Local_1691.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_108(Local_1691.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_107(Local_1691.f_4))
	{
		return 1;
	}
	if (unk_0x40F3590C2FDAEDCC(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_441()
{
	func_499();
}

int func_442()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92762 == 7 || Global_92762 == 8)
	{
		return 1;
	}
	return 0;
}

void func_443(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_498())
	{
		unk_0x0BDEAF4CD9510F40(0);
		unk_0xD804ACF2A7171150(&(Global_92762.f_20), 2);
		unk_0x5BF9AA7BD6376F82(1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
		}
		Global_92758 = { Param0 };
		Global_92761 = fParam3;
		Global_92757 = 1;
		if (iParam4 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_92762.f_20), 14);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_92762.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_92762.f_20), 24);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_92762.f_20), 24);
		}
		func_417(1);
	}
}

int func_444(struct<3> Param0, float fParam3)
{
	return func_445(&(Global_98003.f_2875), Param0, fParam3, 0);
}

int func_445(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_487(uParam0))
	{
		if (func_44(Param1, 0f, 0f, 0f, 0))
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
		if (func_486(uParam0))
		{
			unk_0x963AAB0E6FFD7E02(Param1, 5f, 1, 0, 0, 0);
			func_485(Param1, 5f, 0);
			iVar0 = unk_0x5129A9193468FF77(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x0AF5FA388AAEFF13(iVar0, Param1, 0, 0, 1);
				}
				func_476(iVar0, &(uParam0->f_12), 0, 1);
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
							func_475(uParam0->f_11, 1);
						}
						else if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iVar0)))
						{
							func_475(uParam0->f_11, 2);
						}
					}
					unk_0xDEE5A73213F56CF3(iVar0, 0);
					unk_0x30EFA94609D08404(iVar0, 0);
					unk_0x014C5648BA70BF8B(iVar0, 1);
					func_474(iVar0, uParam0->f_11);
				}
				else if ((!func_471(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xB3404E397FF56B3B(unk_0x49CAADAD1ABAB70A(), "startup_positioning"))
				{
					iVar8 = func_470(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_465(iVar8);
					}
				}
				if (((Global_92762 != 13 && Global_92762 != 10) && Global_92762 != 11) && Global_92762 != 12)
				{
					if (unk_0x50B7853132D8438E(&(Global_92762.f_3)) == Global_70595)
					{
						if (uParam0->f_12.f_66 == Global_104439.f_32291.f_69[21 /*78*/].f_66)
						{
							func_462(24, 0);
							func_465(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_446(iVar0, uParam0->f_11);
				}
				unk_0x9793B48C4C8275F8(uParam0->f_12.f_66);
				Var1 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_446(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_447(iParam0))
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
	func_284(iParam0, &(Global_104439.f_32291.f_5510));
}

int func_447(int iParam0)
{
	if ((((((((((!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0)) || func_294(iParam0, 0, 0)) || func_294(iParam0, 1, 0)) || func_294(iParam0, 2, 0)) || func_280(iParam0) != 145) || func_461(iParam0)) || func_460(iParam0)) || func_459(iParam0)) || func_458(iParam0)) || !func_448(unk_0xE9559A12052415BE(iParam0)))
	{
		if (func_460(iParam0))
		{
		}
		if (func_460(iParam0))
		{
		}
		if (func_294(iParam0, 0, 0))
		{
		}
		if (func_294(iParam0, 1, 0))
		{
		}
		if (func_294(iParam0, 2, 0))
		{
		}
		if (func_280(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_448(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_449(iParam0, 0))
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

int func_449(int iParam0, bool bParam1)
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
		if (!func_457())
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
		if ((((!func_456() && !func_455()) && !func_454()) && !func_453()) && !func_457())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_454())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_452(iParam0))
		{
			return 0;
		}
	}
	if (!func_450(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_450(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_451())
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

int func_451()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0)
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

int func_453()
{
	return 0;
}

int func_454()
{
	return 1;
}

int func_455()
{
	return 1;
}

int func_456()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_457()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
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

int func_458(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	uVar1 = unk_0xCF9C6545E179C4AD(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xB3404E397FF56B3B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_449(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_459(int iParam0)
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

int func_460(int iParam0)
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

int func_461(int iParam0)
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

void func_462(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_464(iParam0, 0))
		{
			func_463(iParam0, 1, 0);
			func_463(iParam0, 2, 0);
			func_463(iParam0, 3, 0);
			func_463(iParam0, 4, 0);
			func_463(iParam0, 0, 1);
			Global_69607[iParam0] = 1;
		}
	}
	else
	{
		func_463(iParam0, 0, 0);
	}
}

void func_463(int iParam0, int iParam1, bool bParam2)
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

bool func_464(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_104439.f_32291[iParam0], iParam1);
}

void func_465(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_469(&(Global_69607.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_464(iParam0, 0)) && Global_70516.f_66 == 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] != 0) && Global_104439.f_32291.f_1958[Global_69607.f_555[0 /*21*/].f_14] > 3) && (!func_467(0, Global_69607.f_555[0 /*21*/].f_12) || !func_467(1, Global_69607.f_555[0 /*21*/].f_12)))
			{
				func_466(&(Global_104439.f_32291.f_69[Global_69607.f_555[0 /*21*/].f_14 /*78*/]), &Global_70516);
				Global_70594 = Global_104439.f_32291.f_5591;
			}
			func_462(iParam0, 0);
		}
	}
}

void func_466(var uParam0, var uParam1)
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

int func_467(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_468(&(Global_104439.f_32291.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_449(Global_104439.f_32291.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_468(var uParam0)
{
	return *uParam0;
}

int func_469(var uParam0, int iParam1)
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
			uParam0->f_4 = func_282(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_282(0, 1);
			uParam0->f_12 = 0;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_282(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_282(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_282(1, 1);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_282(1, 2);
			uParam0->f_12 = 1;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 19);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_282(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_282(2, 1);
			uParam0->f_12 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 20);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_282(2, 1);
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
			if (func_457())
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
			if (func_457())
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
		if (!func_44(Global_104439.f_32291.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_44(Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_9, 20))
	{
		if (!func_44(Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104439.f_2244.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104439.f_2244.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_470(int iParam0)
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

int func_471(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_473(iParam0, Global_69607.f_139[38], 0))
			{
				func_465(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_473(iParam0, Global_69607.f_139[43], 1))
			{
				func_465(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_473(iParam0, uVar1[iVar6], 1) && func_472(unk_0xF177E0DA126D71C8(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_44(Param1, 0f, 0f, 0f, 0)) || unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam0, 1), unk_0xF177E0DA126D71C8(uVar1[iVar6], 1), 1) < 10f)
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
					func_465(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x76B3C79DE564AFC6(Global_69607.f_484[20]) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x432757A9E7AAFA96(Global_69607.f_484[20], 0))
			{
				if (unk_0xE9559A12052415BE(Global_69607.f_484[20]) == joaat("swift2") && unk_0x27F913045BB0E0C6(iParam0) == unk_0x27F913045BB0E0C6(Global_69607.f_484[20]))
				{
					func_465(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_472(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_473(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x76B3C79DE564AFC6(uParam1) && !unk_0x7A6C051038031EFA(iParam1, 0)) && unk_0x432757A9E7AAFA96(iParam1, 0))
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

void func_474(int iParam0, int iParam1)
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

void func_475(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (iParam0 == 145 || Global_90248[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0xE9559A12052415BE(Global_90238[iVar0]) == func_282(iParam0, iParam1))
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

void func_476(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_285(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_285(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_285(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_285(iVar1 + 1));
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
		if (((unk_0x2A3398C6222EB190(uParam1->f_77, 15) || func_484(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_483())
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
						func_482(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_482(iParam0, uParam1->f_69);
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
			func_477(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x1DBFCF939B3B47D0(uParam1->f_66) && !unk_0x9C4740BA7F0AF553(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, func_285(iVar2 + 1)))
				{
					if (!unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
					{
						unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
				{
					unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0xE9559A12052415BE(iParam0) == joaat("sheava") || unk_0xE9559A12052415BE(iParam0) == joaat("omnis")) || unk_0xE9559A12052415BE(iParam0) == joaat("le7b"))
		{
			if (unk_0xBE7294CB9B3BEC34(iParam0, 0) == -1)
			{
				unk_0x9B48A5E9A884175D(iParam0, 1, 0);
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

int func_477(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x9B0BD13ABD4E15D1(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xF4E4907109CEF0EC(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xBE7294CB9B3BEC34(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xFB84A01F8B3E62E6(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5A814851114E34FB(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5A814851114E34FB(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5A814851114E34FB(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_481(unk_0xE9559A12052415BE(*uParam0), 1) && unk_0xBE7294CB9B3BEC34(*uParam0, 24) != func_480(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5A814851114E34FB(*uParam0, 24, func_480(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_479(uParam0);
	if (func_478(*uParam0))
	{
		unk_0x9DFCC19370F919F3(*uParam0, 1);
		unk_0x014C5648BA70BF8B(*uParam0, 1);
	}
	return 1;
}

int func_478(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x76B3C79DE564AFC6(uParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x5583DCB5A49F0E53(iParam0) > 0)
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

void func_479(var uParam0)
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

int func_480(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(uParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
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

int func_481(int iParam0, int iParam1)
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

void func_482(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5583DCB5A49F0E53(uParam0) > 0)
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

bool func_483()
{
	return unk_0x43456EBBDC27D696(joaat("mpindependence"));
}

int func_484(int iParam0)
{
	var uVar0;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x496D18970B708258("MPBitset", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				}
				return unk_0x2A3398C6222EB190(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_485(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_469(&(Global_69607.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x1410333E912D4EC6(Param0, Global_69607.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_465(iVar0);
			}
		}
		iVar0++;
	}
}

int func_486(var uParam0)
{
	if (func_487(uParam0))
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

int func_487(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_449(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_472(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_488()
{
	return func_486(&(Global_98003.f_2875));
}

void func_489()
{
	func_490(&(Global_98003.f_2875));
}

void func_490(var uParam0)
{
	if (func_487(uParam0))
	{
		unk_0xBE91026C1FC72180(uParam0->f_12.f_66);
	}
}

void func_491()
{
	if (unk_0x0029E1C070813DB8(uLocal_1130))
	{
		unk_0xD695CA0F92333FAF(uLocal_1130);
	}
}

int func_492()
{
	if (!Global_92762 == 10 && !Global_92762 == 9)
	{
		return 0;
	}
	return Global_92762.f_2;
}

struct<39> func_493(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_494(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_494(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_494(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_494(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_494(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_494(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_495()
{
	bool bVar0;
	
	bVar0 = func_114(Global_104439.f_19824.f_1, 4096);
	Global_104439.f_19824.f_1 = 0;
	if (bVar0)
	{
		func_506(&(Global_104439.f_19824.f_1), 4096);
	}
}

void func_496()
{
}

bool func_497()
{
	return func_487(&(Global_98003.f_2875));
}

int func_498()
{
	if (Global_92762 == 10 || Global_92762 == 9)
	{
		return 1;
	}
	return 0;
}

void func_499()
{
	if (func_52(&uLocal_1336))
	{
		Global_104439.f_19824.f_5 = func_46(&uLocal_1336);
	}
	if (!iLocal_1176)
	{
		unk_0x1E420F926A7BC4D2("ASS1_LOST");
	}
	unk_0x0596A24631CF28DB("SCRIPT\ASSASSINATION_MULTI");
	func_251();
	func_234();
	func_239();
	func_240(1);
	func_399();
	func_503();
	func_425(0);
	func_3();
	if (unk_0x76B3C79DE564AFC6(Global_89404.f_28[0]))
	{
		unk_0x1581691D748490F3(Global_89404.f_28[0], 1, 1);
		unk_0x4738E36A70E50A92(&(Global_89404.f_28[0]));
	}
	unk_0x04021FF677078694(uLocal_1128, 0);
	unk_0x04021FF677078694(uLocal_1129, 0);
	func_491();
	func_82(&uLocal_1529, 0, 0);
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		func_501(unk_0x0031992CA618A445(), 1);
		unk_0x3C4C96D07A1CA39A(unk_0x0031992CA618A445(), 0, -1, 0);
	}
	unk_0x15007EAE63C7ECCF(1f);
	unk_0x92C87DB219EDEB03();
	unk_0x3AA3AACE81B0D52A(iLocal_1327, 0);
	unk_0x3AA3AACE81B0D52A(iLocal_1328, 0);
	func_500();
	unk_0xBEE2834559A8897A();
}

void func_500()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (func_260(Local_1248[iVar0 /*3*/], 1) < 5f)
			{
				unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_501(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x1306828A757A10AC(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_502(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_92799 > 0)
	{
		Global_98003.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_95034.f_21[iParam1] = iVar0;
	}
}

int func_502(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_92799 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_98003.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_98003.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_98003.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_98003.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95034.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_95034.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95034.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_95034.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_503()
{
	unk_0x0EA5304CED5FD5D1(102, "ASSOJva");
	unk_0x0EA5304CED5FD5D1(107, "ASSOJva");
	unk_0xD4B8FC41ABE48E25("OJASva_101");
	unk_0xD4B8FC41ABE48E25("OJASva_101a");
	unk_0xD4B8FC41ABE48E25("OJASva_104");
}

void func_504()
{
	int iVar0;
	
	if (unk_0xBE2C96D0FF6F8282("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104439.f_8946 || func_40(0))
	{
		if (!func_505())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_83659[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_505()
{
	if (((Global_92762 == 13 || Global_92762 == 10) || Global_92762 == 11) || Global_92762 == 12)
	{
		return 0;
	}
	return 1;
}

void func_506(var uParam0, int iParam1)
{
	func_507(uParam0, iParam1);
}

void func_507(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

