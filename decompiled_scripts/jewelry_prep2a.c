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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	var uLocal_99 = 30;
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
	var uLocal_250 = 10;
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
	var uLocal_301 = 10;
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
	var uLocal_372 = 20;
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
	var uLocal_473 = 20;
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
	var uLocal_574 = 30;
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
	var uLocal_755 = 5;
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
	var uLocal_786 = 7;
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
	var uLocal_836 = 5;
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
	var uLocal_862 = 3;
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
	var uLocal_878 = 15;
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
	var uLocal_973 = 10;
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
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 5;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 5;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	struct<8> Local_1079[2];
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 1092616192;
	var uLocal_1104 = 1101004800;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 3;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 16;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = -1;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 1000;
	var uLocal_1296 = 1000;
	var uLocal_1297 = 0;
	int iLocal_1298 = 0;
	var uLocal_1299 = 0;
	int iLocal_1300 = 0;
	struct<3> Local_1301 = { 0, 0, 0 } ;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	int iLocal_1311 = 0;
	var uLocal_1312 = 0;
	struct<2> Local_1313 = { 0, 0 } ;
	int iLocal_1315 = 0;
	var uLocal_1316 = 0;
	struct<2> Local_1317[3];
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	float fLocal_1328 = 0f;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	char cLocal_1334[24] = "";
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	int iLocal_1346 = 0;
	bool bLocal_1347 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_83 = joaat("s_m_m_armoured_01");
	iLocal_84 = joaat("boxville3");
	iLocal_85 = joaat("prop_idol_case_02");
	iLocal_86 = joaat("prop_yell_plastic_target");
	Local_87 = { 0f, 0.175f, 0f };
	Local_90 = { 0f, -3.6f, 0f };
	iLocal_93 = 0;
	fLocal_1328 = 0f;
	iLocal_1345 = -1;
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_255(5);
	}
	unk_0x3F95CDEE236B6AD7(1);
	func_234();
	while (true)
	{
		unk_0xE10447427D928F55("M_JewelStoreJobPrep2A", 0);
		if (bLocal_98)
		{
			func_232();
		}
		func_230(&uLocal_99);
		func_187();
		func_185();
		if (!bLocal_96)
		{
			func_181();
			func_180(&Local_1079);
			func_1();
		}
		unk_0x6423C366AD1DAA00(0.8f);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_93)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0xE72D045151F6CA70("JHP2A_STOP");
	unk_0x00400F14096FE01D();
	unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x52F20802944F8DCE();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55580)
	{
		Global_55580 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_69482.f_1 == 1) && func_5(Global_69482))
		{
		}
		else
		{
			Global_55578 = 1;
		}
	}
	if (Global_99155.f_7699 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_82110[iVar0 /*5*/];
		uVar2 = Global_69505.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_99155.f_7699)
			{
			}
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 4);
		unk_0x9956FB0E4B50ECB8(&Global_69484, 1);
		Global_69500 = uVar2;
		Global_69501 = unk_0x9D40BBF80D8F5E8A();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	
	unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
	unk_0x7E38E815EF844C74(joaat("boxville3"), 0);
	unk_0xFF62B65EADC282A7(joaat("s_m_m_armoured_01"), 0);
	if (func_19())
	{
		func_13(0);
	}
	iLocal_1330 = 0;
	Global_67893 = 0;
	if (bParam0)
	{
		unk_0x63EB72E192731928(1f);
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
		Global_67893 = 0;
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_1311))
	{
		if (bParam0)
		{
			unk_0x9E55BD45B84E7BDC(&iLocal_1311);
		}
		else
		{
			unk_0xC1F2137782A816E9(&iLocal_1311);
		}
	}
	if (unk_0xD51CFE69539DB6D8(Local_1301.f_0))
	{
		if (bParam0)
		{
			unk_0x2C9DDB5306DF417C(&Local_1301);
		}
		else
		{
			unk_0x506D42CB68AE4EA5(&Local_1301);
		}
	}
	if (unk_0xD51CFE69539DB6D8(Local_1313.f_0))
	{
		if (bParam0 && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			unk_0x9E55BD45B84E7BDC(&Local_1313);
		}
		else
		{
			unk_0xC1F2137782A816E9(&Local_1313);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1317.f_0)
	{
		if (unk_0xD51CFE69539DB6D8(Local_1317[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0xD4E454973E16D31B(&(Local_1317[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xD55D878601C46BA9(Local_1317[iVar0 /*2*/]))
				{
					unk_0x27B54A887EC71B05(Local_1317[iVar0 /*2*/], 1, 1);
				}
				unk_0x9083C015A6C271BD(&(Local_1317[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_1324))
	{
		if (bParam0)
		{
			unk_0xD4E454973E16D31B(&iLocal_1324);
		}
		else
		{
			if (unk_0xD55D878601C46BA9(iLocal_1324))
			{
				unk_0x27B54A887EC71B05(iLocal_1324, 1, 1);
			}
			unk_0x9083C015A6C271BD(&iLocal_1324);
		}
	}
	if (iLocal_1325 != 0)
	{
		unk_0x3AD14BFC20FCADDB(iLocal_1325, 0);
	}
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
		{
			unk_0xB7C0041C7DC55CD8(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1286, 0, 0);
	func_10();
	if (unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
	{
		unk_0xB7C0041C7DC55CD8(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_25278, iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_25278, iParam0);
	}
}

void func_10()
{
	Global_87213 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0xC36FD2B6875CA6EA(iParam2);
		unk_0x1E79BB0C6A422F63("FocusIn");
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x1B8E0930AB96444B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x356491C12DAD1A37(sVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x356491C12DAD1A37(uParam0->f_3))
	{
		if (func_12(uParam0->f_3))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
	if (!unk_0x356491C12DAD1A37(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
}

bool func_12(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_18();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_14(int iParam0)
{
	if (Global_14571)
	{
		func_16(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_15())
	{
		Global_14413.f_1 = 3;
	}
}

int func_15()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

int func_19()
{
	if (Global_14413.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_94 = 0;
		iLocal_95 = 0;
		iLocal_93 = iParam0;
	}
}

int func_21()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	var uVar13;
	
	Var0 = { 692.8256f, -1012.544f, 21.722f };
	Var3 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_95)
	{
		if (func_179(Local_1313.f_0))
		{
			if (unk_0x612EFDB1D15630E7(Local_1313.f_0) != 0)
			{
				Local_1313.f_1 = unk_0x612EFDB1D15630E7(Local_1313.f_0);
			}
			else
			{
				Local_1313.f_1 = func_178(Local_1313.f_0, 0, 0);
			}
			func_177("JHP2A_STEAL", 7500, 1);
			func_176("JHP2A_HLP2", 15000);
		}
		else if (unk_0x612EFDB1D15630E7(Local_1313.f_0) != 0)
		{
			unk_0xC1F0511236455569(1);
			iVar7 = unk_0x612EFDB1D15630E7(Local_1313.f_0);
			unk_0x5B62CAB9B0D6ABF1(&iVar7);
			unk_0xC1F0511236455569(0);
		}
		unk_0xE72D045151F6CA70("JHP2A_START");
		func_123(0f, 0f, 0f, 0f, 1, func_172());
		unk_0xD73158C5794398B4(5f, 5f, 4);
		iLocal_1340 = 0;
		iLocal_95 = 1;
		bLocal_1347 = true;
		iLocal_94 = 1;
	}
	if (iLocal_95)
	{
		func_122();
		switch (iLocal_94)
		{
			case 1:
				if ((((((iLocal_1298 == 0 && unk_0xD51CFE69539DB6D8(Local_1313.f_0)) && unk_0xC45A34912542C4EB(Local_1313.f_0, 0)) && unk_0xD51CFE69539DB6D8(Local_1301.f_0)) && !unk_0xAF437D7C802AB246(Local_1301.f_0)) && unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 0)) && func_119(&(Local_1079[0 /*8*/])))
				{
					func_98(&uLocal_1286, Local_1313.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1286, 0, 0);
				}
				if (iLocal_1298 == 3 || iLocal_1298 == 2)
				{
					unk_0xD73158C5794398B4(5f, 5f, 4);
					func_95(&uLocal_1096, 1, 0);
					if (unk_0x23741E39BEA32E66() && func_12("JHP2A_HLP2"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					if (!iLocal_1340)
					{
						func_177("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_94 = 2;
				}
				else if ((unk_0xD51CFE69539DB6D8(iLocal_1315) && unk_0xC45A34912542C4EB(iLocal_1315, 0)) && unk_0x3E29DD6D10980B6B(iLocal_1315, Local_1313.f_0))
				{
					if (unk_0xD11595488376CB53(Local_1313.f_1))
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						unk_0xC1F0511236455569(1);
						unk_0x5B62CAB9B0D6ABF1(&(Local_1313.f_1));
						unk_0xC1F0511236455569(0);
						func_94(705, 0);
					}
					func_93(&uLocal_1096, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1315, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0x22E902D6AF27E232(Local_1313.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						unk_0x1B9F8E5CCC384F1E(iLocal_1315, 5f, -1, 0);
						iLocal_94 = 101;
					}
				}
				else if (iLocal_1298 == 1)
				{
					func_95(&uLocal_1096, 1, 0);
					if (!unk_0xD11595488376CB53(Local_1317[0 /*2*/].f_1))
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						Local_1317[0 /*2*/].f_1 = func_92(Local_1317[0 /*2*/]);
						func_177("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1340 = 1;
						unk_0x4F6C6B452FA34B13(Local_1313.f_0, 0);
					}
				}
				else if (iLocal_1298 == 0)
				{
					if (unk_0xD11595488376CB53(Local_1313.f_1))
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						unk_0xC1F0511236455569(1);
						unk_0x5B62CAB9B0D6ABF1(&(Local_1313.f_1));
						unk_0xC1F0511236455569(0);
						func_94(705, 0);
					}
					if (func_90(&uLocal_1096, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1313.f_0, "JHP2A_RTNVAN", "", "", unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 0), 0, 1, -1))
					{
						iLocal_94 = 101;
					}
					if (unk_0xD11595488376CB53(uLocal_1096) && unk_0x2C9421ABC44104B7(uLocal_1096))
					{
						unk_0x1AD7485666C5160C(uLocal_1096, 0);
					}
				}
				break;
			
			case 101:
				if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 0))
				{
					iVar8 = Local_1313.f_0;
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_1315) && unk_0x3E29DD6D10980B6B(iLocal_1315, Local_1313.f_0))
				{
					iVar8 = iLocal_1315;
				}
				if (func_89(iVar8, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (func_7(87))
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						iLocal_94 = 1000;
					}
					else
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
						iLocal_94++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					unk_0x00400F14096FE01D();
					unk_0x4F6C6B452FA34B13(Local_1313.f_0, 0);
					unk_0x12F88FDE652A5758(Local_1313.f_0, 1);
					if (unk_0xD51CFE69539DB6D8(iLocal_1315))
					{
						unk_0x1B9F8E5CCC384F1E(iLocal_1315, 5f, 1, 0);
					}
					func_88(0, -1);
					if (unk_0xD51CFE69539DB6D8(Local_1317[0 /*2*/]))
					{
						unk_0xD4E454973E16D31B(&(Local_1317[0 /*2*/]));
					}
					if (unk_0xD51CFE69539DB6D8(Local_1317[1 /*2*/]))
					{
						unk_0xD4E454973E16D31B(&(Local_1317[1 /*2*/]));
					}
					if (unk_0xD51CFE69539DB6D8(Local_1317[2 /*2*/]))
					{
						unk_0xD4E454973E16D31B(&(Local_1317[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1317.f_0)
					{
						if (unk_0xD51CFE69539DB6D8(Local_1317[iVar6 /*2*/]) && !unk_0xD55D878601C46BA9(Local_1317[iVar6 /*2*/]))
						{
							if (unk_0xD11595488376CB53(Local_1313.f_1))
							{
								unk_0xC1F0511236455569(1);
								unk_0x5B62CAB9B0D6ABF1(&(Local_1313.f_1));
								unk_0xC1F0511236455569(0);
							}
							if (!unk_0xD11595488376CB53(Local_1317[iVar6 /*2*/].f_1))
							{
								Local_1317[iVar6 /*2*/].f_1 = func_92(Local_1317[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1317.f_0)
					{
						if (unk_0xD51CFE69539DB6D8(Local_1317[iVar6 /*2*/]) && !unk_0xD55D878601C46BA9(Local_1317[iVar6 /*2*/]))
						{
							if (!unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
							{
								bVar9 = func_87(Local_1317[iVar6 /*2*/]);
								if ((bVar9 && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), unk_0xBD306D8AFEF4E078(Local_1313.f_0, 0f, -3f, -0.5f), unk_0xBD306D8AFEF4E078(Local_1313.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar9 && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(Local_1317[iVar6 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1)))
								{
									unk_0xCC897563F1971D6A(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 1, 0, 0);
									unk_0xD4E454973E16D31B(&(Local_1317[iVar6 /*2*/]));
									unk_0x00400F14096FE01D();
									unk_0xCC18B241D266EF14(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					func_94(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1317.f_0)
					{
						if (unk_0xD11595488376CB53(Local_1317[iVar6 /*2*/].f_1))
						{
							unk_0x5B62CAB9B0D6ABF1(&(Local_1317[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_41(&uLocal_1096, Var3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar10, 1);
					if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0))
					{
						iVar12 = 1;
					}
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((iVar12 && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) && bLocal_1347))
					{
						unk_0x8CCCC48313B0F20F(0, 37, 1);
						unk_0x8CCCC48313B0F20F(0, 44, 1);
						if (!func_19())
						{
							func_13(1);
						}
						if (!unk_0xE47BD1403D4D87E3(unk_0xE7869D5D7816A9B6()))
						{
							if (!unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0) && !func_17(0))
							{
								if (iVar10 != joaat("weapon_briefcase"))
								{
									unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 1);
								}
							}
						}
					}
					if (bVar11)
					{
						if (iVar10 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_40("JHP2A_HLP1");
							}
						}
						if (unk_0x958B4351DD28B142(0, 51) && iVar10 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x1D208E4A4E1D4FFE(1);
							}
							uVar13 = unk_0x13C95D1F798B99FE(unk_0xE7869D5D7816A9B6(), 1);
							unk_0x100966E1EB5421AA(uVar13);
							unk_0xD73158C5794398B4(3f, 5f, 4);
							unk_0x3A8AEDC6680712C1(-1, "Drop_Case", iVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0x9083C015A6C271BD(&iVar13);
							unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
							unk_0xB7C0041C7DC55CD8(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"));
							func_88(0, -1);
							func_39(706);
							func_95(&uLocal_1096, 1, 0);
							if (func_7(87))
							{
								if (func_19())
								{
									func_13(0);
								}
								iLocal_94 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_19())
						{
							func_13(0);
						}
						if (unk_0x23741E39BEA32E66())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x1D208E4A4E1D4FFE(1);
							}
						}
					}
					bLocal_1347 = unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1);
				}
				break;
			
			case 1000:
				unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
				unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
				unk_0x4F6C6B452FA34B13(Local_1313.f_0, 0);
				unk_0x12F88FDE652A5758(Local_1313.f_0, 1);
				func_38(1);
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1121, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0xD73158C5794398B4(5f, 5f, 4);
						iLocal_94++;
					}
				}
				break;
			
			case 1001:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_94++;
				}
				break;
			
			case 1002:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			
			case 2000:
				unk_0xD73158C5794398B4(5f, 5f, 4);
				unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
				Global_67893 = 1;
				func_38(1);
				func_37(1, 0);
				iLocal_94++;
				break;
			
			case 2001:
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1121, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_94++;
					}
				}
				break;
			
			case 2002:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_94++;
				}
				break;
			
			case 2003:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xD39141689169EF06(unk_0xE7869D5D7816A9B6(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 157, 1);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88727[iVar0]))
		{
			if (!unk_0x76B2D234F1895632(Global_88727[iVar0]))
			{
				unk_0xD39141689169EF06(Global_88727[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x2EF7A8CB89D363F6(Global_88727[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35619 != 0 && Global_35619 != 3) && Global_35619 != 2)
	{
		unk_0x8C1CE4F676968E94(5);
		unk_0x63EB72E192731928(1f);
	}
}

int func_23()
{
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_34(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_25(sParam3, iParam4, bParam8);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_33();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_31();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_29();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_28())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_15())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_26();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_27()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_29()
{
	if (func_30(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_172();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

bool func_30(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_31()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_33()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_35()
{
	if (func_36())
	{
		return 0;
	}
	if (unk_0xA7E452C0F82F7C56())
	{
		if (unk_0x13ACC601BB29A690())
		{
			return 0;
		}
	}
	return 1;
}

int func_36()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x8CCCC48313B0F20F(0, 21, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 25, 1);
	unk_0x8CCCC48313B0F20F(0, 24, 1);
	unk_0x8CCCC48313B0F20F(0, 257, 1);
	unk_0x8CCCC48313B0F20F(0, 141, 1);
	unk_0x8CCCC48313B0F20F(0, 140, 1);
	unk_0x8CCCC48313B0F20F(0, 22, 1);
	unk_0x8CCCC48313B0F20F(0, 44, 1);
	unk_0x8CCCC48313B0F20F(0, 23, 1);
	unk_0x8CCCC48313B0F20F(0, 47, 1);
	unk_0x8CCCC48313B0F20F(0, 36, 1);
	if (bParam0)
	{
		unk_0x8CCCC48313B0F20F(0, 37, 1);
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (bParam1)
		{
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), 2f);
		}
		else
		{
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), 1f);
		}
		unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 102, 1);
	}
	if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
	}
}

void func_38(bool bParam0)
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xD39141689169EF06(unk_0xE7869D5D7816A9B6(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 157, 0);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xA3A83FA0784C86DE(unk_0xE7869D5D7816A9B6(), 0, 0);
		if (bParam0)
		{
			unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 0);
		}
		unk_0x60F73C5C71B102FE(unk_0xE7869D5D7816A9B6(), 0);
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
	}
	unk_0x8C1CE4F676968E94(0);
	unk_0x63EB72E192731928(0f);
}

void func_39(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55579 = 0;
	if (!Global_55803[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67673)
	{
		if (Global_67674[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67674[iVar1 /*9*/].f_1 = 1;
			Global_67674[iVar1 /*9*/].f_2 = 0f;
			if (Global_67674[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_40(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 3, 0, 0, 0, 0, sParam8, func_85(), func_85(), func_85(), func_85(), func_85(), 0, bParam9, func_85(), 0, 0, bParam10, iParam11, func_85(), func_85(), func_85(), bParam12, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_84(uParam0);
	func_83(uParam0);
	func_82();
	if (func_65(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_64(sParam20);
		func_64(sParam21);
		func_64(sParam22);
		func_64(sParam23);
		if (unk_0xDE185266FE919B68())
		{
			bVar1 = false;
			if (unk_0xC45A34912542C4EB(iParam18, 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam18, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
					if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 23))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 23);
					}
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_62(uParam0, iParam29))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
					if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
					}
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_64(sParam24);
				func_64(sParam27);
				func_64("MORE_SEATS");
				if (bParam26 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					if (unk_0xD11595488376CB53(uParam0->f_5))
					{
						unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
						func_64(sParam19);
					}
					if (unk_0xD11595488376CB53(*uParam0))
					{
						unk_0x5B62CAB9B0D6ABF1(uParam0);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 0);
						unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 1);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xD11595488376CB53(uParam0->f_5))
					{
						if (unk_0xD11595488376CB53(*uParam0))
						{
							unk_0x5B62CAB9B0D6ABF1(uParam0);
						}
						uParam0->f_5 = func_54(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xD65A9304AF8AC06F(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					else if (!func_52(Var3, unk_0x35EF1BE316B17AE9(uParam0->f_5), 0.1f, 0))
					{
						unk_0x4CF4101B43DF5CB0(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					if (!func_59(uParam0, 2))
					{
						if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 2))
						{
							func_57(uParam0, sParam19, 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar2], func_51()) || !func_49(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_46(uParam0))
							{
								func_64(sParam19);
								func_64(sParam24);
								func_64(sParam20);
								func_64(sParam21);
								func_64(sParam22);
								func_64(sParam23);
								func_64("LOSE_WANTED");
								func_64("MORE_SEATS");
								func_64(sParam27);
								func_95(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xD51CFE69539DB6D8(iParam18))
			{
				if ((bParam26 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 22)))
				{
					func_64(sParam24);
					func_64(sParam27);
					if (unk_0xD11595488376CB53(uParam0->f_5) || unk_0xD11595488376CB53(*uParam0))
					{
						unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
						unk_0x5B62CAB9B0D6ABF1(uParam0);
						func_64(sParam19);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 0);
						unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 1);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xC45A34912542C4EB(iParam18, 0))
					{
						if (!unk_0xD11595488376CB53(*uParam0))
						{
							if (unk_0xD11595488376CB53(uParam0->f_5))
							{
								unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
								func_64(sParam19);
							}
							*uParam0 = func_43(iParam18, 0, 0);
							unk_0x4808D91D69951AC2(*uParam0, 2);
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								func_53(*uParam0, uParam0);
							}
						}
						if (!func_59(uParam0, 2))
						{
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
								unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
							}
							else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
							{
								if (!unk_0x356491C12DAD1A37(sParam27))
								{
									if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
									{
										func_57(uParam0, sParam27, 0);
										unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam24, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 23))
								{
									if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
									{
										func_55(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xD11595488376CB53(uParam0->f_5))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
					func_64(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_59(uParam0, 2))
						{
							if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x0ADD324BC46177EF(0, iVar8);
									if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar9]))
									{
										func_55(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_57(uParam0, "MORE_SEATS", 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
								unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
								{
									func_57(uParam0, sParam27, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_59(uParam0, 2))
					{
						if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
						{
							func_57(uParam0, sParam24, 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
							unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
						}
						else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
						{
							if (!unk_0x356491C12DAD1A37(sParam27))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam27, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								func_57(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
		{
			unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
		}
		func_64(sParam19);
		func_64(sParam24);
		func_64(sParam27);
		func_64(sParam24);
		func_64("LOSE_WANTED");
		if (unk_0xD11595488376CB53(uParam0->f_5))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
		}
		if (unk_0xD11595488376CB53(*uParam0))
		{
			unk_0x5B62CAB9B0D6ABF1(uParam0);
		}
	}
	unk_0x73817D396768E4C6(&(uParam0->f_13), 11);
	unk_0x73817D396768E4C6(&(uParam0->f_13), 12);
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_45(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_45(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_45(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_46(var uParam0)
{
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 12))
	{
		if (func_48(unk_0xE7869D5D7816A9B6()))
		{
			if (func_47(1, 0, 1) || unk_0xB519E5386FBF69E5(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_47(1, 0, 1) || unk_0xB519E5386FBF69E5(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		fVar0 = unk_0xD4F0FC8FFEDE152B(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) && iParam1)
		{
			if (func_50(unk_0xE7869D5D7816A9B6(), iParam0))
			{
				unk_0x03E55D89BC1D3144(func_51(), 50f);
				return 1;
			}
		}
		else if (unk_0xCA9354733F0AE57E(iParam0, func_51()))
		{
			unk_0x03E55D89BC1D3144(func_51(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x471E33531AEA977D(iParam0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(iParam0, 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				if (!unk_0xAF437D7C802AB246(iParam1))
				{
					if (unk_0xF50745B40235B5B8(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

var func_51()
{
	return unk_0xF6138D85451616EC(unk_0xBFAE5F9DEC53DAE2());
}

int func_52(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	if (unk_0xD11595488376CB53(uParam0))
	{
		if (unk_0xD11595488376CB53(uParam1->f_6))
		{
			unk_0x1AD7485666C5160C(uParam1->f_6, 0);
		}
		unk_0x680E7900A7AC1C49(0);
		unk_0x5288DF8B264BDD67();
		uParam1->f_6 = uParam0;
		unk_0x1AD7485666C5160C(uParam0, 1);
	}
}

var func_54(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_45(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

void func_55(int iParam0, char* sParam1, int iParam2)
{
	unk_0x489E3B00AFB0758C(iParam0, sParam1, func_56(iParam2), 1);
}

int func_56(int iParam0)
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

void func_57(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x356491C12DAD1A37(sParam1))
		{
			if (!unk_0x04E7E853E31F41A3(sParam1, ""))
			{
				func_177(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9D40BBF80D8F5E8A();
}

int func_58(var uParam0)
{
	if (!unk_0xAF437D7C802AB246(uParam0->f_16))
	{
		if (unk_0x2AA9423D1F896887(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xA7E452C0F82F7C56())
	{
		if (unk_0x13ACC601BB29A690())
		{
			return 1;
		}
		if (func_61(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xA7E452C0F82F7C56())
	{
		if (func_36() && !func_60())
		{
			return 1;
		}
	}
	return 0;
}

int func_60()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9D40BBF80D8F5E8A();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (func_63(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x25ECA1DD55F6CB7F(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x8AEBD01597B5BA5E(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x8AEBD01597B5BA5E(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		unk_0x621ABFDE5A901516(sParam0);
	}
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
			if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 28))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29) && unk_0xB519E5386FBF69E5(uParam0->f_13, 28))
		{
			if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
			{
				unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x73817D396768E4C6(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD51CFE69539DB6D8(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 50f, 0, iVar25);
			if (unk_0xC45A34912542C4EB(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xC45A34912542C4EB(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
				{
					if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0) || !bParam17)
					{
						if (func_63(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
								{
									unk_0x97A05AC1E676667E(uParam0->f_17[iVar0], 1f);
									if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
									{
										unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
									}
									if (unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470) == 7 && !func_81(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0]))
										{
											unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 1);
											unk_0x65682335D54DEA1C(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0x73817D396768E4C6(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					if (!unk_0xF3140D055686CF79(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
					}
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_51());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 26))
	{
		if ((!func_78(uParam0) && unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6())) && !unk_0xD51CFE69539DB6D8(iParam10))
		{
			iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar13, 0))
			{
				if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_59(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x0ADD324BC46177EF(0, iVar26);
						if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar27]))
						{
							func_55(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_57(uParam0, "MORE_SEATS", 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x73817D396768E4C6(&(uParam0->f_13), 13);
			func_64("MORE_SEATS");
		}
		if (!unk_0xD51CFE69539DB6D8(iParam10))
		{
			if ((!unk_0xAF437D7C802AB246(uParam0->f_17[0]) || !unk_0xAF437D7C802AB246(uParam0->f_17[1])) || !unk_0xAF437D7C802AB246(uParam0->f_17[2]))
			{
				if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 31))
				{
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) && !func_59(uParam0, 2))
					{
						iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
						if (func_77(iVar13, uParam0))
						{
							func_57(uParam0, "CMN_VEHSUIT", 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x73817D396768E4C6(&(uParam0->f_13), 31);
					func_64("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xC45A34912542C4EB(iParam10, 0))
		{
			if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iParam10))
			{
				if (unk_0x958B4351DD28B142(0, 75))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
			{
				unk_0x73817D396768E4C6(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
					{
						unk_0xD03433F048B6A79A(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xD03433F048B6A79A(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
					{
						iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
						if (unk_0xC45A34912542C4EB(iVar13, 0))
						{
							if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
							{
								if (!func_78(uParam0) && unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
								{
									if (!func_76(uParam0->f_17[iVar0]))
									{
										unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x76B2D234F1895632(iVar13))
						{
							if (unk_0xF50745B40235B5B8(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xA7D2A868253353BE(iVar13) && !unk_0x0E9BAAAE8317091B(iVar13))
								{
									Var28 = { unk_0x1141852D07400777(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
					{
						if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xF0295FF51F2D7803(uParam0->f_17[iVar0], 0);
							if (!unk_0x76B2D234F1895632(iVar13))
							{
								if (unk_0xC45A34912542C4EB(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iVar13))
										{
											if (unk_0xD4F0FC8FFEDE152B(iVar13) > 5f)
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
									{
										iVar31 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
									}
									if (unk_0xC45A34912542C4EB(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD4F0FC8FFEDE152B(iVar13) > 5f)
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
					{
						iVar32 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
						if (unk_0xD51CFE69539DB6D8(iVar32))
						{
							if (func_63(iVar32, uParam0, 0))
							{
								if (func_75(iVar0, uParam0) || !unk_0xB519E5386FBF69E5(uParam0->f_13, 27))
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], iVar0);
									func_74(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_75(iVar0, uParam0))
							{
								if (unk_0x1B2DC87EFB36DF80(iVar32) == joaat("sentinel2"))
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], 2);
								}
								func_73(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()) && !func_72(uParam0->f_17[iVar0], iParam10)) && !func_71(uParam0->f_17[iVar0], iParam10))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
							{
								if (((!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0xA49E19CA305DE808(uParam0->f_17[iVar0])) && !unk_0xF3140D055686CF79(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
									}
									unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_51());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9D40BBF80D8F5E8A();
								uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
								unk_0x4808D91D69951AC2(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_53(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
					{
						if (((func_49(uParam0->f_17[iVar0], 1) || func_72(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xC45A34912542C4EB(iParam10, 0) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0)))
						{
							if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
							{
								unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
								func_64(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_53(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xC45A34912542C4EB(iParam10, 0))
					{
						if (!unk_0xF50745B40235B5B8(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 11)) && !((bParam17 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0)))
							{
								if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
								{
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_49(uParam0->f_17[iVar0], 1))
										{
											if (func_48(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xCD7A5BCC47D00FB2(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
									{
										if ((((!unk_0xA49E19CA305DE808(uParam0->f_17[iVar0]) && !unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0])) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0xF3140D055686CF79(uParam0->f_17[iVar0])) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
										{
											unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_81(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xA49E19CA305DE808(uParam0->f_17[iVar0]) && !unk_0xA49E19CA305DE808(unk_0xE7869D5D7816A9B6())) && !func_70(uParam0->f_17[iVar0], 2f)) && !unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0])) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
										{
											unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 1);
											if (unk_0xB519E5386FBF69E5(uParam0->f_13, 10))
											{
												unk_0x97A05AC1E676667E(uParam0->f_17[iVar0], 1f);
											}
											unk_0x65682335D54DEA1C(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x97432097EDCCE1DF(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
										unk_0x4808D91D69951AC2(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
							{
								if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
										}
										unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 0);
										unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_51());
									}
								}
							}
						}
						else if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iParam10))
						{
							if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
								{
									unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_51());
								}
							}
							else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
							{
								unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
						{
							unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_59(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
						{
							if (func_76(uParam0->f_17[iVar0]) || unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], unk_0xE7869D5D7816A9B6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
					{
						if (!unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], unk_0xE7869D5D7816A9B6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_76(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9D40BBF80D8F5E8A();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 5))
							{
								func_57(uParam0, sParam7, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_69(iVar0, uParam0))
									{
										if (!unk_0x356491C12DAD1A37(uVar19[iVar0]))
										{
											if (!unk_0x04E7E853E31F41A3(uVar19[iVar0], ""))
											{
												func_67(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_66(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_69(iVar0, uParam0))
										{
											func_57(uParam0, uVar15[iVar0], 0);
											func_66(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x73817D396768E4C6(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_64("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 16);
			break;
	}
}

void func_67(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x356491C12DAD1A37(sParam1))
		{
			if (!unk_0x04E7E853E31F41A3(sParam1, ""))
			{
				func_68(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9D40BBF80D8F5E8A();
}

void func_68(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0x9359E7CC54335EB9(uParam1);
	unk_0xE45B7EE472DD7F7F(iParam2, 1);
}

int func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 14);
		
		case 1:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 15);
		
		case 2:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_70(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(iParam0, 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(iParam0, 0);
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0xD4F0FC8FFEDE152B(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (!unk_0xCA9354733F0AE57E(iParam0, func_51()))
		{
			iVar0 = unk_0x811668789F0F4837(iParam0);
			if (unk_0xC45A34912542C4EB(iParam1, 0))
			{
				if (unk_0x0E6C083BC5101C8B(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(iParam1))
		{
			if (unk_0xC45A34912542C4EB(iParam1, 0))
			{
				if (unk_0xF50745B40235B5B8(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 19);
			break;
	}
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 19);
			break;
	}
}

int func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 17);
		
		case 1:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 18);
		
		case 2:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		iVar0 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			if (!unk_0xAF437D7C802AB246(iParam0))
			{
				iVar1 = unk_0x03291915DC767232(iParam0);
				if (unk_0xC45A34912542C4EB(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x0E6C083BC5101C8B(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_77(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus") || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xAF437D7C802AB246(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xBD6B21D725712BDE(iParam0, 0);
			if (!unk_0xAF437D7C802AB246(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xBD6B21D725712BDE(iParam0, 1);
			if (!unk_0xAF437D7C802AB246(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xBD6B21D725712BDE(iParam0, 2);
			if (!unk_0xAF437D7C802AB246(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(var uParam0)
{
	int iVar0;
	
	if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (func_63(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam1))
	{
		if (unk_0x471E33531AEA977D(iParam1))
		{
			iVar0 = unk_0xF0295FF51F2D7803(iParam1, 0);
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xC45A34912542C4EB(iVar0, 0))
				{
					if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iVar0))
					{
						if (func_78(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
				if (unk_0xD51CFE69539DB6D8(iVar0))
				{
					if (func_63(iVar0, uParam0, 0))
					{
						if (unk_0xC45A34912542C4EB(iVar0, 0))
						{
							if (func_80(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	float fVar0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		fVar0 = unk_0xD4F0FC8FFEDE152B(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			iVar0 = unk_0x03291915DC767232(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		iVar0 = unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6());
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			iVar1 = unk_0xBD6B21D725712BDE(iVar0, 0);
			if (!unk_0xAF437D7C802AB246(iVar1))
			{
				if (iVar1 != unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x28D33422BA6C479D(iVar1))
					{
						if (!unk_0x7E7AFACA1C744410(iVar1, unk_0xE7869D5D7816A9B6()))
						{
							unk_0x6A8BCE61F660B8D0(iVar1, unk_0xE7869D5D7816A9B6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_83(var uParam0)
{
	int iVar0;
	
	if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 25))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 32, 0);
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 305, 1);
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 268, 1);
					unk_0x97432097EDCCE1DF(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 25);
	}
}

void func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
		{
			if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
			{
				if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
				{
					unk_0xA6ED3077A967AC63(uParam0->f_17[iVar0], 0);
					unk_0xD9404A1491ECECC4(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
			{
				unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 0);
				unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 0);
			}
		}
	}
}

int func_85()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_86()
{
	struct<3> Var0;
	
	return Var0;
}

int func_87(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x76B2D234F1895632(Local_1313.f_0))
	{
		return 0;
	}
	Var0 = { unk_0xF7D483ACEC2C4092(unk_0x1141852D07400777(iParam0, 1), unk_0xBD306D8AFEF4E078(Local_1313.f_0, Local_87), unk_0xBD306D8AFEF4E078(Local_1313.f_0, Local_90), 0) };
	if (unk_0xB7A628320EFF8E47(Var0, unk_0xBD306D8AFEF4E078(Local_1313.f_0, Local_87)) <= unk_0xB7A628320EFF8E47(unk_0xBD306D8AFEF4E078(Local_1313.f_0, Local_90), unk_0xBD306D8AFEF4E078(Local_1313.f_0, Local_87)))
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55586)
	{
	}
	Global_55586 = 0;
	if (bParam0)
	{
		Global_55587 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_55803[Global_67674[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67674[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_67674[iVar0 /*9*/] > 0)
			{
				if (Global_67674[iVar0 /*9*/] == iParam1)
				{
					Global_67674[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_89(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8CCCC48313B0F20F(0, 71, 1);
	unk_0x8CCCC48313B0F20F(0, 72, 1);
	unk_0x8CCCC48313B0F20F(0, 76, 1);
	unk_0x8CCCC48313B0F20F(0, 73, 1);
	unk_0x8CCCC48313B0F20F(0, 59, 1);
	unk_0x8CCCC48313B0F20F(0, 60, 1);
	if (bParam5)
	{
		unk_0x8CCCC48313B0F20F(0, 75, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 74, 1);
	unk_0x8CCCC48313B0F20F(0, 86, 1);
	unk_0x8CCCC48313B0F20F(0, 81, 1);
	unk_0x8CCCC48313B0F20F(0, 82, 1);
	unk_0x8CCCC48313B0F20F(0, 138, 1);
	unk_0x8CCCC48313B0F20F(0, 136, 1);
	unk_0x8CCCC48313B0F20F(0, 114, 1);
	unk_0x8CCCC48313B0F20F(0, 107, 1);
	unk_0x8CCCC48313B0F20F(0, 110, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 87, 1);
	unk_0x8CCCC48313B0F20F(0, 88, 1);
	unk_0x8CCCC48313B0F20F(0, 113, 1);
	unk_0x8CCCC48313B0F20F(0, 115, 1);
	unk_0x8CCCC48313B0F20F(0, 116, 1);
	unk_0x8CCCC48313B0F20F(0, 117, 1);
	unk_0x8CCCC48313B0F20F(0, 118, 1);
	unk_0x8CCCC48313B0F20F(0, 119, 1);
	unk_0x8CCCC48313B0F20F(0, 131, 1);
	unk_0x8CCCC48313B0F20F(0, 132, 1);
	unk_0x8CCCC48313B0F20F(0, 123, 1);
	unk_0x8CCCC48313B0F20F(0, 126, 1);
	unk_0x8CCCC48313B0F20F(0, 129, 1);
	unk_0x8CCCC48313B0F20F(0, 130, 1);
	unk_0x8CCCC48313B0F20F(0, 133, 1);
	unk_0x8CCCC48313B0F20F(0, 134, 1);
	unk_0x01E20DCCA2C958A3();
	if ((unk_0x9D40BBF80D8F5E8A() - Global_29) > 500)
	{
		unk_0x1B9F8E5CCC384F1E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9D40BBF80D8F5E8A();
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x7F38A542899D217A(unk_0xD4F0FC8FFEDE152B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_42(uParam0, Param1, func_91(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_85(), func_85(), func_85(), func_85(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_85(), func_85(), func_85(), 1, iParam10);
}

Vector3 func_91()
{
	return 0f, 0f, 2f;
}

int func_92(int iParam0)
{
	return func_44(iParam0, 1, 0);
}

int func_93(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_85(), func_85(), func_85(), func_85(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_94(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55588 = iParam0;
	if (!Global_55586)
	{
		Global_55586 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_67674[iVar0 /*9*/] == iParam0)
			{
				Global_67674[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_97(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
		}
		func_96(iVar0, uParam0);
		func_74(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x73817D396768E4C6(&(uParam0->f_13), iVar0);
			unk_0x73817D396768E4C6(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0x5B62CAB9B0D6ABF1(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
		{
			unk_0xA6ED3077A967AC63(uParam0->f_17[iVar0], 1);
			unk_0xD9404A1491ECECC4(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 32, 1);
				unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_51()) && uParam0->f_17[iVar0] != unk_0xE7869D5D7816A9B6())
				{
					unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29))
			{
				unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 1);
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (bParam2)
		{
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_96(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 16);
			break;
	}
}

void func_97(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_5))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
	}
}

void func_98(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_99(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_99(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_100(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_100(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_101(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_101(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xA16CC47187A94189())
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x356491C12DAD1A37(iVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_12(iVar0))
	{
		func_118();
	}
	if (func_117(iParam1) && unk_0xB756E8D139BDE124(iParam1))
	{
		iVar1 = 0;
		if (unk_0x41B17741CACC905E(iParam1))
		{
			unk_0xBF4FEE4E9AAA57D3(unk_0x10E754B2E0DF2A70(iParam1));
			unk_0x85E578E9EDFAA283(unk_0x10E754B2E0DF2A70(iParam1), 1);
			if (unk_0xB7FBD067DCB72466(unk_0x10E754B2E0DF2A70(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8C1ED5BB2888BA25(iParam1))
		{
			unk_0x62580637CC8C1B3F(unk_0xE59FAD6B5E1AA42D(iParam1));
			if (unk_0xF4CAF05E946FAF1C(unk_0xE59FAD6B5E1AA42D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam1))
		{
			unk_0xD033824AEAC999BE(unk_0x1652DF7B39293553(iParam1));
			if (unk_0x1B93A6975F1736AC(unk_0x1652DF7B39293553(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xA16CC47187A94189())
		{
			if (func_112(uParam0, bParam7, bParam9, 0))
			{
				func_108(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_105(iVar0))
				{
					if ((unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0)) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if ((iVar1 && !unk_0x23741E39BEA32E66()) && uParam8)
						{
							if (!func_12(iVar0))
							{
								func_176(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
								{
									func_104(1);
								}
							}
						}
					}
				}
			}
			else if (func_105(iVar0))
			{
				if (unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0))
				{
					if (((unk_0xD525F9D50CBB6A5D(iParam1) && iVar1) && !unk_0x23741E39BEA32E66()) && uParam8)
					{
						if (!func_12(iVar0))
						{
							func_176(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
							{
								func_104(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x356491C12DAD1A37(sParam5))
			{
				if (func_12(sParam5))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
			{
				if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_112(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_103(uParam0))
				{
					func_102(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_102(var uParam0)
{
	if (func_117(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0x1B8E0930AB96444B(1);
		unk_0xC36FD2B6875CA6EA(0);
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		unk_0x1E79BB0C6A422F63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_103(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9D40BBF80D8F5E8A()
		{
			return 1;
		}
	}
	return 0;
}

int func_104(bool bParam0)
{
	switch (Global_35619)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_99155.f_8663.f_100++;
			}
			return Global_99155.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_99155.f_8663.f_101++;
			}
			return Global_99155.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_99155.f_8663.f_102++;
			}
			return Global_99155.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_105(char* sParam0)
{
	if (!func_106(1, 1, 0))
	{
		if ((!unk_0xF6917DE0E003509D(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		return 0;
	}
	switch (Global_35619)
	{
		case 0:
		case 3:
			if (func_104(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF478777FFCC96862())
	{
		return 0;
	}
	if (func_17(0))
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (unk_0x29C4AA4F29B1E539())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52760)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
		{
			if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
			{
				return 0;
			}
			if (unk_0x55B32F062B30EC90())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_107()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

void func_108(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x76B2D234F1895632(iParam1))
	{
		func_11(uParam0, 0, 0);
	}
	if (func_111(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x41B17741CACC905E(iParam1))
		{
			uVar0 = unk_0x10E754B2E0DF2A70(iParam1);
			if (!unk_0x51374A0BB2871E6E(uVar0, 0))
			{
				if (unk_0x1415CDB1128C3FBC(iVar0))
				{
					if (!func_109())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0C2FCAD5220719B8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x1B8E0930AB96444B(0);
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
	unk_0xA109811CF2C55706(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iParam1, -1, iVar3, iVar4);
	unk_0xCD0E4FEA8B60FCA3("FocusIn", 0, 0);
	unk_0x91523366B2FDCD40("HINT_CAM_SCENE");
	unk_0xCC18B241D266EF14(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_109()
{
	return func_110(unk_0x3F80C6638E3A1A90());
}

int func_110(var uParam0)
{
	if (unk_0x1B2DC87EFB36DF80(unk_0x91B73D905EA38F6B(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_111(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_112(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_103(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (!func_116(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_115(bParam1, bParam2, bParam3) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (func_114(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_103(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_106(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_118();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				unk_0x1B8E0930AB96444B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				unk_0x1B8E0930AB96444B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0x8C1ED5BB2888BA25(iParam0))
		{
			if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x41B17741CACC905E(iParam0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_118()
{
	unk_0x9956FB0E4B50ECB8(&Global_2284, 4);
}

int func_119(var uParam0)
{
	if (func_121(uParam0) && !func_120(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_121(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	int iVar0;
	
	if (iLocal_1298 == 0 || iLocal_1298 == 1)
	{
		if (((unk_0x76B2D234F1895632(Local_1313.f_0) || (unk_0xD51CFE69539DB6D8(Local_1317[0 /*2*/]) && !unk_0xD55D878601C46BA9(Local_1317[0 /*2*/]))) || (unk_0xD51CFE69539DB6D8(Local_1317[1 /*2*/]) && !unk_0xD55D878601C46BA9(Local_1317[1 /*2*/]))) || (unk_0xD51CFE69539DB6D8(Local_1317[2 /*2*/]) && !unk_0xD55D878601C46BA9(Local_1317[2 /*2*/])))
		{
			iLocal_1298 = 2;
		}
	}
	if (iLocal_1298 == 2)
	{
		if ((((!unk_0xD51CFE69539DB6D8(Local_1313.f_0) || !unk_0xC45A34912542C4EB(Local_1313.f_0, 0)) || (unk_0xD51CFE69539DB6D8(Local_1317[0 /*2*/]) && !func_87(Local_1317[0 /*2*/]))) || (unk_0xD51CFE69539DB6D8(Local_1317[1 /*2*/]) && !func_87(Local_1317[1 /*2*/]))) || (unk_0xD51CFE69539DB6D8(Local_1317[2 /*2*/]) && !func_87(Local_1317[2 /*2*/])))
		{
			iLocal_1298 = 3;
		}
	}
	if (iLocal_1298 == 0)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("towtruck") || unk_0x1B2DC87EFB36DF80(iVar0) == joaat("towtruck2"))
			{
				if (unk_0xC45A34912542C4EB(iVar0, 0))
				{
					if (unk_0x3E29DD6D10980B6B(iVar0, Local_1313.f_0))
					{
						iLocal_1315 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1298 == 0)
	{
		if (!unk_0xC45A34912542C4EB(Local_1313.f_0, 0))
		{
			iLocal_1298 = 1;
		}
	}
	if (iLocal_1298 == 1 && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_123(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD51CFE69539DB6D8(Global_92815.f_4))
	{
		if (unk_0xC45A34912542C4EB(Global_92815.f_4, 0))
		{
			if (func_171(24) != Global_92815.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_168(unk_0x1141852D07400777(Global_92815.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_124(Global_92815.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_124(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[25]) && unk_0xC45A34912542C4EB(Global_68105.f_484[25], 0))
			{
				if (Global_68105.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xF54ECC20AEF6A194(iParam0) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus")) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_167(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_163(iParam0, &Var0);
		if (func_111(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x1141852D07400777(iParam0, 1) };
			uParam4 = unk_0x2CAFFCD9F5E16D2F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) != joaat("vehicle_gen_controller"))
			{
				Global_69093 = unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892());
			}
		}
		func_156(iParam5, &Var0, Param1, uParam4, func_162(iParam0));
		func_125(iParam5, iParam0, 0);
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_152(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 12) && !unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68105.f_555[0 /*21*/].f_4 != unk_0x1B2DC87EFB36DF80(iParam1))
		{
			return;
		}
	}
	if (Global_69012 != -1 && Global_69012 != iParam0)
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			if (!unk_0x28D33422BA6C479D(iParam1))
			{
				unk_0x20BB4B94CC6DDC9A(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99155.f_18731.f_4801 = func_141();
			}
			if (iParam1 != Global_68105.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_171(iParam0);
					if ((unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0)) && iParam1 != iVar0)
					{
						func_126(iVar0, 145);
					}
				}
				Global_69011 = iParam1;
				Global_69012 = iParam0;
				Global_69013 = iParam2;
			}
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_127(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xD51CFE69539DB6D8(iVar0))
		{
			iVar0 = unk_0xFC6351163F828F49(iParam0, -1);
		}
		if (unk_0xD51CFE69539DB6D8(iVar0) && !unk_0xAF437D7C802AB246(iVar0))
		{
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99155.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99155.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99155.f_18731.f_5590 = iParam1;
	Global_69010 = iParam0;
	Global_99155.f_18731.f_5588 = 1;
	func_163(iParam0, &(Global_99155.f_18731.f_5510));
}

int func_127(int iParam0)
{
	if ((((((((((!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0)) || func_139(iParam0, 0, 0)) || func_139(iParam0, 1, 0)) || func_139(iParam0, 2, 0)) || func_162(iParam0) != 145) || func_138(iParam0)) || func_137(iParam0)) || func_136(iParam0)) || func_135(iParam0)) || !func_128(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		if (func_137(iParam0))
		{
		}
		if (func_137(iParam0))
		{
		}
		if (func_139(iParam0, 0, 0))
		{
		}
		if (func_139(iParam0, 1, 0))
		{
		}
		if (func_139(iParam0, 2, 0))
		{
		}
		if (func_162(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0))
	{
		return 0;
	}
	if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0))
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

int func_129(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("buffalo3") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("gauntlet2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_134())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x49371C7B668CA46F())
		{
			if (unk_0x373784C902F4F74E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCA0E36ABF4510784(Var1.f_0))
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
		if ((((!func_133() && !func_132()) && !func_131()) && !func_130()) && !func_134())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xFD563D1BF81A2CB8() || unk_0xA78EA29AC2FFBADE()) || unk_0x7ECD3D8283875DD1())
		{
		}
		else if (!func_131())
		{
			return 0;
		}
	}
	return 1;
}

int func_130()
{
	return 0;
}

int func_131()
{
	return 1;
}

int func_132()
{
	return 1;
}

int func_133()
{
	if (unk_0x3442D8DA379C5187(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					uVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&uVar0, 0);
					unk_0x305E571F148D27EA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	sVar1 = unk_0xC2421167AF5744AC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x04E7E853E31F41A3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88719[iVar0]))
		{
			if (Global_88719[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (Global_88689[iVar0] == iParam0 && unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == unk_0x1B2DC87EFB36DF80(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[24]))
	{
		if (iParam0 == Global_68105.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68105.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_140(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_141()
{
	var uVar0;
	
	func_151(&uVar0, unk_0x0CE219089BDB83C5());
	func_150(&uVar0, unk_0x1B24A2CA27443F7B());
	func_149(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_144(&uVar0, unk_0x2DA3502053F9E535());
	func_143(&uVar0, unk_0xEB4EA596232DA76E());
	func_142(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_145(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_145(int iParam0, int iParam1)
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

var func_146(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_147(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(var uParam0)
{
	return uParam0 & 15;
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_152(var uParam0, int iParam1)
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
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
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
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99155.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_111(Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99155.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99155.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 19))
	{
		if (!func_111(Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB519E5386FBF69E5(uParam0->f_9, 20))
	{
		if (!func_111(Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_153(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_155(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_154(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_154(int iParam0, var uParam1, int iParam2)
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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

bool func_155(int iParam0)
{
	return iParam0 < 3;
}

void func_156(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_152(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
		{
			func_161(iParam0);
			func_160(uParam1, &(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 11))
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_157(iParam0, 1);
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_159(iParam0, 0))
		{
			func_158(iParam0, 1, 0);
			func_158(iParam0, 2, 0);
			func_158(iParam0, 3, 0);
			func_158(iParam0, 4, 0);
			func_158(iParam0, 0, 1);
			Global_68105[iParam0] = 1;
		}
	}
	else
	{
		func_158(iParam0, 0, 0);
	}
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_18731[iParam0]), iParam1);
	}
}

bool func_159(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_18731[iParam0], iParam1);
}

void func_160(var uParam0, var uParam1)
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

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_152(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
			unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
			Global_68105.f_139[iParam0] = 0;
		}
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			func_157(iParam0, 0);
		}
	}
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_163(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_166(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_165(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_164(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
		}
	}
}

int func_164(int iParam0)
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

int func_165(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_166(var uParam0)
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

void func_167(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_161(iParam0);
	func_157(iParam0, 0);
}

int func_168(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_169(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_169(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_86396[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86396[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_170(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF18329472591CFE6(Param0, Global_86396[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_170(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_99155.f_5843[iParam0], 0);
}

int func_171(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68105.f_139[iParam0];
}

int func_172()
{
	func_173();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_173()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_175(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_174(unk_0xE7869D5D7816A9B6());
			if (func_155(iVar0) && (!func_30(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_155(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_155(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_176(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_177(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 1);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_179(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		switch (unk_0xEFB1DE83A1007C1B(iParam0))
		{
			case 1:
				if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x76B2D234F1895632(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x9D40BBF80D8F5E8A() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_181()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!iLocal_1346)
		{
			func_184(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), -1);
			func_183(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), -1);
			iLocal_1346 = 1;
		}
	}
	else if (iLocal_1346)
	{
		func_183(0, -1);
		func_184(0, -1);
		iLocal_1346 = 0;
	}
	if (!iLocal_1344)
	{
		if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
			if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1))
			{
				unk_0xD079B121AAC8BC2A("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1344 = 1;
			}
			else if (unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
			{
				unk_0xD079B121AAC8BC2A("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1344 = 1;
			}
		}
	}
	if (iLocal_93 == 0)
	{
		switch (iLocal_1298)
		{
			case 0:
				if ((unk_0xD51CFE69539DB6D8(Local_1301.f_0) && !unk_0xAF437D7C802AB246(Local_1301.f_0)) && func_119(&(Local_1079[0 /*8*/])))
				{
					if (Local_1079[0 /*8*/].f_1 == 1)
					{
						if (func_182(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1) > 500f)
						{
							func_255(1);
						}
					}
					else if (Local_1079[0 /*8*/].f_1 == 4)
					{
						if (func_182(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1) > 250f)
						{
							func_255(1);
						}
					}
					else if (func_182(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1) > 250f)
					{
						func_255(2);
					}
				}
				else if (func_182(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1) > 250f)
				{
					func_255(2);
				}
				break;
			
			case 1:
				if (func_182(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1) > 250f)
				{
					func_255(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0xD51CFE69539DB6D8(Local_1317[0 /*2*/]) && func_182(unk_0xE7869D5D7816A9B6(), Local_1317[0 /*2*/], 1) > 250f) && unk_0xD51CFE69539DB6D8(Local_1317[1 /*2*/])) && func_182(unk_0xE7869D5D7816A9B6(), Local_1317[1 /*2*/], 1) > 250f) && unk_0xD51CFE69539DB6D8(Local_1317[2 /*2*/])) && func_182(unk_0xE7869D5D7816A9B6(), Local_1317[2 /*2*/], 1) > 250f)
					{
						func_255(3);
					}
				}
				break;
			}
	}
	if (unk_0xD51CFE69539DB6D8(Local_1313.f_0))
	{
		if ((unk_0xA7D2A868253353BE(Local_1313.f_0) && !unk_0xC45A34912542C4EB(Local_1313.f_0, 0)) && !unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
		{
			func_255(4);
		}
	}
}

float func_182(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

void func_183(int iParam0, int iParam1)
{
	Global_55589 = iParam0;
	Global_55590 = iParam1;
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55591 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67673)
	{
		if (iParam1 == -1 || Global_67674[iVar0 /*9*/] == iParam1)
		{
			if (Global_67674[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67674[iVar0 /*9*/].f_6 = iParam0;
				Global_67674[iVar0 /*9*/].f_7 = 1;
				Global_67674[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_185()
{
	if (unk_0xD51CFE69539DB6D8(Local_1301.f_0))
	{
		if (!unk_0x51374A0BB2871E6E(Local_1301.f_0, 0))
		{
			func_186(Local_1301.f_0, &(Local_1301.f_2), -1, 0, 0, 0, -1082130432, 0, -1);
		}
	}
	if (unk_0xD51CFE69539DB6D8(Local_1313.f_0))
	{
		if (((!func_179(Local_1313.f_0) && unk_0x76B2D234F1895632(Local_1313.f_0)) && iLocal_1341) && func_182(Local_1313.f_0, unk_0xE7869D5D7816A9B6(), 1) > 200f)
		{
			unk_0xC1F2137782A816E9(&Local_1313);
		}
	}
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBFAE5F9DEC53DAE2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xAF437D7C802AB246(uParam0))
	{
		if (!unk_0x0B25DF5D53C8A538(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x566A0CB935F3EEA8(iParam0, 1);
			}
			else
			{
				unk_0xB4D355A7DFE15BFC(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x2EFEB3EA1D6A46DE(iParam0, iParam2);
			unk_0xBE0219028260E31F(iParam0, fParam6);
			if (unk_0xD11595488376CB53(*uParam1))
			{
				unk_0xA09285173B92875E(*uParam1, 7);
			}
		}
		unk_0x83F4881BA5450FEF(iParam0, iParam4);
		unk_0xDCDE8A1D95BAAF08(iParam0, iParam5);
		*uParam1 = unk_0x7DAA0D3B6BB8AD16(iParam0);
		if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 2))
		{
			if (unk_0xD11595488376CB53(*uParam1))
			{
				if (!unk_0xF6917DE0E003509D(iParam7))
				{
					unk_0xD514AD97CE4B7796("MCUSTBLIP");
					unk_0x63E8D6007C32E426(iParam7);
					unk_0x33A8A7C6E127D3D4(*uParam1);
				}
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x2BC40A9A0319DB0F(iParam0);
			if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 3))
			{
				if (unk_0xD11595488376CB53(uParam1->f_1))
				{
					unk_0xA09285173B92875E(uParam1->f_1, 7);
					unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD11595488376CB53(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x73817D396768E4C6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_96 == 1)
	{
		if (!unk_0xAEF17BDE274A1247())
		{
			if (!unk_0xA864A37DA392324A())
			{
				unk_0x6A6E764D1DB633C7(1000);
			}
		}
		else
		{
			if (unk_0x9E77A197C8591F81())
			{
				unk_0xEFCAB8003504D08E(0);
				unk_0x9F13924F68008214();
			}
			iLocal_93 = iLocal_97;
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			unk_0x00400F14096FE01D();
			unk_0x1D208E4A4E1D4FFE(1);
			func_8(1);
			if (unk_0x9E77A197C8591F81())
			{
				unk_0x9F13924F68008214();
			}
			if (!func_229())
			{
				func_228(iLocal_93, &Var0, &uVar3);
				unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Var0, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), uVar3);
				unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 1);
				func_226(&uLocal_99, Var0, 50f, 0);
			}
			func_225(&uLocal_99);
			switch (iLocal_93)
			{
				case 0:
					func_224(&uLocal_99, iLocal_83);
					func_224(&uLocal_99, iLocal_84);
					func_224(&uLocal_99, iLocal_85);
					func_223(&uLocal_99, &Global_88220);
					break;
				
				case 1:
					func_224(&uLocal_99, joaat("burrito2"));
					break;
			}
			while (!func_222(&uLocal_99))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_185();
			}
			switch (iLocal_93)
			{
				case 0:
					while (!func_215(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x04E7E853E31F41A3(&Global_88220, "jhp2a_main"))
					{
						while (!func_191(&iLocal_1311, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0xC797AB6C3A6482E1(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						while (!func_191(&iLocal_1311, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0xC797AB6C3A6482E1(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0);
						}
					}
					unk_0x25E63F00F88CF099(iLocal_1311, 0);
					unk_0xC1DD29CFE93055E7(iLocal_1311, 1, false);
					unk_0xC1DD29CFE93055E7(iLocal_1311, 2, true);
					unk_0xC9CEB5227A733CE6(iLocal_1311);
					unk_0xE9A614E9191BFB4A(iLocal_1311, 1, 1, 0);
					if (func_229())
					{
						func_188(iLocal_1311, -1, 1);
					}
					else
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
						unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iLocal_1311, -1);
					}
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1313.f_0 = unk_0xD504D1FF5DD2FFD7(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						unk_0x4F6C6B452FA34B13(Local_1313.f_0, 0);
						unk_0xC9CEB5227A733CE6(Local_1313.f_0);
					}
					if (func_229())
					{
						func_188(0, -1, 1);
					}
					else
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
					}
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 359.5735f);
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					break;
			}
			if (unk_0xAEF17BDE274A1247() || !unk_0x845A95C48FA19489())
			{
				unk_0x2D3BB3EF936C4B76(1000);
			}
			bLocal_96 = false;
		}
	}
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	if (func_190() && func_229())
	{
		while (Global_91020 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x307133C47B1565B0(0);
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x1E08281A4D8EAD3C(unk_0xE7869D5D7816A9B6());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xD51CFE69539DB6D8(iParam0))
				{
					if (unk_0xC45A34912542C4EB(iParam0, 0))
					{
						if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam0, 0))
						{
							unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iParam0, iParam1);
							unk_0x6EF372C057320AD4(0f, 1065353216);
							unk_0x7FB81B1DD14A3BE4(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
		}
		unk_0xCE6D6B0EAA418D44();
		func_189(0);
	}
}

void func_189(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 13);
	}
}

int func_190()
{
	if (Global_91025 == 10 || Global_91025 == 9)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<67> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (func_190())
	{
		if (func_214())
		{
			func_160(&(Global_95220.f_2311.f_12), &Var0);
		}
	}
	else if (func_212())
	{
		func_160(&(Global_92815.f_2311.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_211(0, &Var0))
		{
			if (unk_0x3937C84F74FAABA4(Var0.f_66) || unk_0x07C6F7E084F6A97E(Var0.f_66))
			{
				unk_0x801429C020C467BA(Var0.f_66);
				if (unk_0x5053BF6D5604065B(Var0.f_66))
				{
					*iParam0 = unk_0xD504D1FF5DD2FFD7(Var0.f_66, Param1, fParam4, 1, 1);
					func_207(*iParam0, &Var0, 0, 1);
					unk_0x839E9476E54502A2(Var0.f_66);
					unk_0xC9CEB5227A733CE6(*iParam0);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam5 = true;
		}
	}
	if (bParam5)
	{
		if (!unk_0xD51CFE69539DB6D8(*iParam0))
		{
			if (func_192(iParam0, 0, Param1, fParam4, 1, 0))
			{
				unk_0x7E38E815EF844C74(func_153(0, 0), 1);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_192(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;
	
	if (func_155(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_154(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0xD51CFE69539DB6D8(*iParam0))
		{
			if (unk_0x1B2DC87EFB36DF80(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_99155.f_1750.f_539.f_3544) && Global_99155.f_7699.f_99.f_58[131])
		{
			Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x801429C020C467BA(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (unk_0x5053BF6D5604065B(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, 0);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar103 + 1, !Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_206(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0C27C841171728F7(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				unk_0x40B9990275E6AD59(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_203(iParam0, &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_200(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5.f_0)
		{
			unk_0x801429C020C467BA(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (unk_0x5053BF6D5604065B(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/], Param2, fParam5, 0, 0);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, 0);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar104 + 1, !Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_206(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				unk_0x0C27C841171728F7(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				unk_0x40B9990275E6AD59(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_203(iParam0, &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_200(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x801429C020C467BA(Var5.f_0);
			if (unk_0x5053BF6D5604065B(Var5.f_0))
			{
				bVar105 = true;
				*iParam0 = unk_0xD504D1FF5DD2FFD7(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0xC9CEB5227A733CE6(*iParam0);
				unk_0xE07FEB47C3650425(*iParam0, 0);
				unk_0xC0C7A9F655DB1456(*iParam0, 0);
				unk_0x8100F8AA27EE924B(*iParam0, 1);
				StringCopy(&cVar106, unk_0xC2421167AF5744AC(*iParam0), 16);
				unk_0x09714949CF524B00(*iParam0, 1250);
				unk_0x07C7B5F986353F8B(*iParam0, 1250f);
				unk_0xD1869FA90CC61334(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x408AD7E5AD0BB545(*iParam0, Var5.f_5, Var5.f_6);
				unk_0xC5F406A695E19D8A(*iParam0, Var5.f_7, Var5.f_8);
				unk_0xB4446F1B3498926D(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					unk_0xC1DD29CFE93055E7(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					unk_0x6C26738F49379AC0(*iParam0, Var5.f_24);
				}
				if (func_206(&uVar1, &uVar0))
				{
					unk_0xAA38ABB77E443507(*iParam0, &uVar1);
					unk_0x0E88E3FDED7F6766(*iParam0, uVar0);
				}
				else
				{
					unk_0xAA38ABB77E443507(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x93CF2A62AE3C8085())
					{
						unk_0x0E88E3FDED7F6766(*iParam0, Var5.f_26);
					}
				}
				unk_0x2AA0B1D3DB2C3E10(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				unk_0x0C27C841171728F7(*iParam0, Var5.f_88);
				unk_0x40B9990275E6AD59(*iParam0, Var5.f_87);
				unk_0x4FD36E73DE133D3F(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				unk_0x2706D464EB8463E7(*iParam0, 2, unk_0xB519E5386FBF69E5(Var5.f_92, 28));
				unk_0x2706D464EB8463E7(*iParam0, 3, unk_0xB519E5386FBF69E5(Var5.f_92, 29));
				unk_0x2706D464EB8463E7(*iParam0, 0, unk_0xB519E5386FBF69E5(Var5.f_92, 30));
				unk_0x2706D464EB8463E7(*iParam0, 1, unk_0xB519E5386FBF69E5(Var5.f_92, 31));
				if (unk_0x5349DE586C4C8ACB(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					unk_0xED6BC33BD669B45F(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(*iParam0)))
					{
						if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								unk_0xE9ECD7D720B42CB4(*iParam0, Var5.f_90);
							}
						}
						else
						{
							unk_0xE9ECD7D720B42CB4(*iParam0, Var5.f_90);
						}
					}
				}
				func_203(iParam0, &(Var5.f_31), &(Var5.f_81));
				unk_0x270D1E5D25C8646A(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bagger") && !Global_99155.f_7699.f_99.f_58[118])
					{
						unk_0xAA38ABB77E443507(*iParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_99155.f_1750.f_539.f_3544) && Global_99155.f_7699.f_99.f_58[131]) && unk_0x1B2DC87EFB36DF80(*iParam0) == joaat("tailgater"))
				{
					unk_0x16580F6E093503C8(*iParam0, 6, 1, false);
					unk_0x16580F6E093503C8(*iParam0, 14, 7, false);
					unk_0x16580F6E093503C8(*iParam0, 11, 2, false);
					unk_0x16580F6E093503C8(*iParam0, 2, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 7, 5, false);
					unk_0x16580F6E093503C8(*iParam0, 0, 0, false);
					unk_0x16580F6E093503C8(*iParam0, 3, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 13, 1, false);
					unk_0x16580F6E093503C8(*iParam0, 4, 3, false);
					unk_0x16580F6E093503C8(*iParam0, 12, 2, false);
					unk_0xFB0870DB05D28CB1(*iParam0, 22, true);
					unk_0xE9ECD7D720B42CB4(*iParam0, 2);
					unk_0x16580F6E093503C8(*iParam0, 23, 11, false);
					unk_0x40B9990275E6AD59(*iParam0, 2);
					Global_99155.f_1750.f_539.f_3544 = 1;
					func_193(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x839E9476E54502A2(Var5.f_0);
				}
				if (bVar105)
				{
					func_200(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_155(iParam0) && unk_0xD51CFE69539DB6D8(*iParam1)) && unk_0xC45A34912542C4EB(*iParam1, 0))
	{
		if (iParam2 > Global_99155.f_1750.f_539.f_1635)
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
			func_126(*iParam1, iParam0);
		}
		if (unk_0xA9D3956F42AEC644(*iParam1) != 0)
		{
			unk_0x5DAB69BA0BF447FC(*iParam1, 0);
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = unk_0x1B2DC87EFB36DF80(*iParam1);
		if (unk_0x3567DD6AFD1905FD(*iParam1, &iVar1))
		{
			Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x1B2DC87EFB36DF80(iVar1);
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x883710067624C09C(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8219941CC4732B36(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = unk_0xDF705551345526F6(*iParam1, 1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = unk_0xDF705551345526F6(*iParam1, 2);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = unk_0xDF705551345526F6(*iParam1, 3);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = unk_0xDF705551345526F6(*iParam1, 4);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = unk_0xDF705551345526F6(*iParam1, 5);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = unk_0xDF705551345526F6(*iParam1, 6);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = unk_0xDF705551345526F6(*iParam1, 7);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = unk_0xDF705551345526F6(*iParam1, 8);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = unk_0xDF705551345526F6(*iParam1, 9);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = unk_0xDF705551345526F6(*iParam1, 10);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = unk_0xDF705551345526F6(*iParam1, 11);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = unk_0xDF705551345526F6(*iParam1, 12);
		if (unk_0x657F8DC28088EB36(*iParam1, 0))
		{
			iVar2 = unk_0x96616C6B22C7747D(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = unk_0x7510FF7BD6BD3BAE();
		StringCopy(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), unk_0xC2421167AF5744AC(*iParam1), 16);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = unk_0x0FD17058EC3E1147(*iParam1);
		unk_0x95C00B12C5FCA494(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0xCFEF2B49C7ED1A18(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x8062A8ED0C7F4651(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = unk_0x54AAF075A06F73AA(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = unk_0x71D4F790860F6A5A(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = unk_0x90DC8CCD4852ECAA(*iParam1);
		Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0x31211750BC54126F(*iParam1);
		unk_0x7C2F17D7A0663F15(*iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (unk_0x2C876F34337848DC(*iParam1, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (unk_0x2C876F34337848DC(*iParam1, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_99155.f_1750.f_539.f_3545[iParam0] = 10;
		if ((unk_0xEF4B592D4E2621FD(*iParam1) >= 0 && unk_0xEF4B592D4E2621FD(*iParam1) < 255) && func_197(*iParam1, 0, &uVar0))
		{
			func_165(iParam1, &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_99155.f_24567[iParam0 /*43*/].f_40 = 1;
				Global_99155.f_24567[iParam0 /*43*/] = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_99155.f_24567[iParam0 /*43*/].f_3 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_99155.f_24567[iParam0 /*43*/].f_4 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_99155.f_24567[iParam0 /*43*/].f_5 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_99155.f_24567[iParam0 /*43*/].f_6 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_99155.f_24567[iParam0 /*43*/].f_10 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_99155.f_24567[iParam0 /*43*/].f_16 = !Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_99155.f_24567[iParam0 /*43*/].f_19 = { Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_99155.f_24567[iParam0 /*43*/].f_23 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_99155.f_24567[iParam0 /*43*/].f_7 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_99155.f_24567[iParam0 /*43*/].f_8 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_99155.f_24567[iParam0 /*43*/].f_9 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_99155.f_24567[iParam0 /*43*/].f_11 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_99155.f_24567[iParam0 /*43*/].f_12 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_99155.f_24567[iParam0 /*43*/].f_13 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_99155.f_24567[iParam0 /*43*/].f_14 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_99155.f_24567[iParam0 /*43*/].f_15 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_99155.f_24567[iParam0 /*43*/].f_18 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_99155.f_24567[iParam0 /*43*/].f_17 = Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_99155.f_24567[iParam0 /*43*/].f_24 = unk_0xBAA70A4A1B1A59C8(*iParam1, 11) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_25 = unk_0xBAA70A4A1B1A59C8(*iParam1, 12) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_26 = unk_0xBAA70A4A1B1A59C8(*iParam1, 4) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_27 = unk_0xBAA70A4A1B1A59C8(*iParam1, 23) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_28 = unk_0xBAA70A4A1B1A59C8(*iParam1, 14) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_29 = unk_0xBAA70A4A1B1A59C8(*iParam1, 16) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_30 = unk_0xBAA70A4A1B1A59C8(*iParam1, 15) + 1;
				Global_99155.f_24567[iParam0 /*43*/].f_32 = unk_0x6B23426175DF351C(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[0] = unk_0x9B77521650BAC668(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[1] = unk_0x85D58F849AF83046(*iParam1, 14, 0);
				Global_99155.f_24567[iParam0 /*43*/].f_33[2] = unk_0x85D58F849AF83046(*iParam1, 14, 1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[3] = unk_0x85D58F849AF83046(*iParam1, 14, 2);
				Global_99155.f_24567[iParam0 /*43*/].f_33[4] = unk_0x85D58F849AF83046(*iParam1, 14, 3);
				Global_99155.f_24567[iParam0 /*43*/].f_39 = unk_0xBD0E993059D2FD8E(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_31 = func_196(*iParam1);
				Global_99155.f_24567[iParam0 /*43*/].f_33[0] = unk_0xE8AAC222EFC3F41C(*iParam1);
				unk_0x18D188A2DF68996F(*iParam1, &iVar4, &uVar5, &uVar6);
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
				func_194(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_99155.f_24567[iParam0 /*43*/].f_1));
				unk_0xA60CA83C42E3C0B0(*iParam1, &iVar4, &uVar5);
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
				func_194(Global_99155.f_1750.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_99155.f_24567[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_194(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_195(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
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

bool func_195(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
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

float func_196(int iParam0)
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
	if (((unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xEF4B592D4E2621FD(iParam0) >= 0) && unk_0xEF4B592D4E2621FD(iParam0) < 255)
	{
		if (unk_0xBD0E993059D2FD8E(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0xBD0E993059D2FD8E(iParam0) == 0)
		{
			if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
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

int func_197(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	if (!func_198(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0xF54ECC20AEF6A194(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		if ((func_136(iParam0) && unk_0x1B2DC87EFB36DF80(iParam0) != joaat("sentinel2")) && unk_0x1B2DC87EFB36DF80(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_198(int iParam0, bool bParam1, var uParam2)
{
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
	if (((!unk_0x3937C84F74FAABA4(iParam0) && !unk_0x07C6F7E084F6A97E(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
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
	if (unk_0x00AAD79B42B3E036())
	{
		if (func_199(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_199(int iParam0)
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

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			Global_88689[iVar0] = uParam0;
			Global_88699[iVar0] = iParam1;
			Global_88709[iVar0] = unk_0x1B2DC87EFB36DF80(uParam0);
			if (unk_0x3937C84F74FAABA4(Global_88709[iVar0]))
			{
				Global_88737[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88737[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_201(var uParam0)
{
	if (!func_202(*uParam0))
	{
		unk_0xC1DD29CFE93055E7(*uParam0, 5, !Global_99155.f_7699.f_99.f_58[119]);
	}
}

bool func_202(int iParam0)
{
	return unk_0xDF705551345526F6(uParam0, 5);
}

int func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x5DAB69BA0BF447FC(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xFB0870DB05D28CB1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x1C8AF615CFEF2FE5(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x91C889C88C57B287(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x16580F6E093503C8(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x16580F6E093503C8(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x16580F6E093503C8(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0xBAA70A4A1B1A59C8(*uParam0, 38) != 0 && unk_0xBAA70A4A1B1A59C8(*uParam0, 24) != 0) && unk_0x1C8AF615CFEF2FE5(*uParam0, 24) != func_205(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x16580F6E093503C8(*uParam0, 24, func_205(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_204(*uParam0))
	{
		unk_0x9DB0432DBE539D98(*uParam0, 1);
		unk_0x8100F8AA27EE924B(*uParam0, 1);
	}
	return 1;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD51CFE69539DB6D8(uParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x1C8AF615CFEF2FE5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x84501D0C09CEA717(iParam0, iVar1, unk_0x1C8AF615CFEF2FE5(iParam0, iVar1)), 16);
				iVar2 = unk_0xC7C6DDDE84A8E734(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xC7C6DDDE84A8E734("MNU_CAGE") || iVar2 == unk_0xC7C6DDDE84A8E734("SABRE_CAG"))
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

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD51CFE69539DB6D8(uParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = unk_0xBAA70A4A1B1A59C8(iParam0, 38);
		iVar1 = unk_0xBAA70A4A1B1A59C8(iParam0, 24);
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

int func_206(var uParam0, var uParam1)
{
	if (unk_0x00AAD79B42B3E036())
	{
	}
	else if (Global_99155.f_24567.f_261)
	{
		*uParam0 = { Global_99155.f_24567.f_267 };
		*uParam1 = Global_99155.f_24567.f_271;
		return 1;
	}
	return 0;
}

void func_207(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(uParam0, 0))
	{
		if (unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)) != 0)
		{
			unk_0xAA38ABB77E443507(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x93CF2A62AE3C8085())
		{
			unk_0x0E88E3FDED7F6766(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_164(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_164(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_164(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_164(iVar1 + 1));
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 13))
		{
			unk_0x145645B37AE71EFB(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA2F299A29CED1AB0(iParam0);
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 12))
		{
			unk_0x2CF4F678CED1EB9D(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x50BBB995D0E3481E(iParam0);
		}
		unk_0x408AD7E5AD0BB545(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xC5F406A695E19D8A(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB519E5386FBF69E5(uParam1->f_77, 15) || func_210(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_209())
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
		unk_0x2AA0B1D3DB2C3E10(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
		}
		else
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
			unk_0x40B9990275E6AD59(iParam0, uParam1->f_65);
		}
		unk_0x0C27C841171728F7(iParam0, !unk_0xB519E5386FBF69E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x18F90CF5D756C783(iParam0, uParam1->f_70);
		}
		unk_0x4FD36E73DE133D3F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2706D464EB8463E7(iParam0, 2, unk_0xB519E5386FBF69E5(uParam1->f_77, 28));
		unk_0x2706D464EB8463E7(iParam0, 3, unk_0xB519E5386FBF69E5(uParam1->f_77, 29));
		unk_0x2706D464EB8463E7(iParam0, 0, unk_0xB519E5386FBF69E5(uParam1->f_77, 30));
		unk_0x2706D464EB8463E7(iParam0, 1, unk_0xB519E5386FBF69E5(uParam1->f_77, 31));
		unk_0xB862D2A317F182C4(iParam0, unk_0xB519E5386FBF69E5(uParam1->f_77, 10));
		if (unk_0x5349DE586C4C8ACB(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xED6BC33BD669B45F(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iParam0)))
			{
				if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_208(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_208(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD0005B9DEEF3CBA9(iParam0, 1);
			}
			else
			{
				unk_0x38FE2C5E44C306D8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_203(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xFFD2CE10E8C7E77F(uParam1->f_66) && !unk_0xAA65D1F2BF4AAFFB(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_164(iVar2 + 1)))
				{
					if (!unk_0xDF705551345526F6(iParam0, iVar2 + 1))
					{
						unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xDF705551345526F6(iParam0, iVar2 + 1))
				{
					unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (!unk_0xB519E5386FBF69E5(uParam1->f_77, 23))
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, 22))
				{
					unk_0xD390C3A4EAD66C38(iParam0, 2);
				}
				else
				{
					unk_0xD390C3A4EAD66C38(iParam0, 3);
				}
			}
			else
			{
				unk_0xD390C3A4EAD66C38(iParam0, 4);
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 27))
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

void func_208(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA9D3956F42AEC644(uParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = unk_0x1C8AF615CFEF2FE5(iParam0, 24);
		iVar1 = unk_0xB4686A5F9149447D(iParam0, 24);
		unk_0xE9ECD7D720B42CB4(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x91C889C88C57B287(iParam0, 24);
		}
		else
		{
			unk_0x16580F6E093503C8(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_209()
{
	return unk_0x3442D8DA379C5187(joaat("mpindependence"));
}

int func_210(int iParam0)
{
	var uVar0;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x8FFABA46948DBAD8("MPBitset", 3))
			{
				if (unk_0xB7AFC499DA70400A(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x3947414BC68E5255(iParam0, "MPBitset");
				}
				return unk_0xB519E5386FBF69E5(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_211(int iParam0, var uParam1)
{
	struct<82> Var0;
	
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xC7C6DDDE84A8E734(&(Global_99155.f_1750.f_539.f_1635[0 /*295*/][iParam0 /*98*/].f_27)) == unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && unk_0xC7C6DDDE84A8E734(&(Global_99155.f_1750.f_539.f_1635[1 /*295*/][iParam0 /*98*/].f_27)) == unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	func_154(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xC7C6DDDE84A8E734(&(Var0.f_27)) == unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_154(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && unk_0xC7C6DDDE84A8E734(&(Var0.f_27)) == unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_212()
{
	return func_213(&(Global_92815.f_2311));
}

int func_213(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_12.f_66))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_52(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_214()
{
	return func_213(&(Global_95220.f_2311));
}

int func_215(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_223(&uLocal_99, &Global_88220);
	func_224(&uLocal_99, joaat("s_m_m_armoured_01"));
	func_224(&uLocal_99, iLocal_85);
	func_224(&uLocal_99, iLocal_86);
	if ((unk_0x5053BF6D5604065B(joaat("s_m_m_armoured_01")) && unk_0x5053BF6D5604065B(iLocal_85)) && unk_0x5053BF6D5604065B(iLocal_86))
	{
		if (bParam0)
		{
			if (!unk_0xD51CFE69539DB6D8(Local_1313.f_0))
			{
				if (unk_0xD51CFE69539DB6D8(Global_87855[0]))
				{
					unk_0x20BB4B94CC6DDC9A(Global_87855[0], 1, 1);
					Local_1313.f_0 = Global_87855[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0xD51CFE69539DB6D8(Local_1301.f_0))
			{
				if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[0]))
				{
					unk_0x20BB4B94CC6DDC9A(Global_87855.f_9[0], 1, 1);
					Local_1301.f_0 = Global_87855.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_224(&uLocal_99, iLocal_84);
			if (unk_0x5053BF6D5604065B(iLocal_84) && unk_0x729A24E50365D07B(&Global_88220))
			{
				if (unk_0x04E7E853E31F41A3(&Global_88220, "jhp2a_main"))
				{
					unk_0x0A4FE71EF333549B(&Global_88220, 23, &Var1);
					unk_0xC797AB6C3A6482E1(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1313.f_0 = unk_0xD504D1FF5DD2FFD7(iLocal_84, Var1, 119.4988f, 1, 1);
					Local_1301.f_0 = unk_0xF430A9686E704FA3(Local_1313.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0xC9CEB5227A733CE6(Local_1313.f_0);
					unk_0x8856EDD9AA658EC6(Local_1301.f_0, Local_1313.f_0, &Global_88220, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0x0A4FE71EF333549B(&Global_88220, 29, &Var1);
					unk_0xC797AB6C3A6482E1(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1313.f_0 = unk_0xD504D1FF5DD2FFD7(iLocal_84, Var1, 134.0011f, 1, 1);
					Local_1301.f_0 = unk_0xF430A9686E704FA3(Local_1313.f_0, 26, iLocal_83, -1, 1, 1);
					unk_0xC9CEB5227A733CE6(Local_1313.f_0);
					unk_0x8856EDD9AA658EC6(Local_1301.f_0, Local_1313.f_0, &Global_88220, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0xD51CFE69539DB6D8(Local_1313.f_0))
		{
			func_221(Local_1313.f_0, 0);
			if (unk_0xC45A34912542C4EB(Local_1313.f_0, 0))
			{
				unk_0x8100F8AA27EE924B(Local_1313.f_0, 1);
				unk_0xC602CB510D8B9EAE(Local_1313.f_0, 1);
				unk_0x79CA1891F45A343F(Local_1313.f_0, 1);
				unk_0x12F88FDE652A5758(Local_1313.f_0, 1);
			}
		}
		if (unk_0xD51CFE69539DB6D8(Local_1301.f_0))
		{
			if (!unk_0xAF437D7C802AB246(Local_1301.f_0))
			{
				unk_0x9BEE7E791BC4D38B(Local_1301.f_0, 1);
				unk_0x690C5239500171FE(Local_1301.f_0, iLocal_1300);
				unk_0xB161EBD04DDDE4AD(Local_1301.f_0, 5);
				unk_0x321C1AA209172C00(Local_1301.f_0, 0);
				unk_0x7E3DC7ED30B648F0(Local_1301.f_0, 1, 0);
				unk_0xCC897563F1971D6A(Local_1301.f_0, joaat("weapon_pistol"), 15, 0, 1);
				func_220(&uLocal_1121, 3, Local_1301.f_0, "JHP2A_Driver", 0, 1);
				func_219(&(Local_1079[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && unk_0xD51CFE69539DB6D8(Local_1301.f_0))
		{
			func_218();
			func_219(&(Local_1079[1 /*8*/]), 0, 0, 1);
			func_216(&uLocal_99, joaat("boxville3"));
			func_216(&uLocal_99, joaat("s_m_m_armoured_01"));
			func_216(&uLocal_99, iLocal_85);
			func_216(&uLocal_99, iLocal_86);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_216(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x839E9476E54502A2(iParam1);
					func_217(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_217(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_218()
{
	struct<3> Var0;
	
	if (unk_0xD51CFE69539DB6D8(Local_1313.f_0))
	{
		if (!unk_0x76B2D234F1895632(Local_1313.f_0) && !unk_0xD51CFE69539DB6D8(iLocal_1324))
		{
			iLocal_1324 = unk_0x8C15E6EC0BC9B4BE(iLocal_86, unk_0x1141852D07400777(Local_1313.f_0, 1), 1, 1, 0);
			unk_0x94D1E7548565F807(iLocal_1324, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0x5988BA5263C78460(iLocal_1324, Local_1313.f_0, -1, -1, unk_0x61CBEF33034AF6B9(Local_1313.f_0, unk_0x242AD66021ED4052(Local_1313.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0x60365B5AF8BF1FFA(iLocal_1324, 0, 0);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_1317[0 /*2*/]))
		{
			if (unk_0x76B2D234F1895632(Local_1313.f_0))
			{
				Var0 = { unk_0xBD306D8AFEF4E078(Local_1313.f_0, unk_0x8AF26D6D6BBE6931(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC4A43A7E257E1FD9(Var0, &(Var0.f_2), 0);
				Local_1317[0 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1317[0 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, unk_0x1141852D07400777(Local_1313.f_0, 1), 1, 1, 0);
				unk_0x94D1E7548565F807(Local_1317[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x9E4D318905B670CB(Local_1317[0 /*2*/], Local_1313.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFD092FF761E54535(Local_1317[0 /*2*/], 1);
			}
		}
		if (!unk_0xD51CFE69539DB6D8(Local_1317[1 /*2*/]))
		{
			if (unk_0x76B2D234F1895632(Local_1313.f_0))
			{
				Var0 = { unk_0xBD306D8AFEF4E078(Local_1313.f_0, unk_0x8AF26D6D6BBE6931(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC4A43A7E257E1FD9(Var0, &(Var0.f_2), 0);
				Local_1317[1 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1317[1 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, unk_0x1141852D07400777(Local_1313.f_0, 1), 1, 1, 0);
				unk_0x94D1E7548565F807(Local_1317[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x9E4D318905B670CB(Local_1317[1 /*2*/], Local_1313.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFD092FF761E54535(Local_1317[1 /*2*/], 1);
			}
		}
		if (!unk_0xD51CFE69539DB6D8(Local_1317[2 /*2*/]))
		{
			if (unk_0x76B2D234F1895632(Local_1313.f_0))
			{
				Var0 = { unk_0xBD306D8AFEF4E078(Local_1313.f_0, unk_0x8AF26D6D6BBE6931(-2.5f, 2.5f), -5f, 0f) };
				unk_0xC4A43A7E257E1FD9(Var0, &(Var0.f_2), 0);
				Local_1317[2 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, Var0, 1, 1, 0);
			}
			else
			{
				Local_1317[2 /*2*/] = unk_0x8C15E6EC0BC9B4BE(iLocal_85, unk_0x1141852D07400777(Local_1313.f_0, 1), 1, 1, 0);
				unk_0x94D1E7548565F807(Local_1317[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x9E4D318905B670CB(Local_1317[2 /*2*/], Local_1313.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0xFD092FF761E54535(Local_1317[2 /*2*/], 1);
			}
		}
	}
}

int func_219(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_5 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_220(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_221(var uParam0, int iParam1)
{
	Global_91025.f_22[iParam1] = uParam0;
}

int func_222(var uParam0)
{
	if (func_230(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF6917DE0E003509D(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x04E7E853E31F41A3(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xCBEB830866A6963D(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_224(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x801429C020C467BA(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x9D40BBF80D8F5E8A();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			uParam0->f_874[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			uParam0->f_925[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_863)
	{
		uParam0->f_863.f_2 = 1;
	}
	if (uParam0->f_855)
	{
		uParam0->f_855.f_2 = 1;
	}
	if (uParam0->f_859)
	{
		uParam0->f_859.f_2 = 1;
	}
}

int func_226(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_227(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_111(uParam0->f_863.f_4, Param1, 0) && uParam0->f_863.f_10 == fParam4)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x3D81DBD4F6A29824(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x9D40BBF80D8F5E8A();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

int func_227(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_229()
{
	return unk_0xB519E5386FBF69E5(Global_91025.f_20, 13);
}

int func_230(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_977)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x5053BF6D5604065B((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x839E9476E54502A2((uParam0[iVar1 /*5*/])->f_4);
						func_217(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x2917D5E1CB5CE43A(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x8B10CC9832827D27(uParam0->f_273[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0x729A24E50365D07B(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x4C5B723663B8F630(uParam0->f_374[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x4A4851D44CDF03C0(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0x8A86A209B0F0AF7D(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_217(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x08F84BB137ADEE81(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0xFC8E26A6FE4C2E54(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_217(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x8150EED628D374BE(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xE12FE76269CF566D(uParam0->f_202[iVar1 /*7*/].f_4);
						func_217(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xE5ED4BE9950F1B30(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x22CA804442E37496(uParam0->f_151[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0xDF83A33BF4D93E6F(uParam0->f_737[iVar1 /*5*/].f_4, 0))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x9694B1DF874054DF(uParam0->f_737[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x97ED7BE642158AAF(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xAA4BA243DE1874F4(uParam0->f_763[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xF6917DE0E003509D(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xFFA02FB4C52407B4(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_217(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xE3968C191B4B1537(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x97ED7BE642158AAF(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xCB782AA06DF74569(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xE3968C191B4B1537(uParam0->f_687[iVar1 /*7*/].f_5);
							func_217(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_217(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_874[iVar1 /*5*/])
			{
				if (!uParam0->f_874[iVar1 /*5*/].f_1)
				{
					if (unk_0x877A3342F85192B1(uParam0->f_874[iVar1 /*5*/].f_4))
					{
						uParam0->f_874[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_874[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_874[iVar1 /*5*/].f_1)
					{
						unk_0xA29AC749499D846D(uParam0->f_874[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_874[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_925[iVar1 /*5*/])
			{
				if (!uParam0->f_925[iVar1 /*5*/].f_1)
				{
					if (unk_0xC167A96DA488D690(uParam0->f_925[iVar1 /*5*/].f_4))
					{
						uParam0->f_925[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_925[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_925[iVar1 /*5*/].f_1)
					{
						func_217(&(uParam0->f_925[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x4D15A085E079AB18(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0x3A2938D665EA8A9E(iVar1, 1);
						func_217(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_855)
		{
			if (!uParam0->f_855.f_1)
			{
				if (unk_0xD6306290BE90B505())
				{
					uParam0->f_855.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_855.f_2)
			{
				if (uParam0->f_855.f_1)
				{
					unk_0x5736B7F949DFB3D6();
					func_217(&(uParam0->f_855));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_859)
		{
			if (!uParam0->f_859.f_1)
			{
				if (unk_0xBE13BCB8DDE36844())
				{
					uParam0->f_859.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_859.f_2)
			{
				if (uParam0->f_859.f_1)
				{
					unk_0xBC91299322613A2E();
					func_217(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0xC5E5B5BBBE4693F6())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0xB1959BA5ECC2010F())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
						func_231(uParam0);
						uParam0->f_978 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_863.f_2)
			{
				unk_0xEF1C0568E9BDCF78();
				func_217(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x0B4924B3F0DADDD1(uParam0->f_951[iVar1 /*5*/].f_4))
					{
						uParam0->f_951[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_951[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_951[iVar1 /*5*/].f_1)
					{
						func_217(&(uParam0->f_951[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_977 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_231(var uParam0)
{
	if (unk_0xC5E5B5BBBE4693F6())
	{
		unk_0xEF1C0568E9BDCF78();
		func_217(&(uParam0->f_863));
	}
}

void func_232()
{
	if (bLocal_98 && (func_233() || unk_0xAEF17BDE274A1247()))
	{
		func_8(1);
		unk_0x52F20802944F8DCE();
	}
}

int func_233()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91025 == 7 || Global_91025 == 8)
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	struct<3> Var0;
	var uVar3;
	
	func_241();
	unk_0x103FCC2BD24292A3("SECDRIVER", &iLocal_1300);
	unk_0xA9CA101B50B90993(1, iLocal_1300, joaat("COP"));
	unk_0xA9CA101B50B90993(1, iLocal_1300, -183807561);
	unk_0xA9CA101B50B90993(1, joaat("COP"), iLocal_1300);
	if (func_6(0) || func_190())
	{
		iLocal_97 = 0;
		if (func_190())
		{
			if (Global_85535)
			{
				iLocal_97++;
			}
		}
		StringCopy(&Global_88220, "jhp2a_alt", 64);
		if (func_190())
		{
			func_228(iLocal_97, &Var0, &uVar3);
			func_240(Var0, uVar3, 1, 0);
		}
		bLocal_96 = true;
	}
	else
	{
		while (!func_215(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_239(&uLocal_99);
		}
	}
	func_238(&uLocal_99, "JHP2A", 0);
	unk_0x63EB72E192731928(0.1f);
	unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
	func_236(88);
	func_220(&uLocal_1121, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	func_220(&uLocal_1121, 3, 0, "Lester", 0, 1);
	unk_0x7E38E815EF844C74(joaat("boxville3"), 1);
	unk_0xFF62B65EADC282A7(joaat("s_m_m_armoured_01"), 1);
	if (unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"), 0))
	{
		unk_0xB7C0041C7DC55CD8(unk_0xE7869D5D7816A9B6(), joaat("weapon_briefcase"));
	}
	func_235();
	if (unk_0xF6917DE0E003509D(&Global_88220))
	{
	}
	iLocal_1325 = unk_0x8668A841B325FF16(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x4D15A085E079AB18(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_67893 = 1;
}

void func_235()
{
	Global_85536 = 1;
}

void func_236(int iParam0)
{
	Global_87213 = 0;
	switch (iParam0)
	{
		case 72:
			func_237(2);
			func_237(4);
			break;
		
		case 73:
			func_237(0);
			func_237(1);
			func_237(7);
			break;
		
		case 92:
			func_237(10);
			func_237(9);
			func_237(13);
			func_237(6);
			break;
		
		case 68:
			func_237(11);
			break;
		
		case 78:
			func_237(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_237(3);
			break;
		
		default:
			break;
	}
}

void func_237(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&Global_87213, iParam0);
}

int func_238(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x04E7E853E31F41A3(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_977 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 10)
		{
			unk_0xDE372C28E5D47E7C(sParam1, iParam2);
		}
		else
		{
			unk_0x36A3D6FBED10EF81(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_239(var uParam0)
{
	func_230(uParam0);
}

void func_240(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_190())
	{
		unk_0x8A10FCF639EC0104(0);
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 2);
		unk_0x307133C47B1565B0(1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
		}
		Global_91021 = { Param0 };
		Global_91024 = uParam3;
		Global_91020 = 1;
		if (iParam4 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 14);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 24);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 24);
		}
		func_189(1);
	}
}

void func_241()
{
	func_249(&(Local_1079[0 /*8*/]), 64018, "Van Driver Manager");
	func_249(&(Local_1079[1 /*8*/]), 62670, "Cargo Manager");
}

void func_242(var uParam0)
{
	if (!func_120(uParam0))
	{
		if (unk_0x76B2D234F1895632(Local_1313.f_0))
		{
			func_247(Local_1317[0 /*2*/], 1);
			func_247(Local_1317[1 /*2*/], 1);
			func_247(Local_1317[2 /*2*/], 1);
			iLocal_1341 = 1;
			func_246(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_245(&uLocal_99, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0xDF83A33BF4D93E6F("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0))
					{
						if ((unk_0x9D40BBF80D8F5E8A() - iLocal_1331) > 150)
						{
							if (unk_0x915685CA559C211B(iLocal_1324, unk_0xE7869D5D7816A9B6(), 0))
							{
								if ((((unk_0x3D06E0340496855A(iLocal_1324, joaat("weapon_molotov"), 0) || unk_0x3D06E0340496855A(iLocal_1324, joaat("weapon_bzgas"), 0)) || unk_0x3D06E0340496855A(iLocal_1324, joaat("weapon_knife"), 0)) || unk_0x3D06E0340496855A(iLocal_1324, joaat("weapon_unarmed"), 0)) || unk_0x3D06E0340496855A(iLocal_1324, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0xA2D9AE20AB412A1B(iLocal_1324);
								}
								else
								{
									unk_0x29FD5B1A4BA65801(iLocal_1324);
									iLocal_1331 = unk_0x9D40BBF80D8F5E8A();
									iLocal_1330++;
									if (iLocal_1330 >= 3)
									{
										unk_0x3A8AEDC6680712C1(-1, "Lock_Destroyed", iLocal_1324, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0x3A8AEDC6680712C1(-1, "Lock_Damage", iLocal_1324, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x29FD5B1A4BA65801(iLocal_1324);
						}
					}
					if (((((iLocal_1330 >= 3 || unk_0x76B2D234F1895632(iLocal_1324)) || unk_0x087B4B9B00A33D4D(Local_1313.f_0, 2)) || unk_0x087B4B9B00A33D4D(Local_1313.f_0, 3)) || unk_0x3334247FF7988DFA(Local_1313.f_0, 2) > 0f) || unk_0x3334247FF7988DFA(Local_1313.f_0, 3) > 0f)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_1324))
						{
							unk_0xD4E454973E16D31B(&iLocal_1324);
						}
						if (!unk_0x087B4B9B00A33D4D(Local_1313.f_0, 2))
						{
							unk_0xDBF2D7502C37C299(Local_1313.f_0, 2, 0, 0);
						}
						if (!unk_0x087B4B9B00A33D4D(Local_1313.f_0, 3))
						{
							unk_0xDBF2D7502C37C299(Local_1313.f_0, 3, 0, 0);
						}
						iLocal_1342 = 0;
						iLocal_1343 = 0;
						func_247(Local_1317[0 /*2*/], 0);
						func_247(Local_1317[1 /*2*/], 0);
						func_247(Local_1317[2 /*2*/], 0);
						func_244(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_243(Local_1313.f_0))
					{
						if (unk_0x7F38A542899D217A(unk_0x3334247FF7988DFA(Local_1313.f_0, 2)) > 0.5f && unk_0x7F38A542899D217A(unk_0x3334247FF7988DFA(Local_1313.f_0, 3)) > 0.5f)
						{
							func_244(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_243(Local_1313.f_0))
					{
						if (!unk_0x087B4B9B00A33D4D(Local_1313.f_0, 2))
						{
							if (unk_0x847C57A0E5593E07(Local_1313.f_0, 2))
							{
								unk_0xDBF2D7502C37C299(Local_1313.f_0, 2, 1, 0);
								unk_0x82AD6265A8FA7C49(Local_1313.f_0, 2, 0, 0, 1);
								iLocal_1342 = 1;
							}
						}
						else
						{
							iLocal_1342 = 1;
						}
						if (!unk_0x087B4B9B00A33D4D(Local_1313.f_0, 3))
						{
							if (unk_0x847C57A0E5593E07(Local_1313.f_0, 3))
							{
								unk_0xDBF2D7502C37C299(Local_1313.f_0, 3, 1, 0);
								unk_0x82AD6265A8FA7C49(Local_1313.f_0, 3, 0, 0, 1);
								iLocal_1343 = 1;
							}
						}
						else
						{
							iLocal_1343 = 1;
						}
						if (iLocal_1342 && iLocal_1343)
						{
							iLocal_1341 = 1;
							func_244(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_120(uParam0))
	{
	}
}

int func_243(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_245(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF6917DE0E003509D(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x04E7E853E31F41A3(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xDF83A33BF4D93E6F(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_246(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_247(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xD55D878601C46BA9(iParam0))
		{
			unk_0x27B54A887EC71B05(iParam0, 1, bParam1);
			unk_0x70EE8EFEE355AD29(iParam0, 1, 0);
			unk_0x100966E1EB5421AA(iParam0);
		}
		if (bParam1)
		{
			Var0 = { func_248(unk_0x1141852D07400777(iParam0, 1) - unk_0xBD306D8AFEF4E078(Local_1313.f_0, unk_0x8AF26D6D6BBE6931(-0.15f, 0.15f), IntToFloat(-unk_0x0ADD324BC46177EF(3, 6)), unk_0x8AF26D6D6BBE6931(-0.1f, 0.1f))) };
			unk_0x2FD3AA0C3395806A(iParam0, 1, Var0 * FtoV(unk_0x8AF26D6D6BBE6931(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0x2FD3AA0C3395806A(iParam0, 5, IntToFloat(unk_0x0ADD324BC46177EF(0, 10)), IntToFloat(unk_0x0ADD324BC46177EF(0, 10)), IntToFloat(unk_0x0ADD324BC46177EF(0, 10)), 0, 1, 1, 0);
			unk_0x249A76E7AFBED637(iParam0, Local_1313.f_0, 1);
		}
	}
}

Vector3 func_248(struct<3> Param0)
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

int func_249(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_250(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	
	if (!func_120(uParam0))
	{
		if (((!unk_0xD51CFE69539DB6D8(Local_1301.f_0) || unk_0xAF437D7C802AB246(Local_1301.f_0)) || (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && func_182(Local_1313.f_0, Local_1301.f_0, 1) > 200f)) || (!unk_0x51374A0BB2871E6E(Local_1301.f_0, 0) && func_182(Local_1313.f_0, Local_1301.f_0, 1) > 200f))
		{
			if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && unk_0xC45A34912542C4EB(Local_1313.f_0, 0))
			{
				unk_0x12F88FDE652A5758(Local_1313.f_0, 0);
			}
			unk_0x506D42CB68AE4EA5(&Local_1301);
			func_246(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0xD51CFE69539DB6D8(Local_1313.f_0) || !unk_0xC45A34912542C4EB(Local_1313.f_0, 0)) || !unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 0)))
			{
				iLocal_1332 = 0;
				iLocal_1333 = 0;
				StringCopy(&cLocal_1334, "", 24);
				func_244(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0x3C1B1C07A878AE1D(iVar0, Local_1313.f_0))
					{
						if ((!iLocal_1327 && (unk_0x9D40BBF80D8F5E8A() - iLocal_1329) > 500) && fLocal_1328 >= 4f)
						{
							iLocal_1327 = 1;
							iLocal_1326++;
						}
					}
					else if (iLocal_1327)
					{
						iLocal_1329 = unk_0x9D40BBF80D8F5E8A();
						iLocal_1327 = 0;
					}
					Var1 = { func_248(unk_0x1141852D07400777(iVar0, 1) - unk_0x1141852D07400777(Local_1313.f_0, 1)) };
					Var4 = { unk_0x834FF019A048DE2C(Local_1313.f_0) - unk_0x834FF019A048DE2C(iVar0) };
					fLocal_1328 = func_254(Var4, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0x915685CA559C211B(Local_1313.f_0, unk_0xE7869D5D7816A9B6(), 1) || unk_0x915685CA559C211B(Local_1301.f_0, unk_0xE7869D5D7816A9B6(), 1)) || unk_0xC06784B4179CA473(Local_1301.f_0, 122)) || unk_0xC06784B4179CA473(Local_1301.f_0, 123)) || unk_0xC06784B4179CA473(Local_1301.f_0, 124)) || unk_0xC06784B4179CA473(Local_1301.f_0, 29)) || unk_0xC06784B4179CA473(Local_1301.f_0, 116)) || unk_0xC06784B4179CA473(Local_1301.f_0, 121)) || unk_0xC06784B4179CA473(Local_1301.f_0, 22)) || unk_0xC06784B4179CA473(Local_1301.f_0, 24)) || unk_0xC06784B4179CA473(Local_1301.f_0, 46)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 136)) || unk_0xC06784B4179CA473(Local_1301.f_0, 86)) || unk_0xC06784B4179CA473(Local_1301.f_0, 87)) || unk_0x4231F56FA5885AE9(Local_1301.f_0)) || unk_0x9DD85FBDD5BC3BF1(Local_1313.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_244(uParam0, 4, 0);
					}
					else
					{
						if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && unk_0xC45A34912542C4EB(Local_1313.f_0, 0))
						{
							if ((unk_0x001C6BE3BAFF3D86(unk_0xE7869D5D7816A9B6()) || fLocal_1328 > 0.5f) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), unk_0xBD306D8AFEF4E078(Local_1313.f_0, 0f, 2f, -0.5f), unk_0xBD306D8AFEF4E078(Local_1313.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0))
							{
								if (!unk_0x8D0B60D17D46949D(Local_1313.f_0))
								{
									if (iLocal_1345 == -1)
									{
										iLocal_1345 = unk_0x9D40BBF80D8F5E8A();
									}
									else if ((unk_0x9D40BBF80D8F5E8A() - iLocal_1345) > 5000)
									{
										unk_0xF67C39F4C9279042(Local_1313.f_0, 2000, joaat("normal"), 0);
									}
								}
								else
								{
									iLocal_1345 = -1;
								}
							}
						}
						if (func_253(Local_1313.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_223(&uLocal_99, "jhp2a_airport");
						}
						if (!func_252(Local_1301.f_0, -235832601, 1))
						{
							if (unk_0x22E902D6AF27E232(Local_1313.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0))
							{
								if (unk_0x729A24E50365D07B("jhp2a_airport"))
								{
									iLocal_1332 = 0;
									iLocal_1333 = 0;
									StringCopy(&cLocal_1334, "", 24);
									func_244(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x8856EDD9AA658EC6(Local_1301.f_0, Local_1313.f_0, &Global_88220, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0x915685CA559C211B(Local_1313.f_0, unk_0xE7869D5D7816A9B6(), 1) || unk_0x915685CA559C211B(Local_1301.f_0, unk_0xE7869D5D7816A9B6(), 1)) || unk_0xC06784B4179CA473(Local_1301.f_0, 122)) || unk_0xC06784B4179CA473(Local_1301.f_0, 123)) || unk_0xC06784B4179CA473(Local_1301.f_0, 124)) || unk_0xC06784B4179CA473(Local_1301.f_0, 29)) || unk_0xC06784B4179CA473(Local_1301.f_0, 116)) || unk_0xC06784B4179CA473(Local_1301.f_0, 121)) || unk_0xC06784B4179CA473(Local_1301.f_0, 22)) || unk_0xC06784B4179CA473(Local_1301.f_0, 24)) || unk_0xC06784B4179CA473(Local_1301.f_0, 46)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 136)) || unk_0xC06784B4179CA473(Local_1301.f_0, 86)) || unk_0xC06784B4179CA473(Local_1301.f_0, 87)) || unk_0x4231F56FA5885AE9(Local_1301.f_0)) || unk_0x9DD85FBDD5BC3BF1(Local_1313.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_244(uParam0, 5, 0);
					}
					else if (!func_252(Local_1301.f_0, -235832601, 1))
					{
						if (unk_0x22E902D6AF27E232(Local_1313.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0))
						{
							iLocal_1332 = 0;
							iLocal_1333 = 0;
							StringCopy(&cLocal_1334, "", 24);
							func_244(uParam0, 3, 0);
						}
						else
						{
							unk_0x8856EDD9AA658EC6(Local_1301.f_0, Local_1313.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0x915685CA559C211B(Local_1313.f_0, unk_0xE7869D5D7816A9B6(), 1) || unk_0x915685CA559C211B(Local_1301.f_0, unk_0xE7869D5D7816A9B6(), 1)) || unk_0xC06784B4179CA473(Local_1301.f_0, 122)) || unk_0xC06784B4179CA473(Local_1301.f_0, 123)) || unk_0xC06784B4179CA473(Local_1301.f_0, 124)) || unk_0xC06784B4179CA473(Local_1301.f_0, 29)) || unk_0xC06784B4179CA473(Local_1301.f_0, 116)) || unk_0xC06784B4179CA473(Local_1301.f_0, 121)) || unk_0xC06784B4179CA473(Local_1301.f_0, 22)) || unk_0xC06784B4179CA473(Local_1301.f_0, 24)) || unk_0xC06784B4179CA473(Local_1301.f_0, 46)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 61)) || unk_0xC06784B4179CA473(Local_1301.f_0, 136)) || unk_0xC06784B4179CA473(Local_1301.f_0, 86)) || unk_0xC06784B4179CA473(Local_1301.f_0, 87)) || unk_0x4231F56FA5885AE9(Local_1301.f_0)) || unk_0x9DD85FBDD5BC3BF1(Local_1313.f_0)) || unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_1313.f_0, 1)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_244(uParam0, 5, 0);
					}
					else if (unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 1))
					{
						if (!func_252(Local_1301.f_0, 451360105, 1))
						{
							unk_0x663F1B23D2C4D20A(Local_1301.f_0, Local_1313.f_0, 0);
						}
					}
					else
					{
						unk_0x18F90CF5D756C783(Local_1313.f_0, 2);
						if (!func_252(Local_1301.f_0, 242628503, 1))
						{
							unk_0x94026C1D1DB14225(&uLocal_1299);
							unk_0x33E113E52A91C5C3(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0x911ECBCE73F8EC3F(uLocal_1299);
							unk_0xC2C4A3A9FF2FBFFF(Local_1301.f_0, uLocal_1299);
							unk_0x33A90AD8FA327B72(&uLocal_1299);
						}
					}
					break;
				
				case 4:
					if (unk_0x3F916E486684A3A8(Local_1313.f_0, 0, 1))
					{
						iVar7++;
					}
					if (unk_0x3F916E486684A3A8(Local_1313.f_0, 1, 1))
					{
						iVar7++;
					}
					if (unk_0x3F916E486684A3A8(Local_1313.f_0, 4, 1))
					{
						iVar7++;
					}
					if (unk_0x3F916E486684A3A8(Local_1313.f_0, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(unk_0x8219941CC4732B36(Local_1313.f_0)) <= 0f || unk_0xF4E8009A18C52112(Local_1313.f_0) <= 250f) || unk_0x28E83575387AA2B1(Local_1313.f_0) <= 400f) || unk_0xAF437D7C802AB246(Local_1301.f_0)) || iVar7 >= 2) || iLocal_1326 > 6)
					{
						if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && unk_0xC45A34912542C4EB(Local_1313.f_0, 0))
						{
							unk_0x12F88FDE652A5758(Local_1313.f_0, 0);
						}
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						func_244(uParam0, 5, 0);
					}
					else if (!func_252(Local_1301.f_0, -1273030092, 1))
					{
						unk_0x547730440687D355(Local_1301.f_0, Local_1313.f_0, unk_0xE7869D5D7816A9B6(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && !unk_0x76B2D234F1895632(Local_1313.f_0))
					{
						if (unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 0))
						{
							if (!func_80(Local_1313.f_0))
							{
								if (!func_252(Local_1301.f_0, -2118855366, 1))
								{
									unk_0xFA2C5C2D054C888E(Local_1301.f_0);
									unk_0x94EB3B5D2CDEC0CD(Local_1301.f_0, Local_1313.f_0, 5, -1);
								}
							}
							else if (!func_252(Local_1301.f_0, 451360105, 1))
							{
								unk_0x663F1B23D2C4D20A(Local_1301.f_0, Local_1313.f_0, 256);
							}
						}
						else if (!func_252(Local_1301.f_0, 780511057, 1))
						{
							unk_0x321C1AA209172C00(Local_1301.f_0, 1);
							unk_0x13C351F151D49F89(Local_1301.f_0, unk_0xE7869D5D7816A9B6(), 0, 16);
						}
					}
					if (unk_0xD51CFE69539DB6D8(Local_1313.f_0) && !unk_0x76B2D234F1895632(Local_1313.f_0))
					{
						unk_0xD09991316D3221AD(Local_1313.f_0, 2, 1);
						unk_0xD09991316D3221AD(Local_1313.f_0, 3, 1);
					}
					break;
				}
		}
		if ((unk_0xD51CFE69539DB6D8(Local_1301.f_0) && !unk_0xAF437D7C802AB246(Local_1301.f_0)) && !unk_0x30B9624BD969F89F(Local_1301.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1332)
					{
						case 0:
							if (func_35() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								if (unk_0x4231F56FA5885AE9(Local_1301.f_0))
								{
									func_55(Local_1301.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									func_55(Local_1301.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1332++;
							}
							break;
						
						case 1:
							if (!unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 0) || iLocal_1298 == 3)
							{
								if (!unk_0x8AF655CC5761C7A2(Local_1301.f_0, Local_1313.f_0, 0))
								{
									iLocal_1332 = 4;
								}
								else
								{
									iLocal_1332++;
								}
							}
							else if (func_35() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								if (func_251(&uLocal_1121, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1332++;
								}
							}
							break;
						
						case 2:
							if (func_35() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								if (unk_0xF6917DE0E003509D(&cLocal_1334))
								{
									fVar8 = unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(Local_1301.f_0, 1));
									if ((((((iLocal_1327 || unk_0xC06784B4179CA473(Local_1301.f_0, 122)) || unk_0xC06784B4179CA473(Local_1301.f_0, 123)) || unk_0xC06784B4179CA473(Local_1301.f_0, 124)) || fVar8 < 49f) && (unk_0x9D40BBF80D8F5E8A() - iLocal_1333) > 5000) && fVar8 < 225f)
									{
										if (unk_0x0ADD324BC46177EF(0, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0xF6917DE0E003509D(&cLocal_1334))
								{
									if (unk_0x04E7E853E31F41A3(&cLocal_1334, "GENERIC_CURSE_HIGH"))
									{
										func_55(Local_1301.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1332++;
									}
									else
									{
										if (func_251(&uLocal_1121, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
										{
											iLocal_1332++;
										}
										iLocal_1332++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_36() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								iLocal_1333 = unk_0x9D40BBF80D8F5E8A();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1332)
					{
						case 0:
							if (func_35() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								if (unk_0xF6917DE0E003509D(&cLocal_1334))
								{
									if ((unk_0x9D40BBF80D8F5E8A() - iLocal_1333) > 5000 && unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(Local_1301.f_0, 1)) < 400f)
									{
										if (unk_0x0ADD324BC46177EF(0, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0xF6917DE0E003509D(&cLocal_1334))
								{
									if (unk_0x04E7E853E31F41A3(&cLocal_1334, "GENERIC_INSULT_HIGH"))
									{
										func_55(Local_1301.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1332++;
									}
									else if (func_251(&uLocal_1121, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
									{
										iLocal_1332++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_36() && !unk_0x2AA9423D1F896887(Local_1301.f_0))
							{
								iLocal_1333 = unk_0x9D40BBF80D8F5E8A();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_120(uParam0))
	{
	}
}

bool func_251(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_25(sParam2, iParam3, 0);
}

int func_252(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xC47857E5E74EA5AF(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_253(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

float func_254(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_255(int iParam0)
{
	struct<2> Var0;
	char[] cVar4[8];
	
	unk_0xE72D045151F6CA70("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_267();
		func_8(0);
		unk_0x52F20802944F8DCE();
	}
	else if (!bLocal_98)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0xF6917DE0E003509D(&cVar4))
		{
			func_265(&Var0);
		}
		else
		{
			func_256(&Var0, &cVar4);
		}
		bLocal_98 = true;
	}
}

void func_256(char* sParam0, char* sParam1)
{
	func_264(sParam0, sParam1);
	func_257(0);
}

void func_257(int iParam0)
{
	int iVar0;
	
	if (Global_99155.f_7699 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_258(iVar0))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
		Global_91061 = iParam0;
	}
}

int func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_263();
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x9F8FD6071D5A40B6(5000);
	}
	iVar0 = Global_82110[iParam0 /*5*/];
	iVar1 = Global_69505.f_109[iVar0 /*4*/];
	func_262(iVar1, 1);
	unk_0xCC01DB5BB34A420E(unk_0x3F80C6638E3A1A90());
	unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
	func_259(&(Global_99155.f_1750.f_539), iVar1);
	if (Global_85533 == Global_91062)
	{
		Global_99155.f_7699.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB519E5386FBF69E5(Global_82146[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0xBE3A91305A4366F2(0);
		}
	}
	Global_99155.f_7699.f_330[iVar1 /*6*/].f_2++;
	Global_85533 = Global_91062;
	if (iParam0 == -1)
	{
		if (Global_99155.f_7699)
		{
		}
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_259(var uParam0, int iParam1)
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
		iVar1 = Global_99155.f_17147[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_261(Global_99155.f_17147[iVar0], &Var2, &fVar5))
			{
				Global_99155.f_17147[iVar0] = 318;
				func_260(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88748[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_9 = 0f;
				Global_88748[iVar0 /*29*/].f_12 = 0f;
				Global_88748[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_10 = 0f;
				Global_88748[iVar0 /*29*/].f_13 = 0f;
				Global_88748[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_11 = 0f;
				Global_88748[iVar0 /*29*/].f_14 = 0f;
				Global_88748[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_26 = 0f;
				Global_88748[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_27 = 0f;
				Global_88748[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_260(var uParam0)
{
	*uParam0 = -15;
}

int func_261(int iParam0, var uParam1, float fParam2)
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
			return func_261(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_261(8, uParam1, fParam2);
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

void func_262(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85343[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85343[iParam0 /*2*/] = 0;
	}
}

void func_263()
{
	Global_91060 = 1;
	if (unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_172())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
	}
	else if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_172())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 25);
	}
}

void func_264(char* sParam0, char* sParam1)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (unk_0x21DDB8B32E12806A(sParam0) <= 16)
		{
			if (unk_0x21DDB8B32E12806A(sParam1) <= 16)
			{
				StringCopy(&Global_69468, sParam0, 16);
				StringCopy(&Global_69472, sParam1, 16);
			}
		}
	}
}

void func_265(char* sParam0)
{
	func_266(sParam0);
	func_257(0);
}

void func_266(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (unk_0x21DDB8B32E12806A(sParam0) <= 16)
		{
			StringCopy(&Global_69468, sParam0, 16);
			StringCopy(&Global_69472, "", 16);
			if (unk_0x850C4267F4883C31())
			{
				unk_0x63842D98ECE6507A();
			}
		}
	}
}

void func_267()
{
	int iVar0;
	
	if (unk_0xD51489677E1B0844("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_99155.f_7699 || func_6(0))
	{
		if (!func_268())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_258(iVar0))
				{
					return;
				}
				unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_263();
		}
	}
}

int func_268()
{
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
	{
		return 0;
	}
	return 1;
}

