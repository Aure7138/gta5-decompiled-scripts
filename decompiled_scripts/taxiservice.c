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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	char* sLocal_108 = NULL;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 12;
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
	var uLocal_800 = 1065353216;
	var uLocal_801 = 0;
	struct<9> Local_802 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	struct<3> Local_815[40];
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	char cLocal_940[32] = "";
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	struct<3> Local_948 = { 0, 0, 0 } ;
	struct<3> Local_951 = { 0, 0, 0 } ;
	struct<3> Local_954 = { 0, 0, 0 } ;
	struct<3> Local_957 = { 0, 0, 0 } ;
	struct<3> Local_960 = { 0, 0, 0 } ;
	struct<3> Local_963 = { 0, 0, 0 } ;
	struct<3> Local_966 = { 0, 0, 0 } ;
	struct<3> Local_969 = { 0, 0, 0 } ;
	struct<3> Local_972 = { 0, 0, 0 } ;
	struct<3> Local_975 = { 0, 0, 0 } ;
	int iLocal_978 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = unk_0xADC39FDF03F9D8CA();
	iLocal_46 = unk_0x138F9DA1F3442BA3();
	iLocal_70 = 1076369579;
	iLocal_71 = 1076631591;
	fLocal_74 = 0.22f;
	fLocal_75 = 50f;
	fLocal_76 = -4f;
	fLocal_77 = 4f;
	fLocal_78 = -89f;
	fLocal_79 = 89f;
	fLocal_80 = 4f;
	fLocal_83 = 0f;
	fLocal_85 = 0.4f;
	fLocal_86 = 0.6f;
	fLocal_87 = 0.201f;
	fLocal_88 = 0.351f;
	iLocal_91 = -1;
	iLocal_106 = -1;
	iLocal_107 = -1;
	sLocal_108 = unk_0xB588E50C18B98D3F(2, 195, 1);
	iLocal_109 = joaat("prop_taxi_meter_2");
	iLocal_111 = 3;
	iLocal_812 = -1;
	iLocal_813 = 262;
	StringCopy(&cLocal_940, "oddjobs@taxi@driver", 32);
	Local_951 = { 0f, 0f, 0f };
	Local_954 = { 0f, 0f, 0f };
	Local_966 = { 0f, -0.25f, 0.55f };
	Local_969 = { -0.3f, 1f, 0.35f };
	Local_972 = { -0.01f, 0.6f, 0.24f };
	Local_975 = { -5f, 0f, 0f };
	if (unk_0x7547D7CF93115D6D(66))
	{
		if (unk_0x26AE414A8D829787() == 64)
		{
			func_223(0);
		}
		else
		{
			func_223(1);
		}
		unk_0x883793591E631A3B();
	}
	if (!func_216())
	{
		func_223(1);
	}
	while (true)
	{
		if (!func_215())
		{
			func_223(1);
		}
		if (func_214(iLocal_938))
		{
			func_223(1);
		}
		switch (iLocal_938)
		{
			case 1:
				func_54();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (Global_96220)
		{
			Global_96220 = 0;
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
				unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 1);
			}
			unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
			if ((iLocal_937 == 2 || iLocal_937 == 3) || iLocal_937 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_96204) && unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_96204, 1))
	{
		if (!func_2(unk_0x507DA4994C3D8EBD(), -828834893) && !func_2(unk_0x507DA4994C3D8EBD(), 451360105))
		{
			unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
		}
	}
	else
	{
		if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
			{
				if (unk_0x53170344050F2301(Global_96205, Global_96204, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
					{
						unk_0x9C373E78BA27BAA4(Global_96205, Global_96204, unk_0x507DA4994C3D8EBD(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!unk_0x1BA961C8CF14F399(Global_96205))
				{
					if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
					{
						unk_0xA859D289EEB2D72A(Global_96205, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
					}
				}
				unk_0xA1E4BA3B17C6D931(Global_96205, 1);
				unk_0x2DC5B31EBB810396(Global_96205, 0);
			}
		}
		else if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
		{
			if (unk_0x53170344050F2301(Global_96205, Global_96204, 0))
			{
				if (!func_2(Global_96205, -258271821))
				{
					unk_0xF40D4EBDC0BA2C26(Global_96205, Global_96204, 12f, 790699);
				}
			}
			unk_0xA1E4BA3B17C6D931(Global_96205, 1);
			unk_0x2DC5B31EBB810396(Global_96205, 0);
		}
		func_223(1);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				if (unk_0xEC043AB2FEE0E94F(iParam0, iParam1) == 1 || unk_0xEC043AB2FEE0E94F(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(uParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_5()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0xFC3D53CDA17426F4(func_6()))
	{
		unk_0xB589946D42277470(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = unk_0x6B3743907740C84A(func_6(), 0);
			if (!unk_0x9F94F2CFDCA78C55(uVar2))
			{
				unk_0xAC57FBF981AB03F4(iVar2);
				if (!unk_0xE5D56342B0FF1D0D(Global_96204))
				{
					if (unk_0x53170344050F2301(iVar2, Global_96204, 0))
					{
						unk_0x9632B185BE7E73E6(iVar2, Global_96204, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x6B3743907740C84A(func_6(), 1);
				if (!unk_0x9F94F2CFDCA78C55(iVar2))
				{
					unk_0xAC57FBF981AB03F4(iVar2);
					if (!unk_0xE5D56342B0FF1D0D(Global_96204))
					{
						if (unk_0x53170344050F2301(iVar2, Global_96204, 0))
						{
							unk_0x9632B185BE7E73E6(iVar2, Global_96204, 64);
						}
					}
				}
			}
		}
	}
}

var func_6()
{
	return unk_0x36A590B33049FCAF(unk_0x4D82797EF5035A9F());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(Global_96205))
		{
			if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
			{
				if (!func_52())
				{
					bVar0 = true;
					if (func_45(func_46()) >= iLocal_102)
					{
						if (bLocal_66)
						{
							if (iLocal_102 > 0)
							{
								if (fLocal_73 > 75f)
								{
									iLocal_814 = 6;
								}
								else
								{
									iLocal_814 = 5;
								}
								func_35(Global_96205, &iLocal_814);
								func_9(func_46(), 21, iLocal_102);
								bVar0 = false;
							}
						}
						else if (iLocal_67 || iLocal_937 == 3)
						{
							if (iLocal_102 > 0)
							{
								iLocal_814 = 13;
								func_35(Global_96205, &iLocal_814);
								func_9(func_46(), 21, iLocal_102);
								bVar0 = false;
							}
						}
						else if (unk_0x11F6A4A45943670E(Global_96204) > 5f)
						{
							if (!func_8())
							{
								iLocal_814 = 12;
								func_35(Global_96205, &iLocal_814);
								unk_0x5D68762ED393DB97(unk_0xAF65E5A58BE87D95(), 1, 0);
								unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
							}
						}
						else
						{
							iLocal_814 = 13;
							func_35(Global_96205, &iLocal_814);
							if (iLocal_102 > 0)
							{
								func_9(func_46(), 21, iLocal_102);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_102 > 0)
						{
							iLocal_814 = 7;
							func_35(Global_96205, &iLocal_814);
							unk_0x5D68762ED393DB97(unk_0xAF65E5A58BE87D95(), 1, 0);
							unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_10(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_34();
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
					func_33(99, 1);
					func_32(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_32(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_32(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_17(5))
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
							func_32(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_17(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
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
					switch (iParam0)
					{
						case 0:
							func_32(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_32(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_32(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x00ADB26EA48763F7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_17(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_32(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_32(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_32(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_16(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, iParam3);
					break;
				
				case 1:
					func_33(97, iParam3);
					break;
				
				case 2:
					func_33(96, iParam3);
					break;
			}
			func_33(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_32(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_32(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_32(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_12(iParam0);
	if (Global_34909 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_13(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_15() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_15() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_14(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_14(int iParam0)
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

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0)
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
}

bool func_17(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_15() /*8053*/].f_5756.f_10, iParam0);
}

int func_18(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_31(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_30(&Global_2543759))
	{
		if (func_28(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_25(&(uParam0->f_62), (8f - 0.5f));
}

void func_25(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_26() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_26()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_34()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

void func_35(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (!func_41(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_39(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						func_36();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_39(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_39(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_39(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_39(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_39(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						bVar0 = unk_0x6A55A66588AE4BE7(unk_0x507DA4994C3D8EBD());
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
						}
						func_39(unk_0x507DA4994C3D8EBD(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						func_36();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_39(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_39(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_39(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_39(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_96225)
					{
						func_39(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_96225 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_39(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (unk_0xCF6C791C18F498FC())
					{
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
						{
							bVar0 = unk_0x6A55A66588AE4BE7(unk_0x507DA4994C3D8EBD());
							if (bVar0)
							{
								unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
							}
							switch (unk_0xDA23B3063FF99093())
							{
								case 0:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_39(unk_0x507DA4994C3D8EBD(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						bVar0 = unk_0x6A55A66588AE4BE7(unk_0x507DA4994C3D8EBD());
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
						}
						func_39(unk_0x507DA4994C3D8EBD(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_39(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
					{
						bVar0 = unk_0x6A55A66588AE4BE7(unk_0x507DA4994C3D8EBD());
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
						}
						func_39(unk_0x507DA4994C3D8EBD(), "THANKS", 7);
						if (bVar0)
						{
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_41(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_36()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_37();
	if (!unk_0x8FA72E132AAFA62F(sVar0))
	{
		bVar1 = unk_0x6A55A66588AE4BE7(unk_0x507DA4994C3D8EBD());
		if (bVar1)
		{
			unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 0);
		}
		func_39(unk_0x507DA4994C3D8EBD(), sVar0, 7);
		if (bVar1)
		{
			unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
		}
	}
}

char* func_37()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0xE0F4D060DC66FA8E(func_38(Local_42.f_0)), 32);
	if (unk_0xA858564DC37EED5E("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0xA858564DC37EED5E("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0xA858564DC37EED5E("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0xA858564DC37EED5E("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0xA858564DC37EED5E("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0xA858564DC37EED5E("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0xA858564DC37EED5E("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0xA858564DC37EED5E("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0xA858564DC37EED5E("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0xA858564DC37EED5E("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0xA858564DC37EED5E("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0xA858564DC37EED5E("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0xA858564DC37EED5E("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0xA858564DC37EED5E("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0xA858564DC37EED5E("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0xA858564DC37EED5E("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0xA858564DC37EED5E("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0xA858564DC37EED5E("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0xA858564DC37EED5E("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0xA858564DC37EED5E("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0xA858564DC37EED5E("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0xA858564DC37EED5E("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0xA858564DC37EED5E("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0xA858564DC37EED5E("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0xA858564DC37EED5E("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0xA858564DC37EED5E("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xA858564DC37EED5E("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0xA858564DC37EED5E("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0xA858564DC37EED5E("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0xA858564DC37EED5E("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0xA858564DC37EED5E("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0xA858564DC37EED5E("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0xA858564DC37EED5E("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0xA858564DC37EED5E("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0xA858564DC37EED5E("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0xA858564DC37EED5E("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0xA858564DC37EED5E("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0xA858564DC37EED5E("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0xA858564DC37EED5E("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0xA858564DC37EED5E("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0xA858564DC37EED5E("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0xA858564DC37EED5E("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0xA858564DC37EED5E("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0xA858564DC37EED5E("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0xA858564DC37EED5E("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0xA858564DC37EED5E("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0xA858564DC37EED5E("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0xA858564DC37EED5E("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0xA858564DC37EED5E("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0xA858564DC37EED5E("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0xA858564DC37EED5E("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0xA858564DC37EED5E("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xA858564DC37EED5E("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0xA858564DC37EED5E("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0xA858564DC37EED5E("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0xA858564DC37EED5E("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0xA858564DC37EED5E("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0xA858564DC37EED5E("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0xA858564DC37EED5E("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0xA858564DC37EED5E("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0xA858564DC37EED5E("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0xA858564DC37EED5E("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0xA858564DC37EED5E("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0xA858564DC37EED5E("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0xA858564DC37EED5E("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0xA858564DC37EED5E("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0xA858564DC37EED5E("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0xA858564DC37EED5E("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0xA858564DC37EED5E("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0xA858564DC37EED5E("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0xA858564DC37EED5E("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0xA858564DC37EED5E("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0xA858564DC37EED5E("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0xA858564DC37EED5E("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0xA858564DC37EED5E("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0xA858564DC37EED5E("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0xA858564DC37EED5E("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0xA858564DC37EED5E("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0xA858564DC37EED5E("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0xA858564DC37EED5E("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0xA858564DC37EED5E("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0xA858564DC37EED5E("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0xA858564DC37EED5E("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0xA858564DC37EED5E("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0xA858564DC37EED5E("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0xA858564DC37EED5E("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0xA858564DC37EED5E("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0xA858564DC37EED5E("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0xA858564DC37EED5E("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0xA858564DC37EED5E("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0xA858564DC37EED5E("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0xA858564DC37EED5E("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0xA858564DC37EED5E("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0xA858564DC37EED5E("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0xA858564DC37EED5E("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0xA858564DC37EED5E("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0xA858564DC37EED5E("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0xA858564DC37EED5E("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0xA858564DC37EED5E("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0xA858564DC37EED5E("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0xA858564DC37EED5E("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_38(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0xF0F6309B76A8474C(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0x7BBE8D79E8CB52E9(iParam0);
		if (unk_0xCA8794CE207FC6D5(iVar3, 0))
		{
			Var0 = { unk_0xBF1B13057E5119A4(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0x274BAC44978F9161(unk_0x7BBE8D79E8CB52E9(iParam0));
		if (!unk_0x9F94F2CFDCA78C55(iVar4))
		{
			Var0 = { unk_0xBF1B13057E5119A4(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0xB7E8BD80F6126D63(unk_0x7BBE8D79E8CB52E9(iParam0));
		if (unk_0xFD68187442384158(iVar5))
		{
			Var0 = { unk_0xBF1B13057E5119A4(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0xDEC21C0D420A9EFF(iParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0x5EFE230EE2438209(iParam0);
		if (unk_0xBAE26BE2046B39E0(uVar6))
		{
			Var0 = { unk_0xC615E5E6E1D987A1(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0xDEC21C0D420A9EFF(iParam0) };
	}
	return Var0;
}

void func_39(int iParam0, char* sParam1, int iParam2)
{
	unk_0xF3E45A7DABC97254(iParam0, sParam1, func_40(iParam2), 1);
}

int func_40(int iParam0)
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

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (unk_0x135ED76D25C24E67(iParam0))
		{
			func_43("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x135ED76D25C24E67(unk_0x507DA4994C3D8EBD()))
		{
			func_43("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_42())
	{
		func_43("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x44057438DAE1BD45())
		{
			func_43("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFC3D53CDA17426F4(func_6()))
		{
			unk_0xB589946D42277470(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x6B3743907740C84A(func_6(), iVar2);
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (unk_0x135ED76D25C24E67(iVar0))
						{
							func_43("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_42()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_43(char* sParam0)
{
	func_44(sParam0);
}

void func_44(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

int func_45(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_46()
{
	func_47();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_47()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_51(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_50(unk_0x507DA4994C3D8EBD());
			if (func_49(iVar0) && (!func_48(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_49(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_48(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_52()
{
	if (func_53(1) == func_46())
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	return Global_97173.f_28026[iParam0 /*4*/];
}

void func_54()
{
	if (func_212())
	{
		func_210();
		func_209();
		func_208();
		if (!func_205())
		{
			func_199();
		}
		func_198();
		if (iLocal_937 != 4)
		{
			func_35(Global_96205, &iLocal_814);
			if (iLocal_937 != 0)
			{
				if (func_196())
				{
					if (unk_0xE908465F9CDF4F1A(uLocal_112))
					{
						func_172();
						iLocal_59 = 1;
					}
				}
				func_163();
			}
		}
		switch (iLocal_937)
		{
			case 0:
				if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
					{
						if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3) && !unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
						{
							if (!func_2(Global_96205, -2118855366))
							{
								unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 1, 1000000);
							}
						}
					}
				}
				if (func_162())
				{
					if (func_161() && !unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD()))
					{
						func_172();
						iLocal_814 = 1;
						iLocal_936 = 0;
						Global_96241 = 0;
						iLocal_89 = 0;
						iLocal_67 = 0;
						iLocal_57 = 0;
						iLocal_59 = 1;
						func_160();
						iLocal_937 = 1;
					}
				}
				break;
			
			case 1:
				if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
					{
						if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3) && !unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
						{
							if (!func_2(Global_96205, -2118855366))
							{
								unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 1, 1000000);
							}
						}
					}
				}
				func_159(&Global_96204, iLocal_978);
				if (func_158())
				{
					unk_0x2849EC95E9D69392(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_59 = 1;
					iLocal_937 = 2;
				}
				break;
			
			case 2:
				if (func_158())
				{
					func_155();
				}
				break;
			
			case 3:
				func_154();
				break;
			
			case 4:
				func_70();
				break;
		}
		func_55();
	}
	else
	{
		iLocal_938 = 2;
	}
}

void func_55()
{
	char* sVar0;
	
	if (!func_205())
	{
		if (unk_0xE908465F9CDF4F1A(uLocal_113))
		{
			if (iLocal_937 != 0)
			{
				sVar0 = unk_0xB588E50C18B98D3F(2, 218, 1);
				if (!unk_0xA858564DC37EED5E(sLocal_108, sVar0))
				{
					sLocal_108 = sVar0;
					iLocal_59 = 1;
				}
				if (iLocal_59)
				{
					Local_802 = { func_69() };
					func_67(&uLocal_114);
					func_66(0, 75, "TXM_EXIT", &uLocal_114, 0, 332);
					if (iLocal_92 > 1)
					{
						func_66(2, 218, "TXM_CDES", &uLocal_114, 0, 332);
					}
					if (!bLocal_61)
					{
						if (iLocal_92 > 0)
						{
							func_66(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
					}
					else if (iLocal_937 == 2)
					{
						func_66(2, 177, "TXM_STOP", &uLocal_114, 0, 332);
						if (bLocal_60)
						{
							func_66(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
						if (func_65())
						{
							func_66(2, 176, "TXM_SKIP", &uLocal_114, 0, 332);
						}
						if (!bLocal_65)
						{
							func_66(2, 179, "TXM_HURY", &uLocal_114, 0, 332);
						}
					}
					else if (iLocal_937 == 3)
					{
						func_66(2, 177, "TXM_STRT", &uLocal_114, 0, 332);
						if (bLocal_60)
						{
							func_66(2, 176, "TXM_SLCT", &uLocal_114, 0, 332);
						}
					}
					iLocal_59 = 0;
				}
				unk_0x24A6BECBE7FB7072(unk_0xE4DC0BC078803F6C());
				unk_0xED73E1F1A255F54E(0);
				func_64(1);
				func_63(1);
				func_56(&uLocal_113, &Local_802, &uLocal_114, func_62(&uLocal_114));
			}
		}
		else
		{
			uLocal_113 = unk_0xAFBDE0BB5C885026("instructional_buttons");
		}
	}
	else
	{
		unk_0x86FF04BBB2EC839F(&uLocal_113);
		iLocal_59 = 1;
	}
}

void func_56(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x00585B724989D978(2))
	{
		*uParam2 = 0;
		if (unk_0xE908465F9CDF4F1A(*uParam0))
		{
			if (unk_0x80AD636AD4184F2B())
			{
				unk_0xF48C88BD1F0007E8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5D559A5DDC88A4EF(0);
				unk_0xA52FC2467E672B55();
			}
			unk_0xF48C88BD1F0007E8(*uParam0, "CLEAR_ALL");
			unk_0xA52FC2467E672B55();
		}
		func_61(uParam2);
	}
	if (Global_1318742 < 2)
	{
		func_63(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xE908465F9CDF4F1A(*uParam0))
		{
			*uParam0 = unk_0xAFBDE0BB5C885026("instructional_buttons");
		}
		if (unk_0xE908465F9CDF4F1A(*uParam0))
		{
			unk_0xBEEABE099826EB55(*uParam0, "CLEAR_ALL");
			if (unk_0x80AD636AD4184F2B())
			{
				unk_0xF48C88BD1F0007E8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5D559A5DDC88A4EF(1);
				unk_0xA52FC2467E672B55();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x61D8FEAF64881CDA(uParam2->f_676, iVar0))
				{
					unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(iVar0);
					if (!unk_0x61D8FEAF64881CDA(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_60(unk_0xB588E50C18B98D3F(iVar1, iVar2, 1));
						if (iVar3 < 332)
						{
							func_60(unk_0xB588E50C18B98D3F(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_60(unk_0xA493E672277131FE(uVar4, uVar5, 1));
					}
					if (unk_0x61D8FEAF64881CDA(uParam2->f_674, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x5D89BC4A497AE832(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x844339A27F0F1508(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x113A6F657EE871A3();
					}
					else if (unk_0x61D8FEAF64881CDA(uParam2->f_675, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xD1F22DD7F7363AB6(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x113A6F657EE871A3();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x80AD636AD4184F2B())
					{
						if (unk_0x61D8FEAF64881CDA(uParam2->f_678, iVar0))
						{
							unk_0x5D559A5DDC88A4EF(1);
							unk_0x876C5D0739031E15(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x5D559A5DDC88A4EF(0);
							unk_0x876C5D0739031E15(332);
						}
					}
					unk_0xA52FC2467E672B55();
				}
				else
				{
					unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT");
					unk_0x876C5D0739031E15(iVar0);
					func_60(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x8FA72E132AAFA62F(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_60(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x61D8FEAF64881CDA(uParam2->f_674, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x5D89BC4A497AE832(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x844339A27F0F1508(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x113A6F657EE871A3();
					}
					else if (unk_0x61D8FEAF64881CDA(uParam2->f_675, iVar0))
					{
						unk_0x44F4D219F8513945(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xD1F22DD7F7363AB6(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x113A6F657EE871A3();
					}
					else
					{
						func_59(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x80AD636AD4184F2B())
					{
						unk_0x5D559A5DDC88A4EF(0);
						unk_0x876C5D0739031E15(332);
					}
					unk_0xA52FC2467E672B55();
				}
				iVar0++;
			}
			unk_0xF48C88BD1F0007E8(*uParam0, "SET_MAX_WIDTH");
			unk_0xA8F7908868900538(uParam2->f_686);
			unk_0xA52FC2467E672B55();
			unk_0xF48C88BD1F0007E8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x876C5D0739031E15(0);
			unk_0xA52FC2467E672B55();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_58(*uParam0, uParam1);
	}
	func_57();
}

void func_57()
{
	unk_0xD9E638F7F8DCAA60(7);
	unk_0xD9E638F7F8DCAA60(6);
	unk_0xD9E638F7F8DCAA60(8);
	unk_0xD9E638F7F8DCAA60(9);
}

void func_58(var uParam0, var uParam1)
{
	unk_0x4A383EC377D451D0(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_59(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_60(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

void func_61(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_62(var uParam0)
{
	return uParam0->f_679;
}

void func_63(int iParam0)
{
	Global_1318742 = iParam0;
}

void func_64(int iParam0)
{
	Global_1328798.f_404 = iParam0;
}

int func_65()
{
	if (iLocal_937 != 2)
	{
		return 0;
	}
	if (bLocal_60)
	{
		return 0;
	}
	if (fLocal_84 < 50f)
	{
		return 0;
	}
	if (unk_0x17D71902CA06091B(uLocal_69))
	{
		if (unk_0xB44AF0EB1FA3729D(uLocal_69))
		{
			return 0;
		}
	}
	return 1;
}

void func_66(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	unk_0x3DBE2A7AF9E71C82(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0x3DBE2A7AF9E71C82(&(uParam3->f_678), iVar0);
		if (iParam5 < 332)
		{
		}
	}
	uParam3->f_680++;
}

void func_67(var uParam0)
{
	func_68(uParam0);
	uParam0->f_679 = 1;
}

void func_68(var uParam0)
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

struct<9> func_69()
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

void func_70()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0xB39A0108BE8483DE(0);
	unk_0xB39A0108BE8483DE(1);
	unk_0xB39A0108BE8483DE(2);
	switch (iLocal_939)
	{
		case 0:
			func_148(1);
			if (func_147(iLocal_90, 500))
			{
				unk_0x7C69A4879766A867(250);
				unk_0xD56AC40382654643("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_939 = 1;
			}
			break;
		
		case 1:
			if (unk_0xC2C705ED6124A7C2() && unk_0xA2A45E58AC3DF6C5("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0x3F60DDB36F3654A8(Global_96204, 0);
				}
				unk_0x3DF5706BBD8F5B5B();
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				if (unk_0xBB59C64F638475F4("taxi"))
				{
					unk_0x9BDB594F5771D83A("taxi");
				}
				if (unk_0xFD68187442384158(iLocal_110))
				{
					unk_0x4095FD029041DD48(&iLocal_110);
					unk_0xFF467904A8A12BBE(iLocal_109);
				}
				if (unk_0xB44AF0EB1FA3729D(uLocal_69))
				{
					unk_0xBFA7DD5BAA27D9E3(0);
					Global_96221 = 0;
					unk_0x6F430D0F1783A56E(uLocal_69, 0);
					unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
					unk_0x0573535E36A62454();
					unk_0x465FDAA9130F8F45();
					unk_0xCB213D9A785B441C(0);
				}
				func_145(iLocal_978);
				iLocal_90 = unk_0xF976C624234A4AA8();
				if (bLocal_60)
				{
					bLocal_62 = false;
					bLocal_60 = false;
					Local_42 = { Local_815[iLocal_93 /*3*/] };
				}
				if (!bLocal_62)
				{
					iLocal_89 = 0;
					iLocal_936 = 0;
					iLocal_939 = 2;
				}
				else
				{
					func_144();
					iLocal_939 = 3;
				}
			}
			else
			{
				unk_0xD56AC40382654643("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_113(&Local_42, &Global_96211, &Global_96217))
			{
				func_144();
				iLocal_939 = 3;
			}
			break;
		
		case 3:
			if (Global_68083 == -1)
			{
				func_112();
				func_111();
				func_109();
				func_105();
				func_104();
				unk_0x4BCBC9058A5CECE1(Global_96211, 5f, 1, 0, 0, 0);
				func_100(1097859072);
				if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0xF85858E5CBF4D9F0(Global_96204, Global_96211, 1, 0, 0, 1);
					unk_0x248DC16118AE5035(Global_96204, Global_96217);
					unk_0x479E7EEEBDEE245D(Global_96204, 1);
				}
				unk_0xBE5E0E5A454F4D6A(0f);
				unk_0x77CB1AAAF31275BE(0f, 1065353216);
				unk_0x5DE91777B624B339();
				unk_0x4BCBC9058A5CECE1(Global_96211, 5000f, 1, 0, 0, 0);
				unk_0x2F36A13C15BE17D7(Global_96211, 5000f, 0);
				unk_0x13196E39740F8C20(Global_96211, 30f, 0);
				unk_0x0AC2FF55967985A8(Global_96211, 5000f);
				unk_0x52DD7CA48EBAB1F0(Global_96211, 5000f);
				if (Global_87111 != -1)
				{
					func_99(Global_87111, 1);
					func_98(Global_87111);
				}
				iLocal_811 = func_97(Local_42.f_0);
				if (iLocal_811 != -1)
				{
					func_99(iLocal_811, 1);
				}
				iLocal_58 = 0;
				iLocal_939 = 4;
			}
			break;
		
		case 4:
			if (unk_0xE24944560D6F19ED(Global_96211, 4500f, 0))
			{
				iLocal_58 = 1;
				iLocal_939 = 5;
			}
			else if (func_147(iLocal_90, 2500))
			{
				iLocal_939 = 5;
			}
			break;
		
		case 5:
			if (unk_0x9DBF5ADC61595373())
			{
				if (unk_0x96D96D592BE19BEA())
				{
					if (iLocal_811 != -1)
					{
						unk_0x5DE91777B624B339();
						iLocal_58 = 0;
						func_95(iLocal_811);
						func_99(iLocal_811, 0);
					}
					iLocal_939 = 6;
				}
				else if (func_147(iLocal_90, 20000))
				{
					if (iLocal_811 != -1)
					{
						unk_0x5DE91777B624B339();
						iLocal_58 = 0;
						func_95(iLocal_811);
						func_99(iLocal_811, 0);
					}
					iLocal_939 = 6;
				}
			}
			else
			{
				if (iLocal_811 != -1)
				{
					func_95(iLocal_811);
					func_99(iLocal_811, 0);
				}
				iLocal_58 = 0;
				iLocal_939 = 6;
			}
			break;
		
		case 6:
			func_94();
			unk_0x9611FE1B4A112F5F();
			unk_0x383F49040A255D78();
			unk_0xFE4CD40B43ECEDD9();
			if (iLocal_811 != -1)
			{
				bVar1 = true;
				if (Global_80977[iLocal_811 /*34*/].f_13 == -1 && Global_80977[iLocal_811 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_46() == 0 && !unk_0x61D8FEAF64881CDA(Global_80977[iLocal_811 /*34*/].f_15, 8)) || (func_46() == 1 && !unk_0x61D8FEAF64881CDA(Global_80977[iLocal_811 /*34*/].f_15, 9))) || (func_46() == 2 && !unk_0x61D8FEAF64881CDA(Global_80977[iLocal_811 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_92(Global_80977[iLocal_811 /*34*/].f_13, Global_80977[iLocal_811 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					unk_0x1D54C3C00FBE70DD(Global_80977[iLocal_811 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_106 = func_85(1129381888, 1);
			iLocal_939 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_84(iLocal_106))
			{
				bVar0 = false;
			}
			if (!func_76(Global_96211))
			{
				bVar0 = false;
			}
			if (!func_75())
			{
				bVar0 = false;
			}
			if (!unk_0x66CA9B9689E10C56())
			{
				bVar0 = false;
			}
			if (iLocal_58)
			{
				if (unk_0x9DBF5ADC61595373())
				{
					if (!unk_0x96D96D592BE19BEA())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_811 != -1 && Global_87116)
			{
				bVar0 = false;
			}
			if (func_147(iLocal_90, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_58)
				{
					if (unk_0x9DBF5ADC61595373())
					{
						unk_0x5DE91777B624B339();
					}
					iLocal_58 = 0;
				}
				if (iLocal_68)
				{
					iLocal_68 = 0;
					unk_0xBC5E1C3D489E93FD(Global_96211 + Vector(100f, 0f, 0f), &fVar2);
					if (fVar2 > Global_96211.f_2)
					{
						Global_96211.f_2 = (fVar2 + 0.5f);
					}
				}
				func_100(12f);
				func_72();
				if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0x479E7EEEBDEE245D(Global_96204, 0);
					unk_0x248DC16118AE5035(Global_96204, Global_96217);
					unk_0xF85858E5CBF4D9F0(Global_96204, Global_96211, 1, 0, 0, 1);
					unk_0xD90C30D269B19096(Global_96204);
					unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 24, 5000);
				}
				iLocal_90 = unk_0xF976C624234A4AA8();
				iLocal_939 = 8;
			}
			break;
		
		case 8:
			if (func_147(iLocal_90, 500))
			{
				if (unk_0xA2A45E58AC3DF6C5("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0xAB5C0FE0C680BC7F("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0x3F60DDB36F3654A8(Global_96204, 1);
				}
				if (!func_71())
				{
					unk_0x662E87A876F1069D(250);
				}
				iLocal_939 = 9;
			}
			break;
		
		case 9:
			if (unk_0x8D4100BAA46EE198() || func_71())
			{
				if (((!Global_87117 && iLocal_811 != -1) && iLocal_811 != 72) && iLocal_811 != 87)
				{
					func_98(iLocal_811);
				}
				func_148(0);
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_96204, 1))
					{
						unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
					}
				}
				unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 24, 5000);
				unk_0xA1E4BA3B17C6D931(Global_96205, 1);
				bLocal_66 = true;
				iLocal_938 = 2;
				iLocal_939 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_71()
{
	return unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13);
}

void func_72()
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_812)
	{
		case 92:
			Var0 = { func_74(228, 0) };
			fVar3 = unk_0x8FE221761D524CFE(Global_96211, Var0, 1);
			if (fVar3 < 100f)
			{
				Var0 = { func_73(Global_96211 - Var0) };
				Var0 = { (Global_96211 + (Var0.f_0 * IntToFloat((100 - unk_0xF2DB717A73826179(fVar3))))), (Global_96211.f_1 + (Var0.f_1 * IntToFloat((100 - unk_0xF2DB717A73826179(fVar3))))), Global_96211.f_2 };
				unk_0x839399EDBB568AF1(Var0, &Global_96211, &Global_96217, 1, 1077936128, 0);
				unk_0xF85858E5CBF4D9F0(Global_96204, Global_96211, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(Global_96204, Global_96217);
			}
			break;
	}
}

Vector3 func_73(struct<3> Param0)
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

Vector3 func_74(int iParam0, int iParam1)
{
	if (iParam0 != 262)
	{
		return Global_24745[iParam0 /*23*/][iParam1 /*3*/];
	}
	return 0f, 0f, 0f;
}

bool func_75()
{
	return !Global_66960.f_553;
}

int func_76(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_82(Param0);
	if (!func_81(&uLocal_51))
	{
		iLocal_50 = 0;
		func_80(&uLocal_51, 0f);
	}
	if (iVar0 == iLocal_50 || func_78(&uLocal_51) > 8f)
	{
		func_77(&uLocal_51);
		iLocal_50 = 0;
		return 1;
	}
	return 0;
}

void func_77(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_78(var uParam0)
{
	if (func_81(uParam0))
	{
		if (func_79(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_26() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_79(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

void func_80(var uParam0, float fParam1)
{
	if (!func_81(uParam0))
	{
		func_25(uParam0, fParam1);
	}
}

bool func_81(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

int func_82(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_83(0, 4))
	{
		iVar1 = 69;
		while (iVar1 <= 71)
		{
			fVar2 = unk_0xB7A628320EFF8E47(func_74(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_83(0, 0))
	{
		iVar1 = 124;
		while (iVar1 <= 136)
		{
			fVar2 = unk_0xB7A628320EFF8E47(func_74(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_83(0, 10))
	{
		iVar1 = 124;
		fVar2 = unk_0xB7A628320EFF8E47(func_74(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_83(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	return bVar0;
}

int func_84(int iParam0)
{
	if (iParam0 != -1)
	{
		if (!Global_96260[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = iParam0;
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_49(func_46()))
		{
			iVar36 = func_91();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_86(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_87(uParam1, "Abigail1", func_89(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 1:
			func_87(uParam1, "Abigail2", func_89(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 2:
			func_87(uParam1, "Barry1", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 3:
			func_87(uParam1, "Barry2", func_89(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 4:
			func_87(uParam1, "Barry3", func_89(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 5:
			func_87(uParam1, "Barry3A", func_89(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 6:
			func_87(uParam1, "Barry3C", func_89(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 7:
			func_87(uParam1, "Barry4", func_89(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_88(iParam0), 0, 0);
			break;
		
		case 8:
			func_87(uParam1, "Dreyfuss1", func_89(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 9:
			func_87(uParam1, "Epsilon1", func_89(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 10:
			func_87(uParam1, "Epsilon2", func_89(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 11:
			func_87(uParam1, "Epsilon3", func_89(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 12:
			func_87(uParam1, "Epsilon4", func_89(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 13:
			func_87(uParam1, "Epsilon5", func_89(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 14:
			func_87(uParam1, "Epsilon6", func_89(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 15:
			func_87(uParam1, "Epsilon7", func_89(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 16:
			func_87(uParam1, "Epsilon8", func_89(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 17:
			func_87(uParam1, "Extreme1", func_89(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 18:
			func_87(uParam1, "Extreme2", func_89(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 19:
			func_87(uParam1, "Extreme3", func_89(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 20:
			func_87(uParam1, "Extreme4", func_89(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 21:
			func_87(uParam1, "Fanatic1", func_89(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_88(iParam0), 1, 0);
			break;
		
		case 22:
			func_87(uParam1, "Fanatic2", func_89(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_88(iParam0), 1, 0);
			break;
		
		case 23:
			func_87(uParam1, "Fanatic3", func_89(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_88(iParam0), 0, 1);
			break;
		
		case 24:
			func_87(uParam1, "Hao1", func_89(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_88(iParam0), 0, 1);
			break;
		
		case 25:
			func_87(uParam1, "Hunting1", func_89(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 26:
			func_87(uParam1, "Hunting2", func_89(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 27:
			func_87(uParam1, "Josh1", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 28:
			func_87(uParam1, "Josh2", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 29:
			func_87(uParam1, "Josh3", func_89(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 30:
			func_87(uParam1, "Josh4", func_89(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 31:
			func_87(uParam1, "Maude1", func_89(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 32:
			func_87(uParam1, "Minute1", func_89(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 33:
			func_87(uParam1, "Minute2", func_89(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 34:
			func_87(uParam1, "Minute3", func_89(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 35:
			func_87(uParam1, "MrsPhilips1", func_89(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 36:
			func_87(uParam1, "MrsPhilips2", func_89(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 37:
			func_87(uParam1, "Nigel1", func_89(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 38:
			func_87(uParam1, "Nigel1A", func_89(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 39:
			func_87(uParam1, "Nigel1B", func_89(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 40:
			func_87(uParam1, "Nigel1C", func_89(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 41:
			func_87(uParam1, "Nigel1D", func_89(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_88(iParam0), 1, 1);
			break;
		
		case 42:
			func_87(uParam1, "Nigel2", func_89(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 43:
			func_87(uParam1, "Nigel3", func_89(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 1);
			break;
		
		case 44:
			func_87(uParam1, "Omega1", func_89(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 45:
			func_87(uParam1, "Omega2", func_89(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 46:
			func_87(uParam1, "Paparazzo1", func_89(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 47:
			func_87(uParam1, "Paparazzo2", func_89(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 48:
			func_87(uParam1, "Paparazzo3", func_89(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 49:
			func_87(uParam1, "Paparazzo3A", func_89(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 50:
			func_87(uParam1, "Paparazzo3B", func_89(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 51:
			func_87(uParam1, "Paparazzo4", func_89(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 52:
			func_87(uParam1, "Rampage1", func_89(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 54:
			func_87(uParam1, "Rampage3", func_89(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 55:
			func_87(uParam1, "Rampage4", func_89(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 56:
			func_87(uParam1, "Rampage5", func_89(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_88(iParam0), 0, 0);
			break;
		
		case 53:
			func_87(uParam1, "Rampage2", func_89(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_88(iParam0), 1, 0);
			break;
		
		case 57:
			func_87(uParam1, "TheLastOne", func_89(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 58:
			func_87(uParam1, "Tonya1", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 59:
			func_87(uParam1, "Tonya2", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 60:
			func_87(uParam1, "Tonya3", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 61:
			func_87(uParam1, "Tonya4", func_89(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		case 62:
			func_87(uParam1, "Tonya5", func_89(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_88(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_87(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_88(int iParam0)
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

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_90(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_90(int iParam0)
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

int func_91()
{
	func_47();
	switch (Global_97173.f_1729.f_539.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_92(int iParam0, int iParam1)
{
	return func_93(unk_0xE76C684D1C903A71(), iParam0, iParam1);
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	Global_66960.f_553 = 1;
	Global_66960.f_554 = 0;
}

void func_95(int iParam0)
{
	if (func_96(iParam0))
	{
		Global_87112 = iParam0;
		Global_87116 = 1;
		return;
	}
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87122[iVar0 /*17*/])
		{
			if (Global_87122[iVar0 /*17*/].f_9 != 262)
			{
				if (Global_24745[Global_87122[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_87122[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_98(int iParam0)
{
	if (Global_87111 != -1)
	{
		if (iParam0 == Global_87111)
		{
			Global_87115 = 1;
			return;
		}
	}
}

void func_99(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_100(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_103(89) || func_103(88)) || func_103(92)) || func_103(33)) || func_102() == 89) || func_102() == 88) || func_102() == 92) || func_102() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_96211 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_101(&iVar0, Var3, iParam0))
		{
			bVar1 = false;
			if (unk_0x28360C2B9B86505E(Global_96211, iVar2, &Var3, 1, 1077936128, 0))
			{
				iVar2++;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var3, Global_96211) > 2f)
	{
		unk_0x3CDB52EABD2C9FC7(Var3, 0, &Global_96211, 0);
	}
}

int func_101(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0[5];
	int iVar6;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		*iParam0 = unk_0x9A67DC5FE3A03F32(Param1, uParam4, iVar0[iVar6], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}

int func_102()
{
	return Global_68329;
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_84174[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_80941)
	{
		if (Global_80941[iVar0 /*5*/] != -1)
		{
			if (Global_68336.f_109[Global_80941[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		switch (Global_54797[Global_66668[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_66668[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_54580)
				{
					Global_66668[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_105()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_108(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Global_96211);
	if (bLocal_65)
	{
		iVar1 = unk_0xF34EE736CF047844(((fVar0 / 200f) / 60f));
		iVar2 = unk_0xF2DB717A73826179(((fVar0 / 200f) - (60f * unk_0xBBDA792448DB5A89(iVar1))));
	}
	else
	{
		iVar1 = unk_0xF34EE736CF047844(((fVar0 / 100f) / 60f));
		iVar2 = unk_0xF2DB717A73826179(((fVar0 / 100f) - (60f * unk_0xBBDA792448DB5A89(iVar1))));
	}
	unk_0x07F71C140225F9EA(iVar1, iVar2, 0);
	func_106((unk_0xBBDA792448DB5A89((iVar1 * 60 + iVar2)) / 60f));
}

void func_106(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_81(&(Global_97173.f_16324.f_175[iVar0 /*19*/].f_5)))
		{
			func_107(&(Global_97173.f_16324.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_81(&(Global_97173.f_16324.f_362[iVar1 /*3*/])))
		{
			func_107(&(Global_97173.f_16324.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xAEC745E686B8ADA2();
}

void func_107(var uParam0, float fParam1)
{
	if (func_81(uParam0))
	{
		func_25(uParam0, (func_78(uParam0) + fParam1));
	}
}

float func_108(struct<3> Param0, struct<3> Param3)
{
	return (unk_0x652D2EEEF1D3E62C(Param3 - Param0) * 1.3f);
}

void func_109()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_108(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Global_96211) / 50f) * fLocal_74) * 2.4f);
	iVar1 = (unk_0xF34EE736CF047844(fLocal_83) + unk_0xF2DB717A73826179(fVar0));
	fVar0 = unk_0xBBDA792448DB5A89(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = unk_0xF2DB717A73826179(fVar0);
	iLocal_102 = (iLocal_102 + iVar1);
	fLocal_83 = (fLocal_83 + IntToFloat(iLocal_102));
	func_110();
}

void func_110()
{
	iLocal_104 = (iLocal_104 + unk_0xF2DB717A73826179((unk_0x94B2D2AEAA1D886E() * 1000f)));
	if (iLocal_104 > 5000)
	{
		fLocal_83 = (fLocal_83 + fLocal_74);
		iLocal_104 = 0;
	}
	if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Local_960, 0) > 50f)
	{
		fLocal_83 = (fLocal_83 + fLocal_74);
		iLocal_104 = 0;
		Local_960 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
	}
	iLocal_102 = unk_0x11E019C8F43ACC8A(fLocal_83);
	if (iLocal_102 != iLocal_103)
	{
		unk_0xF48C88BD1F0007E8(uLocal_112, "SET_TAXI_PRICE");
		unk_0x876C5D0739031E15(iLocal_102);
		unk_0xA52FC2467E672B55();
		fLocal_84 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Global_96211);
		iLocal_103 = iLocal_102;
	}
}

void func_111()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_72)
	{
		case 0:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 1:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 2:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!func_48(14))
			{
			}
			break;
	}
	if (!func_48(14))
	{
		fVar1 = unk_0x473D9547087B09AE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Global_96211);
		unk_0x2849EC95E9D69392(iVar0, fVar1);
	}
}

void func_112()
{
	unk_0x5DE91777B624B339();
	if (unk_0xB6507CA6AC51E37A(Global_95887.f_218))
	{
		unk_0x1484CB72453DE620(Global_95887.f_218);
	}
}

int func_113(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	
	if (unk_0xD361727124133DF3(*iParam0))
	{
		switch (iLocal_936)
		{
			case 0:
				iLocal_111 = 3;
				Local_948 = { func_38(*iParam0) };
				if (unk_0xD361727124133DF3(Global_96209) && *iParam0 == Global_96209)
				{
					*uParam1 = { Global_96214 };
					*uParam2 = Global_96218;
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_111 = 7;
					iLocal_936 = 4;
					return 1;
				}
				else
				{
					if (func_131(Local_948, uParam1, uParam2))
					{
						Var0 = { Local_948 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_73 = unk_0x652D2EEEF1D3E62C(Var0);
						iLocal_111 = 7;
						iLocal_936 = 4;
						return 1;
					}
					iLocal_936 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_120(Local_948, uParam1, uParam2, 1))
				{
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_111 = 7;
					iLocal_936 = 4;
					return 1;
				}
				else
				{
					iLocal_89 = 0;
					iLocal_936 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (unk_0xFD68187442384158(Global_96204))
				{
					if (func_114(&Global_96204, unk_0xBF1B13057E5119A4(Global_96204, 0), Local_948, uParam1, uParam2, &iLocal_89, 1000))
					{
						iLocal_936 = 3;
						return 1;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_131(*uParam1, uParam1, uParam2))
				{
					Var0 = { Local_948 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_73 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_111 = 7;
				}
				iLocal_936 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_114(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, var uParam8, int iParam9, int iParam10)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_119(Param4))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *iParam9 + 2;
	iVar25 = 50;
	func_117(Param1, Param4, &Local_951, &Local_954, iParam10);
	if (func_116(Local_951, Local_954))
	{
		while (!bVar19 && *iParam9 < iVar24)
		{
			if (Param4.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x3D84F9AECFD58EB5(Param4, *iParam9, uParam7, uParam8, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0x9E39A8307E2B6503(*uParam7, 1, iVar20, 1077936128, 0);
				if (unk_0x5D626D890DCCBB00(uVar18))
				{
					if (unk_0xD157439A5C52AA4E(*uParam7, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (*uParam8 < 90f || *uParam8 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0xBF29019E61FCFC6F(uVar18) || !unk_0x4E95ACB56D760DBC(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (unk_0xBBDA792448DB5A89(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * unk_0xBBDA792448DB5A89(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (unk_0xBBDA792448DB5A89(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * unk_0xBBDA792448DB5A89(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (unk_0xC57DC64AD223F86E(*uParam7, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param4.f_2 - uParam7->f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_115(Param4, *uParam7) || fVar17 < 0.5f)
						{
							*uParam7 = { unk_0xDA0070A0FA486D72(*uParam7, *uParam8, fVar15, 0f, 0f) };
							if (unk_0xCA8794CE207FC6D5(*uParam0, 0))
							{
								iVar11 = *uParam0;
							}
							if (!unk_0x4C336ED2E0D0C118(*uParam7, 3f, 3f, 3f, iVar11))
							{
								if (func_120(*uParam7, uParam7, uParam8, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*iParam9++;
			if (*iParam9 >= iVar25)
			{
				*uParam7 = { Param4 };
				if (uParam7->f_2 == 1f)
				{
					fVar17 = 1f;
					fVar17 = unk_0x1B636A9F4A19474F((*uParam7 - 2f), (uParam7->f_1 - 2f), (*uParam7 + 2f), (uParam7->f_1 + 2f));
					if (fVar17 > 1f)
					{
						iLocal_68 = 1;
						uParam7->f_2 = fVar17;
						uParam7->f_2 = (uParam7->f_2 + 0.5f);
					}
				}
				bVar19 = true;
			}
		}
		if (bVar19)
		{
			Var2 = { Param4 - *uParam7 };
			Var2.f_2 = 0f;
			fLocal_73 = unk_0x652D2EEEF1D3E62C(Var2);
			if (fLocal_73 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_115(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_43("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = unk_0x2A488C176D52CCA5(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_43("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_116(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0x65AB4C5AAF640EB0(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_117(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_118(Var0, *uParam6, 1056964608) || !func_118(Var0, *uParam6, 1056964608))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0x32BB0750E9174D6C(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_118(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(struct<3> Param0)
{
	char* sVar0;
	
	sVar0 = unk_0xE0F4D060DC66FA8E(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0xA858564DC37EED5E("SanAnd", sVar0) || unk_0xA858564DC37EED5E("Alamo", sVar0)) || unk_0xA858564DC37EED5E("ArmyB", sVar0)) || unk_0xA858564DC37EED5E("BhamCa", sVar0)) || unk_0xA858564DC37EED5E("Baytre", sVar0)) || unk_0xA858564DC37EED5E("BradT", sVar0)) || unk_0xA858564DC37EED5E("BradP", sVar0)) || unk_0xA858564DC37EED5E("CANNY", sVar0)) || unk_0xA858564DC37EED5E("CCreak", sVar0)) || unk_0xA858564DC37EED5E("ChamH", sVar0)) || unk_0xA858564DC37EED5E("CHU", sVar0)) || unk_0xA858564DC37EED5E("COSI", sVar0)) || unk_0xA858564DC37EED5E("CMSW", sVar0)) || unk_0xA858564DC37EED5E("Cypre", sVar0)) || unk_0xA858564DC37EED5E("Desrt", sVar0)) || unk_0xA858564DC37EED5E("ELGorl", sVar0)) || unk_0xA858564DC37EED5E("Galli", sVar0)) || unk_0xA858564DC37EED5E("Galfish", sVar0)) || unk_0xA858564DC37EED5E("Harmo", sVar0)) || unk_0xA858564DC37EED5E("HumLab", sVar0)) || unk_0xA858564DC37EED5E("Jail", sVar0)) || unk_0xA858564DC37EED5E("LAct", sVar0)) || unk_0xA858564DC37EED5E("LDam", sVar0)) || unk_0xA858564DC37EED5E("Lago", sVar0)) || unk_0xA858564DC37EED5E("MTChil", sVar0)) || unk_0xA858564DC37EED5E("MTJose", sVar0)) || unk_0xA858564DC37EED5E("MTGordo", sVar0)) || unk_0xA858564DC37EED5E("NCHU", sVar0)) || unk_0xA858564DC37EED5E("Oceana", sVar0)) || unk_0xA858564DC37EED5E("Palmpow", sVar0)) || unk_0xA858564DC37EED5E("PBluff", sVar0)) || unk_0xA858564DC37EED5E("Paleto", sVar0)) || unk_0xA858564DC37EED5E("PalCov", sVar0)) || unk_0xA858564DC37EED5E("PalFor", sVar0)) || unk_0xA858564DC37EED5E("PalHigh", sVar0)) || unk_0xA858564DC37EED5E("RTRAK", sVar0)) || unk_0xA858564DC37EED5E("Rancho", sVar0)) || unk_0xA858564DC37EED5E("SANDY", sVar0)) || unk_0xA858564DC37EED5E("TongvaH", sVar0)) || unk_0xA858564DC37EED5E("TongvaV", sVar0)) || unk_0xA858564DC37EED5E("Zenora", sVar0)) || unk_0xA858564DC37EED5E("Slab", sVar0)) || unk_0xA858564DC37EED5E("WindF", sVar0)) || unk_0xA858564DC37EED5E("Zancudo", sVar0)) || unk_0xA858564DC37EED5E("SanChia", sVar0)) || unk_0xA858564DC37EED5E("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_120(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_130(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (func_130(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (func_130(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (func_130(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (func_130(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0xD95428C8AA1DBBF2())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0xD95428C8AA1DBBF2())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (unk_0x65EC44693BF9CB43(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = unk_0x2A488C176D52CCA5(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x65EC44693BF9CB43(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x65EC44693BF9CB43(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x65EC44693BF9CB43(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x65EC44693BF9CB43(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x65EC44693BF9CB43(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_127(3, Var1))
	{
		if (func_126(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_125(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (func_125(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (func_125(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (func_125(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_125(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x65EC44693BF9CB43(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0x65EC44693BF9CB43(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0x65EC44693BF9CB43(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x4D3E68F73B727E49(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (unk_0xB7A628320EFF8E47(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_123())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_127(7, Var1))
		{
			if (func_126(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_127(2, Var1))
	{
		if (func_126(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0xD95428C8AA1DBBF2())
			{
				switch (unk_0x4D3E68F73B727E49(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_122(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_122(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_121(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x65EC44693BF9CB43(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0x65EC44693BF9CB43(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0x65EC44693BF9CB43(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0x65EC44693BF9CB43(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0x65EC44693BF9CB43(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x4D3E68F73B727E49(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x4D3E68F73B727E49(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0x65EC44693BF9CB43(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0x65EC44693BF9CB43(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (unk_0x65EC44693BF9CB43(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	return 0;
}

bool func_121(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

float func_122(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_123()
{
	int iVar0;
	
	iVar0 = func_46();
	if (iVar0 == 0)
	{
		if (func_124(65))
		{
			return 1;
		}
		if (unk_0x25531002BCF0D968(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_124(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_124(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

bool func_125(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_126(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x65EC44693BF9CB43(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_127(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_129(iParam0)) < func_128(iParam0);
}

float func_128(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_130(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_131(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_143(&Param0, &iLocal_812, &fVar0);
	func_141(&Param0, &iLocal_107, &fVar1);
	func_138(&Param0, &iLocal_813, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_137(iLocal_812, Param0))
		{
			if (func_136(iLocal_812, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_135(iLocal_107, Param0))
		{
			if (func_134(iLocal_107, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_133(iLocal_813, Param0))
		{
			if (func_132(iLocal_813, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 75:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 104:
		case 105:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 124:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 130:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 133:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 106:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_133(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 69:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 104:
		case 105:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 124:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 130:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 133:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 64:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_134(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_135(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_136(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (unk_0x4D3E68F73B727E49(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_137(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0, 1))
			{
				return 1;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (unk_0x65EC44693BF9CB43(Param1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_138(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 262;
	fVar1 = 999999f;
	iVar3 = 64;
	while (iVar3 <= 110)
	{
		*iParam1 = iVar3;
		if (func_140(iParam1))
		{
			if (func_139(*iParam1))
			{
				Var4 = { func_74(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 124;
	while (iVar3 <= 136)
	{
		*iParam1 = iVar3;
		if (func_140(iParam1))
		{
			if (func_139(*iParam1))
			{
				Var4 = { func_74(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 262)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 262;
	*fParam2 = 999999f;
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 != 262)
	{
		return unk_0xD361727124133DF3(Global_24745[iParam0 /*23*/].f_19);
	}
	return 0;
}

int func_140(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 69 || *uParam0 == 70) || *uParam0 == 72) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 71) || *uParam0 == 75) || *uParam0 == 104) || *uParam0 == 105) || *uParam0 == 124) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 130) || *uParam0 == 131) || *uParam0 == 133) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 106) || *uParam0 == 64)
	{
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	struct<27> Var7;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 63)
	{
		*iParam1 = iVar6;
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[*iParam1 /*6*/], 0) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[*iParam1 /*6*/], 3))
		{
			func_86(*iParam1, &Var7);
			if (unk_0x61D8FEAF64881CDA(Var7.f_26, func_142()))
			{
				Var3 = { Var7.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar6;
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_142()
{
	if (func_48(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				return 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				return 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_46();
}

int func_143(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		if (Global_87122[iVar6 /*17*/])
		{
			if (Global_87122[iVar6 /*17*/].f_9 != 262)
			{
				if (unk_0xD361727124133DF3(Global_24745[Global_87122[iVar6 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { unk_0xDEC21C0D420A9EFF(Global_24745[Global_87122[iVar6 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_87122[iVar6 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_87122[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_144()
{
	if (Global_97173.f_7311)
	{
		Global_68084 = 1;
	}
}

void func_145(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xFC3D53CDA17426F4(func_6()))
	{
		unk_0xB589946D42277470(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = unk_0x6B3743907740C84A(func_6(), 1);
				if (!unk_0x9F94F2CFDCA78C55(iVar2))
				{
					if (!unk_0x764E7360C13E7383(iVar2, Global_96204))
					{
						iVar3 = 0;
						if (!unk_0xC51FBEBD87CFD69C(Global_96204, iVar3))
						{
							iVar3 = func_146(&Global_96204);
							if (unk_0xC51FBEBD87CFD69C(Global_96204, iVar3))
							{
								unk_0xAC57FBF981AB03F4(iVar2);
								unk_0x11460EBE0487B44F(iVar2, Global_96204, iVar3);
							}
						}
						else
						{
							unk_0xAC57FBF981AB03F4(iVar2);
							unk_0x11460EBE0487B44F(iVar2, Global_96204, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0x6B3743907740C84A(func_6(), 0);
			if (!unk_0x9F94F2CFDCA78C55(iVar2))
			{
				if (!unk_0x764E7360C13E7383(iVar2, Global_96204))
				{
					unk_0xAC57FBF981AB03F4(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!unk_0xC51FBEBD87CFD69C(Global_96204, iVar3))
					{
						iVar3 = func_146(&Global_96204);
						if (unk_0xC51FBEBD87CFD69C(Global_96204, iVar3))
						{
							unk_0xAC57FBF981AB03F4(iVar2);
							unk_0x11460EBE0487B44F(iVar2, Global_96204, iVar3);
						}
					}
					else
					{
						unk_0xAC57FBF981AB03F4(iVar2);
						unk_0x11460EBE0487B44F(iVar2, Global_96204, iVar3);
					}
				}
			}
		}
	}
}

int func_146(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(*uParam0))
		{
			if (unk_0xC51FBEBD87CFD69C(*uParam0, 0))
			{
				return 0;
			}
			if (unk_0xC51FBEBD87CFD69C(*uParam0, 1))
			{
				return 1;
			}
			if (unk_0xC51FBEBD87CFD69C(*uParam0, 2))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_147(int iParam0, int iParam1)
{
	return (unk_0xF976C624234A4AA8() - iParam0) > iParam1;
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		func_153();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_152(0))
		{
			func_149(0);
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

void func_149(int iParam0)
{
	if (Global_14551)
	{
		func_151(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_150())
	{
		Global_14393.f_1 = 3;
	}
}

int func_150()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_151(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_152(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_152(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_153()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_154()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
		{
			if (unk_0x2ACEA6F88B3AFFB0(Global_96204))
			{
				if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3) && !unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
				{
					if (!func_2(Global_96205, -2118855366))
					{
						unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 1, 1000000);
					}
					else
					{
						func_160();
					}
				}
				func_159(&Global_96204, iLocal_978);
			}
			else if (!func_2(Global_96205, -272084098))
			{
				Var0 = { unk_0xBF1B13057E5119A4(Global_96204, 1) };
				uVar3 = unk_0xA9D6B28E708753B6(Global_96204);
				unk_0x52AC38C099F0E2E2(Global_96205, Global_96204, Var0, uVar3, 3, 60f, 0);
			}
		}
	}
}

void func_155()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_61)
	{
		if (bLocal_62)
		{
			func_110();
			if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
			{
				if (!unk_0x9F94F2CFDCA78C55(Global_96205))
				{
					if (func_157())
					{
						if (unk_0x11F6A4A45943670E(Global_96204) < 2f)
						{
							if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_96204, 1))
								{
									unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
								}
							}
							unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 24, 5000);
							unk_0xA1E4BA3B17C6D931(Global_96205, 1);
							bLocal_66 = true;
							iLocal_938 = 2;
						}
					}
					else if (unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3) || unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
					{
						if (unk_0x59752F977A640536(Global_96205, unk_0x507DA4994C3D8EBD()))
						{
							unk_0xCBA47B699F417E4D(Global_96205);
						}
						unk_0xEC0A546609840086(Global_96205, &cLocal_940, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_exit", 3))
					{
						unk_0x823AFE6C22E61E55(Global_96205, &cLocal_940, "leanover_exit", 1.2f);
						iLocal_91 = unk_0xF976C624234A4AA8();
						func_159(&Global_96204, iLocal_978);
					}
					else if (!func_2(Global_96205, 242628503))
					{
						if (func_156(&iLocal_91, iLocal_978))
						{
							if (!func_2(Global_96205, -2118855366))
							{
								unk_0xDD4FB99FF9DED807(Global_96205, Global_96204, 1, 1000000);
							}
						}
						else
						{
							iLocal_57 = 0;
							if (bLocal_65)
							{
								fVar1 = 25f;
								iVar0 = iLocal_71;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_70;
							}
							unk_0xAC57FBF981AB03F4(Global_96205);
							unk_0xCBA47B699F417E4D(Global_96205);
							unk_0x96814E698DED4FE7(Global_96205, 0.5f);
							unk_0xB5DC017AFD430D1B(&uLocal_801);
							unk_0x2EB35831F6E79042(0, Global_96204, Global_96211, fVar1, iVar0, 45f);
							unk_0x52AC38C099F0E2E2(0, Global_96204, Global_96211, Global_96217, iLocal_111, 60f, 1);
							unk_0x6EE8A5CF9AC75F12(uLocal_801);
							unk_0x8229311A391A4EC6(Global_96205, uLocal_801);
							unk_0x9F77DFFC61FCB68C(&uLocal_801);
						}
					}
				}
			}
		}
	}
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_147(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!unk_0xFC3D53CDA17426F4(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	unk_0xB589946D42277470(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = unk_0x6B3743907740C84A(func_6(), 0);
	if (!unk_0x9F94F2CFDCA78C55(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = unk_0xE634CB9EE7094537(Global_96204, iVar6);
		if (unk_0xFD68187442384158(iVar2))
		{
			if (iVar2 == unk_0x507DA4994C3D8EBD())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (unk_0xA7C37587D6D77CA4(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, -1794415470))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			unk_0x36B42DB2912118E2(iVar3, Global_96204, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = unk_0x6B3743907740C84A(func_6(), 1);
		if (!unk_0x9F94F2CFDCA78C55(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = unk_0xE634CB9EE7094537(Global_96204, iVar6);
			if (unk_0xFD68187442384158(iVar2))
			{
				if (iVar2 == unk_0x507DA4994C3D8EBD())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (unk_0xA7C37587D6D77CA4(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, -1794415470))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				unk_0x36B42DB2912118E2(iVar3, Global_96204, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if ((unk_0x594EB70937EC1486(Global_96204, Global_96211, 45f, 45f, 20f, 0, 1, 0) || iLocal_57) || iLocal_937 == 4)
	{
		iLocal_57 = 1;
		if (unk_0xEC043AB2FEE0E94F(Global_96205, 242628503) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()
{
	if (bLocal_61)
	{
		if (bLocal_62)
		{
			return 1;
		}
		else if (func_113(&Local_42, &Global_96211, &Global_96217))
		{
			iLocal_104 = 0;
			Local_960 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
			fLocal_84 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Global_96211);
			bLocal_62 = true;
			return 1;
		}
	}
	return 0;
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0xFC3D53CDA17426F4(func_6()))
	{
		unk_0xB589946D42277470(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x6B3743907740C84A(func_6(), 0);
			if (!unk_0x9F94F2CFDCA78C55(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0xE634CB9EE7094537(*uParam0, iVar5);
				if (unk_0xFD68187442384158(iVar3))
				{
					if (iVar3 == unk_0x507DA4994C3D8EBD())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0xA7C37587D6D77CA4(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0x36B42DB2912118E2(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x6B3743907740C84A(func_6(), 1);
				if (!unk_0x9F94F2CFDCA78C55(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0xE634CB9EE7094537(*uParam0, iVar5);
					if (unk_0xFD68187442384158(iVar3))
					{
						if (iVar3 == unk_0x507DA4994C3D8EBD())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0xA7C37587D6D77CA4(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0x36B42DB2912118E2(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

int func_160()
{
	if (!unk_0x9F94F2CFDCA78C55(Global_96205) && unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
		{
			unk_0x395C5D98343F0040(&cLocal_940);
			if (unk_0xCE40391AB65FE305(&cLocal_940))
			{
				if (unk_0x59752F977A640536(Global_96205, unk_0x507DA4994C3D8EBD()))
				{
					unk_0xCBA47B699F417E4D(Global_96205);
				}
				unk_0xB5DC017AFD430D1B(&uLocal_801);
				unk_0xEC0A546609840086(0, &cLocal_940, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xEC0A546609840086(0, &cLocal_940, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_801);
				unk_0x8229311A391A4EC6(Global_96205, uLocal_801);
				unk_0x9F77DFFC61FCB68C(&uLocal_801);
				return 1;
			}
		}
	}
	return 0;
}

int func_161()
{
	if (unk_0xFD68187442384158(iLocal_110))
	{
		return 1;
	}
	if (unk_0xFD68187442384158(Global_96204))
	{
		if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
		{
			iLocal_110 = unk_0xCEC985247737A30E(iLocal_109, unk_0xBF1B13057E5119A4(Global_96204, 1), 1, 1, 0);
			unk_0x26030664C7D28388(iLocal_110, Global_96204, unk_0xD33827A2E07C4BE6(Global_96204, "Chassis"), Local_972, Local_975, 0, 0, 0, 0, 2, 1);
			unk_0x51573EF310AEF180(Global_96204, 0);
			if (!unk_0xBB59C64F638475F4("taxi"))
			{
				unk_0xE3FDC10D25BBBCBC("taxi", 0);
				unk_0xE40E107E34572484(unk_0x26EA758C2A691D06(iLocal_110));
			}
			uLocal_94 = unk_0x396E111E5411D0EE("taxi");
		}
	}
	return 0;
}

int func_162()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_109);
	uLocal_112 = unk_0xAFBDE0BB5C885026("taxi_display");
	uLocal_113 = unk_0xAFBDE0BB5C885026("instructional_buttons");
	unk_0x395C5D98343F0040(&cLocal_940);
	if (((unk_0xD291857D0C9C7FEC(iLocal_109) && unk_0xE908465F9CDF4F1A(uLocal_112)) && unk_0xE908465F9CDF4F1A(uLocal_113)) && unk_0xCE40391AB65FE305(&cLocal_940))
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	if (!unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		return;
	}
	if (!unk_0x17D71902CA06091B(uLocal_69))
	{
		if (!func_171() && !func_170(8, -1))
		{
			uLocal_69 = unk_0x07A7435490ED9AAB("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x04BEA87701970868(uLocal_69, Global_96204, Local_966, 1);
			func_167();
			unk_0xD05AADAD809CEFD6(uLocal_69, 1);
		}
	}
	else if (!bLocal_61 || bLocal_60)
	{
		if (!func_171() && !func_170(8, -1))
		{
			if (!unk_0xB44AF0EB1FA3729D(uLocal_69))
			{
				func_166(4, 1, -1);
				unk_0xD05AADAD809CEFD6(uLocal_69, 1);
				func_165();
				unk_0x6F430D0F1783A56E(uLocal_69, 1);
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				Global_96221 = 1;
				unk_0xBFA7DD5BAA27D9E3(1);
				func_167();
				iLocal_59 = 1;
			}
			else
			{
				func_167();
			}
			unk_0x500F4CA776CEBD0A(0, 0, 1);
		}
	}
	else if (unk_0xB44AF0EB1FA3729D(uLocal_69))
	{
		unk_0x6F430D0F1783A56E(uLocal_69, 0);
		unk_0xBE5E0E5A454F4D6A(0f);
		unk_0x77CB1AAAF31275BE(0f, 1065353216);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		Global_96221 = 0;
		unk_0xBFA7DD5BAA27D9E3(0);
		unk_0x0573535E36A62454();
		unk_0x465FDAA9130F8F45();
		unk_0xCB213D9A785B441C(0);
		iLocal_59 = 1;
		func_164();
	}
}

void func_164()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		if (bLocal_61)
		{
			if (Local_42.f_0 == Local_815[iVar0 /*3*/])
			{
				iLocal_93 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0xF48C88BD1F0007E8(uLocal_112, "HIGHLIGHT_DESTINATION");
	unk_0x876C5D0739031E15(iLocal_93);
	unk_0xA52FC2467E672B55();
}

void func_165()
{
	struct<3> Var0;
	
	if (unk_0xD361727124133DF3(Local_42.f_0))
	{
		Var0 = { unk_0xDEC21C0D420A9EFF(Local_42.f_0) };
		if (unk_0x17D71902CA06091B(uLocal_69) && unk_0xB44AF0EB1FA3729D(uLocal_69))
		{
			unk_0x76F422FE758FB5D7(Var0.f_0, Var0.f_1);
			unk_0xAA609466F47F9ED0(0);
			unk_0xCB213D9A785B441C(1400);
		}
	}
}

void func_166(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1327591.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_1327591.f_947), iParam0);
			}
			else
			{
				unk_0xCD27BF29FB9012E2(&(Global_1327591.f_947), iParam0);
			}
			break;
	}
}

void func_167()
{
	if (unk_0x17D71902CA06091B(uLocal_69))
	{
		func_168(Global_96204, &uLocal_69, Local_969);
		unk_0x435B97ECA622D5B0(uLocal_69, fLocal_75);
		unk_0x80EA879A2C86EFE7(uLocal_69, 0.01f);
		unk_0x8CB99388437C694E(uLocal_69, 1);
		unk_0x5F80A122A2D28802(1);
	}
}

void func_168(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		if (unk_0x17D71902CA06091B(*uParam1))
		{
			Var0 = { unk_0xAD9A5677421290F3(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_73(unk_0x0CAFB9D38494283D(Global_96204, Param2) - unk_0x0CAFB9D38494283D(Global_96204, Local_966)) };
			func_169(Var6, &uVar3, &uVar4, 1);
			unk_0x46AA97C6CB72D170(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_169(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0x1E7EBED5BB2C078C(Param0.f_0, Param0.f_1);
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
		*uParam3 = unk_0x1E7EBED5BB2C078C(Param0.f_2, fVar0);
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

bool func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

bool func_171()
{
	return Global_17096;
}

void func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	func_178();
	unk_0xF48C88BD1F0007E8(uLocal_112, "CLEAR_TAXI_DISPLAY");
	unk_0xA52FC2467E672B55();
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		if (!unk_0xD361727124133DF3(Local_815[iVar0 /*3*/]))
		{
		}
		else if (func_177(Local_815[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_118(unk_0xDEC21C0D420A9EFF(Local_815[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608))
		{
		}
		else
		{
			unk_0xF48C88BD1F0007E8(uLocal_112, "ADD_TAXI_DESTINATION");
			unk_0x876C5D0739031E15(iVar0);
			unk_0x876C5D0739031E15(unk_0x4672A001CF8D53E4(Local_815[iVar0 /*3*/]));
			unk_0x761F331974F836D5(unk_0x5E4CAE505FE210EB(Local_815[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0x876C5D0739031E15(iVar1);
			unk_0x876C5D0739031E15(iVar2);
			unk_0x876C5D0739031E15(iVar3);
			iVar8 = func_175(Local_815[iVar0 /*3*/]);
			if (iVar8 == -1)
			{
				unk_0x44F4D219F8513945("STRING");
				unk_0x636705FA7EAFAC3C(Local_815[iVar0 /*3*/]);
				unk_0x113A6F657EE871A3();
			}
			else
			{
				unk_0x44F4D219F8513945("STRING");
				unk_0x923B18EB34FC2117(func_173(iVar8));
				unk_0x113A6F657EE871A3();
			}
			if (unk_0xF0F6309B76A8474C(Local_815[iVar0 /*3*/]) == 2)
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(unk_0x7BBE8D79E8CB52E9(Local_815[iVar0 /*3*/]))))
				{
					Var5 = { unk_0xBF1B13057E5119A4(unk_0x274BAC44978F9161(unk_0x7BBE8D79E8CB52E9(Local_815[iVar0 /*3*/])), 1) };
				}
			}
			else if (unk_0xF0F6309B76A8474C(Local_815[iVar0 /*3*/]) == 1)
			{
				if (unk_0xCA8794CE207FC6D5(unk_0x7BBE8D79E8CB52E9(Local_815[iVar0 /*3*/]), 0))
				{
					Var5 = { unk_0xBF1B13057E5119A4(unk_0x7BBE8D79E8CB52E9(Local_815[iVar0 /*3*/]), 1) };
				}
			}
			else
			{
				Var5 = { unk_0xDEC21C0D420A9EFF(Local_815[iVar0 /*3*/]) };
			}
			func_59(unk_0xE0F4D060DC66FA8E(Var5));
			if (Local_815[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_815[iVar0 /*3*/].f_1 != 0)
				{
					unk_0x44F4D219F8513945("STRTNM1");
					unk_0x64364D07891B307F(Local_815[iVar0 /*3*/].f_1);
					unk_0x113A6F657EE871A3();
				}
			}
			else
			{
				unk_0x44F4D219F8513945("STRTNM2");
				unk_0x64364D07891B307F(Local_815[iVar0 /*3*/].f_1);
				unk_0x64364D07891B307F(Local_815[iVar0 /*3*/].f_2);
				unk_0x113A6F657EE871A3();
			}
			unk_0xA52FC2467E672B55();
			if (bLocal_61)
			{
				if (Local_42.f_0 == Local_815[iVar0 /*3*/])
				{
					iLocal_93 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_61)
	{
		unk_0xF48C88BD1F0007E8(uLocal_112, "SHOW_TAXI_DESTINATION");
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(uLocal_112, "HIGHLIGHT_DESTINATION");
		unk_0x876C5D0739031E15(iLocal_93);
		unk_0xA52FC2467E672B55();
	}
	else
	{
		unk_0xF48C88BD1F0007E8(uLocal_112, "SET_TAXI_PRICE");
		unk_0x876C5D0739031E15(iLocal_102);
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(uLocal_112, "SHOW_TAXI_DESTINATION");
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(uLocal_112, "HIGHLIGHT_DESTINATION");
		unk_0x876C5D0739031E15(iLocal_93);
		unk_0xA52FC2467E672B55();
	}
}

char* func_173(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_174(iParam0);
			break;
		
		case 8:
			return func_174(iParam0);
			break;
		
		case 9:
			return func_174(iParam0);
			break;
		
		case 10:
			return func_174(iParam0);
			break;
		
		case 11:
			return func_174(iParam0);
			break;
		
		case 12:
			return func_174(iParam0);
			break;
		
		case 13:
			return func_174(iParam0);
			break;
		
		case 14:
			return func_174(iParam0);
			break;
		
		case 15:
			return func_174(iParam0);
			break;
		
		case 16:
			return func_174(iParam0);
			break;
		
		case 17:
			return func_174(iParam0);
			break;
		
		case 18:
			return func_174(iParam0);
			break;
		
		case 19:
			return func_174(iParam0);
			break;
		
		case 20:
			return func_174(iParam0);
			break;
		
		case 21:
			return func_174(iParam0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_174(iParam0);
			break;
		
		case 40:
			return func_174(iParam0);
			break;
		
		case 41:
			return func_174(iParam0);
			break;
		
		case 42:
			return func_174(iParam0);
			break;
		
		case 43:
			return func_174(iParam0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_174(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar1 = iVar0;
		iVar2 = func_176(iVar1);
		if (Global_24745[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 262;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		default:
			break;
	}
	return 262;
}

int func_177(int iParam0)
{
	var uVar0;
	
	if (unk_0xD361727124133DF3(uParam0))
	{
		uVar0 = unk_0x4672A001CF8D53E4(iParam0);
	}
	return uVar0;
}

void func_178()
{
	int iVar0;
	
	iLocal_92 = 0;
	func_195();
	func_182(iLocal_45, 0);
	func_182(iLocal_46, 0);
	func_182(32, 0);
	func_182(143, 0);
	func_182(144, 0);
	func_182(145, 0);
	func_182(146, 0);
	func_182(78, 0);
	func_182(79, 0);
	func_182(88, 0);
	func_182(124, 0);
	func_182(112, 0);
	func_182(123, 0);
	func_182(293, 0);
	func_182(86, 0);
	func_182(77, 0);
	func_182(89, 0);
	func_182(106, 0);
	func_182(108, 0);
	func_182(120, 0);
	func_182(352, 0);
	func_182(107, 0);
	func_182(96, 0);
	func_182(104, 0);
	func_182(105, 0);
	func_182(80, 0);
	func_182(113, 0);
	func_182(118, 0);
	func_182(207, 1);
	func_182(208, 1);
	func_182(209, 1);
	func_182(210, 1);
	func_182(211, 1);
	func_182(212, 1);
	func_182(213, 1);
	func_182(214, 1);
	func_182(321, 1);
	func_182(320, 1);
	func_182(319, 1);
	func_182(322, 1);
	func_182(325, 1);
	func_182(324, 1);
	func_182(349, 1);
	func_182(323, 1);
	func_182(326, 1);
	func_182(317, 1);
	func_182(318, 1);
	func_182(363, 0);
	func_182(355, 0);
	func_182(263, 1);
	func_182(262, 1);
	func_182(267, 1);
	func_182(266, 1);
	func_182(265, 1);
	func_182(400, 0);
	func_182(381, 0);
	func_182(384, 0);
	func_182(382, 0);
	func_182(206, 0);
	func_182(405, 0);
	func_182(385, 0);
	func_182(383, 0);
	func_182(386, 0);
	func_182(387, 0);
	func_182(389, 0);
	func_182(388, 0);
	func_182(149, 0);
	func_182(66, 0);
	func_182(115, 0);
	func_182(114, 0);
	func_182(205, 1);
	func_182(48, 0);
	func_182(40, 1);
	func_182(357, 1);
	func_182(356, 1);
	func_182(359, 1);
	func_182(110, 1);
	func_182(60, 1);
	func_182(41, 1);
	func_182(61, 1);
	func_182(374, 1);
	func_182(375, 1);
	func_182(64, 1);
	func_182(165, 1);
	func_182(166, 1);
	func_182(167, 1);
	func_182(168, 1);
	func_182(169, 1);
	func_182(170, 1);
	func_182(172, 1);
	func_182(280, 1);
	func_182(37, 1);
	func_182(147, 1);
	func_182(62, 0);
	func_182(95, 1);
	func_182(99, 1);
	func_182(102, 1);
	func_182(135, 1);
	func_182(103, 1);
	func_182(90, 1);
	func_182(109, 1);
	func_182(141, 1);
	func_182(136, 1);
	func_182(127, 1);
	func_182(142, 1);
	func_182(38, 1);
	func_182(84, 1);
	func_182(119, 1);
	func_182(121, 1);
	func_182(122, 1);
	func_182(68, 1);
	func_182(126, 1);
	func_182(85, 1);
	func_182(140, 1);
	func_182(197, 1);
	func_182(162, 1);
	func_182(315, 1);
	func_182(71, 1);
	func_182(72, 1);
	func_182(225, 1);
	func_182(73, 1);
	func_182(111, 1);
	func_182(75, 1);
	func_182(93, 1);
	func_182(98, 1);
	func_182(117, 1);
	iLocal_95 = func_179();
	iLocal_96 = unk_0x4271E34D4C5FBF5D();
	if (unk_0x4E6BA6FF244D94A8())
	{
		if (iLocal_95 == 0)
		{
			if (unk_0xD361727124133DF3(Global_96208))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (unk_0xD361727124133DF3(Local_815[iVar0 /*3*/]))
					{
						if (Local_815[iVar0 /*3*/] == Global_96208)
						{
							iLocal_93 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_96208 == 0)
	{
		Global_96208 = 0;
	}
	if (unk_0x4E6BA6FF244D94A8())
	{
		if (!Global_96210 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (unk_0xD361727124133DF3(Local_815[iVar0 /*3*/]))
				{
					if (func_177(Local_815[iVar0 /*3*/]) == Global_96210)
					{
						iLocal_93 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_96210 == -1)
	{
		Global_96210 = -1;
	}
}

int func_179()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x3AF3E336702C148C(iLocal_45);
	while (unk_0xD361727124133DF3(iVar1))
	{
		if (func_181(iVar1))
		{
			if ((unk_0xF0F6309B76A8474C(iVar1) == 4 || unk_0xF0F6309B76A8474C(iVar1) == 6) || unk_0xF0F6309B76A8474C(iVar1) == 3)
			{
				iVar0++;
			}
			if (unk_0xF0F6309B76A8474C(iVar1) == 2 || unk_0xF0F6309B76A8474C(iVar1) == 1)
			{
				if (func_180(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0xEB6533503AE8CA5E(iLocal_45);
	}
	iVar1 = unk_0x3AF3E336702C148C(iLocal_46);
	while (unk_0xD361727124133DF3(iVar1))
	{
		if (func_181(iVar1))
		{
			if (unk_0xF0F6309B76A8474C(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0xEB6533503AE8CA5E(iLocal_46);
	}
	return iVar0;
}

int func_180(int iParam0)
{
	if (((unk_0x5E4CAE505FE210EB(iParam0) == 9 || unk_0x5E4CAE505FE210EB(iParam0) == 11) || unk_0x5E4CAE505FE210EB(iParam0) == 10) || unk_0x5E4CAE505FE210EB(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	if (unk_0xD361727124133DF3(iParam0))
	{
		iVar0 = unk_0x0D1708366330943C(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_182(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = unk_0x3AF3E336702C148C(iParam0);
	iVar5 = 20;
	while (unk_0xD361727124133DF3(iVar4))
	{
		if (iLocal_99 >= iVar5)
		{
			unk_0x4EDE34FBADD967A6(0);
			iLocal_99 = 0;
			if (!func_215())
			{
				func_223(1);
			}
			func_167();
			func_210();
			func_209();
		}
		if (iLocal_92 < 40)
		{
			if (func_181(iVar4))
			{
				if (func_194(iVar4))
				{
					if (!func_192(&iVar4))
					{
						bVar3 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case joaat("mpsv_lp0_31"):
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar3 = true;
								break;
							
							case 363:
								iVar7 = func_191(&iVar4);
								if (((iVar7 == 33 || iVar7 == 92) || iVar7 == 89) || iVar7 == 88)
								{
									bVar3 = false;
								}
								else
								{
									bVar3 = true;
								}
								break;
							
							default:
								bVar3 = false;
								if (iParam0 == iLocal_46)
								{
									bVar3 = true;
								}
								else if (iParam0 == iLocal_45)
								{
									if (func_190(&iVar4))
									{
										bVar3 = true;
									}
								}
								break;
						}
						if (unk_0xD361727124133DF3(Global_96207))
						{
							if (func_177(iVar4) == iLocal_45)
							{
								if (!Global_96207 == iVar4)
								{
									bVar3 = false;
								}
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_181(iVar4))
							{
								iVar6 = unk_0xF0F6309B76A8474C(iVar4);
								if (((iVar6 == 4 || iVar6 == 5) || iVar6 == 2) || iVar6 == 1)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								func_189(&iVar4, &Var0);
								func_183(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_99++;
		iVar4 = unk_0xEB6533503AE8CA5E(iParam0);
	}
}

void func_183(struct<3> Param0, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_177(Param0.f_0) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_177(Local_815[iVar0 /*3*/]) == func_177(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_92)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_92)
		{
			if (func_177(Local_815[iVar0 /*3*/]) == func_177(Param0.f_0))
			{
				if (func_187(Param0, Local_815[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_186(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_184(Param0, iVar0);
						iLocal_92++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_184(Param0, iVar0);
				iLocal_92++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_184(Param0, iVar0);
			iLocal_92++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_184(struct<3> Param0, int iParam3)
{
	func_185(iParam3);
	Local_815[iParam3 /*3*/] = { Param0 };
	if (func_177(Local_815[iParam3 /*3*/]) == unk_0x138F9DA1F3442BA3())
	{
		iLocal_98 = iParam3;
		Local_963 = { unk_0xDEC21C0D420A9EFF(Local_815[iParam3 /*3*/]) };
	}
}

void func_185(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_815[(iVar0 - 1) /*3*/] };
		Local_815[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_98)
		{
			iLocal_98 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_186(struct<3> Param0, int iParam3)
{
	Local_815[iParam3 /*3*/] = { Param0 };
	if (func_177(Local_815[iParam3 /*3*/]) == unk_0x138F9DA1F3442BA3())
	{
		iLocal_98 = iParam3;
		Local_963 = { unk_0xDEC21C0D420A9EFF(Local_815[iParam3 /*3*/]) };
	}
}

int func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_188(uParam0) < func_188(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_188(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xD361727124133DF3(uParam0))
		{
			Var0 = { func_38(iParam0) - unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
	}
	return unk_0x652D2EEEF1D3E62C(Var0);
}

void func_189(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_96209)
	{
		Var0 = { func_38(*uParam1) };
		unk_0xB273AF9A7408FB95(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0xB273AF9A7408FB95(Global_96211, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_190(var uParam0)
{
	int iVar0;
	
	if (unk_0xD361727124133DF3(*uParam0))
	{
		iVar0 = unk_0x5E4CAE505FE210EB(*uParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_191(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87122[iVar0 /*17*/])
		{
			if (Global_87122[iVar0 /*17*/].f_9 != 262)
			{
				if (unk_0xD361727124133DF3(Global_24745[Global_87122[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_24745[Global_87122[iVar0 /*17*/].f_9 /*23*/].f_19 == *uParam0)
					{
						return Global_87122[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_192(var uParam0)
{
	if (!unk_0xD361727124133DF3(*uParam0))
	{
		return 1;
	}
	if (Global_96206 == *uParam0)
	{
		return 1;
	}
	if (unk_0xD623E5BF8A42FDB2(*uParam0) == 39)
	{
		return 1;
	}
	if (func_193(unk_0xDEC21C0D420A9EFF(*uParam0), 0f, 0f, 0f))
	{
		return 1;
	}
	if (func_177(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_193(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_194(var uParam0)
{
	float fVar0;
	
	if (!func_177(uParam0) == iLocal_45)
	{
		fVar0 = func_188(uParam0);
		if (fVar0 > 50f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_815[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_98 = -1;
	Local_963 = { 0f, 0f, 0f };
	iLocal_99 = 0;
}

bool func_196()
{
	bool bVar0;
	struct<3> Var1;
	var uVar4;
	
	bVar0 = false;
	if (!unk_0xD361727124133DF3(Local_815[iLocal_93 /*3*/]))
	{
		if (iLocal_93 != iLocal_98)
		{
			return 1;
		}
	}
	if (unk_0xC9D9444186B5A374() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_96 != unk_0x4271E34D4C5FBF5D())
			{
				bVar0 = true;
			}
			iLocal_96 = unk_0x4271E34D4C5FBF5D();
			if (iLocal_97 != func_197())
			{
				bVar0 = true;
			}
			iLocal_97 = func_197();
		}
		if (!bVar0)
		{
			if (iLocal_98 != -1)
			{
				if (unk_0xD361727124133DF3(Local_815[iLocal_98 /*3*/]))
				{
					if (func_177(Local_815[iLocal_98 /*3*/]) == unk_0x138F9DA1F3442BA3())
					{
						Var1 = { unk_0xDEC21C0D420A9EFF(Local_815[iLocal_98 /*3*/]) };
						if (!func_118(Var1, Local_963, 1056964608))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					uVar4 = unk_0x3AF3E336702C148C(unk_0x138F9DA1F3442BA3());
					if (unk_0xD361727124133DF3(uVar4))
					{
						Var1 = { unk_0xDEC21C0D420A9EFF(iVar4) };
						if (!func_118(Var1, Local_963, 1056964608))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
	}
	return bVar0;
}

int func_197()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_96204))
	{
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, -1))
		{
			iVar0++;
		}
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, 0))
		{
			iVar0++;
		}
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, 1))
		{
			iVar0++;
		}
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, 2))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_198()
{
	if (iLocal_937 != 0)
	{
		unk_0x24A6BECBE7FB7072(uLocal_94);
		unk_0x070F78D7490C1013(4);
		unk_0xED73E1F1A255F54E(1);
		if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
		{
			unk_0x012C58B789779AA4(uLocal_112, fLocal_87, fLocal_88, fLocal_85, fLocal_86, 0, 0, 0, 255, 0);
		}
	}
}

void func_199()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_937 != 0)
	{
		if (iLocal_92 > 1)
		{
			func_204(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x30E5EC01C9ACF9BC(2))
			{
				unk_0x0756DDDAD8038AC9(2, 241);
				unk_0x0756DDDAD8038AC9(2, 242);
				unk_0x0756DDDAD8038AC9(2, 180);
				unk_0x0756DDDAD8038AC9(2, 181);
			}
			if (iVar0 > 28 || unk_0x02AC213158CF29AE(2, 180))
			{
				if (!iLocal_63)
				{
					if (bLocal_61)
					{
						if (bLocal_60)
						{
							func_203();
						}
						else
						{
							iLocal_59 = 1;
						}
						bLocal_60 = true;
					}
					else
					{
						func_203();
					}
					iLocal_105 = unk_0xF976C624234A4AA8();
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_63 = 0;
			}
			if (iVar0 < -28 || unk_0x58FC9C7DF8FE009B(2, 181))
			{
				if (!iLocal_64)
				{
					if (bLocal_61)
					{
						if (bLocal_60)
						{
							func_201();
						}
						else
						{
							iLocal_59 = 1;
						}
						bLocal_60 = true;
					}
					else
					{
						func_201();
					}
					iLocal_105 = unk_0xF976C624234A4AA8();
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 0;
			}
		}
		if (!bLocal_61)
		{
			if (iLocal_92 > 0)
			{
				unk_0x2E98407DE29E0D76(0);
				if (unk_0x58FC9C7DF8FE009B(2, 176))
				{
					if (unk_0xD361727124133DF3(Local_815[iLocal_93 /*3*/]))
					{
						iLocal_814 = 2;
						Local_42 = { Local_815[iLocal_93 /*3*/] };
						iLocal_57 = 0;
						iLocal_91 = unk_0xF976C624234A4AA8();
						iLocal_100 = unk_0xF976C624234A4AA8();
						iLocal_101 = unk_0xF976C624234A4AA8();
						iLocal_89 = 0;
						iLocal_936 = 0;
						bLocal_61 = true;
						iLocal_59 = 1;
						bLocal_60 = false;
					}
				}
			}
		}
		else
		{
			unk_0x2E98407DE29E0D76(0);
			if (iLocal_937 == 2)
			{
				if (unk_0x58FC9C7DF8FE009B(2, 177))
				{
					iLocal_814 = 13;
					iLocal_59 = 1;
					if (!unk_0x9F94F2CFDCA78C55(Global_96205))
					{
						unk_0xAC57FBF981AB03F4(Global_96205);
					}
					iLocal_937 = 3;
				}
				if (!bLocal_65)
				{
					if (unk_0x58FC9C7DF8FE009B(2, 179))
					{
						iLocal_814 = 20;
						bLocal_65 = true;
						iLocal_59 = 1;
						fLocal_74 = (0.22f * 2f);
						if (!unk_0x9F94F2CFDCA78C55(Global_96205))
						{
							if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3))
							{
								if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
								{
									if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_exit", 3))
									{
										unk_0xAC57FBF981AB03F4(Global_96205);
									}
								}
							}
						}
					}
				}
				if (func_65())
				{
					if (unk_0x58FC9C7DF8FE009B(2, 176))
					{
						if (bLocal_62)
						{
							iLocal_59 = 1;
							iLocal_90 = unk_0xF976C624234A4AA8();
							iLocal_939 = 0;
							iLocal_937 = 4;
						}
					}
				}
				if (iLocal_814 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (func_147(iLocal_100, 68000))
						{
							iLocal_814 = 4;
							iLocal_100 = -1;
						}
					}
				}
				if (iLocal_814 == 0)
				{
					if (iLocal_101 != -1)
					{
						if (func_147(iLocal_101, 5000))
						{
							if ((unk_0xBD883E84B4B6E14E(2, 81) || unk_0xBD883E84B4B6E14E(2, 82)) || unk_0xBD883E84B4B6E14E(2, 85))
							{
								iLocal_814 = 17;
								iLocal_100 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_937 == 3)
			{
				if (unk_0x58FC9C7DF8FE009B(2, 177))
				{
					iLocal_814 = 3;
					iLocal_59 = 1;
					iLocal_937 = 2;
				}
			}
			if (bLocal_60)
			{
				if (func_200())
				{
					if (unk_0x58FC9C7DF8FE009B(2, 176))
					{
						if (unk_0xD361727124133DF3(Local_815[iLocal_93 /*3*/]))
						{
							iLocal_814 = 9;
							bLocal_62 = false;
							if (iLocal_937 == 3)
							{
								iLocal_937 = 2;
							}
							iLocal_59 = 1;
							Local_42 = { Local_815[iLocal_93 /*3*/] };
							iLocal_57 = 0;
							iLocal_91 = unk_0xF976C624234A4AA8();
							iLocal_89 = 0;
							iLocal_936 = 0;
							if (!unk_0x9F94F2CFDCA78C55(Global_96205))
							{
								if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3))
								{
									if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
									{
										if (!unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_exit", 3))
										{
											unk_0xAC57FBF981AB03F4(Global_96205);
										}
									}
								}
							}
							iLocal_105 = unk_0xF976C624234A4AA8();
							bLocal_60 = false;
						}
					}
					if (func_147(iLocal_105, 3000))
					{
						bLocal_60 = false;
					}
				}
			}
		}
	}
}

int func_200()
{
	if (unk_0x17D71902CA06091B(uLocal_69))
	{
		if (unk_0xB44AF0EB1FA3729D(uLocal_69))
		{
			return 1;
		}
	}
	if (bLocal_60)
	{
		return 1;
	}
	return 0;
}

void func_201()
{
	struct<3> Var0;
	
	unk_0xF48C88BD1F0007E8(uLocal_112, "SET_INPUT_EVENT");
	unk_0x876C5D0739031E15(8);
	unk_0xA52FC2467E672B55();
	iLocal_93 = (iLocal_93 - 1);
	if (iLocal_93 < 0)
	{
		iLocal_93 = (iLocal_92 - 1);
	}
	if (unk_0xD361727124133DF3(Local_815[iLocal_93 /*3*/]))
	{
		Var0 = { unk_0xDEC21C0D420A9EFF(Local_815[iLocal_93 /*3*/]) };
		if (!func_202(Var0))
		{
			unk_0x76F422FE758FB5D7(Var0.f_0, Var0.f_1);
		}
	}
}

int func_202(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_203()
{
	struct<3> Var0;
	
	unk_0xF48C88BD1F0007E8(uLocal_112, "SET_INPUT_EVENT");
	unk_0x876C5D0739031E15(9);
	unk_0xA52FC2467E672B55();
	iLocal_93++;
	if (iLocal_93 > (iLocal_92 - 1))
	{
		iLocal_93 = 0;
	}
	if (unk_0xD361727124133DF3(Local_815[iLocal_93 /*3*/]))
	{
		Var0 = { unk_0xDEC21C0D420A9EFF(Local_815[iLocal_93 /*3*/]) };
		if (!func_202(Var0))
		{
			unk_0x76F422FE758FB5D7(Var0.f_0, Var0.f_1);
		}
	}
}

void func_204(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x3A32FF422A47D4D2(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x3A32FF422A47D4D2(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x3A32FF422A47D4D2(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x3A32FF422A47D4D2(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xAA8FAD2763B85102(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xAA8FAD2763B85102(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xAA8FAD2763B85102(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xAA8FAD2763B85102(2, 221) * 127f));
		}
	}
}

int func_205()
{
	if (iLocal_937 == 4)
	{
		return 1;
	}
	if (func_207())
	{
		return 1;
	}
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 1;
	}
	if (func_206())
	{
		return 1;
	}
	if (func_170(8, -1))
	{
		return 1;
	}
	if (func_152(0))
	{
		return 1;
	}
	if (unk_0x82F85CC376273040())
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_68327 || Global_68328)
	{
		return 1;
	}
	return 0;
}

bool func_206()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

bool func_207()
{
	return Global_66880;
}

void func_208()
{
	if (!Global_96209 == 0)
	{
		if (!unk_0xD361727124133DF3(Global_96209))
		{
			Global_96209 = 0;
		}
	}
}

void func_209()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
		unk_0x0CFD4301FF0DDCA9(unk_0xAF65E5A58BE87D95());
		unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 2);
		unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 3);
		unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 4);
		unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 5);
		unk_0x19372A1A61357555(unk_0xAF65E5A58BE87D95(), 15);
	}
}

void func_210()
{
	unk_0xD56126DC7330EEF3(0);
	unk_0xD56126DC7330EEF3(1);
	unk_0xD56126DC7330EEF3(2);
	unk_0x500F4CA776CEBD0A(0, 99, 1);
	unk_0x500F4CA776CEBD0A(0, 100, 1);
	unk_0x500F4CA776CEBD0A(0, 16, 1);
	unk_0x500F4CA776CEBD0A(0, 17, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 25, 1);
	func_211();
	unk_0x500F4CA776CEBD0A(0, 200, 1);
	if (func_207() || func_152(0))
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
}

void func_211()
{
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 4);
}

int func_212()
{
	int iVar0;
	
	if (Global_96205 == 0)
	{
		return 0;
	}
	if (!unk_0x9F94F2CFDCA78C55(Global_96205))
	{
		if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
		{
			if (!unk_0x764E7360C13E7383(Global_96205, Global_96204))
			{
				return 0;
			}
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0))
			{
				if (func_213(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
				{
					iVar0 = unk_0xE634CB9EE7094537(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), -1);
					if (!iVar0 == unk_0x507DA4994C3D8EBD())
					{
						if (!unk_0x9F94F2CFDCA78C55(iVar0))
						{
							Global_96220 = 1;
							unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 0);
							unk_0xD9E638F7F8DCAA60(2);
							unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
							return 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x17D71902CA06091B(uLocal_69))
	{
		if (unk_0xB44AF0EB1FA3729D(uLocal_69))
		{
			unk_0xBFA7DD5BAA27D9E3(0);
			Global_96221 = 0;
		}
		unk_0x6F430D0F1783A56E(uLocal_69, 0);
		unk_0x44151B6071157DDD(uLocal_69, 0);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x0573535E36A62454();
		unk_0x465FDAA9130F8F45();
		unk_0xCB213D9A785B441C(0);
	}
	return 0;
}

int func_213(var uParam0)
{
	if (unk_0x40923C25A763E8E8(uParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		return 1;
	}
	if (func_50(unk_0x507DA4994C3D8EBD()) != iLocal_72)
	{
		return 1;
	}
	if (!unk_0xFD68187442384158(Global_96204))
	{
		return 1;
	}
	if (!unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		return 1;
	}
	if (!unk_0xFD68187442384158(Global_96205))
	{
		return 1;
	}
	if (unk_0x9F94F2CFDCA78C55(Global_96205))
	{
		return 1;
	}
	if (iLocal_937 != 4)
	{
		if (iParam0 == 1)
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				return 1;
			}
			if (((unk_0xD803509E70F20530(Global_96204, 2, 30000) || unk_0xD803509E70F20530(Global_96204, 3, 30000)) || unk_0xD803509E70F20530(Global_96204, 0, 7000)) || unk_0xD803509E70F20530(Global_96204, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { unk_0xBF1B13057E5119A4(Global_96204, 0) };
		if (unk_0x0982F2F40B035E77(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.f_0 = (Var4.f_0 - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.f_0 = (Var7.f_0 + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (unk_0xEE93FF4158B54B09(Var4, Var7, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_215()
{
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		return 0;
	}
	if (Global_87109 == 1)
	{
		return 0;
	}
	if (unk_0x3574DD38C5FAC832())
	{
		return 0;
	}
	if (Global_96224)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (unk_0xFD9A44D9D38B33D2())
	{
		return 0;
	}
	return 1;
}

int func_216()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		iLocal_96 = unk_0x4271E34D4C5FBF5D();
		if (func_220(&uVar0, func_222(), func_221()))
		{
			iVar1 = unk_0xE634CB9EE7094537(uVar0, -1);
			func_208();
			unk_0x0364C7B6EFAC33A0(unk_0xAF65E5A58BE87D95(), 0);
			unk_0xD9E638F7F8DCAA60(2);
			unk_0x5466EB7A3FD9AFF0(unk_0x507DA4994C3D8EBD(), 1);
			if (unk_0xE634CB9EE7094537(uVar0, 1) == unk_0x507DA4994C3D8EBD())
			{
				iLocal_978 = 1;
			}
			else
			{
				iLocal_978 = 2;
			}
			if (func_218(&uVar0, &iVar1, 1))
			{
				Local_957 = { unk_0xBF1B13057E5119A4(Global_96204, 1) - unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
				Local_957.f_2 = 0f;
				fLocal_73 = unk_0x652D2EEEF1D3E62C(Local_957);
				iLocal_72 = func_50(unk_0x507DA4994C3D8EBD());
				func_217();
				iLocal_97 = func_197();
				iLocal_59 = 1;
				unk_0x500F4CA776CEBD0A(0, 75, 1);
				Global_96220 = 1;
				iLocal_937 = 0;
				iLocal_938 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_217()
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
	{
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, 1))
		{
			iVar0 = unk_0xE634CB9EE7094537(Global_96204, 1);
			if (unk_0x507DA4994C3D8EBD() != iVar0)
			{
				if (!unk_0xF9BC20445D57B42A(iVar0, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95())))
				{
					unk_0xA859D289EEB2D72A(iVar0, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0xC51FBEBD87CFD69C(Global_96204, 2))
		{
			iVar0 = unk_0xE634CB9EE7094537(Global_96204, 2);
			if (unk_0x507DA4994C3D8EBD() != iVar0)
			{
				if (!unk_0xF9BC20445D57B42A(iVar0, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95())))
				{
					unk_0xA859D289EEB2D72A(iVar0, unk_0x507DA4994C3D8EBD(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_218(var uParam0, int iParam1, bool bParam2)
{
	if (!*uParam0 == Global_96204 && !Global_96204 == 0)
	{
		func_219();
	}
	if (unk_0xFD68187442384158(*uParam0) && unk_0xFD68187442384158(*iParam1))
	{
		if (unk_0xCA8794CE207FC6D5(*uParam0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(*iParam1))
			{
				if (unk_0x764E7360C13E7383(*iParam1, *uParam0))
				{
					Global_96204 = *uParam0;
					Global_96205 = *iParam1;
					Global_96219 = 1;
					if (bParam2)
					{
						unk_0xBAE5DF507EEC53C8(Global_96205, 1, 1);
						unk_0xBAE5DF507EEC53C8(Global_96204, 1, 1);
						StringCopy(&Global_96235, unk_0x3ED5FA3F61EC9E68(), 24);
					}
					else
					{
						if (!unk_0x73E2404DC70203CD(Global_96205))
						{
							unk_0xBAE5DF507EEC53C8(Global_96205, 1, 0);
						}
						if (!unk_0x73E2404DC70203CD(Global_96204))
						{
							unk_0xBAE5DF507EEC53C8(Global_96204, 1, 0);
							StringCopy(&Global_96235, unk_0x3ED5FA3F61EC9E68(), 24);
						}
					}
					unk_0x7FEDD088E489CE41(Global_96205, 251, 1);
					unk_0x3A1E687904400847(Global_96205, 5, 0);
					unk_0x3A1E687904400847(Global_96205, 17, 1);
					unk_0xB2B080B88A4144B7(Global_96205, 512, 0);
					unk_0x2DC5B31EBB810396(Global_96205, 1);
					unk_0x454E090239AFF6E8(Global_96205, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0xCDC1FD4387DA32EC(Global_96204, 1);
					unk_0x06CB6EA6826752A6(Global_96204, 1);
					unk_0xCDED36A388C5C6F3(Global_96204, 0, 0);
					unk_0xE1A0AADDFA9D4FD8(Global_96204, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_219()
{
	var uVar0;
	
	if (unk_0xFD68187442384158(Global_96205))
	{
		if (!unk_0x9F94F2CFDCA78C55(Global_96205))
		{
			unk_0x7FEDD088E489CE41(Global_96205, 251, 0);
			unk_0x2DC5B31EBB810396(Global_96205, 0);
			if (!unk_0x1BA961C8CF14F399(Global_96205) && !unk_0xC20B334EFA64243F(Global_96205, 0))
			{
				if (unk_0x2A24448FF232F834(Global_96205, 0))
				{
					if (unk_0xFD68187442384158(Global_96204))
					{
						if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
						{
							if (unk_0x764E7360C13E7383(Global_96205, Global_96204))
							{
								if (unk_0xEC043AB2FEE0E94F(Global_96205, -258271821) != 1 && unk_0xEC043AB2FEE0E94F(Global_96205, -258271821) != 0)
								{
									unk_0xB5DC017AFD430D1B(&uVar0);
									if ((!unk_0xC51FBEBD87CFD69C(Global_96204, 1) || !unk_0xC51FBEBD87CFD69C(Global_96204, 2)) || !unk_0xC51FBEBD87CFD69C(Global_96204, 0))
									{
										unk_0x72E8B5193C65ADE0(0, 2000);
									}
									else
									{
										unk_0x72E8B5193C65ADE0(0, 500);
									}
									unk_0xF40D4EBDC0BA2C26(0, Global_96204, 12f, 790699);
									unk_0x6EE8A5CF9AC75F12(uVar0);
									unk_0x8229311A391A4EC6(Global_96205, uVar0);
									unk_0x9F77DFFC61FCB68C(&uVar0);
								}
							}
							else
							{
								unk_0xA859D289EEB2D72A(Global_96205, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0xA859D289EEB2D72A(Global_96205, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0xEC043AB2FEE0E94F(Global_96205, -1146898486) != 1 && unk_0xEC043AB2FEE0E94F(Global_96205, -1146898486) != 0)
				{
					unk_0xB68382181B4C4177(Global_96205, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0xFD68187442384158(Global_96205))
	{
		if (unk_0x73E2404DC70203CD(Global_96205))
		{
			if (unk_0x51BC2FF711F8CF71(Global_96205, 0))
			{
				if (!unk_0x9F94F2CFDCA78C55(Global_96205))
				{
					unk_0x3C2614E45AB2F499(Global_96205, 0);
					unk_0x2DC5B31EBB810396(Global_96205, 0);
				}
				unk_0xCA4DD92F1F2931F3(&Global_96205);
			}
		}
	}
	if (unk_0xFD68187442384158(Global_96204))
	{
		if (unk_0x73E2404DC70203CD(Global_96204))
		{
			if (unk_0x51BC2FF711F8CF71(Global_96204, 0))
			{
				if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0x06CB6EA6826752A6(Global_96204, 0);
					unk_0xCDED36A388C5C6F3(Global_96204, 1, 0);
					unk_0xE1A0AADDFA9D4FD8(Global_96204, 0);
				}
				unk_0xB67623A401171555(&Global_96204);
			}
		}
	}
	Global_96205 = 0;
	Global_96204 = 0;
	StringCopy(&Global_96235, "NULL", 24);
	Global_96241 = -1;
}

int func_220(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(*uParam0, 0))
		{
			if (unk_0x26EA758C2A691D06(*uParam0) == iParam1)
			{
				iVar0 = unk_0xE634CB9EE7094537(*uParam0, -1);
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (!unk_0x1BA961C8CF14F399(iVar0))
						{
							if (!unk_0xC20B334EFA64243F(iVar0, 0))
							{
								if (unk_0x92A853B99CCAA054(iVar0, uParam2))
								{
									if (unk_0x03F9C86DAF30C655(*uParam0, 1119092736))
									{
										iVar1 = unk_0x407FC6F2E81C15C7(*uParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return 0;
}

int func_221()
{
	return joaat("a_m_y_stlat_01");
}

int func_222()
{
	return joaat("taxi");
}

void func_223(bool bParam0)
{
	unk_0x2E98407DE29E0D76(1);
	if (unk_0xBB59C64F638475F4("taxi"))
	{
		unk_0x9BDB594F5771D83A("taxi");
	}
	if (unk_0x17D71902CA06091B(uLocal_69))
	{
		if (unk_0xB44AF0EB1FA3729D(uLocal_69))
		{
			unk_0xBFA7DD5BAA27D9E3(0);
		}
		unk_0x6F430D0F1783A56E(uLocal_69, 0);
		unk_0x44151B6071157DDD(uLocal_69, 0);
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x0573535E36A62454();
		unk_0x465FDAA9130F8F45();
		unk_0xCB213D9A785B441C(0);
	}
	Global_96221 = 0;
	if (unk_0xFD68187442384158(iLocal_110))
	{
		unk_0x4095FD029041DD48(&iLocal_110);
		unk_0xFF467904A8A12BBE(iLocal_109);
	}
	unk_0x86FF04BBB2EC839F(&uLocal_112);
	unk_0x86FF04BBB2EC839F(&uLocal_113);
	if (func_224(Global_96205))
	{
		if (unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_enter", 3))
		{
			unk_0x6F5A8AEA65939753(Global_96205, "leanover_enter", &cLocal_940, -2f);
		}
		else if (unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_idle", 3))
		{
			unk_0x6F5A8AEA65939753(Global_96205, "leanover_idle", &cLocal_940, -2f);
		}
		else if (unk_0x22605DE2E6933CF2(Global_96205, &cLocal_940, "leanover_exit", 3))
		{
			unk_0x6F5A8AEA65939753(Global_96205, "leanover_exit", &cLocal_940, -2f);
		}
		if (unk_0x59752F977A640536(Global_96205, unk_0x507DA4994C3D8EBD()))
		{
			unk_0xCBA47B699F417E4D(Global_96205);
		}
	}
	unk_0xA878656BC39BBC51(&cLocal_940);
	if (iLocal_937 == 4)
	{
		if (iLocal_939 != 10)
		{
			if (iLocal_58)
			{
				if (unk_0x9DBF5ADC61595373())
				{
					unk_0x5DE91777B624B339();
				}
				iLocal_58 = 0;
			}
			func_148(0);
			if (unk_0xA2A45E58AC3DF6C5("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0xAB5C0FE0C680BC7F("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0xFD68187442384158(Global_96204))
			{
				if (unk_0xCA8794CE207FC6D5(Global_96204, 0))
				{
					unk_0x3F60DDB36F3654A8(Global_96204, 1);
					unk_0x479E7EEEBDEE245D(Global_96204, 0);
				}
			}
			if (bParam0)
			{
				if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
				{
					if (!unk_0xC17F446CF864854D())
					{
						if ((!func_71() && !func_8()) && Global_89784 != 10)
						{
							unk_0x662E87A876F1069D(250);
						}
					}
				}
			}
		}
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (func_3(Global_96204))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_96204, 1))
			{
				if (unk_0xE634CB9EE7094537(Global_96204, -1) != unk_0x507DA4994C3D8EBD())
				{
					if (!func_2(unk_0x507DA4994C3D8EBD(), -828834893) && !func_2(unk_0x507DA4994C3D8EBD(), 451360105))
					{
						unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_219();
	Global_96241 = -1;
	Global_96220 = 0;
	Global_96224 = 0;
	unk_0x883793591E631A3B();
}

int func_224(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

