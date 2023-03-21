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
	uLocal_54 = unk_0xD736C0AC62BF73AD();
	uLocal_55 = unk_0x880E0FAC08C6FA65();
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
	if (unk_0xE8A79675302ED812(3))
	{
		unk_0x3857DADBD6EC8A54("ASS1_FAIL");
		func_522(&(Global_105220.f_19934.f_1), 1024);
		func_520();
		func_515();
	}
	unk_0x25A523E067E06F54(1);
	iLocal_1045 = unk_0xBC25C936A095B5BA();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
	if (func_514())
	{
		if (func_513())
		{
			iLocal_1153 = 1;
		}
		bLocal_1142 = true;
	}
	else
	{
		bLocal_1142 = false;
	}
	func_512();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
	}
	func_511();
	iLocal_269 = 0;
	Local_57 = { func_509(iLocal_269) };
	unk_0x23180B0A9E8D2951(iLocal_1327, 1);
	unk_0x23180B0A9E8D2951(iLocal_1328, 1);
	unk_0x86B38FBE5E57D36F();
	if (func_514())
	{
		bLocal_376 = true;
		iLocal_1209 = func_508();
		if (Global_87277)
		{
			if (iLocal_1209 <= 1)
			{
				iLocal_1209++;
			}
		}
		func_507();
		if (iLocal_1209 == 0)
		{
			if (iLocal_1153)
			{
				func_505();
				while (!func_504())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar0 = func_453(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iVar0)) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iVar0))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iVar0))) && !unk_0x10A01B0B02B273EF(iVar0))
				{
					unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				}
				else
				{
					unk_0xCF6040807CC0E4A5(&iVar0);
				}
			}
			func_452(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1209 == 1)
		{
			if (iLocal_1153)
			{
				func_505();
				while (!func_504())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar1 = func_453(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iVar1)) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iVar1))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iVar1))) && !unk_0x10A01B0B02B273EF(iVar1))
				{
					unk_0xF0A40F19AAB79E88(iVar1, 1084227584);
				}
				else
				{
					unk_0xCF6040807CC0E4A5(&iVar1);
				}
			}
			func_452(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1209 == 2)
		{
			if (iLocal_1153)
			{
				func_505();
				while (!func_504())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2 = func_453(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iVar2)) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iVar2))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iVar2))) && !unk_0x10A01B0B02B273EF(iVar2))
				{
					unk_0xF0A40F19AAB79E88(iVar2, 1084227584);
				}
				else
				{
					unk_0xCF6040807CC0E4A5(&iVar2);
				}
			}
			func_452(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0x2E94C9549322098D("M_ASS1", 0);
		if (iLocal_1143)
		{
			if (func_451())
			{
				func_450();
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_1045))
		{
			func_443();
			if (iLocal_1031 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_149();
			func_97();
			if (iLocal_1158)
			{
				func_92();
			}
			if (!bLocal_1141)
			{
				if (iLocal_1031 >= 9 && iLocal_1031 < 11)
				{
					func_88(&uLocal_1203, &fLocal_1218, &bLocal_1140, &bLocal_1141);
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
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_1057))
							{
								unk_0xA4E856A8CD53B8DF(iLocal_1057);
								if (iLocal_1044 == 1)
								{
									if (unk_0x724D816EA203A79E(iLocal_1314))
									{
										if (!unk_0x5237AF95232D78C5(iLocal_1057, 0))
										{
											unk_0xD0231395241DBA85(iLocal_1057, iLocal_1314, iLocal_1314, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0x724D816EA203A79E(iLocal_1057) && !unk_0x36CEFBE9B745A58D(iLocal_1057))
									{
										func_28(iLocal_1057, 6, "OJAvaGUARD2");
										func_27(&uLocal_1364, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1044 == 8)
								{
									if (unk_0x724D816EA203A79E(iLocal_1312) && unk_0xE59B7F5A03335350(iLocal_1312, 0))
									{
										unk_0xD0231395241DBA85(iLocal_1057, iLocal_1312, iLocal_1312, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1364, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0x57D65255D3D3B6A7(iLocal_1057, unk_0xBC25C936A095B5BA(), -1, 0);
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
	
	if (unk_0x5237AF95232D78C5(iLocal_1045, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iLocal_1045, 0);
		if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck") || unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck2"))
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
		if (unk_0x27C9F6C1391327CF(iVar0, iLocal_1312))
		{
			unk_0xA89D0FE4AB36D064(iVar0, iLocal_1312);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1180)
	{
		if ((unk_0x724D816EA203A79E(iParam0) && !unk_0x36CEFBE9B745A58D(iParam0)) && func_23(iParam0, 1) < 50f)
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
				if (!unk_0x3362CDE8460ED38B(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14666 = 0;
	func_4();
}

void func_4()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15800 == 4)
	{
		return Global_15419;
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
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
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
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_19();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_12();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_11())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_9();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_8();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
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
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_9()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_10()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_13();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

int func_13()
{
	func_14();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_14()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_17(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_16(unk_0xBC25C936A095B5BA());
			if (func_15(iVar0) && (!func_18(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_15(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
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
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_22()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, int iParam1)
{
	return func_24(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_1050[iVar0]))
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
		if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iVar0]))
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
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), Param1, iParam4);
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
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 1;
	Global_16793 = 0;
	Global_16797 = 0;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
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
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
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
		if (!unk_0x36CEFBE9B745A58D(uLocal_1050[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x5237AF95232D78C5(uLocal_1050[iVar0], 0)))
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
		if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x5237AF95232D78C5(uLocal_1054[iVar0], 0)))
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
		if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x5237AF95232D78C5(uLocal_1054[iVar0], 0)))
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
		unk_0xEB233A3B7635D2AC();
		unk_0x3857DADBD6EC8A54("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			Global_92955.f_12[0] = 1;
		}
		else
		{
			Global_92955.f_12[0] = 0;
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
	
	if (Global_105220.f_9056 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
		Global_92991 = iParam0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_83852[iParam0 /*5*/];
	iVar1 = Global_71247.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_34(&(Global_105220.f_2354.f_539), iVar1);
	if (Global_87275 == Global_92992)
	{
		Global_105220.f_9056.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_83888[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_105220.f_9056.f_330[iVar1 /*6*/].f_2++;
	Global_87275 = Global_92992;
	if (iParam0 == -1)
	{
		if (Global_105220.f_9056)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_105220.f_18504[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_36(Global_105220.f_18504[iVar0], &Var2, &fVar5))
			{
				Global_105220.f_18504[iVar0] = 318;
				func_35(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90490[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_9 = 0f;
				Global_90490[iVar0 /*29*/].f_12 = 0f;
				Global_90490[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_10 = 0f;
				Global_90490[iVar0 /*29*/].f_13 = 0f;
				Global_90490[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_11 = 0f;
				Global_90490[iVar0 /*29*/].f_14 = 0f;
				Global_90490[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_26 = 0f;
				Global_90490[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_27 = 0f;
				Global_90490[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_28 = 0f;
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
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

void func_38()
{
	Global_92990 = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 25);
	}
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_41(char* sParam0)
{
	func_522(&(Global_105220.f_19934.f_1), 1024);
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_71210, sParam0, 16);
			StringCopy(&Global_71214, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_43(struct<3> Param0, float fParam3)
{
	if (func_44(Global_71218, 0f, 0f, 0f, 0))
	{
		Global_71218 = { Param0 };
		Global_71221 = fParam3;
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
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
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
			return (func_47(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) / 1000f);
}

bool func_48(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
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
	uParam0->f_1 = (func_47(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(uParam0, 1);
	unk_0x7CB6FD92BE491AD9(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_52(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
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
		if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
		{
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_1046, iLocal_1312, 0))
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
		if (unk_0x724D816EA203A79E(iLocal_1046))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
			{
				if (func_24(iLocal_1045, iLocal_1046, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
						{
							if (unk_0x41A5D6415E2CC10E(iLocal_1312) || !unk_0xD1DC4B08247A4317(iLocal_1312))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0x41A5D6415E2CC10E(iLocal_1046))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uLocal_1120))
				{
					if (func_24(iLocal_1045, iLocal_1046, 1) >= (fVar0 * 0.5f))
					{
						if (!unk_0x7410D6FA69CD6FF2(uLocal_1120))
						{
							unk_0x7A6BBF86FCBBCF7E(uLocal_1120, 1);
						}
					}
					else if (unk_0x7410D6FA69CD6FF2(uLocal_1120))
					{
						unk_0x7A6BBF86FCBBCF7E(uLocal_1120, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()
{
	if (unk_0x724D816EA203A79E(iLocal_1046))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
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
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_87(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_59(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_86(iVar0))
	{
		func_85();
	}
	if (func_84(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_79(uParam0, bParam7, bParam9, 0))
			{
				func_76(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam8)
						{
							if (!func_86(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
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
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam8)
					{
						if (!func_86(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
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
			if (!unk_0xEAEFBBEC1AEA464B(sParam5))
			{
				if (func_86(sParam5))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_87(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_87(uParam0, iVar0, 1);
				}
			}
			if (!func_79(uParam0, bParam7, bParam9, 0))
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
		func_87(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)
{
	if (func_84(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_105220.f_10020.f_100++;
			}
			return Global_105220.f_10020.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_105220.f_10020.f_101++;
			}
			return Global_105220.f_10020.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_105220.f_10020.f_102++;
			}
			return Global_105220.f_10020.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_86(sParam0)) || func_86("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
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
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_75(0))
	{
		return 0;
	}
	if (func_74())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_73() || func_72(Global_4456448.f_148478)) || func_71())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_70(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_69(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_66(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (iParam0 != func_68())
	{
		if (func_67(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_67(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, bool bParam2)
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

int func_68()
{
	return -1;
}

int func_69(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
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

var func_71()
{
	return Global_2447942.f_16;
}

bool func_72(int iParam0)
{
	return iParam0 == 51;
}

var func_73()
{
	return Global_2447942.f_15;
}

bool func_74()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

int func_75(int iParam0)
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

void func_76(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316801 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_87(uParam0, 0, 0);
	}
	if (func_44(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_77())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(0);
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
	unk_0x1DE00CFB4CAEB978(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_77()
{
	return func_78(unk_0xB5CEFD608600A09F());
}

int func_78(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_83(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
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
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_83(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_82(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_83(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_82(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_82(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_83(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_81(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_80(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_80(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_81(bParam1, bParam2, bParam3))
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
		func_85();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_80(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_82(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_83(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_85()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

bool func_86(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_86(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_86(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

void func_88(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x105601648511CC64();
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
	if (!unk_0x284F2ACE6839D3C0("SCRIPT\ASSASSINATION_MULTI", 0, -1))
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
					unk_0xC4BA30B532FE260F(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1360);
				}
			}
			else
			{
				unk_0xC4BA30B532FE260F(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1360);
			}
		}
		func_89(iLocal_1213, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_89(iLocal_1213, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_89(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_91(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_90(7, iVar0);
		Global_1364578.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_4388.f_172[iVar0] = iParam2;
		Global_1364578.f_4388.f_216[iVar0] = iParam3;
		Global_1364578.f_4388.f_183[iVar0] = iParam4;
		Global_1364578.f_4388.f_194[iVar0] = iParam5;
		Global_1364578.f_4388.f_249[iVar0] = iParam6;
		Global_1364578.f_4388.f_260[iVar0] = iParam7;
		Global_1364578.f_4388.f_205[iVar0] = iParam8;
		Global_1364578.f_4388.f_314[iVar0] = iParam9;
		Global_1364578.f_4388.f_325[iVar0] = iParam10;
		Global_1364578.f_4388.f_357[iVar0] = iParam11;
		Global_1364578.f_4388.f_238[iVar0] = iParam12;
		Global_1364578.f_4388.f_271[iVar0] = iParam13;
		Global_1364578.f_4388.f_368[iVar0] = iParam14;
		Global_1364578.f_4388.f_379[iVar0] = iParam15;
		Global_1364578.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_90(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_1364578.f_6119[iParam0]), iParam1);
}

bool func_91(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1364578.f_6119[iParam0], iParam1);
}

void func_92()
{
	int iVar0;
	
	switch (iLocal_1207)
	{
		case 0:
			if (!func_22())
			{
				if (!unk_0x1D403DFADBC2DE3C(uLocal_1050[0], 0))
				{
					unk_0x44C98C11ED6DD327(uLocal_1050[0]);
				}
				if (!unk_0x1D403DFADBC2DE3C(uLocal_1050[1], 0))
				{
					unk_0x44C98C11ED6DD327(uLocal_1050[1]);
				}
				iVar0 = func_96();
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
				else if (!bLocal_1164 && unk_0x36CEFBE9B745A58D(iLocal_1046))
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
			if (iLocal_1173 || !unk_0x36CEFBE9B745A58D(iLocal_1046))
			{
				if (!func_22() && !bLocal_1157)
				{
					if (!iLocal_1171)
					{
						iVar0 = func_96();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1364, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
					else if (!bLocal_1181 && unk_0x36CEFBE9B745A58D(iLocal_1046))
					{
						iVar0 = func_96();
						func_95(iVar0);
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
			if (func_94(iLocal_1045))
			{
				fLocal_1244 = 2.5f;
			}
			else
			{
				fLocal_1244 = 5f;
			}
			if (func_52(&uLocal_1339))
			{
				if ((func_46(&uLocal_1339) > fLocal_1244 && func_93()) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
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

int func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uLocal_1050[iVar0]) && !unk_0x1D403DFADBC2DE3C(uLocal_1050[iVar0], 0))
		{
			unk_0x2E9860A2B72187F5(uLocal_1050[iVar0], 85, 1);
			if (unk_0x1028B6250119A74B(uLocal_1050[iVar0], unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(uLocal_1054[iVar0]) && !unk_0x1D403DFADBC2DE3C(uLocal_1054[iVar0], 0))
		{
			unk_0x2E9860A2B72187F5(uLocal_1054[iVar0], 85, 1);
			if (unk_0x1028B6250119A74B(uLocal_1054[iVar0], unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(iLocal_1047[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_1047[iVar0], 0))
		{
			unk_0x2E9860A2B72187F5(iLocal_1047[iVar0], 85, 1);
			if (unk_0x1028B6250119A74B(iLocal_1047[iVar0], unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x0C265B3C448E6954(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !unk_0x0C265B3C448E6954(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_95(int iParam0)
{
	if (!bLocal_1181)
	{
		if (unk_0x724D816EA203A79E(iLocal_1046) && unk_0x36CEFBE9B745A58D(iLocal_1046))
		{
			if (!func_22())
			{
				if ((unk_0x724D816EA203A79E(iParam0) && !unk_0x36CEFBE9B745A58D(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1364, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1181 = true;
				}
			}
		}
	}
}

int func_96()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x724D816EA203A79E(uLocal_1050[iVar1]) && !unk_0x36CEFBE9B745A58D(uLocal_1050[iVar1]))
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
			if (unk_0x724D816EA203A79E(uLocal_1054[iVar1]) && !unk_0x36CEFBE9B745A58D(uLocal_1054[iVar1]))
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
			if (unk_0x724D816EA203A79E(iLocal_1047[iVar1]) && !unk_0x36CEFBE9B745A58D(iLocal_1047[iVar1]))
			{
				iVar0 = iLocal_1047[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_97()
{
	func_104();
	if (!iLocal_1158)
	{
		if (!iLocal_1134)
		{
			if (func_98(&iLocal_1044))
			{
				iLocal_1134 = 1;
			}
		}
	}
}

int func_98(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1134)
	{
		if (iLocal_1168 && !bLocal_1137)
		{
			if (func_103(&iLocal_1044))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x72C9157015C2151B(iLocal_1045, 4))
		{
			if (unk_0x32E373675659FDB0(iLocal_1045))
			{
				fVar1 = func_26(unk_0xBC25C936A095B5BA(), -1230.599f, -196.5408f, 38.1528f, 1);
				unk_0x9CDD10270A1ACF6F(iLocal_1045, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0x724D816EA203A79E(iLocal_1046))
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
		if ((func_102(iLocal_1312) || func_101(iLocal_1312)) || (unk_0x724D816EA203A79E(iLocal_1312) && unk_0xD9C1758D86688CEA(iLocal_1312, iLocal_1045, 1)))
		{
			return 1;
		}
		if (func_102(iLocal_1313) || (unk_0x724D816EA203A79E(iLocal_1313) && unk_0xD9C1758D86688CEA(iLocal_1313, iLocal_1045, 1)))
		{
			return 1;
		}
		if (unk_0x724D816EA203A79E(iLocal_1312) && !unk_0x1D403DFADBC2DE3C(iLocal_1312, 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_1045, iLocal_1312, 0))
			{
				unk_0xEC6E535291C98050(iLocal_1312, 1);
				unk_0x652D6190A627FFF0(iLocal_1312);
				return 1;
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_1312))
		{
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (unk_0x5237AF95232D78C5(iLocal_1045, 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(iLocal_1045, 0);
					if (unk_0xE921F8171F0733B3(iVar0, iLocal_1312) || (bLocal_1144 && unk_0x27C9F6C1391327CF(iVar0, iLocal_1312)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1031 == 12)
		{
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (func_24(iLocal_1045, iLocal_1312, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1033[0] == 2 || iLocal_1033[1] == 2) || iLocal_1033[2] == 2)
		{
			if (func_100())
			{
				return 1;
			}
		}
		if (iLocal_1031 < 11)
		{
			if (unk_0xC9FA5D38428AB6BE(-1, Local_1308, fLocal_1311))
			{
				return 1;
			}
		}
		else if (unk_0xC9FA5D38428AB6BE(-1, Local_1308, fLocal_1311))
		{
			if (func_99())
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

int func_99()
{
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()))
			{
				if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xA3E58143095D5828(iParam0) == 3 && unk_0x25480ACDBB6DB8F1(iLocal_1045) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(iParam0, -1, 0) != 0)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
						{
							if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar1))
							{
								if ((unk_0xD27AC0E9B78CFDD7(iVar1) && unk_0x233ED4CD1F1A42C1(iVar1) == iParam0) || (unk_0x386592AF38881675(iVar1) && unk_0x399F7937FFE4DEBF(iVar1) == unk_0x3187EF5798B5D209(iParam0, -1, 0)))
								{
									if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
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

int func_103(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
	{
		if (unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), iLocal_1312, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0xC7BAAE53803FB28C(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || unk_0xC7BAAE53803FB28C(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_104()
{
	int iVar0;
	
	func_145();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uLocal_1050[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_144(uLocal_1050[iVar0], &(Local_1060[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(uLocal_1054[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_144(uLocal_1054[iVar0], &(Local_1085[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(iLocal_1047[iVar0]))
		{
			if (iLocal_1134 && !bLocal_1167)
			{
				func_144(iLocal_1047[iVar0], &(Local_1102[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iVar0]))
			{
				if (iLocal_1041[iVar0] == 4)
				{
					unk_0x2E9860A2B72187F5(iLocal_1047[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1204 == 0)
	{
		func_142(0);
	}
	else if (iLocal_1204 == 1)
	{
		func_142(1);
	}
	else if (iLocal_1204 == 2)
	{
		if (iLocal_1031 >= 9)
		{
			func_131(0);
		}
	}
	else if (iLocal_1204 == 3)
	{
		if (iLocal_1031 >= 9)
		{
			func_131(1);
		}
	}
	else if (iLocal_1204 == 4)
	{
		if (iLocal_1031 >= 9)
		{
			func_131(2);
			func_130(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1204 == 5)
	{
		func_105(0);
		func_130(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1204 == 6)
	{
		func_105(1);
		func_130(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1204++;
	if (iLocal_1204 > 6)
	{
		iLocal_1204 = 0;
	}
	if (iLocal_1134)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
		{
			unk_0x2E9860A2B72187F5(iLocal_1046, 120, 1);
		}
	}
}

void func_105(int iParam0)
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
			if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
			{
				if (func_129())
				{
					if (!unk_0x3C9DB165D131D628(iLocal_1313))
					{
						if (unk_0x3187EF5798B5D209(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
						{
							unk_0xEB469C5B92ADC7B0(uLocal_1054[iParam0], iLocal_1313, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1037[iParam0] = 2;
				}
				else
				{
					func_128(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
			{
				if (!unk_0x3C9DB165D131D628(iLocal_1313))
				{
					Var1 = { unk_0x541C2AEF053615BC(iLocal_1313, 1) };
					uVar4 = unk_0x349C94FFF43E2979(iLocal_1313);
					iLocal_1147 = 0;
					iLocal_1037[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
			{
				if (!unk_0x1D403DFADBC2DE3C(uLocal_1054[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(uLocal_1054[iParam0], iLocal_1313, 0) && unk_0xE59B7F5A03335350(iLocal_1312, 0))
					{
						if (!iLocal_1134)
						{
							if (unk_0x3187EF5798B5D209(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
							{
								if (unk_0xF4FCC3C1048FF2AB(uLocal_1054[iParam0], -1273030092) != 1)
								{
									unk_0x7AB043D579636764(uLocal_1054[iParam0], iLocal_1313, iLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0x3187EF5798B5D209(iLocal_1313, -1, 0) == uLocal_1054[iParam0])
						{
							if (!iLocal_1148)
							{
								if (unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0xB8CBD998685C0685(iVar0, unk_0xBC25C936A095B5BA(), 0, 16);
									}
									else
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								else
								{
									unk_0x7AB043D579636764(uLocal_1054[iParam0], iLocal_1313, iLocal_1312, -1, 45f, 786981, 10f, -1, 10f);
									unk_0xCD99F12498AAD618(iVar0, unk_0xBC25C936A095B5BA());
									iLocal_1148 = 1;
								}
							}
						}
						else if (!bLocal_1164)
						{
							if (unk_0xF4FCC3C1048FF2AB(uLocal_1054[iParam0], 780511057) != 1)
							{
								if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									if (unk_0x8910237449BB6F79(iLocal_1313) < 5f)
									{
										iLocal_1037[iParam0] = 8;
									}
								}
								unk_0xB8CBD998685C0685(iVar0, unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(uLocal_1054[iParam0], 780511057) != 1)
						{
							unk_0xB8CBD998685C0685(iVar0, unk_0xBC25C936A095B5BA(), 0, 16);
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
			func_125(&(uLocal_1054[iParam0]));
			iLocal_1037[iParam0] = 5;
			break;
		
		case 5:
			if (!func_94(iLocal_1045))
			{
				if (func_46(&uLocal_1333) >= 27f || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iVar0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_1045, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_124(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_128(iParam0);
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
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x4BED3C9D6EF14C38(0, func_123(), unk_0x491B2241281A03B7(1000, 1500), 2048, 4);
				unk_0x4BED3C9D6EF14C38(0, func_123(), unk_0x491B2241281A03B7(2000, 2500), 2048, 4);
				unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), unk_0x491B2241281A03B7(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0x149D72D7A7FDA75F(0, unk_0xBC25C936A095B5BA(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x535008C596714F9E(uLocal_1324);
				if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iParam0]))
				{
					unk_0xA8E6405305C0D7DF(uLocal_1054[iParam0], uLocal_1324);
				}
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			else
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), unk_0x491B2241281A03B7(3000, 3500), 1, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), unk_0x491B2241281A03B7(3000, 3500), 0, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), unk_0x491B2241281A03B7(3000, 3500), 0, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), unk_0x491B2241281A03B7(3000, 3500), 0, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), -1, 0, 0);
				unk_0x535008C596714F9E(uLocal_1324);
				if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iParam0]))
				{
					unk_0xA8E6405305C0D7DF(uLocal_1054[iParam0], uLocal_1324);
				}
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			iLocal_1037[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iParam0]))
			{
				if (unk_0xF4FCC3C1048FF2AB(uLocal_1054[iParam0], 1435919172) != 1)
				{
					unk_0xD0231395241DBA85(uLocal_1054[iParam0], iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1044 != 4 && iLocal_1044 != 5)
			{
				func_122(iVar0);
			}
			else
			{
				func_121(iVar0);
			}
			iLocal_1037[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1044 != 4)
				{
					func_120(iLocal_1313, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_95(iVar0);
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
		else if (func_113(iVar0, iLocal_1313, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_112(iLocal_1313))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_111(unk_0x541C2AEF053615BC(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_1134 = 1;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_109(iVar0, 10f))
			{
				if (iLocal_1037[iParam0] != 4 && iLocal_1037[iParam0] != 5)
				{
					if (!bLocal_1135)
					{
						func_107(&Local_360, 4);
						iLocal_1037[iParam0] = 4;
					}
					else if (!func_94(iLocal_1045))
					{
						iLocal_1134 = 1;
						if (!unk_0x724D816EA203A79E(iLocal_1046))
						{
							iLocal_1044 = 5;
						}
						iLocal_1037[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(iVar0))
	{
		if (unk_0x62F3A07C43FFB568(iVar0, iLocal_1313, 0))
		{
			if (((!unk_0xE59B7F5A03335350(iLocal_1313, 0) || !unk_0xE59B7F5A03335350(iLocal_1312, 0)) || iLocal_1146) || !bLocal_1137)
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
	func_106(iVar0, uLocal_1125[iParam0]);
}

void func_106(int iParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0x2DA8CA50A72528FB(uParam1))
			{
				unk_0x07B8ECB35A4ED3AC(&uParam1);
			}
		}
	}
}

void func_107(var uParam0, int iParam1)
{
	func_108(uParam0, iParam1);
}

void func_108(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_109(int iParam0, float fParam1)
{
	if (!iLocal_1134)
	{
		if (!func_94(iLocal_1045))
		{
			if (unk_0x724D816EA203A79E(iParam0))
			{
				if (!unk_0x36CEFBE9B745A58D(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (unk_0xC5B8A5F778E321DD(iParam0, iLocal_1045, 120f))
						{
							if (unk_0x4833C1F1F1364989(iParam0, iLocal_1045, 17))
							{
								if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0x724D816EA203A79E(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (unk_0xE642C1AC73CE364E(iLocal_1045, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0xC5B8A5F778E321DD(iParam0, iLocal_1045, 120f))
					{
						if (unk_0x4833C1F1F1364989(iParam0, iLocal_1045, 17))
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

int func_110()
{
	if (iLocal_1158 || bLocal_1159)
	{
		return 1;
	}
	return 0;
}

void func_111(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x724D816EA203A79E(iLocal_1046))
	{
		return;
	}
	if (!unk_0x724D816EA203A79E(iLocal_1312))
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_1312, 0) || iLocal_1188)
	{
		bLocal_1157 = true;
	}
	if (unk_0x724D816EA203A79E(iLocal_1046))
	{
		if (((unk_0x3D3F3014B0F74446(iLocal_1046, joaat("weapon_sniperrifle"), 0) || unk_0x3D3F3014B0F74446(iLocal_1046, joaat("weapon_heavysniper"), 0)) || unk_0x3D3F3014B0F74446(iLocal_1046, joaat("weapon_remotesniper"), 0)) || unk_0x3D3F3014B0F74446(iLocal_1046, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1156 = 1;
			iLocal_1032 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!unk_0x3C9DB165D131D628(iLocal_1312))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1134)
	{
		if ((iLocal_1156 || bLocal_1157) || iVar0)
		{
			fVar1 = func_26(unk_0xBC25C936A095B5BA(), Param0, 1);
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

int func_112(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0))
					{
						fVar1 = unk_0x8910237449BB6F79(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0xE921F8171F0733B3(iVar0, iParam0) || unk_0xD9C1758D86688CEA(iVar0, iParam0, 1))
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

int func_113(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_119(*uParam2, 1))
		{
			if (func_118(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_119(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_119(*uParam2, 4))
		{
			if (func_117(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_119(*uParam2, 8))
		{
			if (func_116(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_119(*uParam2, 128);
		if (bParam4)
		{
			if (func_114(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_119(*uParam2, 16))
		{
			if (func_114(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x724D816EA203A79E(iParam0))
	{
		if (iParam7 && unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_356)
		{
			iLocal_357 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_356 = true;
		}
		iLocal_358 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_359 = (iLocal_357 - iLocal_358);
		iVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_356)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0xA4813477CC5DD00F(iParam0))
			{
				if (unk_0x33213E99DDEE4631(iParam0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD1071273B19F81DF(iParam0))
		{
			return 1;
		}
	}
	if (func_115(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(iParam1, 1)) < 2.5f)
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x72C9157015C2151B(iParam0, 4))
	{
		if (unk_0x32E373675659FDB0(iParam0) && !unk_0x75F706B6889D7D86(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	if (unk_0x04880508C862E589(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB7CB92A84A7518CD(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72C9157015C2151B(iParam0, 2))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0x399F7937FFE4DEBF(iParam1), 0))
			{
				iVar3 = unk_0x9FE9D386222EEE47(unk_0x399F7937FFE4DEBF(iParam1), 0);
			}
			if (unk_0x042228744678C7D4(iParam0) || func_102(iVar3))
			{
				if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x876474582C5DECDE((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, var uParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x105601648511CC64();
						}
						else if ((unk_0x105601648511CC64() - uParam1->f_1) > uParam1->f_3)
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

bool func_119(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_120(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!unk_0x62F3A07C43FFB568(iParam1, iParam0, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iParam1, -1794415470) != 1)
						{
							unk_0xD179FA0466FA4FE3(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iParam1, -1273030092) != 1)
					{
						unk_0x488EB206498BC561(iParam1, iParam0, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0xCD99F12498AAD618(iParam1, unk_0xBC25C936A095B5BA());
					}
				}
				else if (!unk_0x62F3A07C43FFB568(iParam1, iParam0, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iParam1, 780511057) != 1)
					{
						unk_0xB8CBD998685C0685(iParam1, unk_0xBC25C936A095B5BA(), 0, 16);
					}
				}
			}
			else if (unk_0x62F3A07C43FFB568(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (unk_0xF4FCC3C1048FF2AB(iParam1, -1273030092) != 1)
					{
						unk_0x1A06AE15BF21D407(iParam1, iParam0, unk_0xBC25C936A095B5BA(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0xCD99F12498AAD618(iParam1, unk_0xBC25C936A095B5BA());
					}
				}
				else if (unk_0xF4FCC3C1048FF2AB(iParam1, 780511057) != 1)
				{
					unk_0xB8CBD998685C0685(iParam1, unk_0xBC25C936A095B5BA(), 0, 16);
				}
			}
		}
		else if (unk_0xF4FCC3C1048FF2AB(iParam1, 780511057) != 1)
		{
			unk_0xB8CBD998685C0685(iParam1, unk_0xBC25C936A095B5BA(), 0, 16);
		}
	}
}

void func_121(int iParam0)
{
	var uVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_1045) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			unk_0x91629AC1E1F78419(iParam0, 3, 1);
		}
		unk_0x02DAF06EA4F08219(&uVar0);
		unk_0xC5A6DFE2B8987B17(&uVar0);
		unk_0xA3981DED4FC2E56E(0, 0, 256);
		unk_0x57D65255D3D3B6A7(0, iLocal_1045, -1, 0);
		unk_0x535008C596714F9E(uVar0);
		unk_0xA8E6405305C0D7DF(iParam0, uVar0);
		unk_0x02DAF06EA4F08219(&uVar0);
	}
}

void func_122(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_1045, 0))
	{
		if (!unk_0x5237AF95232D78C5(iLocal_1045, 0))
		{
			if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
			{
				unk_0x91629AC1E1F78419(iParam0, 3, 1);
			}
			unk_0x02DAF06EA4F08219(&uLocal_1324);
			unk_0xC5A6DFE2B8987B17(&uLocal_1324);
			unk_0xA3981DED4FC2E56E(0, 0, 256);
			unk_0xB8CBD998685C0685(0, iLocal_1045, 0, 16);
			unk_0x535008C596714F9E(uLocal_1324);
			if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
			{
				unk_0xA8E6405305C0D7DF(iParam0, uLocal_1324);
			}
			unk_0x02DAF06EA4F08219(&uLocal_1324);
		}
		else if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0xF4FCC3C1048FF2AB(iParam0, 780511057) != 1)
			{
				unk_0xA4E856A8CD53B8DF(iParam0);
				unk_0xB8CBD998685C0685(iParam0, iLocal_1045, 0, 16);
			}
		}
	}
}

Vector3 func_123()
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (unk_0x491B2241281A03B7(0, 65535) % 3);
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

void func_124(int iParam0, struct<3> Param1)
{
	if (!iLocal_1134)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0xE642C1AC73CE364E(iLocal_1045, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iLocal_1045, 160f))
				{
					if (unk_0x4833C1F1F1364989(iParam0, iLocal_1045, 17))
					{
						unk_0xD0231395241DBA85(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1044 = 5;
						iLocal_1134 = 1;
					}
				}
			}
			else if (!unk_0x5237AF95232D78C5(iParam0, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iParam0, -1207174364) != 1)
				{
					unk_0xD0231395241DBA85(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_125(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1057 == 0)
	{
		iLocal_1057 = func_30(70f, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(*iParam0))
	{
		if (!unk_0x5237AF95232D78C5(*iParam0, 0))
		{
			if (!iLocal_1136)
			{
				if (*iParam0 == iLocal_1057)
				{
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0x9565F9267674873A(0, iLocal_1045, 20000, 2f, 1f, 1073741824, 0);
					unk_0x85DB484A637CEAB9(0, iLocal_1045, -1);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(*iParam0, uVar0);
					unk_0x02DAF06EA4F08219(&uVar0);
					iLocal_1136 = 1;
					Var1 = { unk_0x541C2AEF053615BC(*iParam0, 1) };
				}
				else if (unk_0xF4FCC3C1048FF2AB(*iParam0, 1227113341) != 1)
				{
					unk_0x85DB484A637CEAB9(*iParam0, iLocal_1045, -1);
				}
			}
			else if (*iParam0 != iLocal_1057)
			{
				if (unk_0xF4FCC3C1048FF2AB(*iParam0, 1227113341) != 1)
				{
					unk_0x85DB484A637CEAB9(*iParam0, iLocal_1045, -1);
				}
			}
		}
		unk_0xB105531EDD3DE51B(*iParam0, 1);
		func_126();
	}
}

void func_126()
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
				if (func_127())
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

int func_127()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		if (!unk_0x1D403DFADBC2DE3C(iLocal_1312, 0))
		{
			Var3 = { unk_0x541C2AEF053615BC(iLocal_1312, 1) };
		}
		fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_128(int iParam0)
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
	if (!unk_0x1D403DFADBC2DE3C(uLocal_1054[iParam0], 0))
	{
		if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
		{
			if (!unk_0x62F3A07C43FFB568(uLocal_1054[iParam0], iLocal_1313, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(uLocal_1054[iParam0], -1794415470) != 1)
				{
					unk_0xD179FA0466FA4FE3(uLocal_1054[iParam0], iLocal_1313, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_129()
{
	if (!unk_0x36CEFBE9B745A58D(uLocal_1054[0]) && !unk_0x36CEFBE9B745A58D(uLocal_1054[1]))
	{
		if (unk_0x62F3A07C43FFB568(uLocal_1054[0], iLocal_1313, 0) && unk_0x62F3A07C43FFB568(uLocal_1054[1], iLocal_1313, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_130(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!iLocal_1134)
	{
		if (unk_0xC7BAAE53803FB28C(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1134 = 1;
		}
	}
}

void func_131(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1050[iParam0];
	switch (iLocal_1033[iParam0])
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iVar0))
			{
				unk_0x02DAF06EA4F08219(&uLocal_1324);
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA2DBAE5B6ADB4DC9(0, Local_1268[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0xC0FDCDB0DF739C50(0, fLocal_1221[iParam0], 0);
				unk_0x535008C596714F9E(uLocal_1324);
				unk_0xA8E6405305C0D7DF(iVar0, uLocal_1324);
				unk_0x02DAF06EA4F08219(&uLocal_1324);
				iLocal_1033[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (!bLocal_1169)
					{
						if (unk_0xF4FCC3C1048FF2AB(iVar0, -2017877118) != 1 && unk_0xF4FCC3C1048FF2AB(iVar0, 242628503) != 1)
						{
							if (unk_0x4DBCE270B354E123(iVar0, Local_1268[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_139(iVar0, &(uLocal_1196[iParam0]), 1);
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
				func_125(&iVar0);
				iLocal_1033[iParam0] = 2;
			}
			else if (func_46(&uLocal_1333) > uLocal_1227[iParam0] || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				func_125(&iVar0);
				iLocal_1033[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_94(iLocal_1045))
			{
				iLocal_1162 = 1;
				if (bLocal_1161)
				{
					iLocal_1033[iParam0] = 4;
					break;
				}
				else if (func_46(&uLocal_1333) >= 27f && iLocal_1138)
				{
					func_124(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&uLocal_1333) >= 15f)
				{
					func_137(iVar0);
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
			if (!unk_0x36CEFBE9B745A58D(iVar0))
			{
				unk_0xB105531EDD3DE51B(iVar0, 1);
				unk_0x2E9860A2B72187F5(iVar0, 60, 1);
			}
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0x56F2E1B5599188FA(uLocal_1050[0], uLocal_1050[1], -1, 0, 2);
						if (!unk_0x62F3A07C43FFB568(iVar0, iLocal_1312, 0))
						{
							unk_0xD179FA0466FA4FE3(iVar0, iLocal_1312, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0x56F2E1B5599188FA(uLocal_1050[1], uLocal_1050[0], -1, 0, 2);
						if (!unk_0x62F3A07C43FFB568(iVar0, iLocal_1312, 0))
						{
							unk_0xD179FA0466FA4FE3(iVar0, iLocal_1312, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iVar0, iLocal_1313, 0))
							{
								unk_0xD179FA0466FA4FE3(iVar0, iLocal_1313, 30000, 1, 1f, 1, 0);
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
			if (!unk_0x36CEFBE9B745A58D(iVar0))
			{
				unk_0x2E9860A2B72187F5(iVar0, 60, 1);
			}
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0x56F2E1B5599188FA(uLocal_1050[iParam0], uLocal_1050[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0x56F2E1B5599188FA(uLocal_1050[iParam0], uLocal_1050[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (!func_135())
				{
					if (iLocal_1134)
					{
						if (!unk_0x36CEFBE9B745A58D(iVar0))
						{
							if (unk_0xF4FCC3C1048FF2AB(iVar0, 780511057) != 1)
							{
								if (func_134(uLocal_1050[0]))
								{
									unk_0x44C98C11ED6DD327(uLocal_1050[0]);
								}
								if (func_134(uLocal_1050[1]))
								{
									unk_0x44C98C11ED6DD327(uLocal_1050[1]);
								}
								unk_0xB8CBD998685C0685(iVar0, iLocal_1045, 0, 16);
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
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
				{
					if (unk_0x3187EF5798B5D209(iLocal_1312, -1, 0) == iVar0)
					{
						if (!unk_0x36CEFBE9B745A58D(iVar0))
						{
							unk_0x2D655AA68FA1736B(iLocal_1312, 1, 1, 0);
							if (func_133())
							{
								unk_0xEB469C5B92ADC7B0(iVar0, iLocal_1312, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0xEB469C5B92ADC7B0(iVar0, iLocal_1312, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1033[iParam0] = 7;
				}
			}
			else
			{
				if (func_134(uLocal_1050[0]))
				{
					unk_0x44C98C11ED6DD327(uLocal_1050[0]);
				}
				if (func_134(uLocal_1050[1]))
				{
					unk_0x44C98C11ED6DD327(uLocal_1050[1]);
				}
				iLocal_1033[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1134)
			{
				if ((unk_0xE59B7F5A03335350(iLocal_1312, 0) && unk_0x3187EF5798B5D209(iLocal_1312, -1, 0) == iVar0) && unk_0x3187EF5798B5D209(iLocal_1312, 1, 0) == iLocal_1046)
				{
					if (!unk_0x36CEFBE9B745A58D(iVar0))
					{
						if (bLocal_1149 || (iLocal_1163 && !unk_0x3C9DB165D131D628(iLocal_1312)))
						{
							unk_0xA4E856A8CD53B8DF(iVar0);
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iVar0, -1273030092) != 1)
									{
										unk_0x488EB206498BC561(iVar0, iLocal_1312, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0xF4FCC3C1048FF2AB(iVar0, -1273030092) != 1)
								{
									unk_0x1A06AE15BF21D407(iVar0, iLocal_1312, unk_0xBC25C936A095B5BA(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0x36CEFBE9B745A58D(iVar0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar0, 780511057) != 1)
					{
						unk_0xB8CBD998685C0685(iVar0, iLocal_1045, 0, 16);
					}
				}
			}
			else if (bLocal_1149 || (iLocal_1163 && !unk_0x3C9DB165D131D628(iLocal_1312)))
			{
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
				{
					if (unk_0x3187EF5798B5D209(iLocal_1312, -1, 0) == iVar0)
					{
						if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(iVar0, -1273030092) != 1)
							{
								unk_0x827661D9AAD4A354(iVar0, iLocal_1312, Local_1290, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1159)
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x4BED3C9D6EF14C38(0, func_123(), unk_0x491B2241281A03B7(1000, 1500), 2048, 4);
				unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), unk_0x491B2241281A03B7(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x149D72D7A7FDA75F(0, unk_0xBC25C936A095B5BA(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x535008C596714F9E(uLocal_1324);
				if (!unk_0x1D403DFADBC2DE3C(uLocal_1050[iParam0], 0))
				{
					unk_0xA8E6405305C0D7DF(uLocal_1050[iParam0], uLocal_1324);
				}
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			else
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0xF90A8AD825CA2E0C(0, func_123(), unk_0x491B2241281A03B7(3000, 3500), 1, 0);
				unk_0x149D72D7A7FDA75F(0, unk_0xBC25C936A095B5BA(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x535008C596714F9E(uLocal_1324);
				if (!unk_0x1D403DFADBC2DE3C(uLocal_1050[iParam0], 0))
				{
					unk_0xA8E6405305C0D7DF(uLocal_1050[iParam0], uLocal_1324);
				}
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			iLocal_1033[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0x36CEFBE9B745A58D(uLocal_1050[iParam0]))
			{
				if (unk_0xF4FCC3C1048FF2AB(uLocal_1050[iParam0], 1435919172) != 1)
				{
					unk_0xD0231395241DBA85(uLocal_1050[iParam0], iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1044 == 4 || iLocal_1044 == 5)
			{
				func_121(iVar0);
			}
			else if (iLocal_1044 != 8)
			{
				func_122(iVar0);
				iLocal_1033[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_120(iLocal_1312, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_95(iVar0);
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
		else if (func_132(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_111(unk_0x541C2AEF053615BC(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_1134 = 1;
			}
		}
		else if (!bLocal_1137)
		{
			if (func_109(iVar0, fVar1))
			{
				if ((iLocal_1033[iParam0] != 3 && iLocal_1033[iParam0] != 2) && !bLocal_1161)
				{
					if (!bLocal_1135)
					{
						func_107(&Local_360, 4);
						iLocal_1033[iParam0] = 3;
					}
					else if (!func_94(iLocal_1045))
					{
						iLocal_1134 = 1;
						if (!unk_0x724D816EA203A79E(iLocal_1046))
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
	func_106(iVar0, uLocal_1121[iParam0]);
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1134)
	{
		if (unk_0x724D816EA203A79E(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				if (unk_0x5237AF95232D78C5(iParam0, 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_113(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (unk_0x2CDE18D6C89522AD(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1212 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &iVar1);
	uLocal_1212 = uLocal_1212;
	uLocal_1212 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x724D816EA203A79E(iVar1[iVar0]) && !unk_0x1D403DFADBC2DE3C(iVar1[iVar0], 0))
		{
			if (unk_0x0C265B3C448E6954(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
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

int func_134(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135()
{
	if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
		{
			if (!iLocal_1134)
			{
				if (unk_0x62F3A07C43FFB568(iLocal_1046, iLocal_1312, 0) && func_136())
				{
					return 1;
				}
			}
			else if (unk_0x62F3A07C43FFB568(iLocal_1046, iLocal_1312, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iVar0]))
		{
			if (!unk_0x5237AF95232D78C5(iLocal_1047[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_137(int iParam0)
{
	switch (iLocal_1208)
	{
		case 0:
			if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(iParam0, 1630799643) != 1)
				{
					unk_0x57D65255D3D3B6A7(iParam0, unk_0xBC25C936A095B5BA(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1364, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1138 = 1;
				iLocal_1208 = 1;
			}
			break;
		
		case 1:
			func_138(iParam0);
			break;
	}
}

void func_138(int iParam0)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (unk_0xF4FCC3C1048FF2AB(iParam0, -1207174364) != 1 && unk_0xF4FCC3C1048FF2AB(iParam0, 1630799643) != 1)
			{
				unk_0x57D65255D3D3B6A7(iParam0, iLocal_1045, -1, 0);
			}
		}
		else if (unk_0xF4FCC3C1048FF2AB(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1057)
			{
				unk_0xD0231395241DBA85(iParam0, iLocal_1045, iLocal_1045, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0xF4FCC3C1048FF2AB(iParam0, 1630799643) != 1)
			{
				unk_0x57D65255D3D3B6A7(iParam0, iLocal_1045, -1, 0);
			}
		}
	}
}

void func_139(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (bParam2)
		{
			func_140(iParam0, uParam1);
		}
	}
}

void func_140(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_141(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0xE896C0AD02364F2A(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0xE896C0AD02364F2A(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0xE896C0AD02364F2A(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0xE896C0AD02364F2A(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0x55AEFCD285ECC0F2(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x491B2241281A03B7(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x491B2241281A03B7(iParam0, iParam1);
	}
	return iVar0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!unk_0x724D816EA203A79E(iLocal_1047[iParam0]))
	{
		return;
	}
	switch (iLocal_1041[iParam0])
	{
		case 0:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
			{
				if (!unk_0x5237AF95232D78C5(iLocal_1046, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x5B8F74954F713B9E(iLocal_1047[iParam0], iLocal_1046, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0xE59B7F5A03335350(iLocal_1313, 0))
							{
								unk_0xC5A6DFE2B8987B17(&uVar2);
								unk_0xA2DBAE5B6ADB4DC9(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0xD179FA0466FA4FE3(0, iLocal_1313, 30000, 2, 1f, 1, 0);
								unk_0x535008C596714F9E(uVar2);
								unk_0xA8E6405305C0D7DF(iLocal_1047[iParam0], uVar2);
								unk_0x02DAF06EA4F08219(&uVar2);
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
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1047[iParam0], 0))
			{
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_1047[iParam0], 0))
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_1047[iParam0], iVar0, 0))
						{
							if (unk_0x5237AF95232D78C5(iLocal_1046, 0))
							{
								if (unk_0xF4FCC3C1048FF2AB(iLocal_1047[iParam0], -1794415470) != 1)
								{
									unk_0xD179FA0466FA4FE3(iLocal_1047[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
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
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_1047[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(iLocal_1047[iParam0], iVar0, 0) && unk_0xE59B7F5A03335350(iLocal_1312, 0))
					{
						if (iLocal_1134)
						{
							if (!bLocal_1164)
							{
								if (unk_0xF4FCC3C1048FF2AB(iLocal_1047[iParam0], 780511057) != 1)
								{
									if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (unk_0x8910237449BB6F79(iVar0) < 5f)
										{
											iLocal_1041[iParam0] = 5;
										}
									}
									unk_0xB8CBD998685C0685(iLocal_1047[iParam0], unk_0xBC25C936A095B5BA(), 0, 16);
								}
							}
							else if (unk_0xF4FCC3C1048FF2AB(iLocal_1047[iParam0], 780511057) != 1)
							{
								unk_0xB8CBD998685C0685(iLocal_1047[iParam0], unk_0xBC25C936A095B5BA(), 0, 16);
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
			if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iParam0]))
			{
				if (unk_0xD8BE87198802B1F7(iLocal_1047[iParam0]))
				{
					unk_0x3D669AF9A68FF281(iLocal_1047[iParam0]);
				}
			}
			if (bLocal_1159)
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_1324);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x4BED3C9D6EF14C38(0, func_123(), unk_0x491B2241281A03B7(2000, 2500), 2048, 4);
				unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), unk_0x491B2241281A03B7(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x149D72D7A7FDA75F(0, unk_0xBC25C936A095B5BA(), func_123(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x535008C596714F9E(uLocal_1324);
				unk_0xA8E6405305C0D7DF(iLocal_1047[iParam0], uLocal_1324);
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iParam0]))
			{
				unk_0xE95574194EEDAEF7(iLocal_1047[iParam0], Local_1305, 15f, 0, 0);
				unk_0x54480313BB3E8DD0(iLocal_1047[iParam0], 1);
				unk_0x91629AC1E1F78419(iLocal_1047[iParam0], 0, 1);
				unk_0xDBA0F5674ACCE43C(iLocal_1047[iParam0], 2f);
				if (!iLocal_1131 && !unk_0x5237AF95232D78C5(iLocal_1047[iParam0], 0))
				{
					unk_0xC5A6DFE2B8987B17(&uLocal_1324);
					if (unk_0x36CEFBE9B745A58D(iLocal_1046))
					{
						unk_0xE896C0AD02364F2A(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0xF90A8AD825CA2E0C(0, func_123(), 3000, 0, 1);
						unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					}
					else
					{
						unk_0xE896C0AD02364F2A(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x5B8F74954F713B9E(0, iLocal_1046, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0x535008C596714F9E(uLocal_1324);
					iLocal_1131 = 1;
				}
				else
				{
					if (unk_0x724D816EA203A79E(iLocal_1312) && unk_0xE59B7F5A03335350(iLocal_1312, 0))
					{
						Var4 = { unk_0x3EA3A28A85F8C32F(iLocal_1312, unk_0xB5B60A04E1654409(iLocal_1312, "wheel_lr")) };
						Var7 = { unk_0x541C2AEF053615BC(iLocal_1312, 1) };
						Var7 = { Var4 - Var7 };
						unk_0xDE6B8773FB16B4DE(iLocal_1047[iParam0], iLocal_1312, Var7, 1.5f, 0);
					}
					unk_0xC5A6DFE2B8987B17(&uLocal_1324);
					unk_0xA3981DED4FC2E56E(0, 0, 0);
					if (unk_0x36CEFBE9B745A58D(iLocal_1046) && !func_44(func_143(), Var4, 0))
					{
						unk_0x5A996221BB5E3258(0, Var4, func_123(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x13EC634EB553E1CE(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0xF90A8AD825CA2E0C(0, func_123(), 1500, 1, 0);
						if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
						{
							unk_0x5B8F74954F713B9E(0, iLocal_1046, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0x535008C596714F9E(uLocal_1324);
				}
				if (!unk_0x1D403DFADBC2DE3C(iLocal_1047[iParam0], 0))
				{
					unk_0xA8E6405305C0D7DF(iLocal_1047[iParam0], uLocal_1324);
				}
				unk_0x02DAF06EA4F08219(&uLocal_1324);
			}
			iLocal_1041[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1047[iParam0], 0))
			{
				if (unk_0x96044E39418AAF17(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x4A3B2CF8BADDD74E(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0x1D3127CFE7D9B190(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0x1D3127CFE7D9B190(iLocal_1047[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
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
			if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iParam0]))
				{
					if (unk_0x5237AF95232D78C5(iLocal_1046, 0))
					{
						unk_0xB8CBD998685C0685(iLocal_1047[iParam0], iLocal_1045, 0, 16);
					}
					else
					{
						unk_0xD0231395241DBA85(iLocal_1047[iParam0], iLocal_1046, unk_0xBC25C936A095B5BA(), 3f, 1, 0.005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1041[iParam0] = 6;
			}
			else if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x8910237449BB6F79(iVar0) < 5f)
				{
					func_122(iLocal_1047[iParam0]);
					iLocal_1041[iParam0] = 6;
				}
				else if (unk_0xF4FCC3C1048FF2AB(iLocal_1047[iParam0], 780511057) != 1)
				{
					unk_0xB8CBD998685C0685(iLocal_1047[iParam0], iLocal_1045, 0, 16);
				}
			}
			else
			{
				func_122(iLocal_1047[iParam0]);
				iLocal_1041[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1047[iParam0]);
			func_95(iLocal_1047[iParam0]);
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
		else if (func_132(iLocal_1047[iParam0]))
		{
			iLocal_1134 = 1;
		}
	}
	else if (iLocal_1041[iParam0] < 5)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iParam0]))
		{
			if (unk_0xD8BE87198802B1F7(iLocal_1047[iParam0]))
			{
				unk_0x3D669AF9A68FF281(iLocal_1047[iParam0]);
			}
			unk_0x908DFCDC6E363906(iLocal_1047[iParam0]);
			unk_0x54480313BB3E8DD0(iLocal_1047[iParam0], 2);
			unk_0x91629AC1E1F78419(iLocal_1047[iParam0], 13, 1);
		}
		iLocal_1041[iParam0] = 5;
	}
}

Vector3 func_143()
{
	struct<3> Var0;
	
	return Var0;
}

int func_144(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, iParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(sParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(sParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(sParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(sParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(sParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iLocal_1046))
	{
		Local_1305 = { unk_0x541C2AEF053615BC(iLocal_1046, 0) };
	}
	switch (iLocal_1040)
	{
		case 0:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
			{
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0) && !unk_0x1D403DFADBC2DE3C(uLocal_1050[0], 0))
				{
					if (!unk_0x62F3A07C43FFB568(iLocal_1046, iLocal_1312, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_1046, -1794415470) != 1)
						{
							if (!iLocal_1134 && !iLocal_1158)
							{
								unk_0xD179FA0466FA4FE3(iLocal_1046, iLocal_1312, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0xD179FA0466FA4FE3(iLocal_1046, iLocal_1312, 30000, 1, 2f, 1, 0);
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
									if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
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
						if (func_148(iLocal_1046))
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
				if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
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
				if (func_147())
				{
					if (func_24(iLocal_1046, unk_0xBC25C936A095B5BA(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_146())
							{
								iLocal_1179 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_1046, iLocal_1312, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_1046, -828834893) != 1)
					{
						unk_0xA3981DED4FC2E56E(iLocal_1046, 0, 256);
					}
				}
				else if (!bLocal_1164)
				{
					unk_0xDBA0F5674ACCE43C(iLocal_1046, 2f);
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0xE896C0AD02364F2A(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x5558ED6D4A2DEC93(0, iLocal_1045, 200f, -1, 0, 0);
					unk_0x535008C596714F9E(uVar0);
					if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
					{
						unk_0xA8E6405305C0D7DF(iLocal_1046, uVar0);
					}
					unk_0x02DAF06EA4F08219(&uVar0);
					bLocal_1164 = true;
				}
				else if (unk_0xF4FCC3C1048FF2AB(iLocal_1046, 1435919172) != 1)
				{
					unk_0x5558ED6D4A2DEC93(iLocal_1046, iLocal_1045, 200f, -1, 0, 0);
				}
				if (!iLocal_1179)
				{
					if (!func_22() && !unk_0x4B8E3E5901E59EB8())
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
		else if (func_132(iLocal_1046) || iLocal_1188)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_111(unk_0x541C2AEF053615BC(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_110())
			{
				iLocal_1134 = 1;
			}
		}
	}
}

int func_146()
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

int func_147()
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
	{
		iVar0 = unk_0x3187EF5798B5D209(iLocal_1312, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0x36CEFBE9B745A58D(iVar0)))
		{
			iVar0 = unk_0x3187EF5798B5D209(iLocal_1312, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0x36CEFBE9B745A58D(iVar0)))
			{
				iVar0 = unk_0x3187EF5798B5D209(iLocal_1312, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0x36CEFBE9B745A58D(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	var uVar0;
	
	if ((iLocal_1134 || iLocal_1158) || bLocal_1159)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (func_22())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!unk_0x5237AF95232D78C5(iParam0, 0))
			{
				if (!bLocal_1164)
				{
					unk_0x02DAF06EA4F08219(&uVar0);
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0xE896C0AD02364F2A(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x5558ED6D4A2DEC93(0, iLocal_1045, 200f, -1, 0, 0);
					unk_0x535008C596714F9E(uVar0);
					if (!unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
					{
						unk_0xA8E6405305C0D7DF(iLocal_1046, uVar0);
					}
					unk_0x02DAF06EA4F08219(&uVar0);
					bLocal_1164 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_149()
{
	if (!iLocal_1165)
	{
		if (iLocal_1031 > 15)
		{
			unk_0x3857DADBD6EC8A54("ASS1_ALERT");
			iLocal_1165 = 1;
		}
	}
	if (!iLocal_1166)
	{
		if (iLocal_1134 && !func_22())
		{
			func_442();
			iLocal_1166 = 1;
			if (!iLocal_1165)
			{
				unk_0x3857DADBD6EC8A54("ASS1_ALERT");
				iLocal_1165 = 1;
			}
		}
	}
	func_441();
	switch (iLocal_1031)
	{
		case 3:
			if (func_514())
			{
				iLocal_1031 = 4;
				break;
			}
			func_440();
			func_438();
			break;
		
		case 4:
			if (func_514())
			{
				if (func_513())
				{
					iLocal_1153 = 1;
				}
				bLocal_1142 = true;
			}
			func_437();
			func_436();
			func_435();
			func_434(1);
			func_433();
			func_522(&Local_360, 2);
			iLocal_1031 = 5;
			break;
		
		case 5:
			if (func_432())
			{
				iLocal_1031 = 6;
			}
			break;
		
		case 6:
			func_431();
			func_430();
			if (bLocal_1142)
			{
				if (Global_105220.f_19934.f_5 != 0f)
				{
					func_51(&uLocal_1336, Global_105220.f_19934.f_5);
				}
				iLocal_1209 = func_508();
				if (Global_87277)
				{
					if (iLocal_1209 <= 2)
					{
						iLocal_1209++;
					}
				}
				if (iLocal_1209 == 0)
				{
					func_429();
				}
				else if (iLocal_1209 == 1)
				{
					func_428();
				}
				else if (iLocal_1209 == 2)
				{
					func_424();
				}
			}
			else
			{
				if (!func_52(&uLocal_1336))
				{
					func_49(&uLocal_1336);
					Global_105220.f_19934.f_5 = 0f;
				}
				iLocal_1031 = 7;
			}
			break;
		
		case 7:
			func_418();
			func_403();
			break;
		
		case 8:
			func_369();
			break;
		
		case 9:
			func_418();
			func_368();
			func_277();
			break;
		
		case 10:
			func_368();
			func_273();
			break;
		
		case 11:
			func_259();
			func_258();
			break;
		
		case 12:
			func_257();
			func_258();
			break;
		
		case 13:
			func_253();
			func_258();
			break;
		
		case 15:
			func_251();
			break;
		
		case 16:
			func_248();
			break;
		
		case 17:
			func_242();
			break;
		
		case 18:
			func_150();
			break;
	}
}

void func_150()
{
	unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	func_151();
}

void func_151()
{
	func_241();
	switch (iLocal_1215)
	{
		case 0:
			if (!iLocal_377)
			{
				if (iLocal_1032 == 1)
				{
					bLocal_375 = true;
					func_240();
				}
				Global_105220.f_19934.f_5 = func_46(&uLocal_1336);
				fLocal_372 = Global_105220.f_19934.f_5;
				func_233();
				iLocal_377 = 1;
				iLocal_1215 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1187)
			{
				unk_0xC432586F5C2E5AA5("FRANKLIN_BIG_01");
				iLocal_1187 = 1;
			}
			if (func_229(&uLocal_388, 1, 0) && unk_0xC5B1B5690C2BE6B8())
			{
				func_228(&uLocal_1541, 0, 0, 0, 1);
				func_227(&uLocal_1541, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_227(&uLocal_1541, "ES_XPAND", 2, 216, 1, 1, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1215 = 2;
			}
			break;
		
		case 2:
			if (func_202(&uLocal_388, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1185 = true;
			}
			if (!bLocal_1185)
			{
				func_194(&uLocal_1541, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0x694514BD37EC4E94(2, 215) || unk_0xF7DDAAF0EFDAFA22(2, 200))
			{
				if (!bLocal_1185)
				{
					bLocal_1185 = true;
					func_193(&uLocal_388);
				}
			}
			if (bLocal_1185)
			{
				if (func_202(&uLocal_388, 0, 1065353216, 0, 0, 0))
				{
					func_191(&uLocal_388);
					Global_105220.f_19934++;
					func_190();
					func_156(Local_57);
					func_154(0, 0);
					func_152();
					func_515();
				}
			}
			break;
	}
}

void func_152()
{
	func_153();
}

int func_153()
{
	if (func_40(0))
	{
		return 0;
	}
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

void func_154(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55969)
	{
		Global_55969 = iParam1;
	}
	if (bParam0)
	{
		if ((func_40(0) && Global_71224.f_1 == 1) && func_155(Global_71224))
		{
		}
		else
		{
			Global_55967 = 1;
		}
	}
	if (Global_105220.f_9056 || func_40(0))
	{
		iVar0 = func_39();
		iVar1 = Global_83852[iVar0 /*5*/];
		uVar2 = Global_71247.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_105220.f_9056)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_71226, 1);
		Global_71242 = uVar2;
		Global_71243 = unk_0x105601648511CC64();
	}
}

int func_155(int iParam0)
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

void func_156(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;
	
	fVar0 = (1f + func_189());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_119(Global_105220.f_19934.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_157(func_13(), 96, unk_0xF2DB717A73826179(fVar0), 0, 0);
}

void func_157(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_158(Global_105220.f_28021[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_188();
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
					func_187(99, 1);
					func_186(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_186(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_186(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_171(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_167(5))
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
							func_186(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_186(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_186(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_167(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_186(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_186(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_186(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_186(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_186(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_186(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_186(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_186(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_186(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_186(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_186(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_186(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_186(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_186(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_186(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_167(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_186(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_186(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_186(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_186(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_186(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_186(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_166(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_187(95, iParam3);
					break;
				
				case 1:
					func_187(97, iParam3);
					break;
				
				case 2:
					func_187(96, iParam3);
					break;
			}
			func_187(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_161(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_161(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_186(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_186(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_186(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
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
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_160(iParam0);
	if (Global_35905 == 15)
	{
		func_159(0);
	}
	return 1;
}

void func_159(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_164(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_163() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_163() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_162(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_162(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_163()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_165();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_165()
{
	return Global_1312736;
}

void func_166(int iParam0)
{
	func_187(93, iParam0);
	func_187(29, iParam0);
	func_187(30, iParam0);
}

bool func_167(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_168(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_163() /*12171*/].f_7688.f_10, iParam0);
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_165();
	}
	iVar1 = func_170(iParam0, iParam1);
	uVar2 = func_169(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_169(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_165();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_171(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_185(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_172(27, 1);
	return 1;
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_173(iParam0, iParam1);
}

int func_173(int iParam0, int iParam1)
{
	if (func_18(14) && !func_184(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_183(&Global_4267702))
	{
		if (func_181(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_174(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_184(iParam1))
	{
		return 0;
	}
	if (func_181(uParam0, iParam1))
	{
		return 0;
	}
	if (func_180(uParam0) < 0f)
	{
		func_179(uParam0, 0);
	}
	func_177(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_175(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_175(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_18(14) && !func_184(iParam1))
	{
		return 0;
	}
	if (func_181(uParam0, iParam1))
	{
		return 0;
	}
	if (func_180(uParam0) < 0f)
	{
		func_179(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_176(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_176(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_177(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_178(uParam0, iVar0);
		iVar0++;
	}
	func_179(uParam0, (Global_4267701 - 0.5f));
}

void func_178(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_179(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_180(var uParam0)
{
	return uParam0->f_80;
}

bool func_181(var uParam0, int iParam1)
{
	return func_182(uParam0, iParam1) != -1;
}

int func_182(var uParam0, int iParam1)
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

bool func_183(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_184(int iParam0)
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

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_188()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

float func_189()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_119(Global_105220.f_19934.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_105220.f_19934.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_105220.f_19934.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_119(Global_105220.f_19934.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_105220.f_19934.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_105220.f_19934.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_119(Global_105220.f_19934.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_119(Global_105220.f_19934.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_119(Global_105220.f_19934.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_190()
{
	func_522(&(Global_105220.f_19934.f_1), 2048);
}

void func_191(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xC4248B71D9B26306(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71246)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_71247)
			{
				if (unk_0x17FAADF9916EF741() && !func_40(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_192(0);
}

void func_192(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

void func_193(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_194(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	
	if (((unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC()) || unk_0x17FAADF9916EF741()) || unk_0xF6023EB13558345B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_201(uParam0))
	{
		return;
	}
	unk_0x37CCF3DE21C7FD23();
	unk_0x996AC9A66B2A5A3F(iParam2);
	if (!func_200(uParam0->f_1, 256) || (func_200(uParam0->f_1, 8192) && unk_0x8A0D8839261BAEEF(2)))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD44E04EBBDC4CE88(fParam1);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fParam5);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(func_200(uParam0->f_1, 4096));
			unk_0xF9FBC2F3F73D94C9();
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
					bVar4 = unk_0x50465D2C022B9E04(2);
					break;
				
				case 2:
					bVar4 = !unk_0x50465D2C022B9E04(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x1E1FB49121565EB6(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xE57EAD1FEA2A6FAF(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0xC7CF72D26EA6A227(iVar0, iVar1, bVar2);
						}
						if (!unk_0xF1734B55490E9045(uVar3))
						{
							func_199(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xF1734B55490E9045(uParam0->f_2[iVar6 /*15*/]))
					{
						func_198(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (func_200(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5E5DBD0A6623969E(true);
								unk_0x1E1FB49121565EB6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5E5DBD0A6623969E(false);
								unk_0x1E1FB49121565EB6(-1);
							}
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar6++;
		}
		fVar8 = func_197(bParam4, func_197(func_200(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(fVar8);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_196(&(uParam0->f_1), 256);
		func_195(&(uParam0->f_1), 128);
	}
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 0, 0);
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_196(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_197(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_198(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_199(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

bool func_200(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_201(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_196(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_202(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xC87A57742F7D3C06() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xC87A57742F7D3C06();
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x610A1308608A0F91(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x19B821A70FE4D11F(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0xC4248B71D9B26306(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
			{
				unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			}
		}
	}
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(19);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 28, 1);
	unk_0xBBC4195AD74D153D(0, 29, 1);
	unk_0xBBC4195AD74D153D(0, 171, 1);
	func_224(0);
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0xD8169614C33872A0() || (unk_0x17FAADF9916EF741() && !unk_0x26641E1BFD792DBC()))
		{
			unk_0x08009E53F6E7E15C();
		}
	}
	Global_36455 = 1;
	if (!uParam0->f_563)
	{
		switch (func_16(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			case 1:
				unk_0x9216004FAC08D1DC("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9216004FAC08D1DC("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9216004FAC08D1DC("SuccessMichael", 1000, 0);
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
		func_192(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_205(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_204(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_204(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_OUT");
			unk_0xF9FBC2F3F73D94C9();
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
		uParam0->f_548 = func_204(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x8A0D8839261BAEEF(2))
			{
				if (unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_203(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xA7F138B5B1AB2CF6(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_203(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_559 = func_204((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_204((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_204((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_204((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x694514BD37EC4E94(2, 215))
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
				func_192(0);
			}
			return !bVar0;
		}
	}
	func_192(0);
	return 1;
}

void func_203(var uParam0, bool bParam1)
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_199(unk_0xE57EAD1FEA2A6FAF(2, 215, true));
	func_198("ES_HELP");
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(215);
	}
	unk_0xF9FBC2F3F73D94C9();
	if (bParam1)
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(1);
		func_199(unk_0xE57EAD1FEA2A6FAF(2, 216, true));
		func_198("ES_XPAND");
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x5E5DBD0A6623969E(true);
			unk_0x1E1FB49121565EB6(216);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

float func_204(float fParam0, float fParam1, float fParam2)
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

void func_205(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_222() * 0.25f);
	if (unk_0xA7F138B5B1AB2CF6(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_198(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_221(&(uParam0->f_13));
				}
				else
				{
					func_198(&(uParam0->f_13));
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					unk_0x1E1FB49121565EB6(150);
				}
				else
				{
					unk_0x1E1FB49121565EB6(100);
				}
				unk_0x5E5DBD0A6623969E(true);
				if (uParam0->f_556 == 4)
				{
					unk_0x1E1FB49121565EB6((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x1E1FB49121565EB6(uParam0->f_56);
				}
				unk_0x5E5DBD0A6623969E(iParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0x1E1FB49121565EB6(2);
				}
				else
				{
					unk_0x1E1FB49121565EB6(69);
				}
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_UP");
				unk_0xD44E04EBBDC4CE88(0.15f);
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_3 = 1;
			}
		}
		func_220();
		unk_0x4B6031094354FED6(uParam0->f_1, 255, 255, 255, 255, 0);
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
		if (unk_0x3771EE4CB542D71E(0) < 1.4f)
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
	unk_0xD55638CE45B2B948(2, 215);
	unk_0xD55638CE45B2B948(2, 216);
	unk_0xD55638CE45B2B948(2, 200);
	unk_0xBBC4195AD74D153D(2, 200, 1);
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
						func_89((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
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
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x37CCF3DE21C7FD23();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0x4B6031094354FED6(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				unk_0xBBC4195AD74D153D(2, 188, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 188))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 187, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 187))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 202, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 202))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				if (unk_0x694514BD37EC4E94(2, 215) || unk_0xF7DDAAF0EFDAFA22(2, 200))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xE45648BDBF3441F5(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0xCC4FE6A016BA0765(uVar13, uVar14, uVar15, iVar0);
	unk_0x666751E43D377EAA(fVar9, fVar10);
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, 0.4f);
	fVar1 = (fVar1 - func_223(6f));
	fVar1 = (fVar1 + (func_223(30f) - func_223((2f * 2f))));
	fVar11 = (fVar2 - func_223((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_204((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
		func_220();
		unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 - (func_223((2f - 0.5f)) - 0.001388889f)), fVar6, func_218(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
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
			fVar12 = func_204((fVar11 / (0.8f * func_223(25f))), 0f, 1f);
			func_215(uParam0, iVar17, (fVar1 + func_223(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
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
					fVar12 = func_204((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
					func_220();
					unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_223((2f * 0.5f))), fVar6, func_218(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
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
			fVar12 = func_204((fVar11 / (0.6f * func_223(25f))), 0f, 1f);
			func_220();
			unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_223((2f * 0.5f))), fVar6, func_218(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_223((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_222())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_204((fVar11 / (0.8f * func_223(25f))), 0f, 1f);
			unk_0xCC4FE6A016BA0765(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_208(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x83D607D7994DEF3A() == 0)
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
				unk_0x666751E43D377EAA(fVar20, fVar21);
				unk_0x567A3300A78B3D65(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x567A3300A78B3D65(0);
			}
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			func_207(&(uParam0->f_550), fVar20, (fVar1 + func_223((2f * 2f))), 0, 0, 0);
			unk_0x666751E43D377EAA(fVar20, fVar21);
			unk_0x567A3300A78B3D65(2);
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			unk_0x8F62A12BC2768BE8(0);
			func_220();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x666751E43D377EAA(fVar20, fVar22);
			unk_0xCC4FE6A016BA0765(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x8B371195127AACF2("PERCENTAGE");
					unk_0xAA5C5BF0489E5553(uParam0->f_554);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x8B371195127AACF2("FO_TWO_NUM");
					unk_0xAA5C5BF0489E5553(uParam0->f_554);
					unk_0xAA5C5BF0489E5553(uParam0->f_555);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x8B371195127AACF2("MTPHPER_XPNO");
					unk_0xAA5C5BF0489E5553(uParam0->f_554);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_223((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x8B371195127AACF2("ESDOLLA");
					unk_0xBCDE00BFDE9A5BD1(uParam0->f_554, 1);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_223((2f * 2f))), 0);
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
						unk_0xE45648BDBF3441F5(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0xE45648BDBF3441F5(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0xE45648BDBF3441F5(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_206(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_223(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x51DA985AC0B70E2E(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_223(30f) - 2f));
		}
	}
}

float func_206(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_207(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x8F62A12BC2768BE8(iParam3);
	unk_0xC8793973D4960AC4(iParam5);
	func_220();
	if (bParam4)
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(sParam0);
	}
	else
	{
		unk_0x8B371195127AACF2(sParam0);
	}
	unk_0x3A8B9C7B1C825123(fParam1, fParam2, 0);
}

int func_208(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_214(iParam0), 64);
	StringCopy(&cVar16, func_211(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar32, &iVar33);
			fVar35 = unk_0x3771EE4CB542D71E(0);
			if (func_210())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_210())
			{
				fVar34 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar32, &iVar33);
		}
		Var37 = { unk_0x9893E000F1F078E7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_209(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_209(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17344)
			{
				*fParam4 = (*fParam4 * (Global_17344 / *fParam3));
				*fParam3 = Global_17344;
			}
		}
		return 1;
	}
	return 0;
}

float func_209(int iParam0)
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

int func_210()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_211(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_213(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var19, &uVar3))
			{
				return func_212(&uVar3);
			}
		}
		else
		{
			return func_212(&(Global_17345.f_6719[iParam0 /*16*/]));
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

var func_212(var uParam0)
{
	return uParam0;
}

struct<13> func_213(int iParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_214(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xF1734B55490E9045(&(Global_17345.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_17345.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_213(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var16, &uVar0);
			return func_212(&uVar0);
		}
		else
		{
			return func_212(&(Global_17345.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_215(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xE45648BDBF3441F5(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xCC4FE6A016BA0765(uVar0, uVar1, uVar2, iParam5);
	unk_0x666751E43D377EAA(fParam3, fParam4);
	unk_0x567A3300A78B3D65(1);
	unk_0xB8F3C51875F7BEA3(1f, func_217(14f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_220();
	if (uParam0->f_531[iParam1])
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x8B371195127AACF2(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0xAA5C5BF0489E5553(uParam0->f_489[iParam1]);
		}
	}
	unk_0x3A8B9C7B1C825123(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_208(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_211(7, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_208(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_211(5, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_208(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_211(6, 0), (fParam4 - 0.006f), ((fParam2 + func_223(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x567A3300A78B3D65(1);
	}
	else
	{
		unk_0x567A3300A78B3D65(2);
	}
	unk_0xB8F3C51875F7BEA3(1f, func_217(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xCC4FE6A016BA0765(uVar0, uVar1, uVar2, iParam5);
	func_216(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_216(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
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
			unk_0xB8F3C51875F7BEA3(1f, func_217(18f));
			unk_0xC8793973D4960AC4(4);
			if (iParam0 < 0)
			{
				unk_0xE746379C2AF24EF6("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			else
			{
				unk_0xE746379C2AF24EF6("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_217(14f));
			break;
	}
	unk_0x449F0674640D94C0(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x8B371195127AACF2("PERCENTAGE");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 1:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 2:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_TWO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_217(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x8B371195127AACF2("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
			}
			else
			{
				unk_0x8B371195127AACF2("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x8B371195127AACF2(sParam4);
			break;
		
		case 7:
			unk_0x8B371195127AACF2("STRING");
			unk_0x607C19B90D297FE2(sParam4);
			break;
		
		case 8:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 14);
			break;
		
		case 9:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 6);
			break;
		
		case 10:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 18:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 12:
			unk_0x8B371195127AACF2("AHD_DIST");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 13:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 16:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x3A8B9C7B1C825123((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_217(14f));
		}
		else
		{
			unk_0x3A8B9C7B1C825123(fParam2, fParam3, 0);
		}
	}
}

float func_217(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_218(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_219(char* sParam0)
{
	unk_0xE746379C2AF24EF6(sParam0);
	return (unk_0x2207C0EA517B975D(1) / 2f);
}

void func_220()
{
	unk_0x996AC9A66B2A5A3F(1);
	if (unk_0x422F9EDE839E6ABB() || unk_0x17FAADF9916EF741())
	{
		unk_0x996AC9A66B2A5A3F(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_221(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

float func_222()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8ACB0C3FACC09467())
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
	if (!Global_14493.f_1 == 1)
	{
		if (func_75(0))
		{
			func_225(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_225(int iParam0)
{
	if (Global_14659)
	{
		func_226(0, 0);
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
	if (!func_10())
	{
		Global_14493.f_1 = 3;
	}
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_75(0))
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

int func_227(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_228(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_196(&(uParam0->f_1), 32);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		func_196(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD45B3B464AA7C2E(*uParam0, 1);
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (bParam3)
		{
			func_196(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_196(&(uParam0->f_1), 8192);
	}
}

int func_229(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_232(uParam0);
	func_231(uParam0);
	if (unk_0x3362CDE8460ED38B(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3362CDE8460ED38B(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x8AA3F48A15444B98("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8AA3F48A15444B98("CommonMenu", 0);
		unk_0x8AA3F48A15444B98("MPLeaderboard", 0);
		unk_0x8AA3F48A15444B98("MPHud", 0);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4B4A22319BB70CD6("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_230(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_203(uParam0, 1);
		}
		else
		{
			func_203(uParam0, 0);
		}
	}
	Global_71239 = 1;
	return 1;
}

void func_230(var uParam0)
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(2);
	func_199(unk_0xE57EAD1FEA2A6FAF(2, 188, true));
	func_198("ES_HELP_TU");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(1);
	func_199(unk_0xE57EAD1FEA2A6FAF(2, 187, true));
	func_198("ES_HELP_TD");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_199(unk_0xE57EAD1FEA2A6FAF(2, 202, true));
	func_198("ES_HELP_AB");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_231(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, func_217(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xE746379C2AF24EF6("STRING");
			unk_0x607C19B90D297FE2(&(uParam0->f_13));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
		else
		{
			unk_0xE746379C2AF24EF6(&(uParam0->f_13));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
	}
	else
	{
		unk_0xE746379C2AF24EF6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0xAA5C5BF0489E5553(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xC9C304D0AABE1335(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x607C19B90D297FE2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_232(var uParam0)
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

void func_233()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		func_239(&uLocal_388, &Local_965, &Global_55982, 0);
		fLocal_372 = (fLocal_372 * 1000f);
		if (Global_87277)
		{
			func_238(&uLocal_388, 6, &(Local_965.f_12), "MTPHPERSKI", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			func_238(&uLocal_388, 6, &(Local_965.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_238(&uLocal_388, 6, &(Local_965.f_30), "MTPHPERSKI", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 3, 0);
			func_237();
		}
		else
		{
			if (bLocal_376)
			{
				func_238(&uLocal_388, 6, &(Local_965.f_12), "MTPHPERRET", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_238(&uLocal_388, 9, &(Local_965.f_12), "", unk_0xF34EE736CF047844(fLocal_372), 0, 0, 0);
			}
			if (!unk_0xF1734B55490E9045(&(Local_965.f_18)))
			{
				if (bLocal_375)
				{
					func_238(&uLocal_388, 6, &(Local_965.f_24), "", 0, 0, 2, 0);
					func_238(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 2, 0);
				}
				else
				{
					func_238(&uLocal_388, 6, &(Local_965.f_24), "", 0, 0, 1, 0);
					func_238(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_238(&uLocal_388, 3, &(Local_965.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_87277)
		{
			iVar1 = 0;
			while (iVar1 < Global_68062)
			{
				if (Global_68063[iVar1 /*9*/] >= 0 && !Global_56192[Global_68063[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_68063[iVar1 /*9*/].f_3 == 2)
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
			func_236(&uLocal_388, 1, &(Local_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		else if (bLocal_375)
		{
			if (bLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_236(&uLocal_388, 1, &(Local_965.f_42), iLocal_383, 0, 0, 2, 0);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_236(&uLocal_388, 1, &(Local_965.f_36), iLocal_383, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_375 && !bLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_236(&uLocal_388, 1, &(Local_965.f_42), iLocal_383, 0, 0, 2, 0);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_236(&uLocal_388, 1, &(Local_965.f_48), iLocal_383, 0, 0, 1, 0);
		}
		func_234();
		iLocal_377 = 1;
	}
}

void func_234()
{
	if (unk_0xB731B8C5BCE89836(joaat("assassin_valet")) == 1)
	{
		func_235(38, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_235(39, 1, 1);
		}
		else
		{
			func_235(39, 0, 1);
		}
		if (bLocal_375)
		{
			func_235(40, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_235(40, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_235(41, iLocal_383, 1);
		func_235(42, iLocal_384, 1);
	}
	else if (unk_0xB731B8C5BCE89836(joaat("assassin_multi")) == 1)
	{
		func_235(52, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_235(53, 1, 1);
		}
		else
		{
			func_235(53, 0, 1);
		}
		if (bLocal_375)
		{
			func_235(56, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_235(56, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_235(54, iLocal_383, 1);
		func_235(55, iLocal_384, 1);
	}
	else if (unk_0xB731B8C5BCE89836(joaat("assassin_hooker")) == 1)
	{
		func_235(66, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_235(67, 1, 1);
		}
		else
		{
			func_235(67, 0, 1);
		}
		if (bLocal_375)
		{
			func_235(68, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_235(68, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_235(69, iLocal_383, 1);
		func_235(70, iLocal_384, 1);
	}
	else if (unk_0xB731B8C5BCE89836(joaat("assassin_bus")) == 1)
	{
		func_235(81, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_235(82, 1, 1);
		}
		else
		{
			func_235(82, 0, 1);
		}
		if (bLocal_375)
		{
			func_235(83, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_235(83, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_235(84, iLocal_383, 1);
		func_235(85, iLocal_384, 1);
	}
	else if (unk_0xB731B8C5BCE89836(joaat("assassin_construction")) == 1)
	{
		func_235(97, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_235(98, 1, 1);
		}
		else
		{
			func_235(98, 0, 1);
		}
		if (bLocal_375)
		{
			func_235(99, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_235(99, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_235(100, iLocal_383, 1);
		func_235(101, iLocal_384, 1);
	}
}

void func_235(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68062)
	{
		if (Global_68063[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68063[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68063[iVar0 /*9*/].f_1 = (Global_68063[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68063[iVar0 /*9*/] != -1)
	{
		if (Global_56192[Global_68063[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68063[iVar0 /*9*/].f_1 > 1)
			{
				Global_68063[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68063[iVar0 /*9*/].f_1 < 0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_237()
{
	Global_87276 = 0;
	Global_87277 = 0;
}

void func_238(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_239(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_240()
{
	func_522(&(Global_105220.f_19934.f_1), 4194304);
}

void func_241()
{
	int iVar0;
	
	if (!bLocal_1175)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0x724D816EA203A79E(iVar0) && !unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (unk_0x8ADE344330B6F916(iVar0))
					{
						if (unk_0x6FED2D1AA2EBF334("ASS1_LOST"))
						{
							bLocal_1175 = true;
						}
					}
				}
			}
		}
	}
}

void func_242()
{
	float fVar0;
	
	if (!iLocal_1172)
	{
		if (!unk_0x4B8E3E5901E59EB8())
		{
			if (!func_22())
			{
				func_247("ASS_VA_GO", 7500, -1);
				iLocal_1172 = 1;
			}
		}
	}
	func_246(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			iLocal_1193++;
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				fVar0 = func_26(unk_0xBC25C936A095B5BA(), Local_1299, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_1167 = true;
					func_244();
					iLocal_1193++;
				}
				else
				{
					unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
				}
			}
			break;
		
		case 2:
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_241();
					if (func_243())
					{
						iLocal_1031 = 18;
					}
				}
			}
			else if (!iLocal_1183)
			{
				if (!func_22())
				{
					if (!unk_0x4B8E3E5901E59EB8())
					{
						func_247("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1193++;
						iLocal_1183 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				iLocal_1193 = 2;
			}
			break;
	}
}

int func_243()
{
	if (bLocal_1175)
	{
		unk_0x3857DADBD6EC8A54("ASS1_LOST");
		iLocal_1176 = 1;
	}
	func_244();
	return 1;
}

void func_244()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(iLocal_1047[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_1047[iVar0]))
			{
				func_245(&(Local_1102[iVar0 /*8*/]));
				unk_0xA4E856A8CD53B8DF(iLocal_1047[iVar0]);
				unk_0x02537C8C1BEEB477(&(iLocal_1047[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_1046))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1046))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_1046);
			unk_0x02537C8C1BEEB477(&iLocal_1046);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uLocal_1050[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uLocal_1050[iVar0]))
			{
				func_245(&(Local_1060[iVar0 /*8*/]));
				unk_0xA4E856A8CD53B8DF(uLocal_1050[iVar0]);
				unk_0x02537C8C1BEEB477(&(uLocal_1050[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x724D816EA203A79E(uLocal_1054[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uLocal_1054[iVar0]))
			{
				func_245(&(Local_1085[iVar0 /*8*/]));
				unk_0xA4E856A8CD53B8DF(uLocal_1054[iVar0]);
				unk_0x02537C8C1BEEB477(&(uLocal_1054[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x2CA123B0622F495C(iLocal_1325);
}

void func_245(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		unk_0x07B8ECB35A4ED3AC(uParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(uParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(uParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_246(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_247(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_248()
{
	func_246(&iLocal_1184, &uLocal_1364, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1193)
	{
		case 0:
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				if (!iLocal_1183)
				{
					if (!func_22())
					{
						if (!unk_0x4B8E3E5901E59EB8())
						{
							func_247("ASS_VA_LOSECOPS", 7500, 1);
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
						if (!unk_0x4B8E3E5901E59EB8())
						{
							func_247("ASS_VA_GO", 7500, -1);
							iLocal_1193++;
							iLocal_1172 = 1;
						}
					}
				}
			}
			else if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) && func_30(125f, 1) == 0)
			{
				func_241();
				func_244();
				func_250(1);
				func_249();
				iLocal_1193++;
			}
			break;
		
		case 2:
			func_241();
			iLocal_1031 = 18;
			break;
	}
}

void func_249()
{
	if (unk_0x724D816EA203A79E(iLocal_1312))
	{
		if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
		{
			unk_0xD421BC740C5340C3(iLocal_1312, 1);
		}
		unk_0x1E7A09C1710FB071(&iLocal_1312);
	}
	if (unk_0x724D816EA203A79E(iLocal_1313))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_1313, 0))
		{
			if ((unk_0xD1DC4B08247A4317(iLocal_1313) && !unk_0x41A5D6415E2CC10E(iLocal_1313)) && !unk_0x17FAADF9916EF741())
			{
				unk_0x1E7A09C1710FB071(&iLocal_1313);
			}
			else
			{
				if (unk_0x724D816EA203A79E(uLocal_1054[0]) && !unk_0x1D403DFADBC2DE3C(uLocal_1054[0], 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_1313, 0))
					{
						if (unk_0x62F3A07C43FFB568(uLocal_1054[0], iLocal_1313, 0))
						{
							unk_0x49D46EE47C9CCB66(uLocal_1054[0]);
						}
					}
				}
				if (unk_0x724D816EA203A79E(uLocal_1054[1]) && !unk_0x1D403DFADBC2DE3C(uLocal_1054[1], 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_1313, 0))
					{
						if (unk_0x62F3A07C43FFB568(uLocal_1054[1], iLocal_1313, 0))
						{
							unk_0x49D46EE47C9CCB66(uLocal_1054[1]);
						}
					}
				}
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_1313, 0))
					{
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
					}
				}
				unk_0x1E7A09C1710FB071(&iLocal_1313);
			}
		}
	}
	if (unk_0x724D816EA203A79E(uLocal_1316[0]))
	{
		unk_0x1E7A09C1710FB071(&(uLocal_1316[0]));
	}
	if (unk_0x724D816EA203A79E(uLocal_1316[1]))
	{
		unk_0x1E7A09C1710FB071(&(uLocal_1316[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_1319) && !unk_0x1D403DFADBC2DE3C(iLocal_1319, 0))
	{
		if (unk_0x5CAE759AE8219D20(iLocal_1319) && unk_0xB248FAA35ED47DB9(iLocal_1319, 1))
		{
			unk_0x1E7A09C1710FB071(&iLocal_1319);
		}
	}
}

void func_250(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_1120))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_1120);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_1121[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_1121[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_1125[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_1125[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
}

void func_251()
{
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_1293, Local_1296, fLocal_1243, 1, 0, 0))
	{
		bLocal_1152 = true;
	}
	else
	{
		bLocal_1152 = false;
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_1120))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_1120);
	}
	unk_0xDF53A66AEE1401AA(0.5f);
	if (bLocal_1152)
	{
		func_252();
		iLocal_1031 = 17;
	}
	else
	{
		func_252();
		iLocal_1031 = 16;
	}
	func_87(&uLocal_1529, 0, 0);
}

void func_252()
{
	iLocal_1193 = 0;
}

void func_253()
{
	if (!bLocal_1149)
	{
		if (unk_0x724D816EA203A79E(iLocal_1312))
		{
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				unk_0xD421BC740C5340C3(iLocal_1312, 3);
				if (func_255(iLocal_1312, 5f))
				{
					bLocal_1149 = true;
				}
			}
		}
	}
	if (!iLocal_1146)
	{
		if (func_254(iLocal_1312, 10000))
		{
			iLocal_1146 = 1;
		}
	}
}

int func_254(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (((unk_0xBCDD4514E5CAE591(iParam0, 0, iParam1) || unk_0xBCDD4514E5CAE591(iParam0, 2, iParam1)) || unk_0xBCDD4514E5CAE591(iParam0, 3, iParam1)) || unk_0xBCDD4514E5CAE591(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0, float fParam1)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (func_256(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_256(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

void func_257()
{
	switch (iLocal_1193)
	{
		case 0:
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				if (func_135())
				{
					if (!unk_0x36CEFBE9B745A58D(uLocal_1050[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
						{
							if (unk_0x62F3A07C43FFB568(uLocal_1050[0], iLocal_1312, 0))
							{
								bLocal_1145 = true;
								func_252();
								iLocal_1031 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_258()
{
	if (unk_0x724D816EA203A79E(iLocal_1046))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_1046))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
			{
				bLocal_1150 = true;
				if (unk_0x2DA8CA50A72528FB(uLocal_1120))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_1120);
				}
				func_111(Local_1305, 1097859072, 1116471296);
			}
			unk_0x1D1C393C7689E5A6(3f, 1073741824, 3);
			func_252();
			iLocal_1031 = 15;
		}
	}
}

void func_259()
{
	func_250(0);
	func_266();
	func_264();
	func_261();
	func_260();
	func_247("ASS_VA_KILL", 7500, -1);
	unk_0xC1B1E9A034A63A62(0);
	bLocal_1161 = true;
	func_252();
	iLocal_1031 = 12;
}

void func_260()
{
	unk_0x2CA123B0622F495C(iLocal_1327);
	unk_0x2CA123B0622F495C(iLocal_1328);
}

void func_261()
{
	func_263(&(Local_1691.f_4));
	func_262(&(Local_1691[0]));
	func_262(&(Local_1691[1]));
	func_262(&(Local_1691.f_8[0]));
	func_262(&(Local_1691.f_8[1]));
	func_262(&(Local_1691.f_5[0]));
	func_262(&(Local_1691.f_5[1]));
	func_262(&(Local_1691.f_3));
}

void func_262(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0x41A5D6415E2CC10E(*uParam0))
		{
			unk_0xF845620A03C7425B(uParam0);
		}
		else
		{
			unk_0x02537C8C1BEEB477(uParam0);
		}
	}
}

void func_263(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0x41A5D6415E2CC10E(*uParam0))
		{
			unk_0x1E7A09C1710FB071(uParam0);
		}
	}
}

void func_264()
{
	struct<3> Var0[2];
	struct<3> Var7;
	float fVar10;
	int iVar11;
	
	if (unk_0x724D816EA203A79E(iLocal_1046) && !unk_0x1D403DFADBC2DE3C(iLocal_1046, 0))
	{
		Var7 = { unk_0x541C2AEF053615BC(iLocal_1046, 1) };
		fVar10 = unk_0x349C94FFF43E2979(iLocal_1046);
	}
	Var0[0 /*3*/] = { unk_0x89D97EB4FAE4A574(Var7, fVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0x89D97EB4FAE4A574(Var7, fVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1047[iVar11] = unk_0x01B3635C3E8EDD81(26, iLocal_1327, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, 1);
		}
		else
		{
			iLocal_1047[iVar11] = unk_0x01B3635C3E8EDD81(26, iLocal_1328, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1239[iLocal_1202], 1, 1);
		}
		unk_0xB71D41C0310C93DE(iLocal_1047[iVar11], 1, 1);
		unk_0xDC3C88A35B53F90B(iLocal_1047[iVar11]);
		unk_0x91629AC1E1F78419(iLocal_1047[iVar11], 3, 0);
		unk_0x91629AC1E1F78419(iLocal_1047[iVar11], 23, 1);
		unk_0x91629AC1E1F78419(iLocal_1047[iVar11], 30, 0);
		unk_0x91629AC1E1F78419(iLocal_1047[iVar11], 13, 1);
		unk_0xEB061E1EBFED4D59(iLocal_1047[iVar11], 2);
		unk_0x22321800954A532E(iLocal_1047[iVar11], 1);
		func_265(iLocal_1047[iVar11], 1);
		unk_0x7F159E8BAEBBE6EE(iLocal_1047[iVar11], 1);
		iVar11++;
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_1046)
	{
		unk_0x7A535CE1F001F3FE(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0x54480313BB3E8DD0(iParam0, 1);
		unk_0x91629AC1E1F78419(iParam0, 0, 1);
	}
	else
	{
		unk_0x54480313BB3E8DD0(iParam0, 2);
		unk_0x91629AC1E1F78419(iParam0, 13, 1);
	}
	unk_0xFC3C88E2313FA926(iParam0, 60);
	unk_0xE20EB9C9BC14ECEB(iParam0, 2);
	unk_0x2E35C4FA5F0ED22F(iParam0, 1);
	unk_0xF7CDBCD11F31B71A(iParam0, 1);
	unk_0x4106FAF8AA1D69D5(iParam0, iLocal_1332);
}

void func_266()
{
	func_268();
	iLocal_1202 = unk_0x491B2241281A03B7(0, iLocal_1195);
	iLocal_1046 = unk_0x01B3635C3E8EDD81(26, iLocal_1325, Local_1258[iLocal_1202 /*3*/], uLocal_1239[iLocal_1202], 1, 1);
	unk_0xB71D41C0310C93DE(iLocal_1046, 1, 1);
	unk_0xDC3C88A35B53F90B(iLocal_1046);
	func_265(iLocal_1046, 1);
	unk_0x2CA123B0622F495C(iLocal_1325);
	if (!unk_0x2DA8CA50A72528FB(uLocal_1120))
	{
		uLocal_1120 = func_267(iLocal_1046, 0, 0);
	}
	unk_0x3F5F1772D71D5EC4(uLocal_1120, 1f);
}

int func_267(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_197(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, iParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_197(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, iParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_197(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_268()
{
	int iVar0;
	
	iLocal_1195 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x33CC9445B2DF9387(Local_1248[iVar0 /*3*/], 5f) && !func_272(iVar0, 6f))
		{
			Local_1258[iLocal_1195 /*3*/] = { Local_1248[iVar0 /*3*/] };
			uLocal_1239[iLocal_1195] = fLocal_1235[iVar0];
			iLocal_1195++;
		}
		iVar0++;
	}
	if (iLocal_1195 == 0)
	{
		if (func_99())
		{
			Local_1258[0 /*3*/] = { Local_1248[1 /*3*/] };
			uLocal_1239[0] = fLocal_1235[1];
			iLocal_1195++;
		}
		else if (func_271())
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
				if (func_270(Local_1248[iVar0 /*3*/], 1) > 30f && !func_272(iVar0, 6f))
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
		func_269();
	}
}

void func_269()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
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

float func_270(struct<3> Param0, int iParam3)
{
	return func_26(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), Param0, iParam3);
}

int func_271()
{
	if (func_26(unk_0xBC25C936A095B5BA(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0, float fParam1)
{
	if (unk_0x38B362A95EA24163(Local_1248[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_273()
{
	switch (iLocal_1193)
	{
		case 0:
			if (!iLocal_1162)
			{
				func_107(&Local_360, 4);
				func_276();
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (((bLocal_1141 && !bLocal_1139) && func_275()) && func_274())
			{
				func_252();
				iLocal_1031 = 11;
			}
			break;
	}
}

int func_274()
{
	int iVar0;
	
	unk_0xF243B7A14FCFD0F4(iLocal_1325);
	if (unk_0xD6513D668481290A(iLocal_1325))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_275()
{
	if (((unk_0x724D816EA203A79E(uLocal_1050[0]) && unk_0x724D816EA203A79E(uLocal_1050[1])) && !unk_0x36CEFBE9B745A58D(uLocal_1050[0])) && !unk_0x36CEFBE9B745A58D(uLocal_1050[1]))
	{
		if (unk_0x62F3A07C43FFB568(uLocal_1050[0], iLocal_1312, 0) && unk_0x62F3A07C43FFB568(uLocal_1050[1], iLocal_1312, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_276()
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

void func_277()
{
	switch (iLocal_1193)
	{
		case 0:
			func_299(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_107(&Local_360, 2);
			if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
			{
				unk_0x2D655AA68FA1736B(iLocal_1312, 0, 1, 0);
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_1319) && !unk_0x1D403DFADBC2DE3C(iLocal_1319, 0))
					{
						func_285(iLocal_1319);
					}
				}
			}
			func_282();
			func_281();
			unk_0x3857DADBD6EC8A54("ASS1_START");
			unk_0xF0059F27F7BB6680(&Local_360, 4);
			func_247("ASS_VA_PLANT", 7500, 1);
			iLocal_1193++;
			break;
		
		case 1:
			if (iLocal_1168)
			{
				if (((!func_280(&iLocal_1314) && !func_279(&(iLocal_1320[0]), &bLocal_1189)) && !func_279(&(iLocal_1320[1]), &bLocal_1189)) && !func_279(&(iLocal_1320[2]), &bLocal_1189))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_252();
					iLocal_1031 = 10;
				}
				else
				{
					func_278();
				}
			}
			break;
	}
}

void func_278()
{
	iLocal_1044 = 1;
	bLocal_1139 = true;
}

int func_279(var uParam0, int iParam1)
{
	if (!unk_0x724D816EA203A79E(*uParam0))
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iLocal_1313))
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

int func_280(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0x39827CF9BEAB804C(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1312) && *uParam0 != iLocal_1313) && *uParam0 != Local_1691.f_4)
	{
		if (unk_0x724D816EA203A79E(*uParam0) && !unk_0x1D403DFADBC2DE3C(*uParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(*uParam0, -1, 0) == 0)
			{
				Var0 = { unk_0x541C2AEF053615BC(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1319 != 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_1319) && !unk_0x1D403DFADBC2DE3C(iLocal_1319, 0))
		{
			if (!func_94(iLocal_1319))
			{
				Var0 = { unk_0x541C2AEF053615BC(iLocal_1319, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_281()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x724D816EA203A79E(uLocal_1050[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1328;
			}
			else
			{
				iVar0 = iLocal_1327;
			}
			uLocal_1050[iVar1] = unk_0x01B3635C3E8EDD81(26, iVar0, Local_1268[iVar1 /*3*/], fLocal_1221[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 0, 0, 2, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 3, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 4, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 0, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 3, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 4, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 0, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 3, 0, 2, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 4, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 8, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(uLocal_1050[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(uLocal_1050[iVar1]))
		{
			unk_0xB105531EDD3DE51B(uLocal_1050[iVar1], 0);
			unk_0x22321800954A532E(uLocal_1050[iVar1], 1);
			unk_0x91629AC1E1F78419(uLocal_1050[iVar1], 23, 1);
			unk_0x91629AC1E1F78419(uLocal_1050[iVar1], 30, 0);
			unk_0xEB061E1EBFED4D59(uLocal_1050[iVar1], 2);
			unk_0xC8FD3EBBB90E8D7F(uLocal_1050[iVar1], 104, 1);
			func_265(uLocal_1050[iVar1], 1);
		}
		iVar1++;
	}
}

void func_282()
{
	func_284();
	func_283();
	unk_0x2CA123B0622F495C(iLocal_1329);
}

void func_283()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x724D816EA203A79E(uLocal_1054[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1054[iVar0] = unk_0xFD8987C090669BD5(iLocal_1313, 26, iLocal_1327, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1054[iVar0] = unk_0xFD8987C090669BD5(iLocal_1313, 26, iLocal_1328, 0, 1, 1);
			}
			func_265(uLocal_1054[iVar0], 1);
			unk_0x91629AC1E1F78419(uLocal_1054[iVar0], 3, 0);
			unk_0x91629AC1E1F78419(uLocal_1054[iVar0], 23, 1);
			unk_0x91629AC1E1F78419(uLocal_1054[iVar0], 30, 0);
			unk_0xEB061E1EBFED4D59(uLocal_1054[iVar0], 2);
			unk_0x22321800954A532E(uLocal_1054[iVar0], 1);
		}
		iVar0++;
	}
}

void func_284()
{
	if (!unk_0x724D816EA203A79E(iLocal_1313))
	{
		iLocal_1313 = unk_0x61C05BF08A1E0EFE(iLocal_1329, Local_1284, fLocal_1233, 1, 1, 0);
		unk_0x6012A6A4F2950585(iLocal_1313, 0);
	}
}

void func_285(int iParam0)
{
	func_286(&(Global_98783.f_2875), &Global_98783, iParam0, 1);
}

int func_286(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_288(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_287(iParam2))
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

int func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92955.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	func_294(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_291(iParam1, 145, 0);
	uParam0->f_11 = func_290(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_289(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70705 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_289(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if (iParam0 == Global_69800.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_290(int iParam0)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90441[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_292(iParam1, iParam2))
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

int func_292(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_293(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_293(int iParam0, var uParam1, int iParam2)
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
			if (Global_105220.f_9056.f_99.f_58[128] && !Global_105220.f_9056.f_99.f_58[131])
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
					if (Global_105220.f_9056.f_99.f_58[119])
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
			else if (Global_105220.f_9056.f_99.f_58[118])
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

void func_294(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_298(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_297(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_296(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_295(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
		}
	}
}

int func_295(int iParam0)
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

int func_296(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
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
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_298(var uParam0)
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

void func_299(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0x3362CDE8460ED38B("FinaleC2", unk_0x1377080E9B0BD993()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92992)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92992)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_159(1);
		if (iParam0 <= Global_92992)
		{
		}
		iVar1 = func_366(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_105220.f_9056.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_364(iVar1);
			cVar3 = { Global_83888[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_105220.f_9056.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1B7435D54924A668(&cVar3, uVar2, Global_92992, iParam0);
		}
		else
		{
			iVar5 = func_359(unk_0x1377080E9B0BD993(), 1);
			if (iVar5 != -1)
			{
				Global_105220.f_18545[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_358(iVar5)}, 4);
				unk_0x1B7435D54924A668(&uVar6, 0, Global_92992, iParam0);
			}
			else
			{
				iVar10 = func_357(&(Global_92955.f_3));
				if (iVar10 > -1)
				{
					Global_105220.f_24957.f_4[iVar10] = 0;
				}
			}
		}
		Global_87278 = iParam2;
		Global_92992 = iParam0;
		func_300(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92992)
	{
	}
}

void func_300(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_301(&Global_98783, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_301(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_346();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_322(&(uParam0->f_2869), 0);
		func_321(unk_0xBC25C936A095B5BA());
		func_314(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_105220.f_2354.f_539.f_294[iVar1];
		if (iVar1 == func_313())
		{
			func_307(unk_0xBC25C936A095B5BA(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92745[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92745[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92745[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92745[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92745[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92745[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92745[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92745[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92745[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92745[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_105220.f_20535.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53141[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_105220.f_2354[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_303(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_302(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_302(var uParam0)
{
	*uParam0 = Global_88949;
	uParam0->f_1 = Global_88950;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_303(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_304(iParam2, &iVar0, iParam3, iParam5))
	{
		func_286(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_286(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_304(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, 1), unk_0x541C2AEF053615BC(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_305(*uParam1, func_13(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
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

int func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_306(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_307(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_312(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_311(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_310(161, -1))
			{
				uParam1->f_59 = func_308(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_308(752, Global_70790, 0);
			}
			uParam1->f_60 = func_308(753, Global_70790, 0);
			uParam1->f_61 = func_308(754, Global_70790, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_310(161, -1))
			{
				uParam1->f_59 = func_308(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_308(752, Global_70790, 0);
			}
		}
	}
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_309(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_165();
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

int func_310(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2557346[iParam0 /*3*/][func_309(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_311(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
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
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
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

void func_312(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
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

int func_313()
{
	func_14();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_314(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_315(iParam0, &(Global_105220.f_2354.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_105220.f_2354.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_315(int iParam0, var uParam1)
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
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
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
			iVar3 = func_320(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xFEBBB8B5E3A12A20(iParam0, func_320(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_318(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_318(Var4.f_0, iVar1);
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
			iVar0++;
		}
		iVar10 = unk_0x8E3F7DC568AC987B();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x6740839132C4BD08(iVar9, &Var11) && !func_317(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar9))
					{
						if (unk_0x9278F82C9078D16B(iVar9, iVar1, &Var50))
						{
							if (!func_316(Var50.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
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

int func_316(int iParam0)
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
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_317(int iParam0)
{
	if (unk_0x7AF0088ABFA713B6())
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
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_318(int iParam0, int iParam1)
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
				iVar1 = func_319(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var43))
						{
							if (!func_316(Var43.f_3))
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

int func_319(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
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

int func_320(int iParam0)
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

void func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_105220.f_2354.f_539.f_294[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_322(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
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
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_325(&iVar0))
		{
			if (func_324(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_323(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_323(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(Param0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(Param4, sParam3);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_324(int iParam0, var uParam1, var uParam2)
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
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

int func_325(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_345())
		{
			*uParam0 = func_331(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 6, -1, 0, 1, -1);
			if (func_330(*uParam0) && !func_326(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_326(int iParam0)
{
	return func_327(iParam0, 0, 1);
}

int func_327(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_329() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_308(func_328(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_329()
{
	return Global_25277;
}

int func_330(int iParam0)
{
	return func_327(iParam0, 5, 1);
}

int func_331(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam3 == 6 || iParam3 == func_344(iVar0))
		{
			if (!bParam5 || func_343(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(Param0, func_332(iVar0, 0), 1);
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

Vector3 func_332(int iParam0, bool bParam1)
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
			return func_342(Global_95018);
			break;
		
		case 46:
			if (Global_1589135 != func_68())
			{
				if (func_341(Global_1589135))
				{
					return func_334(2, 2);
				}
				else if (func_333(Global_1589135))
				{
					return func_334(45, 3);
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
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_333(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 1)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_334(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589135 != func_68())
	{
		if (iParam1 == 3)
		{
			if (func_335(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 4))
			{
				if (func_335(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 5))
			{
				if (func_335(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_335(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_340(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_340(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_338(iParam0) };
	}
	else
	{
		Var12 = { func_337(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_336(Var18, -Var0.f_3.f_2) };
	Var18 = { func_336(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_336(struct<3> Param0, float fParam3)
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

struct<6> func_337(int iParam0)
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

struct<6> func_338(int iParam0)
{
	return func_339(iParam0);
}

struct<6> func_339(int iParam0)
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
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_340(int iParam0, var uParam1)
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

int func_341(int iParam0)
{
	if (iParam0 != func_68())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 3) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 4)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_342(int iParam0)
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
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_343(int iParam0)
{
	return func_327(iParam0, 0, 0);
}

int func_344(int iParam0)
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
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_345()
{
	return Global_93007.f_321 > 0;
}

var func_346()
{
	var uVar0;
	
	func_356(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_355(&uVar0, unk_0x7E09057438B9D216());
	func_354(&uVar0, unk_0x6E06C0DB9B43570D());
	func_349(&uVar0, unk_0xBE14F159908E4EE5());
	func_348(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_347(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_347(var uParam0, int iParam1)
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

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_349(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_353(*uParam0);
	iVar1 = func_351(*uParam0);
	if (iParam1 < 1 || iParam1 > func_350(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_350(int iParam0, int iParam1)
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

var func_351(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_352(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_352(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_353(var uParam0)
{
	return uParam0 & 15;
}

void func_354(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_355(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_356(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_357(char* sParam0)
{
	if (unk_0x3362CDE8460ED38B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_358(int iParam0)
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

int func_359(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x56BEECB328B6D29D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_360(iVar0, &sVar1);
		if (unk_0x56BEECB328B6D29D(sVar1) == iVar33)
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

void func_360(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_361(uParam1, "Abigail1", func_363(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 1:
			func_361(uParam1, "Abigail2", func_363(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 2:
			func_361(uParam1, "Barry1", func_363(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 3:
			func_361(uParam1, "Barry2", func_363(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 4:
			func_361(uParam1, "Barry3", func_363(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 5:
			func_361(uParam1, "Barry3A", func_363(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 6:
			func_361(uParam1, "Barry3C", func_363(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 7:
			func_361(uParam1, "Barry4", func_363(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_362(iParam0), 0, 0);
			break;
		
		case 8:
			func_361(uParam1, "Dreyfuss1", func_363(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 9:
			func_361(uParam1, "Epsilon1", func_363(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 10:
			func_361(uParam1, "Epsilon2", func_363(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 11:
			func_361(uParam1, "Epsilon3", func_363(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 12:
			func_361(uParam1, "Epsilon4", func_363(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 13:
			func_361(uParam1, "Epsilon5", func_363(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 14:
			func_361(uParam1, "Epsilon6", func_363(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 15:
			func_361(uParam1, "Epsilon7", func_363(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 16:
			func_361(uParam1, "Epsilon8", func_363(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 17:
			func_361(uParam1, "Extreme1", func_363(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 18:
			func_361(uParam1, "Extreme2", func_363(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 19:
			func_361(uParam1, "Extreme3", func_363(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 20:
			func_361(uParam1, "Extreme4", func_363(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 21:
			func_361(uParam1, "Fanatic1", func_363(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_362(iParam0), 1, 0);
			break;
		
		case 22:
			func_361(uParam1, "Fanatic2", func_363(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_362(iParam0), 1, 0);
			break;
		
		case 23:
			func_361(uParam1, "Fanatic3", func_363(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_362(iParam0), 0, 1);
			break;
		
		case 24:
			func_361(uParam1, "Hao1", func_363(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_362(iParam0), 0, 1);
			break;
		
		case 25:
			func_361(uParam1, "Hunting1", func_363(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 26:
			func_361(uParam1, "Hunting2", func_363(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 27:
			func_361(uParam1, "Josh1", func_363(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 28:
			func_361(uParam1, "Josh2", func_363(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 29:
			func_361(uParam1, "Josh3", func_363(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 30:
			func_361(uParam1, "Josh4", func_363(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 31:
			func_361(uParam1, "Maude1", func_363(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 32:
			func_361(uParam1, "Minute1", func_363(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 33:
			func_361(uParam1, "Minute2", func_363(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 34:
			func_361(uParam1, "Minute3", func_363(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 35:
			func_361(uParam1, "MrsPhilips1", func_363(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 36:
			func_361(uParam1, "MrsPhilips2", func_363(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 37:
			func_361(uParam1, "Nigel1", func_363(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 38:
			func_361(uParam1, "Nigel1A", func_363(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 39:
			func_361(uParam1, "Nigel1B", func_363(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_362(iParam0), 1, 1);
			break;
		
		case 40:
			func_361(uParam1, "Nigel1C", func_363(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_362(iParam0), 1, 1);
			break;
		
		case 41:
			func_361(uParam1, "Nigel1D", func_363(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_362(iParam0), 1, 1);
			break;
		
		case 42:
			func_361(uParam1, "Nigel2", func_363(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 43:
			func_361(uParam1, "Nigel3", func_363(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_362(iParam0), 1, 1);
			break;
		
		case 44:
			func_361(uParam1, "Omega1", func_363(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 45:
			func_361(uParam1, "Omega2", func_363(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 46:
			func_361(uParam1, "Paparazzo1", func_363(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 47:
			func_361(uParam1, "Paparazzo2", func_363(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 48:
			func_361(uParam1, "Paparazzo3", func_363(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 49:
			func_361(uParam1, "Paparazzo3A", func_363(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 50:
			func_361(uParam1, "Paparazzo3B", func_363(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 51:
			func_361(uParam1, "Paparazzo4", func_363(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 52:
			func_361(uParam1, "Rampage1", func_363(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 54:
			func_361(uParam1, "Rampage3", func_363(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 55:
			func_361(uParam1, "Rampage4", func_363(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 56:
			func_361(uParam1, "Rampage5", func_363(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_362(iParam0), 0, 0);
			break;
		
		case 53:
			func_361(uParam1, "Rampage2", func_363(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_362(iParam0), 1, 0);
			break;
		
		case 57:
			func_361(uParam1, "TheLastOne", func_363(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 58:
			func_361(uParam1, "Tonya1", func_363(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 59:
			func_361(uParam1, "Tonya2", func_363(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 60:
			func_361(uParam1, "Tonya3", func_363(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 61:
			func_361(uParam1, "Tonya4", func_363(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		case 62:
			func_361(uParam1, "Tonya5", func_363(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_362(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_361(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_362(int iParam0)
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

struct<2> func_363(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_358(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_365(Global_105220.f_9056.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_365(Global_105220.f_9056.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_365(Global_105220.f_9056.f_99.f_205[11]);
			break;
		
		case 90:
			return func_365(Global_105220.f_9056.f_99.f_205[7]);
			break;
		
		case 93:
			return func_365(Global_105220.f_9056.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_365(int iParam0)
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

int func_366(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_367(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_367(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83888[iVar0 /*34*/].f_6 == iParam0)
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

void func_368()
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		if (unk_0x724D816EA203A79E(iVar0))
		{
			if (unk_0x0C265B3C448E6954(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				if (unk_0x8910237449BB6F79(iVar0) <= 0.5f)
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

void func_369()
{
	switch (iLocal_1193)
	{
		case 0:
			if (func_400(1084227584, 1) || (bLocal_1151 && unk_0x75727AF9B92F13B9(uLocal_1130)))
			{
				func_399(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1665, fLocal_1668, 1, 1, 1, 0, 0);
				unk_0xEDAD35A0D81ED3FB(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
				unk_0xADC7E88690E324EB(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_398();
				func_397();
				if (!unk_0x1D403DFADBC2DE3C(iLocal_1312, 0))
				{
					if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
					{
						unk_0x9E6D037EC3389728(iLocal_1312, 107, "ASSOJva", 1);
						unk_0x57C1D06186DCC318(iLocal_1312, 2500f);
					}
				}
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0x004811915F93A42D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), "OFF");
					}
				}
				iLocal_1193++;
			}
			else if (unk_0x75727AF9B92F13B9(uLocal_1130))
			{
			}
			break;
		
		case 1:
			if (func_370())
			{
				iLocal_1194 = 0;
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				func_507();
				func_252();
				iLocal_1031 = 9;
			}
			break;
	}
}

int func_370()
{
	int iVar0;
	
	switch (iLocal_1194)
	{
		case 0:
			func_396(0, 0, 1);
			func_395();
			unk_0x2FB83B8BD6C05FD2(uLocal_1330, "HAND_SHAKE", 0.2f);
			unk_0x2FB83B8BD6C05FD2(uLocal_1331, "HAND_SHAKE", 0.2f);
			unk_0xAE099C1ADC89C331(uLocal_1331, uLocal_1330, 6000, 0, 0);
			unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
			unk_0x7456702622C62EA0(1);
			unk_0xEB233A3B7635D2AC();
			func_247("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1151)
			{
				func_394();
				unk_0xF3F01A78937DC905(0);
				unk_0x2B9AEC08E469E384(0, 1065353216);
			}
			else
			{
				func_385();
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_1194++;
			break;
		
		case 1:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1312, 0))
			{
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0xB34E411B0A4BF096(iLocal_1312))
						{
							unk_0xD87F0F9CDF39238A(iLocal_1312);
						}
						unk_0x9E6D037EC3389728(iLocal_1312, 102, "ASSOJva", 1);
						unk_0x57C1D06186DCC318(iLocal_1312, 4500f);
						unk_0xC1C651D8C6AF61E6(iLocal_1312, 1);
						func_247("ASS_VA_SNIPE2", 7500, 1);
						unk_0x9961B404F89D0597(uLocal_1330, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						unk_0xFD68BBF3AC1BEB75(uLocal_1330, 0.5f);
						unk_0x39B1FA288FBDCC7A(uLocal_1330, 7f);
						unk_0x2FB83B8BD6C05FD2(uLocal_1330, "HAND_SHAKE", 0.2f);
						unk_0x9961B404F89D0597(uLocal_1331, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						unk_0xFD68BBF3AC1BEB75(uLocal_1331, 0.7f);
						unk_0x39B1FA288FBDCC7A(uLocal_1331, 10f);
						unk_0x2FB83B8BD6C05FD2(uLocal_1331, "HAND_SHAKE", 0.2f);
						unk_0xAE099C1ADC89C331(uLocal_1331, uLocal_1330, 2000, 3, 3);
						iLocal_1194++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_1312, 0))
			{
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
				{
					if (unk_0x5B80643EF917B728(iLocal_1312) >= 7000f)
					{
						unk_0x732EE8749B9EF911(iLocal_1312);
						iLocal_1192 = 0;
						while (iLocal_1192 < 3)
						{
							if (!unk_0x1D403DFADBC2DE3C(uLocal_1050[iLocal_1192], 0))
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
								if (unk_0xF4FCC3C1048FF2AB(uLocal_1050[iLocal_1192], 242628503) != 1)
								{
									unk_0x02DAF06EA4F08219(&uLocal_1324);
									unk_0xC5A6DFE2B8987B17(&uLocal_1324);
									unk_0xA3981DED4FC2E56E(0, iVar0, 0);
									unk_0x346129B364057FF6(0, Local_1248[iLocal_1192 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x535008C596714F9E(uLocal_1324);
									unk_0xA8E6405305C0D7DF(uLocal_1050[iLocal_1192], uLocal_1324);
									unk_0x02DAF06EA4F08219(&uLocal_1324);
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
				if (unk_0x7FCE28BE45D0735E() == 4)
				{
					unk_0x9961B404F89D0597(uLocal_1330, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x2FB83B8BD6C05FD2(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0x9961B404F89D0597(uLocal_1331, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x2FB83B8BD6C05FD2(uLocal_1331, "HAND_SHAKE", 0.2f);
					unk_0xAE099C1ADC89C331(uLocal_1331, uLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				else
				{
					unk_0x9961B404F89D0597(uLocal_1330, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					unk_0x2FB83B8BD6C05FD2(uLocal_1330, "HAND_SHAKE", 0.2f);
					unk_0x9961B404F89D0597(uLocal_1331, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					unk_0x2FB83B8BD6C05FD2(uLocal_1331, "HAND_SHAKE", 0.2f);
					unk_0xAE099C1ADC89C331(uLocal_1331, uLocal_1330, 4000, 3, 3);
					iLocal_1217 = 4000;
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1194++;
			}
			break;
		
		case 4:
			if (!iLocal_1190)
			{
				if (unk_0x7FCE28BE45D0735E() == 4)
				{
					if (unk_0x83666F9FB8FEBD4B() >= (iLocal_1217 - 300))
					{
						unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1190 = 1;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() >= iLocal_1217)
			{
				if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_1312))
					{
						unk_0xD87F0F9CDF39238A(iLocal_1312);
					}
				}
				unk_0x4F5DAC981AF98536(102, "ASSOJva");
				unk_0x4F5DAC981AF98536(107, "ASSOJva");
				unk_0x82948B11F55E5713(iLocal_1312, 1, 1);
				unk_0x82948B11F55E5713(iLocal_1312, 0, 1);
				unk_0x82948B11F55E5713(iLocal_1312, 2, 1);
				unk_0x7456702622C62EA0(1);
				if (unk_0x7FCE28BE45D0735E() == 4)
				{
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x9CB4DD3D88846081(1, 0f, 1, 0);
				}
				func_375(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_373(iLocal_382))
	{
		unk_0x7456702622C62EA0(1);
		func_371(1);
		return 1;
	}
	return 0;
}

void func_371(bool bParam0)
{
	unk_0xF3F01A78937DC905(0);
	unk_0x2B9AEC08E469E384(0, 1065353216);
	if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
	{
		if (unk_0xB34E411B0A4BF096(iLocal_1312))
		{
			unk_0xD87F0F9CDF39238A(iLocal_1312);
		}
		unk_0x4F5DAC981AF98536(102, "ASSOJva");
		unk_0x4F5DAC981AF98536(107, "ASSOJva");
		unk_0x641B19E156645A92(iLocal_1312, Local_1290, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(iLocal_1312, fLocal_1220);
		unk_0x82948B11F55E5713(iLocal_1312, 0, 1);
		unk_0x82948B11F55E5713(iLocal_1312, 1, 1);
		unk_0x82948B11F55E5713(iLocal_1312, 2, 1);
		unk_0x82948B11F55E5713(iLocal_1312, 2, 1);
		iLocal_1194 = 0;
		unk_0xEB233A3B7635D2AC();
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
		func_375(1, 1, 1);
		if (bParam0)
		{
			func_372();
		}
	}
}

void func_372()
{
	unk_0x829FA4611BD56B44(1000);
	while (!unk_0x726D9204B160D23E())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_373(int iParam0)
{
	if (func_374() && unk_0x105601648511CC64() >= iParam0 + 1000)
	{
		unk_0x7A41D32A383895D8(500);
		while (!unk_0x17FAADF9916EF741())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_225(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_374()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_375(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_377(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(1);
		unk_0x59B038076F830627(1);
	}
	func_376(23, 0);
}

void func_376(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_25522, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_25522, iParam0);
	}
}

void func_377(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_384(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_10())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_383(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_384(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_383(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_381(unk_0xB5CEFD608600A09F())) && !func_379(unk_0xB5CEFD608600A09F(), 0)) && !func_378()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_381(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_378()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_379(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_380(-1, 0) == 8;
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

int func_380(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_165();
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

int func_381(int iParam0)
{
	if (func_379(iParam0, 0))
	{
		return 1;
	}
	if (func_382())
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

bool func_382()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_383(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_384(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

void func_385()
{
	func_386(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_393(), 1, 1, 1, 0, 0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 310.0126f);
	}
}

void func_386(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_387(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_387(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x5CAE759AE8219D20(iVar0))
		{
			unk_0x77815D3407C6700D(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (bParam18)
			{
				func_392(iVar0);
			}
			if (unk_0x0C265B3C448E6954(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_389(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x5E87CB0495C97732(iVar0, joaat("taxi")))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA() && unk_0x3187EF5798B5D209(iVar0, -1, 0) != 0)
					{
						if (unk_0xF0F2FC9DE291567F(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x541C2AEF053615BC(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_305(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_388(Param11))
				{
					if (unk_0xE59B7F5A03335350(iVar0, 0))
					{
						iVar13 = unk_0x6F79ECA8C83E4357(iVar0);
						unk_0xB34C58360DA450F6(iVar0, &Var4, &Var7);
						if (unk_0x8C1A6E7D5F410F4A(iVar13))
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
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xEDAD35A0D81ED3FB(Param7, 5f, 0, 0, 0, 0, 0, 0);
						unk_0x019CE76D5286C95C(iVar0, fParam10);
						unk_0x641B19E156645A92(iVar0, Param7, 1, 0, 0, 1);
						unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x2D655AA68FA1736B(iVar0, 0, 1, 0);
							unk_0x127F627F30266DD9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x5CAE759AE8219D20(iVar0) || !unk_0xB248FAA35ED47DB9(iVar0, 1))
						{
							unk_0x77815D3407C6700D(iVar0, 1, 1);
						}
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xCF6040807CC0E4A5(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x1E0EC6B6C067C872(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (unk_0x5CAE759AE8219D20(iVar0))
					{
						unk_0x1E7A09C1710FB071(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x5CAE759AE8219D20(iVar0))
			{
				unk_0x77815D3407C6700D(iVar0, 1, 0);
			}
			iVar14 = unk_0x3187EF5798B5D209(iVar0, -1, 0);
			if (unk_0x724D816EA203A79E(iVar14) && !unk_0x36CEFBE9B745A58D(iVar14))
			{
				unk_0x641B19E156645A92(iVar14, unk_0x541C2AEF053615BC(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
				if (unk_0x724D816EA203A79E(iVar14) && !unk_0x36CEFBE9B745A58D(iVar14))
				{
					unk_0x641B19E156645A92(iVar14, unk_0x541C2AEF053615BC(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x3187EF5798B5D209(iVar0, 1, 0);
				if (unk_0x724D816EA203A79E(iVar14) && !unk_0x36CEFBE9B745A58D(iVar14))
				{
					unk_0x641B19E156645A92(iVar14, unk_0x541C2AEF053615BC(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x3187EF5798B5D209(iVar0, 2, 0);
				if (unk_0x724D816EA203A79E(iVar14) && !unk_0x36CEFBE9B745A58D(iVar14))
				{
					unk_0x641B19E156645A92(iVar14, unk_0x541C2AEF053615BC(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xCF6040807CC0E4A5(&iVar0);
		}
	}
}

int func_388(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_391(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_390(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_390(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_390(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_390(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_390(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_390(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_390(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_390(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_390(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_390(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_390(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_390(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_390(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_390(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_390(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_390(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_390(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_391(struct<3> Param0)
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

void func_392(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x77F5C030D3238E26(iParam0) <= 200f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
			if (unk_0xA6EB9CEADFB819EC(iParam0) <= 700f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 900f);
			}
			if (unk_0x8D66276473ABD7CC(iParam0) < 200)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
		}
	}
}

Vector3 func_393()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_394()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_1302, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 299.4985f);
	}
	if (unk_0x724D816EA203A79E(iLocal_1315))
	{
		if (unk_0xE59B7F5A03335350(iLocal_1315, 0))
		{
			unk_0x2D655AA68FA1736B(iLocal_1315, 0, 1, 0);
			unk_0x641B19E156645A92(iLocal_1315, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_1315, 296.7603f);
			unk_0xF0A40F19AAB79E88(iLocal_1315, 1084227584);
		}
	}
}

int func_395()
{
	iLocal_382 = unk_0x105601648511CC64();
	return iLocal_382;
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), 0, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_225(0);
	func_377(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(0);
	unk_0x59B038076F830627(0);
	func_376(23, 1);
}

void func_397()
{
	if (unk_0x724D816EA203A79E(iLocal_1312))
	{
		if (unk_0xE59B7F5A03335350(iLocal_1312, 0))
		{
			iLocal_1192 = 0;
			while (iLocal_1192 < 3)
			{
				if (!unk_0x724D816EA203A79E(uLocal_1050[iLocal_1192]))
				{
					if (iLocal_1192 == 0)
					{
						uLocal_1050[iLocal_1192] = unk_0xFD8987C090669BD5(iLocal_1312, 26, iLocal_1327, -1, 1, 1);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 0, 0, 2, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 3, 0, 0, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 4, 0, 1, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 11, 0, 0, 0);
					}
					else if (iLocal_1192 == 1)
					{
						uLocal_1050[iLocal_1192] = unk_0xFD8987C090669BD5(iLocal_1312, 26, iLocal_1327, 0, 1, 1);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 0, 1, 2, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 3, 0, 1, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 4, 0, 0, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 11, 0, 2, 0);
					}
					else if (iLocal_1192 == 2)
					{
						uLocal_1050[iLocal_1192] = unk_0xFD8987C090669BD5(iLocal_1312, 26, iLocal_1328, 1, 1, 1);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 0, 1, 2, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 3, 0, 2, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 4, 0, 1, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 8, 0, 0, 0);
						unk_0xB0031DDAE4FF0BC3(uLocal_1050[iLocal_1192], 11, 1, 1, 0);
					}
				}
				iLocal_1192++;
			}
		}
	}
}

void func_398()
{
	if (!unk_0x724D816EA203A79E(iLocal_1312))
	{
		iLocal_1312 = unk_0x61C05BF08A1E0EFE(iLocal_1326, Local_1287, fLocal_1219, 1, 1, 0);
		unk_0x2CA123B0622F495C(iLocal_1326);
		unk_0x6FA721E3E050370C(iLocal_1312, 1);
		unk_0xB71D41C0310C93DE(iLocal_1312, 1, 1);
		unk_0x09F6B51861E304AB(iLocal_1312, 1);
	}
}

void func_399(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_387(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_400(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_401(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iParam0, 1, 1056964608, 0, 1, 0)) && !unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_52(&uLocal_367))
		{
			func_50(&uLocal_367);
			if (unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()))
			{
				iVar0 = unk_0x3E12B546F3F2597A();
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					unk_0xA4DFFFD5B234240D(iVar0, 0f);
				}
			}
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
		}
		else if (func_46(&uLocal_367) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_402(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_402(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_403()
{
	int iVar0;
	
	switch (iLocal_1193)
	{
		case 0:
			func_417(500);
			func_299(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				func_247("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0xEDAD35A0D81ED3FB(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
			iLocal_1193++;
			break;
		
		case 1:
			func_416();
			if (!unk_0x724D816EA203A79E(iLocal_1319))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
						{
							iLocal_1319 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							if (unk_0x724D816EA203A79E(iLocal_1319) && !unk_0x1D403DFADBC2DE3C(iLocal_1319, 0))
							{
								func_285(iLocal_1319);
							}
						}
					}
				}
			}
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				if (!func_413())
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_1119))
					{
						uLocal_1119 = func_412(Local_1302, 1);
						unk_0x436D0272182E484D(uLocal_1119, "ASS_VA_DESTBLIP");
						func_411(&uLocal_1119, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1133)
						{
							func_247("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1133 = 1;
						}
						else if (func_410("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0xEB233A3B7635D2AC();
						}
					}
				}
				else if (unk_0x75727AF9B92F13B9(uLocal_1130) && func_409())
				{
					func_408();
					func_252();
					iLocal_1031 = 8;
				}
			}
			else if (!func_413())
			{
				func_407(uLocal_1119, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_404();
			break;
	}
}

void func_404()
{
	if (!iLocal_1132)
	{
		if (func_270(Local_1302, 1) <= 100f)
		{
			func_406();
			uLocal_1130 = unk_0x9FEA2B77D52983D8(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1132 = 1;
		}
	}
	else if (func_270(Local_1302, 1) > 120f)
	{
		if (unk_0x4EF7F52E5396B43C(uLocal_1130))
		{
			unk_0xFD35AC7E0C27D42B(uLocal_1130);
			func_260();
			iLocal_1132 = 0;
		}
	}
	else if (!unk_0x4EF7F52E5396B43C(uLocal_1130))
	{
		if (!func_405())
		{
			iLocal_1132 = 0;
		}
	}
}

int func_405()
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("taxi")))
		{
			if (unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) != unk_0xBC25C936A095B5BA())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_406()
{
	unk_0xF243B7A14FCFD0F4(iLocal_1327);
	unk_0xF243B7A14FCFD0F4(iLocal_1328);
}

void func_407(var uParam0, char* sParam1)
{
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		if (unk_0x2DA8CA50A72528FB(uParam0))
		{
			unk_0x07B8ECB35A4ED3AC(&uParam0);
			unk_0xEB233A3B7635D2AC();
			func_247(sParam1, 7500, 1);
		}
	}
}

void func_408()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_1119))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_1119);
	}
}

int func_409()
{
	int iVar0;
	
	func_406();
	if (unk_0xD6513D668481290A(iLocal_1327) && unk_0xD6513D668481290A(iLocal_1328))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_410(char* sParam0, int iParam1, int iParam2)
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(iParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_411(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		Global_104256 = *uParam0;
		Global_104261 = { Param1 };
		Global_104265 = fParam4;
	}
}

var func_412(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_197(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

int func_413()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_1045, Local_1302, 1);
	if (fVar0 < 200f)
	{
		func_415();
	}
	if (func_414())
	{
		if (unk_0x4DBCE270B354E123(iLocal_1045, Local_1302, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if ((fVar0 < 2f || unk_0x4DBCE270B354E123(iLocal_1045, Local_1302, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_414() && iVar1)
				{
					return 1;
				}
				else if (!unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_414()
{
	int iVar0;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
	{
		iLocal_1315 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		iVar0 = unk_0x6F79ECA8C83E4357(iLocal_1315);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1151 = true;
			return 1;
		}
	}
	return 0;
}

void func_415()
{
	var uVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			unk_0xF243B7A14FCFD0F4(joaat("a_m_m_bevhills_01"));
			unk_0xF243B7A14FCFD0F4(joaat("a_f_m_bevhills_01"));
			unk_0xF243B7A14FCFD0F4(joaat("a_f_m_bevhills_02"));
			unk_0xF243B7A14FCFD0F4(joaat("a_m_y_hipster_01"));
			unk_0xF243B7A14FCFD0F4(joaat("taxi"));
			unk_0x44840FD68E426678("OJAS_HotelTaxi01");
			unk_0x522053D86D6E1C7A("oddjobs@assassinate@hotel@");
			if ((((((unk_0xD6513D668481290A(joaat("a_m_m_bevhills_01")) && unk_0xD6513D668481290A(joaat("a_f_m_bevhills_01"))) && unk_0xD6513D668481290A(joaat("a_f_m_bevhills_02"))) && unk_0xD6513D668481290A(joaat("taxi"))) && unk_0xD6513D668481290A(joaat("a_m_y_hipster_01"))) && unk_0xF9E082857622D91E("oddjobs@assassinate@hotel@")) && unk_0x1E8349F219AC5AF9("OJAS_HotelTaxi01"))
			{
				iLocal_1205++;
			}
			break;
		
		case 1:
			Local_1691[0] = unk_0x01B3635C3E8EDD81(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1691[1] = unk_0x01B3635C3E8EDD81(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691[0], 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691[1], 1);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0x56F2E1B5599188FA(0, Local_1691[1], -1, 0, 2);
			unk_0xCEF3EA5390CB8924(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			unk_0x535008C596714F9E(uVar0);
			if (!unk_0x1D403DFADBC2DE3C(Local_1691[0], 0))
			{
				unk_0xA8E6405305C0D7DF(Local_1691[0], uVar0);
			}
			unk_0x02DAF06EA4F08219(&uVar0);
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0x56F2E1B5599188FA(0, Local_1691[0], -1, 0, 2);
			unk_0xCEF3EA5390CB8924(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			unk_0x535008C596714F9E(uVar0);
			if (!unk_0x1D403DFADBC2DE3C(Local_1691[1], 0))
			{
				unk_0xA8E6405305C0D7DF(Local_1691[1], uVar0);
			}
			unk_0x02DAF06EA4F08219(&uVar0);
			Local_1691.f_4 = unk_0x61C05BF08A1E0EFE(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1, 0);
			unk_0xF0A40F19AAB79E88(Local_1691.f_4, 1084227584);
			Local_1691.f_3 = unk_0xFD8987C090669BD5(Local_1691.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691.f_3, 1);
			unk_0x56F2E1B5599188FA(Local_1691.f_3, Local_1691[0], -1, 0, 2);
			Local_1691.f_8[0] = unk_0x01B3635C3E8EDD81(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1691.f_8[1] = unk_0x01B3635C3E8EDD81(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691.f_8[0], 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691.f_8[1], 1);
			unk_0xE896C0AD02364F2A(Local_1691.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(Local_1691.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1691.f_5[0] = unk_0x01B3635C3E8EDD81(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1691.f_5[1] = unk_0x01B3635C3E8EDD81(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691.f_5[0], 1);
			unk_0x2E35C4FA5F0ED22F(Local_1691.f_5[1], 1);
			unk_0xE896C0AD02364F2A(Local_1691.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(Local_1691.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1691.f_11 = 1;
			unk_0x2CA123B0622F495C(joaat("a_m_m_bevhills_01"));
			unk_0x2CA123B0622F495C(joaat("a_f_m_bevhills_01"));
			unk_0x2CA123B0622F495C(joaat("a_f_m_bevhills_02"));
			unk_0x2CA123B0622F495C(joaat("a_m_y_hipster_01"));
			unk_0x2CA123B0622F495C(joaat("taxi"));
			iLocal_1205++;
			break;
		
		case 2:
			break;
	}
}

void func_416()
{
	struct<3> Var0;
	
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		iLocal_1186 = 1;
		return;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (iLocal_1186)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			fLocal_1245 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_1302);
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
			func_247("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1182 = 1;
		}
	}
}

void func_417(int iParam0)
{
	if (!unk_0x726D9204B160D23E())
	{
		unk_0x829FA4611BD56B44(iParam0);
		while (!unk_0x726D9204B160D23E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_418()
{
	var uVar0;
	float fVar1;
	
	if (unk_0x724D816EA203A79E(iLocal_1058))
	{
		func_423();
		if (!unk_0x36CEFBE9B745A58D(iLocal_1058))
		{
			fVar1 = func_23(iLocal_1058, 1);
			unk_0x8941EA87BBF38C6F(iLocal_1058, 0);
			unk_0xF0B851960DDCE3D8(iLocal_1058, 0);
			unk_0xB105531EDD3DE51B(iLocal_1058, 0);
			unk_0x16DCE907D1FFE3CC(iLocal_1058, 16);
			unk_0xC8FD3EBBB90E8D7F(iLocal_1058, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_52(&uLocal_1357))
				{
					if (!func_22())
					{
						if (func_420(&uLocal_1357, 10f))
						{
							func_29(&uLocal_1364, 3, iLocal_1058, "LESTER", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0x41A5D6415E2CC10E(iLocal_1058) || !unk_0xD1DC4B08247A4317(iLocal_1058))
				{
					func_419();
				}
			}
			switch (iLocal_1191)
			{
				case 0:
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()) || (unk_0x724D816EA203A79E(iLocal_1058) && unk_0xD9C1758D86688CEA(iLocal_1058, unk_0xBC25C936A095B5BA(), 1))) || unk_0xD9C1758D86688CEA(iLocal_1690, unk_0xBC25C936A095B5BA(), 1))
						{
							if (unk_0xD9C1758D86688CEA(iLocal_1690, unk_0xBC25C936A095B5BA(), 1))
							{
							}
							unk_0x43B967881C60631D(iLocal_1058, "move_lester_CaneUp", 1048576000);
							unk_0xE896C0AD02364F2A(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1191 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x96044E39418AAF17(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0xC5A6DFE2B8987B17(&uVar0);
							unk_0x346129B364057FF6(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x346129B364057FF6(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_1058), 0);
							unk_0x535008C596714F9E(uVar0);
							unk_0xA8E6405305C0D7DF(iLocal_1058, uVar0);
							unk_0x02DAF06EA4F08219(&uVar0);
							unk_0x3E2B7D349B5735D3(iLocal_1058, joaat("MotionState_Walk"), 0, 0, 0);
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

void func_419()
{
	if (unk_0x724D816EA203A79E(iLocal_1058))
	{
		unk_0xF845620A03C7425B(&iLocal_1058);
	}
}

int func_420(var uParam0, float fParam1)
{
	if (func_422(uParam0, fParam1))
	{
		func_421(uParam0);
		return 1;
	}
	return 0;
}

void func_421(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_422(var uParam0, float fParam1)
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

void func_423()
{
	if (unk_0x724D816EA203A79E(iLocal_1058))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_1058, unk_0xBC25C936A095B5BA(), 1))
		{
			func_31(9);
		}
	}
}

void func_424()
{
	unk_0x3857DADBD6EC8A54("ASS1_STOP");
	if (!unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13))
	{
		func_507();
	}
	func_425(0, -1, 1);
	unk_0xF3F01A78937DC905(0);
	unk_0x2B9AEC08E469E384(0, 1065353216);
	iLocal_1031 = 18;
	func_417(500);
}

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (func_514() && func_427())
	{
		while (Global_92950 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_426(0);
	}
}

void func_426(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 13);
	}
}

bool func_427()
{
	return unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13);
}

void func_428()
{
	while (iLocal_1205 < 2)
	{
		func_415();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_398();
	func_371(0);
	if (!unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13))
	{
		func_507();
	}
	iLocal_1160 = 0;
	iLocal_1184 = 0;
	unk_0xEDAD35A0D81ED3FB(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0);
	unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
	unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	unk_0x3857DADBD6EC8A54("ASS1_RESTART1");
	while (!func_409())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_425(0, -1, 1);
	unk_0xF3F01A78937DC905(0);
	unk_0x2B9AEC08E469E384(0, 1065353216);
	iLocal_1031 = 9;
	func_417(500);
}

void func_429()
{
	func_425(0, -1, 1);
	unk_0xF3F01A78937DC905(0);
	unk_0x2B9AEC08E469E384(0, 1065353216);
	func_417(500);
	iLocal_1031 = 7;
}

void func_430()
{
	uLocal_1316[0] = unk_0x61C05BF08A1E0EFE(iLocal_1329, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1, 0);
	uLocal_1316[1] = unk_0x61C05BF08A1E0EFE(iLocal_1329, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1, 0);
}

void func_431()
{
	uLocal_1330 = unk_0x585DE1CBEEB2D27D(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1331 = unk_0x585DE1CBEEB2D27D(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_432()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0xD6513D668481290A(iLocal_1326) && unk_0xD6513D668481290A(iLocal_1329)) && unk_0x00D24B3F2A5CD22C(102, "ASSOJva")) && unk_0x00D24B3F2A5CD22C(107, "ASSOJva")) && unk_0x1E8349F219AC5AF9("OJASva_101")) && unk_0x1E8349F219AC5AF9("OJASva_101a")) && unk_0x1E8349F219AC5AF9("OJASva_104")) && unk_0xF9E082857622D91E("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xF9E082857622D91E("oddjobs@assassinate@hotel@")) && unk_0xFA9040D29FE330BD(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_433()
{
	unk_0xF243B7A14FCFD0F4(iLocal_1326);
	unk_0xF243B7A14FCFD0F4(iLocal_1329);
	unk_0x522053D86D6E1C7A("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x522053D86D6E1C7A("oddjobs@assassinate@hotel@");
	unk_0x900CF084251DED26("ASS_VA", 3);
	unk_0x1B2A7C8188ADBE04(102, "ASSOJva");
	unk_0x1B2A7C8188ADBE04(107, "ASSOJva");
	unk_0x44840FD68E426678("OJASva_101");
	unk_0x44840FD68E426678("OJASva_101a");
	unk_0x44840FD68E426678("OJASva_104");
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		unk_0x379ACE23D404525C(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0x6935EBF9868982DC(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		unk_0x379ACE23D404525C(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		unk_0x832ADB79A274D4E9(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_435()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1364, 1, iLocal_1045, "FRANKLIN", 0, 1);
	unk_0xDF53A66AEE1401AA(0.2f);
	unk_0xB2CB6EAA6B280A84("Guards", &iLocal_1332);
	unk_0xA902E18EDF6FA0C8(1, joaat("COP"), iLocal_1332);
	unk_0xA902E18EDF6FA0C8(1, iLocal_1332, joaat("COP"));
	unk_0xA902E18EDF6FA0C8(5, iLocal_1332, joaat("player"));
	unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_1332);
	unk_0x6C5F5B5F6894CCE3(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	unk_0xF16F7C45E0B1B52B(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1128 = unk_0x1DAA351326EA3537(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1129 = unk_0x1DAA351326EA3537(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_436()
{
	StringCopy(&Local_965, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_965.f_6), {Global_55982}, 6);
	StringCopy(&(Local_965.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_965.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_965.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_965.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_965.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_965.f_54), "ASS_VA_COMP", 24);
}

void func_437()
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
		uLocal_1227[iLocal_1192] = unk_0x55AEFCD285ECC0F2(0f, 2f);
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

void func_438()
{
	switch (iLocal_1193)
	{
		case 0:
			unk_0x04DD7A558FCF2C34("ASS_INT_2_ALT1", 8);
			unk_0xF243B7A14FCFD0F4(joaat("ig_lestercrest"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_cs_walking_stick"));
			unk_0x522053D86D6E1C7A("oddjobs@assassinate@hotel@leadin");
			unk_0x522053D86D6E1C7A("oddjobs@assassinate@hotel@leaning@");
			unk_0x37FA5A8A7F1136BA("move_lester_CaneUp");
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			if ((((unk_0xD6513D668481290A(joaat("ig_lestercrest")) && unk_0xD6513D668481290A(joaat("prop_cs_walking_stick"))) && unk_0xF9E082857622D91E("oddjobs@assassinate@hotel@leadin")) && unk_0xF9E082857622D91E("oddjobs@assassinate@hotel@leaning@")) && unk_0x320539481B2F0121("move_lester_CaneUp"))
			{
				iLocal_1193++;
			}
			break;
		
		case 1:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				func_396(56, 0, 1);
				func_399(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				unk_0x6C5F5B5F6894CCE3(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_1669, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fLocal_1672);
				unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0xEF0E25DA0CB6E8FF(uLocal_1673))
				{
					uLocal_1673 = unk_0x585DE1CBEEB2D27D(26379945, Local_1675, Local_1678, 42.2032f, 1, 2);
					unk_0x2FB83B8BD6C05FD2(uLocal_1673, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0xEF0E25DA0CB6E8FF(uLocal_1674))
				{
					uLocal_1674 = unk_0x585DE1CBEEB2D27D(26379945, Local_1681, Local_1684, 42.2032f, 0, 2);
					unk_0xAE099C1ADC89C331(uLocal_1674, uLocal_1673, 5000, 1, 1);
					unk_0x2FB83B8BD6C05FD2(uLocal_1673, "HAND_SHAKE", 0.3f);
				}
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
				iLocal_1193++;
			}
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
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
			if (func_439())
			{
				iLocal_1193++;
			}
			break;
		
		case 4:
			func_377(1, 1, 1, 0, 0);
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), "Franklin", 0, 0, 0);
			}
			unk_0x538BB037E00A3AD9(iLocal_1058, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0x538BB037E00A3AD9(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0x93B1CB6BD50812C7(0);
			unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			iLocal_1193++;
			break;
		
		case 5:
			if (unk_0x866EAD7E27D8D0F8())
			{
				unk_0x1C51717D9E91D69B(0);
				unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
				iLocal_1193++;
			}
			break;
		
		case 6:
			if (unk_0xBFFAD293E2DA992B())
			{
				unk_0xF04F2EB4128A4367(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_1058))
			{
				if (unk_0xBE04B0961985A705("Lester", 0))
				{
					if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("Lester", 0)))
					{
						iLocal_1058 = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("Lester", 0));
					}
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_1059))
			{
				if (unk_0xBE04B0961985A705("WalkingStick_Lester", 0))
				{
					if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("WalkingStick_Lester", 0)))
					{
						iLocal_1059 = unk_0x95E040A13E9940DC("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0xF3F01A78937DC905(0);
			unk_0x2B9AEC08E469E384(0, 1065353216);
			if (unk_0x3F3252765FE36DA8("Franklin", 0))
			{
			}
			if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("Lester", 0)))
			{
				if (unk_0x3F3252765FE36DA8("Lester", 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_1058) && !unk_0x36CEFBE9B745A58D(iLocal_1058))
					{
						unk_0x641B19E156645A92(iLocal_1058, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(iLocal_1058, -11f);
						unk_0xE896C0AD02364F2A(iLocal_1058, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0x2EB4D46478766D87(iLocal_1058, 0, 0);
					}
				}
			}
			if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("Lester", 0)))
			{
				if (unk_0x3F3252765FE36DA8("WalkingStick_Lester", 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_1058) && !unk_0x36CEFBE9B745A58D(iLocal_1058))
					{
						unk_0x5DBE04849460E608(iLocal_1059, iLocal_1058, unk_0xFA18E720A39243D0(iLocal_1058, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (unk_0xD96732B3E060BAE1() && !unk_0x866EAD7E27D8D0F8())
			{
				func_377(0, 1, 1, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_1058))
				{
					unk_0x06D93FD5E4D394CF(iLocal_1058, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0xF1FC2182A76AD7FC(iLocal_1058, 1);
				}
				unk_0xF3F01A78937DC905(0);
				unk_0x2B9AEC08E469E384(0, 1065353216);
				if (unk_0x17FAADF9916EF741())
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x829FA4611BD56B44(500);
				}
				func_375(1, 1, 1);
				iLocal_1193++;
			}
			break;
		
		case 7:
			func_50(&uLocal_1357);
			func_252();
			iLocal_1031 = 4;
			break;
	}
}

bool func_439()
{
	bool bVar0;
	
	bVar0 = unk_0xDC9E16E99286F31D();
	if (!Global_70977)
	{
		if (!bVar0)
		{
			Global_70977 = 1;
		}
	}
	return bVar0;
}

void func_440()
{
	if (!unk_0x724D816EA203A79E(iLocal_1690))
	{
		iLocal_1690 = unk_0xCE5CC3450F9879E0(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_441()
{
	int iVar0;
	
	if (iLocal_1031 > 7)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x39C128D398B3CB04();
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (unk_0xE59B7F5A03335350(iVar0, 0))
					{
						if ((iVar0 != iLocal_1320[0] && iVar0 != iLocal_1320[1]) && iVar0 != iLocal_1320[2])
						{
							if (iLocal_1216 >= 2)
							{
								iLocal_1216 = -1;
							}
							iLocal_1320[iLocal_1216 + 1] = iVar0;
							unk_0x77815D3407C6700D(iLocal_1320[iLocal_1216 + 1], 1, 0);
							unk_0x29BEE055E0B12E9D(iLocal_1320[iLocal_1216 + 1], 0);
							iLocal_1216++;
						}
					}
				}
			}
		}
	}
}

void func_442()
{
	int iVar0;
	
	if (iLocal_1178)
	{
		iVar0 = func_30(1116471296, 1);
		if (!unk_0x36CEFBE9B745A58D(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1364, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_443()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1691.f_11)
	{
		if (!bLocal_1169)
		{
			if (iLocal_1031 < 10)
			{
				if (func_449())
				{
					iVar0 = func_30(1116471296, 1);
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
							Var1 = { Var1 };
							func_29(&uLocal_1364, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1364, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_448();
					bLocal_1169 = true;
				}
				if (iLocal_1134)
				{
					func_448();
					bLocal_1169 = true;
				}
				else
				{
					func_447();
					func_444();
				}
			}
		}
	}
}

void func_444()
{
	if (bLocal_1140)
	{
		if (IntToFloat(iLocal_1213) < (IntToFloat(iLocal_1210) - 5f))
		{
			func_446(Local_1691.f_8[0], 1);
			func_446(Local_1691.f_8[1], 1);
			func_446(Local_1691.f_5[0], 1);
			func_446(Local_1691.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1691.f_8[0], 0) < 1f || func_23(Local_1691.f_8[1], 0) < 1f) || iLocal_1138)
			{
				func_445(Local_1691.f_8[0], 1);
				func_445(Local_1691.f_8[1], 1);
			}
			if (!iLocal_1138)
			{
				func_445(Local_1691.f_5[0], 0);
				func_445(Local_1691.f_5[1], 0);
			}
			else
			{
				func_445(Local_1691.f_5[0], 1);
				func_445(Local_1691.f_5[1], 1);
			}
		}
	}
}

void func_445(int iParam0, int iParam1)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_446(iParam0, 1);
			}
		}
	}
}

void func_446(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if ((bParam1 && unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1) || !bParam1)
		{
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA2DBAE5B6ADB4DC9(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(iParam0, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
	}
}

void func_447()
{
	int iVar0;
	
	switch (iLocal_1206)
	{
		case 0:
			if (((iLocal_1154 || iLocal_1138) || func_23(Local_1691[0], 0) < 1f) || func_23(Local_1691[1], 0) < 1f)
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_1691[0], 0) && !unk_0x1D403DFADBC2DE3C(Local_1691[1], 0))
				{
					unk_0x56F2E1B5599188FA(Local_1691[0], Local_1691[1], -1, 0, 2);
					unk_0x56F2E1B5599188FA(Local_1691[1], Local_1691[0], -1, 0, 2);
				}
				if (((unk_0x724D816EA203A79E(Local_1691[1]) && unk_0x724D816EA203A79E(Local_1691.f_4)) && !unk_0x36CEFBE9B745A58D(Local_1691[1])) && unk_0xE59B7F5A03335350(Local_1691.f_4, 0))
				{
					unk_0xA4E856A8CD53B8DF(Local_1691[1]);
					unk_0xD179FA0466FA4FE3(Local_1691[1], Local_1691.f_4, 20000, 2, 1f, 1, 0);
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
						if (((unk_0x724D816EA203A79E(Local_1691[0]) && unk_0x724D816EA203A79E(Local_1691.f_4)) && !unk_0x36CEFBE9B745A58D(Local_1691[0])) && unk_0xE59B7F5A03335350(Local_1691.f_4, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(Local_1691[0], -1794415470) != 1)
							{
								unk_0xA4E856A8CD53B8DF(Local_1691[0]);
								unk_0xD179FA0466FA4FE3(Local_1691[0], Local_1691.f_4, 20000, 1, 1f, 1, 0);
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
			if (!unk_0x36CEFBE9B745A58D(Local_1691[0]) && !unk_0x36CEFBE9B745A58D(Local_1691[1]))
			{
				if (unk_0x62F3A07C43FFB568(Local_1691[0], Local_1691.f_4, 0) && unk_0x62F3A07C43FFB568(Local_1691[1], Local_1691.f_4, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_1691.f_3, 0) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_4, 0))
					{
						unk_0x44C98C11ED6DD327(Local_1691.f_3);
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
					if (!unk_0x36CEFBE9B745A58D(Local_1691.f_3) && unk_0xE59B7F5A03335350(Local_1691.f_4, 0))
					{
						unk_0xEB469C5B92ADC7B0(Local_1691.f_3, Local_1691.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1206++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1D403DFADBC2DE3C(Local_1691.f_3, 0) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_4, 0))
			{
				if (!unk_0x3C9DB165D131D628(Local_1691.f_4) || iLocal_1177)
				{
					unk_0x204BA7B1C7DD25F4(Local_1691.f_3, Local_1691.f_4, 10f, 786603);
					iLocal_1206++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1177)
			{
				if (!unk_0x36CEFBE9B745A58D(uLocal_1054[0]))
				{
					iVar0 = uLocal_1054[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x36CEFBE9B745A58D(iVar0))
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

void func_448()
{
	if ((unk_0x724D816EA203A79E(Local_1691.f_3) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_3, 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691.f_3, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691[0]) && !unk_0x1D403DFADBC2DE3C(Local_1691[0], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
		unk_0xABA7AE40608505F2(Local_1691[0], 2, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691[1]) && !unk_0x1D403DFADBC2DE3C(Local_1691[1], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
		unk_0xABA7AE40608505F2(Local_1691[1], 2, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691.f_8[0]) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_8[0], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691.f_8[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691.f_8[1]) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_8[1], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691.f_8[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691.f_5[0]) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_5[0], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691.f_5[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
	}
	if ((unk_0x724D816EA203A79E(Local_1691.f_5[1]) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_5[1], 0)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x5558ED6D4A2DEC93(Local_1691.f_5[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
	}
}

int func_449()
{
	if (!unk_0x1D403DFADBC2DE3C(Local_1691.f_3, 0))
	{
		if (unk_0xA4813477CC5DD00F(Local_1691.f_3))
		{
			if (unk_0x33213E99DDEE4631(Local_1691.f_3) == unk_0xBC25C936A095B5BA())
			{
				return 1;
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(Local_1691.f_4, 0))
	{
		if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_1691.f_4, 0))
		{
			return 1;
		}
	}
	if (func_113(Local_1691[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1691[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1691.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1691.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1691.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_113(Local_1691.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_112(Local_1691.f_4))
	{
		return 1;
	}
	if (unk_0xC9FA5D38428AB6BE(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_450()
{
	func_515();
}

int func_451()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92955 == 7 || Global_92955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_452(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_514())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
		}
		Global_92951 = { Param0 };
		Global_92954 = fParam3;
		Global_92950 = 1;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 24);
		}
		func_426(1);
	}
}

int func_453(struct<3> Param0, float fParam3)
{
	return func_454(&(Global_98783.f_2875), Param0, fParam3, 0);
}

int func_454(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_503(uParam0))
	{
		if (func_44(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x7352105EC4D7541F(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_502(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(Param1, 5f, 1, 0, 0, 0);
			func_501(Param1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, Param1, 0, 0, 1);
				}
				func_485(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xE7B3A320107C1379(uParam0->f_12.f_66) || unk_0x7974165A9BC75283(uParam0->f_12.f_66))
				{
					if (!unk_0xD841AD3F7B98FC00(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_484(uParam0->f_11, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_484(uParam0->f_11, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, 1);
					func_483(iVar0, uParam0->f_11);
				}
				else if ((!func_480(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar8 = func_479(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_474(iVar8);
					}
				}
				if (((Global_92955 != 13 && Global_92955 != 10) && Global_92955 != 11) && Global_92955 != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_92955.f_3)) == Global_70788)
					{
						if (uParam0->f_12.f_66 == Global_105220.f_32546.f_69[21 /*78*/].f_66)
						{
							func_471(24, 0);
							func_474(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_455(iVar0, uParam0->f_11);
				}
				unk_0x2CA123B0622F495C(uParam0->f_12.f_66);
				Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_456(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
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
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_294(iParam0, &(Global_105220.f_32546.f_5510));
}

int func_456(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_305(iParam0, 0, 0)) || func_305(iParam0, 1, 0)) || func_305(iParam0, 2, 0)) || func_290(iParam0) != 145) || func_470(iParam0)) || func_469(iParam0)) || func_468(iParam0)) || func_467(iParam0)) || !func_457(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_469(iParam0))
		{
		}
		if (func_469(iParam0))
		{
		}
		if (func_305(iParam0, 0, 0))
		{
		}
		if (func_305(iParam0, 1, 0))
		{
		}
		if (func_305(iParam0, 2, 0))
		{
		}
		if (func_290(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_457(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_458(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
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

int func_458(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_466())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
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
		if ((((!func_465() && !func_464()) && !func_463()) && !func_462()) && !func_466())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_463())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_461(iParam0))
		{
			return 0;
		}
	}
	if (!func_459(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_459(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_460())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
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
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_460()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_462()
{
	return 0;
}

int func_463()
{
	return 1;
}

int func_464()
{
	return 1;
}

int func_465()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_466()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	uVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_458(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_471(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_473(iParam0, 0))
		{
			func_472(iParam0, 1, 0);
			func_472(iParam0, 2, 0);
			func_472(iParam0, 3, 0);
			func_472(iParam0, 4, 0);
			func_472(iParam0, 0, 1);
			Global_69800[iParam0] = 1;
		}
	}
	else
	{
		func_472(iParam0, 0, 0);
	}
}

void func_472(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_32546[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546[iParam0]), iParam1);
	}
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_32546[iParam0], iParam1);
}

void func_474(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_478(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
				unk_0xCF6040807CC0E4A5(&(Global_69800.f_139[iParam0]));
			}
		}
		Global_69800[iParam0] = 1;
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_473(iParam0, 0)) && Global_70709.f_66 == 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] != 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] > 3) && (!func_476(0, Global_69800.f_555[0 /*21*/].f_12) || !func_476(1, Global_69800.f_555[0 /*21*/].f_12)))
			{
				func_475(&(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]), &Global_70709);
				Global_70787 = Global_105220.f_32546.f_5591;
			}
			func_471(iParam0, 0);
		}
	}
}

void func_475(var uParam0, var uParam1)
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

int func_476(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_477(&(Global_105220.f_32546.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_458(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_477(var uParam0)
{
	return *uParam0;
}

int func_478(var uParam0, int iParam1)
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
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_292(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_292(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_292(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_292(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
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
			if (func_466())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_466())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_105220.f_32546.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_44(Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_105220.f_32546.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_105220.f_32546.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_44(Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_44(Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_479(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]) && !unk_0x1D403DFADBC2DE3C(Global_69800.f_484[iVar0], 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[iVar0], 0))
		{
			unk_0x87F182D2DA225F0D(uParam0, &iVar1, &iVar2);
			unk_0x87F182D2DA225F0D(Global_69800.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(Global_69800.f_484[iVar0]) && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_480(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x6F79ECA8C83E4357(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_482(iParam0, Global_69800.f_139[38], 0))
			{
				func_474(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_482(iParam0, Global_69800.f_139[43], 1))
			{
				func_474(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_482(iParam0, uVar1[iVar6], 1) && func_481(unk_0x541C2AEF053615BC(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_44(Param1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xCF6040807CC0E4A5(&iParam0);
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
			if ((unk_0x724D816EA203A79E(Global_69800.f_484[14]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[14], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_69800.f_484[14]) == joaat("luxor2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[14]))
				{
					func_474(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_69800.f_484[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_69800.f_484[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[20]))
				{
					func_474(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_481(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_482(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x724D816EA203A79E(uParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0)) && unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x87F182D2DA225F0D(uParam0, &iVar0, &iVar1);
			unk_0x87F182D2DA225F0D(iParam1, &iVar2, &iVar3);
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

void func_483(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			Global_90431[iVar0] = uParam0;
			Global_90441[iVar0] = iParam1;
			Global_90451[iVar0] = unk_0x6F79ECA8C83E4357(uParam0);
			if (unk_0x7C28D15641461C68(Global_90451[iVar0]))
			{
				Global_90479[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90479[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_484(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (iParam0 == 145 || Global_90441[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == func_292(iParam0, iParam1))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_90431[iVar0], 0))
					{
						unk_0x77815D3407C6700D(Global_90431[iVar0], 0, 1);
						unk_0xCF6040807CC0E4A5(&(Global_90431[iVar0]));
						Global_90441[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_485(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(uParam0, 0))
	{
		if (!func_494(iParam0))
		{
			if (unk_0x56BEECB328B6D29D(&(uParam1->f_1)) != 0)
			{
				unk_0xEA0AB6C644C58C1D(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xECE72A06BBAC88B0())
			{
				unk_0x5EDEB04A454C1C0C(iParam0, *uParam1);
			}
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_295(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_295(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_295(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_295(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (unk_0x3EB14CBD49DA0017(iParam0, 5) != -1)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 13))
		{
			unk_0x1A45B6F1C5FA21FC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF07FAC3A3C7FE9ED(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 12))
		{
			unk_0x28CD156B832945DC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC90D824D356A7AF3(iParam0);
		}
		unk_0x914C5DE0B15B8B59(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4C59702AC1076A88(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_77, 15) || func_493(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_492())
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
		unk_0x05D05A0BAA6CA8B1(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_297(uParam1->f_66))
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
		}
		else
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
			unk_0x84A3F4F29630A320(iParam0, uParam1->f_65);
		}
		unk_0xE82050D41B744FF3(iParam0, !unk_0xFA30DFD0084E92FE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD421BC740C5340C3(iParam0, uParam1->f_70);
		}
		unk_0x13CA55A989DEB72C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x200ACC5C718FF287(iParam0, 2, unk_0xFA30DFD0084E92FE(uParam1->f_77, 28));
		unk_0x200ACC5C718FF287(iParam0, 3, unk_0xFA30DFD0084E92FE(uParam1->f_77, 29));
		unk_0x200ACC5C718FF287(iParam0, 0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 30));
		unk_0x200ACC5C718FF287(iParam0, 1, unk_0xFA30DFD0084E92FE(uParam1->f_77, 31));
		unk_0x8D8F52BBEE186D6D(iParam0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x7170EF3CEB4D0224(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_491(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_491(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x53A9885CA864BB82(iParam0, 1);
			}
			else
			{
				unk_0x7868CAB0703DB40F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_486(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_66) && !unk_0xE7B3A320107C1379(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_295(iVar2 + 1)))
				{
					if (!unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
					{
						unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
				{
					unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x6F79ECA8C83E4357(iParam0) == joaat("sheava") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("omnis")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("le7b"))
		{
			if (unk_0x3EB14CBD49DA0017(iParam0, 0) == -1)
			{
				unk_0xE54F7105CEA81918(iParam0, 1, 0);
			}
		}
		if (((unk_0xA19D269B4B5A1532(uParam1->f_66) && unk_0x86AFA41F8E0E6D36(iParam0)) && !unk_0x5E87CB0495C97732(iParam0, joaat("avenger"))) && !((((Global_4456448.f_51118 == 6 || Global_4456448.f_51118 == 7) || Global_4456448.f_51118 == 18) || Global_4456448.f_51118 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_77, 23))
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 22))
				{
					unk_0xA1EE8501940C1D3E(iParam0, 2);
				}
				else
				{
					unk_0xA1EE8501940C1D3E(iParam0, 3);
				}
			}
			else
			{
				unk_0xA1EE8501940C1D3E(iParam0, 4);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 27))
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_486(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x1345B3BF11EDB0CF(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xB25E25030D61B529(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x3EB14CBD49DA0017(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD2AB1F868ED95E27(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5C9F67BE33A5A3EE(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5C9F67BE33A5A3EE(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5C9F67BE33A5A3EE(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_490(unk_0x6F79ECA8C83E4357(*uParam0), 1) && unk_0x3EB14CBD49DA0017(*uParam0, 24) != func_489(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*uParam0, 24, func_489(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_488(uParam0);
	if (func_487(*uParam0))
	{
		unk_0xDB35A2F9333ABEC5(*uParam0, 1);
		unk_0xA73D1278857991A2(*uParam0, 1);
	}
	return 1;
}

int func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x724D816EA203A79E(uParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
				iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x56BEECB328B6D29D("MNU_CAGE") || iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
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

void func_488(var uParam0)
{
	switch (unk_0x6F79ECA8C83E4357(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x3EB14CBD49DA0017(*uParam0, 4) == 0)
			{
				unk_0x5C9F67BE33A5A3EE(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD2AB1F868ED95E27(*uParam0, 13);
			}
			break;
	}
}

int func_489(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(uParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x6F79ECA8C83E4357(iParam0))
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
		iVar0 = unk_0x34374BDFA570F489(iParam0, 38);
		iVar1 = unk_0x34374BDFA570F489(iParam0, 24);
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

int func_490(int iParam0, int iParam1)
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
			if (!Global_262145.f_13594)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13595)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13593)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13596)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13598)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13597)
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
			if (Global_262145.f_18039)
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
			if (Global_262145.f_18041)
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
			if (Global_262145.f_18045)
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
			if (Global_262145.f_18042)
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
			if (Global_262145.f_18049)
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
			if (Global_262145.f_18047)
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
			if (Global_262145.f_18052)
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
			if (Global_262145.f_19995)
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
			if (Global_262145.f_19996)
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

void func_491(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA6BE0954FC6BAA16(uParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = unk_0x3EB14CBD49DA0017(iParam0, 24);
		iVar1 = unk_0xC8B123E980199685(iParam0, 24);
		unk_0xD2F70373DBF15801(iParam0, uParam1);
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD2AB1F868ED95E27(iParam0, 24);
		}
		else
		{
			unk_0x5C9F67BE33A5A3EE(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_492()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpindependence"));
}

int func_493(int iParam0)
{
	var uVar0;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
				}
				return unk_0xFA30DFD0084E92FE(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_500(unk_0xB5CEFD608600A09F(), -1))
		{
			uParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	if (!unk_0x724D816EA203A79E(uParam0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_496(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_495(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_495(int iParam0)
{
	if (unk_0x46032D09AA009EC4("FMDeliverableID", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(uParam0, "FMDeliverableID"))
		{
			return unk_0x67CFC62D543B19EF(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_496(int iParam0)
{
	if (func_499(iParam0) == 233)
	{
		return func_497(iParam0);
	}
	return -1;
}

int func_497(int iParam0)
{
	if (func_498(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_176;
	}
	return -1;
}

int func_498(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_499(int iParam0)
{
	if (func_498(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_500(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_67(uParam0, 1, 1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(uParam0), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
			if (unk_0xE59B7F5A03335350(uVar0, 0))
			{
				if (unk_0xBC25C936A095B5BA() == unk_0x3187EF5798B5D209(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_501(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_478(&(Global_69800.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(Param0, Global_69800.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_474(iVar0);
			}
		}
		iVar0++;
	}
}

int func_502(var uParam0)
{
	if (func_503(uParam0))
	{
		if (unk_0xD6513D668481290A(uParam0->f_12.f_66))
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

int func_503(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_458(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_481(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_504()
{
	return func_502(&(Global_98783.f_2875));
}

void func_505()
{
	func_506(&(Global_98783.f_2875));
}

void func_506(var uParam0)
{
	if (func_503(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_12.f_66);
	}
}

void func_507()
{
	if (unk_0x4EF7F52E5396B43C(uLocal_1130))
	{
		unk_0xFD35AC7E0C27D42B(uLocal_1130);
	}
}

int func_508()
{
	if (!Global_92955 == 10 && !Global_92955 == 9)
	{
		return 0;
	}
	return Global_92955.f_2;
}

struct<39> func_509(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_510(0) };
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
		Var0.f_7 = { func_510(1) };
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
		Var0.f_7 = { func_510(2) };
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
		Var0.f_7 = { func_510(3) };
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
		Var0.f_7 = { func_510(4) };
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

Vector3 func_510(int iParam0)
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

void func_511()
{
	bool bVar0;
	
	bVar0 = func_119(Global_105220.f_19934.f_1, 4096);
	Global_105220.f_19934.f_1 = 0;
	if (bVar0)
	{
		func_522(&(Global_105220.f_19934.f_1), 4096);
	}
}

void func_512()
{
}

bool func_513()
{
	return func_503(&(Global_98783.f_2875));
}

int func_514()
{
	if (Global_92955 == 10 || Global_92955 == 9)
	{
		return 1;
	}
	return 0;
}

void func_515()
{
	if (func_52(&uLocal_1336))
	{
		Global_105220.f_19934.f_5 = func_46(&uLocal_1336);
	}
	if (!iLocal_1176)
	{
		unk_0x3857DADBD6EC8A54("ASS1_LOST");
	}
	unk_0xDA70546257A3ED8B("SCRIPT\ASSASSINATION_MULTI");
	func_261();
	func_244();
	func_249();
	func_250(1);
	func_408();
	func_519();
	func_434(0);
	func_3();
	if (unk_0x724D816EA203A79E(Global_89597.f_28[0]))
	{
		unk_0x77815D3407C6700D(Global_89597.f_28[0], 1, 1);
		unk_0xF8ED8988FAF2823F(&(Global_89597.f_28[0]));
	}
	unk_0x483687B0FCA5415A(uLocal_1128, 0);
	unk_0x483687B0FCA5415A(uLocal_1129, 0);
	func_507();
	func_87(&uLocal_1529, 0, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_517(unk_0xBC25C936A095B5BA(), 1);
		unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
	}
	unk_0xDF53A66AEE1401AA(1f);
	unk_0x02DD9F29D9655E48();
	unk_0x23180B0A9E8D2951(iLocal_1327, 0);
	unk_0x23180B0A9E8D2951(iLocal_1328, 0);
	func_516();
	unk_0x95E4B6F3ED223F5A();
}

void func_516()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_270(Local_1248[iVar0 /*3*/], 1) < 5f)
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_517(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_518(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_92992 > 0)
	{
		Global_98783.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_95814.f_21[iParam1] = iVar0;
	}
}

int func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_92992 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_98783.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_98783.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_98783.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_98783.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
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
			if (Global_95814.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_95814.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95814.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_95814.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_519()
{
	unk_0x4F5DAC981AF98536(102, "ASSOJva");
	unk_0x4F5DAC981AF98536(107, "ASSOJva");
	unk_0x4CE01E22F13D3913("OJASva_101");
	unk_0x4CE01E22F13D3913("OJASva_101a");
	unk_0x4CE01E22F13D3913("OJASva_104");
}

void func_520()
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_105220.f_9056 || func_40(0))
	{
		if (!func_521())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_521()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_522(var uParam0, int iParam1)
{
	func_523(uParam0, iParam1);
}

void func_523(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

