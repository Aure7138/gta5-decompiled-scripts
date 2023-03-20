#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64[2] = { 0, 0 };
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	var uLocal_90[2] = { 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_142[24] = "";
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<3> Local_151 = { 0, 0, 0 } ;
	var uLocal_154[2] = { 0, 0 };
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	struct<3> Local_159 = { 0, 0, 0 } ;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 16;
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
	int iLocal_337 = 0;
	struct<3> Local_338 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	uLocal_50 = unk_0x1B46069E4C762829();
	uLocal_51 = unk_0xE2B564EB49C711B1();
	Local_86 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_123 = -1;
	StringCopy(&Local_136, "", 24);
	iLocal_164 = -1;
	Local_338 = { -1017.345f, -1354.196f, 4.4568f };
	Local_341 = { 2003.456f, 3071.102f, 46.0499f };
	Local_56 = { ScriptParam_0.f_1[0 /*3*/] };
	func_265();
	if (unk_0x2C897F101BA20806(11))
	{
		func_231();
	}
	if (func_189(Local_56, 27, iLocal_344, 0, 0))
	{
		func_186(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	iLocal_158 = unk_0x09560C7DE2A384BD();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFEC6476AFCF2033F() || iLocal_61)
		{
			if (!func_185())
			{
				if (func_184())
				{
					func_231();
				}
			}
			unk_0x0022A74B21F0C0B9("RE_DD", 0);
			switch (iLocal_52)
			{
				case 0:
					if (iLocal_55)
					{
						iLocal_171 = 1;
						iLocal_52 = 1;
					}
					else
					{
						if (func_172())
						{
							func_231();
						}
						if (!bLocal_59)
						{
							func_171();
						}
						if (bLocal_59)
						{
							func_170();
						}
					}
					break;
				
				case 1:
					func_160();
					if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						func_159();
						func_156();
						if (iLocal_53 == 1 && !unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
						{
							func_70();
							if (func_68() || unk_0xE44A580B551C3645(iLocal_93))
							{
								if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
								{
									if (!unk_0xE44A580B551C3645(uLocal_90[0]))
									{
										if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
										{
											unk_0xA7130AF256ED96A1(uLocal_90[0]);
										}
										unk_0x937785D9C1929236(uLocal_90[0]);
										unk_0xEA36CC2E7750344B(uLocal_90[0], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
										func_64(uLocal_90[0], 120000, 0);
										unk_0x2686393074E14730(uLocal_90[0], 1);
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_53 == 2 || (iLocal_53 == 1 && unk_0x538DF9E5B1DF01EB(uLocal_90[1])))
						{
							func_70();
							if (iLocal_54 != 9)
							{
								if (func_68() || unk_0xE44A580B551C3645(iLocal_93))
								{
									if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
									{
										if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
										{
											if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
											{
												unk_0xA7130AF256ED96A1(uLocal_90[0]);
											}
											unk_0x937785D9C1929236(uLocal_90[0]);
											unk_0xEA36CC2E7750344B(uLocal_90[0], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
											func_64(uLocal_90[0], 120000, 0);
											unk_0x2686393074E14730(uLocal_90[0], 1);
										}
									}
									if (unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
									{
										if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
										{
											if (unk_0x9A132E8DFAE1F524(uLocal_90[1]))
											{
												unk_0xA7130AF256ED96A1(uLocal_90[1]);
											}
											unk_0x937785D9C1929236(uLocal_90[1]);
											unk_0xEA36CC2E7750344B(uLocal_90[1], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
											func_64(uLocal_90[1], 120000, 0);
											unk_0x2686393074E14730(uLocal_90[1], 1);
										}
									}
									if (iLocal_53 == 1)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_53 == 2)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								unk_0x00CFDDE7ACCA68D1(uLocal_90[0], 1f);
							}
						}
						if (unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
							{
								unk_0x00CFDDE7ACCA68D1(uLocal_90[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_54 != 9)
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							if (unk_0x965556ACF6A83973(uLocal_90[0], Local_86, 5f, 5f, 5f, 0, 1, 0))
							{
								if (iLocal_53 == 2)
								{
									if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
									{
										if (!unk_0x9A132E8DFAE1F524(uLocal_90[0]) && !unk_0x9A132E8DFAE1F524(uLocal_90[1]))
										{
											unk_0xE4C80CFABEAEED8F(uLocal_90[0], func_57());
											unk_0xE4C80CFABEAEED8F(uLocal_90[1], func_57());
										}
									}
								}
								func_56(0);
								unk_0x4EDE34FBADD967A6(0);
								func_62();
								iLocal_54 = 9;
							}
						}
					}
					if (func_55())
					{
						if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
						{
							unk_0x51A89CCC8A5317D0(&(uLocal_90[0]));
						}
						if (unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
						{
							unk_0x51A89CCC8A5317D0(&(uLocal_90[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_231();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_53 == 1 && iLocal_54 == 7) && iLocal_63 == 5) && iLocal_109)
	{
		iLocal_158 = unk_0x09560C7DE2A384BD();
		if (func_2())
		{
			if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
			{
				Local_159 = { unk_0x7058130F22A40503(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if (iLocal_53 == 1)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						if (unk_0xAD203DB71ADF6E57(uLocal_90[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]) && unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
					{
						if (unk_0xAD203DB71ADF6E57(uLocal_90[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) && unk_0xAD203DB71ADF6E57(uLocal_90[1], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
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

int func_3()
{
	if (iLocal_53 == 2)
	{
		if (!unk_0xE44A580B551C3645(iLocal_93))
		{
			if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_93, 200f, 200f, 200f, 0, 1, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (unk_0xC406F7EDB827A6CF(iLocal_93) && unk_0x6360D2FA3AD62AD1(iLocal_93) < iLocal_79)
				{
					iLocal_79 = unk_0x6360D2FA3AD62AD1(iLocal_93);
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0xECFECDAD51A6184F(iLocal_93, 0) || unk_0x02AE016A85A33AB4(iLocal_93))
			{
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_4())
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							unk_0xAC9F22F89987627B(uLocal_90[0], 1193033728, 0);
							unk_0x2686393074E14730(uLocal_90[0], 1);
						}
						if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							unk_0xF3B924DCFDECDB4B(uLocal_90[1], uLocal_90[0], -1, 0f, 1f, 1073741824, 0);
							unk_0x2686393074E14730(uLocal_90[1], 1);
						}
						return 1;
					}
				}
			}
			if (unk_0xD06F1DD413AB5E65(iLocal_93, 0, 2) && unk_0xBF8ADDCADFC4691E(iLocal_93, unk_0xA16EC202D9D35357(), 0))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					unk_0x937785D9C1929236(uLocal_90[0]);
					unk_0xEA36CC2E7750344B(uLocal_90[0], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
				}
				if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					unk_0x937785D9C1929236(uLocal_90[1]);
					unk_0xEA36CC2E7750344B(uLocal_90[1], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
				}
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

int func_4()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_135)
		{
			if (func_10(&uLocal_172, "REDR2AU", &cLocal_142, &Local_136, 8, 0, 0))
			{
				iLocal_135 = 0;
			}
		}
	}
	else if ((!iLocal_135 && unk_0xD47B332729054512()) && !func_27("REDR1_SWV"))
	{
		cLocal_142 = { func_9() };
		Local_136 = { func_8() };
		func_6();
		iLocal_135 = 1;
	}
}

void func_6()
{
	Global_14559 = 0;
	func_7();
}

void func_7()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

struct<6> func_8()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x8E904BB26E98BDB0();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_25();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_23();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_16();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_12();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_13()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_14()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_16()
{
	if (func_22(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_17();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_17()
{
	func_18();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_21(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_20(unk_0xA16EC202D9D35357());
			if (func_19(iVar0) && (!func_22(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_19(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_25()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_27(char* sParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (iLocal_53 == 1)
	{
		if (unk_0x2DE0B96E966FD817(uLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x2DE0B96E966FD817(uLocal_90[0]) && unk_0x2DE0B96E966FD817(uLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (iLocal_53 == 1)
	{
		if (!unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (!unk_0x538DF9E5B1DF01EB(uLocal_90[0]) && !unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_34(27, iLocal_344);
	func_31();
	func_231();
}

void func_31()
{
	func_32();
}

int func_32()
{
	if (func_33(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_35(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)
{
	Global_97425 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)
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
		func_40((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_37();
	}
}

void func_37()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_39(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_38() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()
{
	return Global_24446;
}

int func_39(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_41();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_41()
{
	return Global_1312729;
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_47();
	}
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48()
{
	func_18();
	switch (Global_97439.f_1729.f_539.f_3213)
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

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_52()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_24681)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_16704 = iParam0;
}

var func_57()
{
	return unk_0xF8BF19C18CE5C2B2(unk_0xA495B6AB6F2BF8C7());
}

int func_58()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_24680;
}

void func_60()
{
	func_231();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

void func_62()
{
	Global_14559 = 0;
	func_63();
}

void func_63()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_35742[iVar2 /*5*/] = 0;
	Global_35742[iVar2 /*5*/].f_1 = iParam0;
	Global_35742[iVar2 /*5*/].f_2 = iParam1;
	Global_35742[iVar2 /*5*/].f_3 = iParam1;
	Global_35742[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xA16EC202D9D35357())
	{
		Global_35963 = 1;
	}
	Global_35741++;
	return 1;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35742[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35742[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
		{
			return Global_35768[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_68()
{
	unk_0x843FFA6A8DCCD9E8(1);
	if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
	{
		return 1;
	}
	if ((unk_0xF6BC67E137183D3F(Local_151, 40f, 1) || unk_0xF6BC67E137183D3F(func_69(unk_0x1788E93557766241()), 10f, 0)) || unk_0x98B0F512CA1C2670(Local_151 - Vector(40f, 40f, 40f), Local_151 + Vector(40f, 40f, 40f), 0))
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
	{
		if (unk_0xBF8ADDCADFC4691E(uLocal_90[0], unk_0xA16EC202D9D35357(), 1) || unk_0x21FF064386DC6A0A(uLocal_90[0]))
		{
			return 1;
		}
		if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (unk_0xBF8ADDCADFC4691E(uLocal_90[0], unk_0xB49BA83A5C224F40(), 1))
			{
				return 1;
			}
		}
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
		{
			if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), uLocal_90[0]) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), uLocal_90[0]))
			{
				if (unk_0x864FA69DF1FAD1ED(uLocal_90[0], unk_0xA16EC202D9D35357()))
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
	if (unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
		{
			if (unk_0xBF8ADDCADFC4691E(uLocal_90[1], unk_0xA16EC202D9D35357(), 1))
			{
				return 1;
			}
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (unk_0xBF8ADDCADFC4691E(uLocal_90[1], unk_0xB49BA83A5C224F40(), 1))
				{
					return 1;
				}
			}
			if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
			{
				if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), uLocal_90[1]) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), uLocal_90[1]))
				{
					if (unk_0x864FA69DF1FAD1ED(uLocal_90[1], unk_0xA16EC202D9D35357()))
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
	return 0;
}

Vector3 func_69(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

void func_70()
{
	int iVar0;
	
	switch (iLocal_54)
	{
		case 0:
			if (iLocal_53 == 1)
			{
				if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, 0, 1, 0) && unk_0x7A98E0DD2E6FAB7A(Local_151, 1f)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_151, 15f, 15f, 15f, 0, 1, 0))
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_150))
					{
						unk_0xB6FB9702660D84F6(&uLocal_150);
					}
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						if (!unk_0x5660C8AFDD9C1721(uLocal_154[0]))
						{
							uLocal_154[0] = func_155(uLocal_90[0], 0, 145);
							unk_0xAF9E05E1AFA9F45F(uLocal_154[0], 0);
						}
					}
					if (!func_185())
					{
						if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
						{
							iLocal_94 = unk_0xB49BA83A5C224F40();
						}
						func_154(&uLocal_172, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_145(1);
						func_144(1);
					}
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, 0, 1, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							func_143();
							unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_122 = (unk_0x09560C7DE2A384BD() + 60000);
							if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
							{
								unk_0xAF9E05E1AFA9F45F(uLocal_154[0], 1);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, 0, 1, 0) && unk_0x7A98E0DD2E6FAB7A(Local_151, 1f)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_151, 15f, 15f, 15f, 0, 1, 0))
				{
					func_142();
					if (!func_185())
					{
						if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
						{
							iLocal_94 = unk_0xB49BA83A5C224F40();
						}
						func_145(1);
						func_144(1);
					}
					if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, 0, 1, 0))
					{
						func_61(&uLocal_172, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
						{
							unk_0xAF9E05E1AFA9F45F(uLocal_154[0], 1);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_154[1]))
						{
							unk_0xAF9E05E1AFA9F45F(uLocal_154[1], 1);
						}
						iLocal_122 = (unk_0x09560C7DE2A384BD() + 120000);
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_122 < unk_0x09560C7DE2A384BD())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0xE44A580B551C3645(iLocal_93))
				{
					unk_0x6D98AA46076A68BE(&uLocal_98);
					unk_0x4745F9C50C63A48C(0, uLocal_90[1], 7000, 2060, 4);
					unk_0x976B05703BFD8E48(0, 2500);
					unk_0xA34C986DDC3D92F1(0, iLocal_93, -1, -1, 1f, 1, 0);
					unk_0x963BB7C99350D827(uLocal_98);
					unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
					unk_0x2AF68ED52DC74B7D(&uLocal_98);
				}
				if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					unk_0x6D98AA46076A68BE(&uLocal_98);
					unk_0x4745F9C50C63A48C(0, uLocal_90[0], 7000, 2060, 4);
					unk_0x353F4B963593F141(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					unk_0x353F4B963593F141(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					unk_0xAC9F22F89987627B(0, 1193033728, 0);
					unk_0x963BB7C99350D827(uLocal_98);
					unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
					unk_0x2AF68ED52DC74B7D(&uLocal_98);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_54 = 3;
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0))
				{
					if (unk_0x68E6C2D89A534992(unk_0xA16EC202D9D35357(), uLocal_90[0], 80f))
					{
						bLocal_120 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 4;
					}
				}
				else if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xC5E786A6909B7B4C(1);
				}
				else
				{
					unk_0xC5E786A6909B7B4C(0);
				}
			}
			break;
		
		case 3:
			if (iLocal_53 == 1)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
					{
						if (func_61(&uLocal_172, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_54 = 4;
						}
					}
					if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0))
					{
						if (unk_0x68E6C2D89A534992(unk_0xA16EC202D9D35357(), uLocal_90[0], 80f))
						{
							bLocal_120 = true;
							unk_0xC1B1E9A034A63A62(0);
							iLocal_54 = 4;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
					{
						func_141();
						if (func_140())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_67, 15f, 15f, 15f, 0, 1, 0) && !unk_0x5CFE61452C346065(unk_0xA16EC202D9D35357()))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						if (unk_0x68E6C2D89A534992(unk_0xA16EC202D9D35357(), uLocal_90[0], 80f))
						{
							if (unk_0x864FA69DF1FAD1ED(uLocal_90[0], unk_0xA16EC202D9D35357()))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									unk_0x6D98AA46076A68BE(&uLocal_98);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2060, 4);
									unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
									unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
									unk_0x963BB7C99350D827(uLocal_98);
									unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
									unk_0x2AF68ED52DC74B7D(&uLocal_98);
								}
								if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
								{
									unk_0x4745F9C50C63A48C(uLocal_90[1], unk_0xA16EC202D9D35357(), -1, 2060, 4);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_54 = 4;
							}
						}
					}
				}
				if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, 0, 1, 0))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_98);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2060, 4);
						unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
						unk_0x963BB7C99350D827(uLocal_98);
						unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
						unk_0x2AF68ED52DC74B7D(&uLocal_98);
						if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							unk_0x4745F9C50C63A48C(uLocal_90[1], unk_0xA16EC202D9D35357(), -1, 2060, 4);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 4;
					}
				}
				if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
				{
					if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_93, 1.5f, 1.5f, 5f, 0, 1, 0) && unk_0x5CFE61452C346065(unk_0xA16EC202D9D35357()))
					{
						if (func_140())
						{
							func_56(0);
						}
						func_62();
						unk_0x4EDE34FBADD967A6(0);
						if (func_61(&uLocal_172, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_169 = 2;
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (unk_0x5660C8AFDD9C1721(uLocal_154[iLocal_62]))
								{
									unk_0xB6FB9702660D84F6(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							if (!unk_0x5660C8AFDD9C1721(uLocal_157))
							{
								uLocal_157 = func_138(iLocal_93, 0, 0);
							}
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								unk_0x9AB8F163FA160890(uLocal_90[0]);
							}
							iLocal_54 = 4;
						}
					}
				}
				if (iLocal_122 < unk_0x09560C7DE2A384BD())
				{
					if (func_140())
					{
						func_56(0);
					}
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1])) && unk_0x538DF9E5B1DF01EB(iLocal_93))
						{
							unk_0x6D98AA46076A68BE(&uLocal_98);
							unk_0x4745F9C50C63A48C(0, uLocal_90[1], -1, 2060, 4);
							unk_0xA34C986DDC3D92F1(0, iLocal_93, -1, -1, 1f, 1, 0);
							unk_0x963BB7C99350D827(uLocal_98);
							unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
							unk_0x2AF68ED52DC74B7D(&uLocal_98);
							unk_0x6D98AA46076A68BE(&uLocal_98);
							unk_0x4745F9C50C63A48C(0, uLocal_90[0], -1, 2060, 4);
							unk_0x1CAB36EC4E43E586(0, uLocal_90[0], 0);
							unk_0xA34C986DDC3D92F1(0, iLocal_93, -1, 0, 1f, 1, 0);
							unk_0x963BB7C99350D827(uLocal_98);
							unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
							unk_0x2AF68ED52DC74B7D(&uLocal_98);
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (unk_0x5660C8AFDD9C1721(uLocal_154[iLocal_62]))
								{
									unk_0xB6FB9702660D84F6(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_53 == 1)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 8f, 8f, 4f, 0, 1, 0) || bLocal_120)
							{
								unk_0xC5E786A6909B7B4C(0);
								unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), -1, 2060, 4);
								unk_0x4745F9C50C63A48C(uLocal_90[1], unk_0xA16EC202D9D35357(), -1, 2060, 4);
								unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], -1, 2060, 4);
								if ((unk_0x09560C7DE2A384BD() + 50000) > iLocal_122 || unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()))
								{
									func_6();
									if (bLocal_120)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
										}
									}
									else
									{
										iLocal_169++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_137())
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									unk_0x6D98AA46076A68BE(&uLocal_98);
									unk_0x5B5659C49032B96C(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
									unk_0x963BB7C99350D827(uLocal_98);
									unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
									unk_0x2AF68ED52DC74B7D(&uLocal_98);
									if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
									{
										unk_0x6D98AA46076A68BE(&uLocal_98);
										unk_0x5B5659C49032B96C(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, 0, 0, 0);
										unk_0x1CAB36EC4E43E586(0, uLocal_90[0], 0);
										unk_0x976B05703BFD8E48(0, 3000);
										unk_0x353F4B963593F141(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										unk_0x353F4B963593F141(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										unk_0xAC9F22F89987627B(0, 1193033728, 0);
										unk_0x963BB7C99350D827(uLocal_98);
										unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
										unk_0x2AF68ED52DC74B7D(&uLocal_98);
									}
									func_136();
								}
							}
							else
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									if (unk_0x68E6C2D89A534992(unk_0xA16EC202D9D35357(), uLocal_90[0], 80f))
									{
										unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
										unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 10000, 2060, 4);
										func_6();
										unk_0x4EDE34FBADD967A6(0);
										iLocal_169++;
									}
									else
									{
										func_135(uLocal_90[0], &(uLocal_64[0]));
									}
								}
								if (!func_4())
								{
									iLocal_169++;
								}
							}
						}
						break;
					
					case 2:
						if (func_137())
						{
							iLocal_169 = 6;
						}
						else
						{
							iLocal_169++;
						}
						break;
					
					case 3:
						if (!iLocal_103)
						{
							if (unk_0x83666F9FB8FEBD4B() > 1500)
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									unk_0x6D98AA46076A68BE(&uLocal_98);
									unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2060, 4);
									unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
									unk_0x976B05703BFD8E48(0, 500);
									unk_0x963BB7C99350D827(uLocal_98);
									unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
									unk_0x2AF68ED52DC74B7D(&uLocal_98);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_103 = 1;
								}
							}
						}
						func_135(uLocal_90[0], &(uLocal_64[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_169++;
							}
						}
						break;
					
					case 4:
						if (!func_137())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
									if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
									{
										unk_0xB6FB9702660D84F6(&(uLocal_154[0]));
									}
									if (unk_0x5660C8AFDD9C1721(uLocal_154[1]))
									{
										unk_0xB6FB9702660D84F6(&(uLocal_154[1]));
									}
									if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
									{
										unk_0x542B8BF5C21F2470(iLocal_93, 1);
										if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
										{
											unk_0xA34C986DDC3D92F1(uLocal_90[0], iLocal_93, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_169++;
								}
							}
						}
						else
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_154[0]));
							}
							if (unk_0x5660C8AFDD9C1721(uLocal_154[1]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_154[1]));
							}
							iLocal_169++;
						}
						break;
					
					case 5:
						if (func_137())
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								if (!unk_0x9A132E8DFAE1F524(uLocal_90[0]))
								{
									unk_0x937785D9C1929236(uLocal_90[0]);
									unk_0xE4C80CFABEAEED8F(uLocal_90[0], func_57());
									unk_0x59DFDC536FDF0000(uLocal_90[0], 1);
									unk_0x5129CFBCCCCA8250(uLocal_90[0], 0);
								}
								unk_0x2966D41514EAE84B(255, uLocal_99, joaat("player"));
								func_134();
							}
							if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
							{
								if (unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) != iLocal_93)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_54 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_135(uLocal_90[0], &(uLocal_64[0]));
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (func_137())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_169 = 10;
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 7:
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (func_137())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 10:
						if (func_137())
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								if (!unk_0x9A132E8DFAE1F524(uLocal_90[0]))
								{
									unk_0x937785D9C1929236(uLocal_90[0]);
									unk_0xE4C80CFABEAEED8F(uLocal_90[0], func_57());
									unk_0x59DFDC536FDF0000(uLocal_90[0], 1);
									unk_0x5129CFBCCCCA8250(uLocal_90[0], 0);
								}
								unk_0x2966D41514EAE84B(255, uLocal_99, joaat("player"));
								func_134();
							}
							iLocal_169++;
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 11:
						iLocal_54 = 7;
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 10f, 10f, 10f, 0, 1, 0))
							{
								if (unk_0x68E6C2D89A534992(uLocal_90[0], unk_0xA16EC202D9D35357(), 50f))
								{
									unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], -1, 2060, 4);
									unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), -1, 2060, 4);
									unk_0x4745F9C50C63A48C(uLocal_90[1], unk_0xA16EC202D9D35357(), -1, 2060, 4);
									if (func_140())
									{
										func_56(0);
									}
									func_6();
									unk_0x4EDE34FBADD967A6(0);
									if (func_61(&uLocal_172, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_169++;
									}
								}
								else
								{
									func_135(uLocal_90[0], &(uLocal_64[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							unk_0x6D98AA46076A68BE(&uLocal_98);
							unk_0x976B05703BFD8E48(0, 500);
							unk_0x963BB7C99350D827(uLocal_98);
							unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
							unk_0x2AF68ED52DC74B7D(&uLocal_98);
							unk_0xC1B1E9A034A63A62(0);
							iLocal_169++;
						}
						break;
					
					case 2:
						func_135(uLocal_90[0], &(uLocal_64[0]));
						if (!unk_0x5CFE61452C346065(unk_0xA16EC202D9D35357()))
						{
							if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
							{
								unk_0x542B8BF5C21F2470(iLocal_93, 1);
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 8000)
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_154[0]));
							}
							if (unk_0x5660C8AFDD9C1721(uLocal_154[1]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_154[1]));
							}
							if (!unk_0x5660C8AFDD9C1721(uLocal_157))
							{
								if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
								{
									uLocal_157 = func_138(iLocal_93, 0, 0);
									unk_0x542B8BF5C21F2470(iLocal_93, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 20f, 20f, 20f, 0, 1, 0) && unk_0x83666F9FB8FEBD4B() > 9500)
								{
									iVar0 = unk_0x444ECD635D5FD45F(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
										}
									}
									else if (func_61(&uLocal_172, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
						if (!unk_0xE44A580B551C3645(iLocal_93))
						{
							if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_93, 1))
							{
								iLocal_54 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 1)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0xE44A580B551C3645(iLocal_93))
				{
					if (unk_0x83666F9FB8FEBD4B() > 50000 || unk_0xD8A521688BDBE867(iLocal_93, -1) == uLocal_90[0])
					{
						if (func_61(&uLocal_172, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0xECFECDAD51A6184F(iLocal_93, 0) && !unk_0x02AE016A85A33AB4(iLocal_93))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									if (unk_0x557C6E696286C67A(iLocal_93, -1) && unk_0xAD203DB71ADF6E57(uLocal_90[0], iLocal_93, 0))
									{
										unk_0xE8AD4366EEC5C2B2(uLocal_90[0], iLocal_93);
										iLocal_54 = 2;
									}
									else if (unk_0xD8A521688BDBE867(iLocal_93, -1) == uLocal_90[0])
									{
										iLocal_54 = 2;
									}
									else if (unk_0xD8A521688BDBE867(iLocal_93, -1) == unk_0xA16EC202D9D35357())
									{
										iLocal_54 = 7;
									}
									else
									{
										func_64(uLocal_90[0], 120000, 0);
										unk_0xAC9F22F89987627B(uLocal_90[0], 1193033728, 0);
										unk_0x2686393074E14730(uLocal_90[0], 1);
										unk_0x4EDE34FBADD967A6(0);
										func_60();
									}
								}
							}
							else if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								func_64(uLocal_90[0], 120000, 0);
								unk_0xAC9F22F89987627B(uLocal_90[0], 1193033728, 0);
								unk_0x2686393074E14730(uLocal_90[0], 1);
								unk_0x4EDE34FBADD967A6(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 60000)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
						{
							if (unk_0x557C6E696286C67A(iLocal_93, -1))
							{
								if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
								{
									unk_0x6D98AA46076A68BE(&uLocal_98);
									unk_0x574CC08ACCB0F5FC(0);
									unk_0xA34C986DDC3D92F1(0, iLocal_93, -1, -1, 1f, 1, 0);
									unk_0x963BB7C99350D827(uLocal_98);
									unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
									unk_0x2AF68ED52DC74B7D(&uLocal_98);
								}
							}
							if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
							{
								unk_0x6D98AA46076A68BE(&uLocal_98);
								unk_0x574CC08ACCB0F5FC(0);
								unk_0xA34C986DDC3D92F1(0, iLocal_93, -1, 0, 1f, 1, 0);
								unk_0x963BB7C99350D827(uLocal_98);
								unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
								unk_0x2AF68ED52DC74B7D(&uLocal_98);
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_53 == 1)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					if (!unk_0xE44A580B551C3645(iLocal_93))
					{
						if (unk_0xAD203DB71ADF6E57(uLocal_90[0], iLocal_93, 0))
						{
							if (unk_0x221AC1EF116F6053(uLocal_90[0], 355471868) != 1 && unk_0x221AC1EF116F6053(uLocal_90[0], 355471868) != 0)
							{
								unk_0xBCA53A1278653F4C(iLocal_93, 5f);
								unk_0x165A87EB3ACA7978(iLocal_93, 1);
								unk_0x6D98AA46076A68BE(&uLocal_98);
								unk_0x933DC7D168CD6A71(0, iLocal_93, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x933DC7D168CD6A71(0, iLocal_93, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x933DC7D168CD6A71(0, iLocal_93, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, 1);
								unk_0x963BB7C99350D827(uLocal_98);
								unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
								unk_0x2AF68ED52DC74B7D(&uLocal_98);
								unk_0x2686393074E14730(uLocal_90[0], 1);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
					{
						if (unk_0xD9275EB8FA656B5C(uLocal_90[0], iLocal_93) && unk_0xD9275EB8FA656B5C(uLocal_90[1], iLocal_93))
						{
							unk_0x165A87EB3ACA7978(iLocal_93, 1);
							unk_0x937785D9C1929236(uLocal_90[1]);
							unk_0xA06765CC8C24CED7(uLocal_90[1], -1);
							unk_0x2686393074E14730(uLocal_90[1], 1);
							iLocal_54 = 5;
						}
						if (!iLocal_100)
						{
							if (unk_0xD9275EB8FA656B5C(uLocal_90[0], iLocal_93) && !unk_0xD9275EB8FA656B5C(uLocal_90[1], iLocal_93))
							{
								unk_0x937785D9C1929236(uLocal_90[0]);
								unk_0xA06765CC8C24CED7(uLocal_90[0], -1);
							}
							if (!unk_0xD9275EB8FA656B5C(uLocal_90[0], iLocal_93) && unk_0xD9275EB8FA656B5C(uLocal_90[1], iLocal_93))
							{
								unk_0x937785D9C1929236(uLocal_90[1]);
								unk_0xA06765CC8C24CED7(uLocal_90[1], -1);
							}
							iLocal_100 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					unk_0x937785D9C1929236(uLocal_90[0]);
					unk_0x6D98AA46076A68BE(&uLocal_98);
					unk_0x9909D1FE2BA25A9B(0, iLocal_93, unk_0xA783C6007920169C(iLocal_93, 0f, 2f, 0f), 10f, 0, iLocal_97, 262144, 5f, -1f);
					unk_0x270A587A7AD98455(0, iLocal_93, 24, 500);
					unk_0x270A587A7AD98455(0, iLocal_93, 9, 1500);
					unk_0x270A587A7AD98455(0, iLocal_93, 24, 500);
					unk_0x270A587A7AD98455(0, iLocal_93, 11, 1500);
					unk_0x933DC7D168CD6A71(0, iLocal_93, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, 1);
					unk_0x963BB7C99350D827(uLocal_98);
					unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
					unk_0x2AF68ED52DC74B7D(&uLocal_98);
					unk_0x2686393074E14730(uLocal_90[0], 1);
				}
			}
			iLocal_54 = 6;
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				if (unk_0x221AC1EF116F6053(uLocal_90[0], 242628503) == 1)
				{
					if (unk_0x221830F81FA80744(uLocal_90[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_53 == 1)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[1], 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x6B3DDEE91652BE59(&(uLocal_90[1]));
					}
				}
				switch (iLocal_63)
				{
					case 0:
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (!unk_0x5660C8AFDD9C1721(uLocal_154[0]))
							{
								uLocal_154[0] = func_155(uLocal_90[0], 0, 145);
							}
							iLocal_63++;
							unk_0xC1B1E9A034A63A62(0);
						}
						break;
					
					case 1:
						if (unk_0x83666F9FB8FEBD4B() > 1000)
						{
							if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
							{
								if (func_137())
								{
									if (unk_0xECFECDAD51A6184F(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0))
									{
										fLocal_163 = func_133(unk_0xA16EC202D9D35357(), uLocal_90[0], 1);
										iLocal_63++;
									}
								}
								else if (!iLocal_118)
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_118 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_132();
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							if (func_137())
							{
								if (!iLocal_117)
								{
									if (func_133(unk_0xA16EC202D9D35357(), uLocal_90[0], 1) > (fLocal_163 + 5f))
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_117 = 1;
										}
									}
								}
							}
							else if (!iLocal_118)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_118 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
							{
								unk_0x542B8BF5C21F2470(iLocal_93, 1);
							}
							if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
							{
								unk_0xB6FB9702660D84F6(&(uLocal_154[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!unk_0x5660C8AFDD9C1721(uLocal_102))
								{
									uLocal_102 = func_130(Local_86, 0);
									unk_0x2025496D9184D312(uLocal_102, 269);
									func_128();
								}
							}
							iLocal_61 = 1;
							iLocal_63++;
						}
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							if (func_133(unk_0xA16EC202D9D35357(), uLocal_90[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							unk_0x4EDE34FBADD967A6(1500);
							unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_170 = unk_0x09560C7DE2A384BD();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_127();
						func_126();
						func_132();
						if (!iLocal_109)
						{
							if ((unk_0x09560C7DE2A384BD() - iLocal_170) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_170 = unk_0x09560C7DE2A384BD();
										iLocal_109 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_108 && !bLocal_107)
							{
								func_125();
							}
							else
							{
								func_122();
								func_121();
								unk_0x7FF5364DCE67B621(1);
							}
						}
						if (func_120(Local_80))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_119())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							if (unk_0x965556ACF6A83973(uLocal_90[0], Local_80, Global_22, 1, 1, 0))
							{
								if (unk_0x5660C8AFDD9C1721(uLocal_101))
								{
									unk_0xB6FB9702660D84F6(&uLocal_101);
								}
								if (unk_0x5660C8AFDD9C1721(uLocal_102))
								{
									unk_0xB6FB9702660D84F6(&uLocal_102);
								}
								iLocal_54 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_63)
				{
					case 0:
						if (!unk_0xE44A580B551C3645(iLocal_93))
						{
							if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_93, 1))
							{
								if (!unk_0x5660C8AFDD9C1721(uLocal_154[0]))
								{
									uLocal_154[0] = func_155(uLocal_90[0], 0, 145);
								}
								if (!unk_0x5660C8AFDD9C1721(uLocal_154[1]))
								{
									uLocal_154[1] = func_155(uLocal_90[1], 0, 145);
								}
								if (!func_4())
								{
									unk_0xC1B1E9A034A63A62(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0xE44A580B551C3645(iLocal_93))
						{
							unk_0x574CC08ACCB0F5FC(uLocal_90[0]);
							unk_0xA34C986DDC3D92F1(uLocal_90[0], iLocal_93, 30000, 2, 2f, 1, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_63++;
						break;
					
					case 2:
						if (!unk_0x2DE0B96E966FD817(uLocal_90[1]) && !unk_0xE44A580B551C3645(iLocal_93))
						{
							unk_0x6D98AA46076A68BE(&uLocal_98);
							unk_0x574CC08ACCB0F5FC(0);
							unk_0x99C7091782A79B14(0, iLocal_93, 1.5f, -3f, 0f, 1f, 4000, 1036831949, 1);
							unk_0xA34C986DDC3D92F1(0, iLocal_93, 30000, 1, 2f, 1, 0);
							unk_0x963BB7C99350D827(uLocal_98);
							unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
							unk_0x2AF68ED52DC74B7D(&uLocal_98);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_63++;
						break;
					
					case 3:
						func_127();
						func_126();
						if (!iLocal_116)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_172, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_116 = 1;
								}
							}
						}
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
							{
								if (!unk_0xE44A580B551C3645(uLocal_90[0]) && !unk_0xE44A580B551C3645(uLocal_90[1]))
								{
									if (unk_0xAD203DB71ADF6E57(uLocal_90[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) && unk_0xAD203DB71ADF6E57(uLocal_90[1], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
									{
										unk_0x2966D41514EAE84B(255, uLocal_99, joaat("player"));
										func_134();
										iLocal_62 = 0;
										while (iLocal_62 <= (iLocal_89 - 1))
										{
											if (unk_0x5660C8AFDD9C1721(uLocal_154[iLocal_62]))
											{
												unk_0xB6FB9702660D84F6(&(uLocal_154[iLocal_62]));
											}
											iLocal_62++;
										}
										if (unk_0x5660C8AFDD9C1721(uLocal_157))
										{
											unk_0xB6FB9702660D84F6(&uLocal_157);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!unk_0x5660C8AFDD9C1721(uLocal_102))
											{
												uLocal_102 = func_130(Local_86, 0);
												unk_0x2025496D9184D312(uLocal_102, 269);
												func_128();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_127();
						func_126();
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_61 = 1;
								unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
								iLocal_170 = unk_0x09560C7DE2A384BD();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_127();
						if (iLocal_345 == 0 || iLocal_345 == 9)
						{
							func_126();
						}
						if ((unk_0x09560C7DE2A384BD() - iLocal_170) > 9000)
						{
							func_113();
						}
						if (iLocal_345 == 9 && ((unk_0x09560C7DE2A384BD() - iLocal_346) > 6000 && (unk_0x09560C7DE2A384BD() - iLocal_346) < 6500))
						{
							func_61(&uLocal_172, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_120(Local_80))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_119())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0xE44A580B551C3645(iLocal_93))
						{
							if ((!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1])) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_93, 0))
							{
								if (unk_0x965556ACF6A83973(uLocal_90[0], Local_80, Global_22, 1, 1, 0) && unk_0x965556ACF6A83973(uLocal_90[1], Local_80, Global_22, 0, 1, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0x5660C8AFDD9C1721(uLocal_101))
						{
							unk_0xB6FB9702660D84F6(&uLocal_101);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_102))
						{
							unk_0xB6FB9702660D84F6(&uLocal_102);
						}
						iLocal_54 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_62 = 0;
			while (iLocal_62 <= (iLocal_89 - 1))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[iLocal_62]))
				{
					unk_0x2C4E82CF88213975(uLocal_90[iLocal_62], 0);
				}
				iLocal_62++;
			}
			if (iLocal_53 == 1)
			{
				if (func_112(1, 0, 1) && iLocal_123 == -1)
				{
					func_6();
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), (10.5f - 5f), 2, 0);
					}
					if (func_2())
					{
						if (unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) == iLocal_93)
						{
							iLocal_123 = 0;
						}
						else
						{
							iLocal_123 = 1;
						}
					}
					else
					{
						iLocal_123 = 2;
					}
				}
				if (iLocal_123 == 0)
				{
					func_111();
				}
				if (iLocal_123 == 1)
				{
					func_110();
				}
				if (iLocal_123 == 2)
				{
					func_109();
				}
				if (bLocal_129)
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					func_30();
				}
			}
			if (iLocal_53 == 2)
			{
				if (func_112(1, 0, 1) && iLocal_123 == -1)
				{
					func_62();
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), (10.5f - 4f), 2, 0);
						unk_0xD3723C36F0F699D6(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						unk_0xD3723C36F0F699D6(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_102(1, 1, 1, 0);
					while (func_4())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (func_2())
					{
						if (unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0) == iLocal_93)
						{
							iLocal_123 = 0;
						}
					}
				}
				if (iLocal_123 == 0)
				{
					func_99();
				}
				else if (iLocal_123 == 1)
				{
					func_98();
				}
				else if (iLocal_123 == 2)
				{
					func_71();
				}
				if (bLocal_129)
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()
{
	switch (iLocal_125)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				unk_0xA7130AF256ED96A1(uLocal_90[0]);
				unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 10000, 2060, 4);
			}
			if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
			{
				unk_0xA7130AF256ED96A1(uLocal_90[0]);
				unk_0x4745F9C50C63A48C(uLocal_90[1], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
			}
			func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_125++;
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					unk_0x047BDE74F5ADA7D9(uLocal_90[0], Local_83, 1f, -1, 1193033728, 1056964608);
					iLocal_124 = unk_0x09560C7DE2A384BD() + 500;
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					unk_0x353F4B963593F141(uLocal_90[1], Local_83, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_73(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_80(5))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
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
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_75(iParam0);
	if (Global_34915 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_76(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_78() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_78() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_77(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_77(int iParam0)
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

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_80(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_78() /*8064*/].f_5756.f_10, iParam0);
}

int func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_22(14) && !func_94(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_93(&Global_2542838))
	{
		if (func_91(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_22(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_2542837 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_72;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_94(int iParam0)
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

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

void func_98()
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				if (unk_0x7C4335B5DC91CCF9(iVar0))
				{
					if (unk_0xECFECDAD51A6184F(iVar0, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							unk_0x937785D9C1929236(uLocal_90[0]);
							unk_0xA7130AF256ED96A1(uLocal_90[0]);
						}
						if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							unk_0x937785D9C1929236(uLocal_90[1]);
							unk_0xA7130AF256ED96A1(uLocal_90[1]);
						}
					}
					func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_98);
				unk_0xBB5AA994E06B28E2(0, 0, 0);
				unk_0x353F4B963593F141(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x963BB7C99350D827(uLocal_98);
				unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
				unk_0x2AF68ED52DC74B7D(&uLocal_98);
				iLocal_124 = unk_0x09560C7DE2A384BD() + 1500;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					unk_0x353F4B963593F141(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x09560C7DE2A384BD() + 1000;
					iLocal_125 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x09560C7DE2A384BD() + 1500;
					iLocal_125 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x09560C7DE2A384BD() + 750;
					iLocal_125 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x353F4B963593F141(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_124 = unk_0x09560C7DE2A384BD() + 3500;
						iLocal_125++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x353F4B963593F141(uLocal_90[0], Local_83, 1f, -1, 0.25f, 0, 1193033728);
						iLocal_124 = unk_0x09560C7DE2A384BD() + 3500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_125++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_99()
{
	unk_0x6C5CE54692FA7CB8();
	switch (iLocal_125)
	{
		case 0:
			unk_0x6853F2DD1CFD3CA2(0);
			unk_0xA0ED52A12ED3E5E5(0);
			if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
			{
				if (unk_0x7C4335B5DC91CCF9(iLocal_93))
				{
					if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
					{
						if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
						{
							unk_0x937785D9C1929236(uLocal_90[0]);
							unk_0xA7130AF256ED96A1(uLocal_90[0]);
							unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 4000, 2060, 4);
						}
						if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
						{
							unk_0x937785D9C1929236(uLocal_90[1]);
							unk_0xA7130AF256ED96A1(uLocal_90[1]);
						}
					}
					StringCopy(&cLocal_142, "", 24);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
			{
				uLocal_127 = unk_0xA47810FFA850D19A(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, 0, 2);
				uLocal_128 = unk_0xA47810FFA850D19A(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, 0, 2);
				unk_0x47FDCDDCBDC99BBB(uLocal_127, "HAND_SHAKE", 0.3f);
				unk_0x47FDCDDCBDC99BBB(uLocal_128, "HAND_SHAKE", 0.3f);
				unk_0x0069D19E3A367524(uLocal_128, uLocal_127, 2500, 0, 0);
				unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
				unk_0x84710FE7666EBF7B(Local_80, 8f, 1, 0, 0, 0);
				unk_0x6C43BF7625967266(iLocal_93, 1120.551f, 2647.307f, 36.9963f, 1, 0, 0, 1);
				unk_0x34639238667C4381(iLocal_93, 179.7675f);
				unk_0xAC894C93914464C2(iLocal_93);
				iLocal_124 = unk_0x09560C7DE2A384BD() + 2500;
				iLocal_125++;
			}
			break;
		
		case 2:
			if (iLocal_124 - 500) < unk_0x09560C7DE2A384BD()
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					if (unk_0x202EF5D8203705EF(uLocal_90[1], 0))
					{
						unk_0x6D98AA46076A68BE(&uLocal_98);
						unk_0x353F4B963593F141(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
						unk_0x963BB7C99350D827(uLocal_98);
						unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
						unk_0x2AF68ED52DC74B7D(&uLocal_98);
						unk_0x2686393074E14730(uLocal_90[1], 1);
					}
				}
			}
			if (iLocal_124 - 1000) < unk_0x09560C7DE2A384BD()
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					if (unk_0x202EF5D8203705EF(uLocal_90[0], 0))
					{
						unk_0x6D98AA46076A68BE(&uLocal_98);
						unk_0x353F4B963593F141(0, Local_83 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 1193033728);
						unk_0x963BB7C99350D827(uLocal_98);
						unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
						unk_0x2AF68ED52DC74B7D(&uLocal_98);
						unk_0x2686393074E14730(uLocal_90[0], 1);
					}
				}
			}
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				unk_0x73448A1FA24E23FE(uLocal_127, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				unk_0x73448A1FA24E23FE(uLocal_128, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				unk_0x0069D19E3A367524(uLocal_128, uLocal_127, 5000, 0, 0);
				unk_0x099E9F2D6F93D420();
				iLocal_124 = unk_0x09560C7DE2A384BD() + 6000;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				unk_0x73448A1FA24E23FE(uLocal_127, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0x73448A1FA24E23FE(uLocal_128, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0x0069D19E3A367524(uLocal_128, uLocal_127, 1500, 1, 1);
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					unk_0x6C43BF7625967266(uLocal_90[0], 1141.156f, 2643.205f, 37.1487f, 1, 0, 0, 1);
					unk_0x34639238667C4381(uLocal_90[0], 262.7369f);
					unk_0x6C43BF7625967266(uLocal_90[1], 1140.152f, 2644.149f, 37.1487f, 1, 0, 0, 1);
					unk_0x34639238667C4381(uLocal_90[1], 262.1522f);
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0xBB5AA994E06B28E2(unk_0xA16EC202D9D35357(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_124 = unk_0x09560C7DE2A384BD() + 1700;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_124 = unk_0x09560C7DE2A384BD() + 5500;
						iLocal_125++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_124 = unk_0x09560C7DE2A384BD() + 5500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			unk_0x099E9F2D6F93D420();
			unk_0xDA5CC7AD43BE6649(unk_0xA16EC202D9D35357(), 0);
			func_102(0, 1, 1, 0);
			unk_0x51A89CCC8A5317D0(&(uLocal_90[0]));
			unk_0x51A89CCC8A5317D0(&(uLocal_90[1]));
			if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
			{
				unk_0x542B8BF5C21F2470(iLocal_93, 7);
			}
			if (iLocal_130)
			{
				if (!unk_0xE44A580B551C3645(iLocal_93))
				{
					unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
					unk_0xA5CC79C83111E834(iLocal_93, 1);
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				unk_0x4A34D7E241347461(0, 0, 3, 0);
			}
			unk_0xC8CEF95C63B283EC(uLocal_127, 0);
			unk_0x20D6E0EA145DF751(0);
			unk_0x60365B850FB7354F(-7f, 1065353216);
			unk_0x6853F2DD1CFD3CA2(1);
			unk_0xA0ED52A12ED3E5E5(1);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_129 = true;
	}
	if (iLocal_125 != 0)
	{
		if (func_100(1000))
		{
			func_62();
			iLocal_130 = 1;
			iLocal_125 = 7;
		}
	}
}

int func_100(int iParam0)
{
	if (unk_0x83B393DE31BAC8F0())
	{
		if ((unk_0x09560C7DE2A384BD() - Global_28) > iParam0)
		{
			Global_27 = unk_0x09560C7DE2A384BD();
		}
		Global_28 = unk_0x09560C7DE2A384BD();
		if ((unk_0x09560C7DE2A384BD() - Global_27) > iParam0)
		{
			if (func_101())
			{
				Global_27 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
	}
	return 0;
}

int func_101()
{
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (unk_0x1453F50088A91E4E(0, 18) || unk_0x1453F50088A91E4E(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_102(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_108(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_14())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_107(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_108(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_107(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_103(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_103(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_104()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_105(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_106(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_106(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_107(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_108(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_109()
{
	switch (iLocal_125)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					unk_0xA7130AF256ED96A1(uLocal_90[0]);
					unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 10000, 2060, 4);
				}
				if (bLocal_107)
				{
					func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_125++;
			}
			break;
		
		case 1:
			iLocal_124 = unk_0x09560C7DE2A384BD() + 3000;
			iLocal_125++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_98);
				unk_0xBB5AA994E06B28E2(0, 0, 0);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 1800);
				unk_0x353F4B963593F141(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5B5659C49032B96C(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_98);
				unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
				unk_0x2AF68ED52DC74B7D(&uLocal_98);
				unk_0x2686393074E14730(uLocal_90[0], 1);
				iLocal_124 = unk_0x09560C7DE2A384BD() + 2000;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_110()
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				if (unk_0x7C4335B5DC91CCF9(iVar0) && !func_4())
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						unk_0x937785D9C1929236(uLocal_90[0]);
						unk_0xA7130AF256ED96A1(uLocal_90[0]);
						unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
						unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			iLocal_125++;
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_98);
				unk_0xBB5AA994E06B28E2(0, 0, 4194304);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 1800);
				unk_0x353F4B963593F141(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5B5659C49032B96C(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_98);
				unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
				unk_0x2AF68ED52DC74B7D(&uLocal_98);
				unk_0x2686393074E14730(uLocal_90[0], 1);
			}
			func_64(uLocal_90[0], 120000, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			iLocal_124 = unk_0x09560C7DE2A384BD() + 3000;
			iLocal_125++;
			break;
		
		case 4:
			iLocal_124 = unk_0x09560C7DE2A384BD() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 5:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				iLocal_125++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_111()
{
	switch (iLocal_125)
	{
		case 0:
			if (unk_0xECFECDAD51A6184F(iLocal_93, 0))
			{
				if (unk_0x7C4335B5DC91CCF9(iLocal_93) && !func_4())
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						unk_0x937785D9C1929236(uLocal_90[0]);
						unk_0xA7130AF256ED96A1(uLocal_90[0]);
						unk_0x4745F9C50C63A48C(uLocal_90[0], unk_0xA16EC202D9D35357(), 10000, 2060, 4);
						unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), uLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_98);
				unk_0xBB5AA994E06B28E2(0, 0, 4194304);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 1800);
				unk_0x353F4B963593F141(0, Local_83, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x5B5659C49032B96C(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_98);
				unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
				unk_0x2AF68ED52DC74B7D(&uLocal_98);
				unk_0x2686393074E14730(uLocal_90[0], 1);
				func_64(uLocal_90[0], 120000, 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				iLocal_124 = unk_0x09560C7DE2A384BD() + 3000;
				iLocal_125++;
			}
			break;
		
		case 3:
			iLocal_124 = unk_0x09560C7DE2A384BD() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x09560C7DE2A384BD())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			iLocal_125++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0x862704CFD32408F9();
		if (iVar1 != 0)
		{
			iVar2 = unk_0x95AD511976EEFC6B(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_118(64) || unk_0xF49761626882E968(0, 86)) || unk_0xF49761626882E968(0, 71)) || unk_0xF49761626882E968(0, 72)) || unk_0xF49761626882E968(0, 76)) || unk_0xF49761626882E968(0, 73)) || unk_0xF49761626882E968(0, 68)) || unk_0xF49761626882E968(0, 75)) || iVar0)
		{
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
		}
	}
	switch (iLocal_345)
	{
		case 0:
			if (func_117())
			{
				unk_0x4745F9C50C63A48C(uLocal_90[0], uLocal_90[1], -1, 2060, 4);
				unk_0x4745F9C50C63A48C(uLocal_90[1], uLocal_90[0], -1, 2060, 4);
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0x6D98AA46076A68BE(&uLocal_98);
					unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x963BB7C99350D827(uLocal_98);
					unk_0x0891776D0327B77A(uLocal_90[0], uLocal_98);
					unk_0x2AF68ED52DC74B7D(&uLocal_98);
					unk_0x6D98AA46076A68BE(&uLocal_98);
					unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x963BB7C99350D827(uLocal_98);
					unk_0x0891776D0327B77A(uLocal_90[1], uLocal_98);
					unk_0x2AF68ED52DC74B7D(&uLocal_98);
					iLocal_346 = unk_0x09560C7DE2A384BD();
					iLocal_345++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_346 = unk_0x09560C7DE2A384BD();
				iLocal_345++;
			}
			break;
		
		case 2:
			if (func_117())
			{
				if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 5000)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_346 = unk_0x09560C7DE2A384BD();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 15000)
			{
				if (func_117())
				{
					unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_345++;
				}
			}
			break;
		
		case 4:
			if (func_117())
			{
				func_115();
				if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
						unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
						iLocal_346 = unk_0x09560C7DE2A384BD();
						iLocal_345++;
					}
				}
			}
			else if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
			{
				unk_0x937785D9C1929236(uLocal_90[0]);
				unk_0x937785D9C1929236(uLocal_90[1]);
				iLocal_345 = 3;
			}
			break;
		
		case 5:
			if (func_117())
			{
				func_115();
				func_114();
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(uLocal_90[1], 0), 0))
				{
					if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0x862704CFD32408F9();
						if (iVar4 != 0)
						{
							iVar5 = unk_0x95AD511976EEFC6B(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0x6D98AA46076A68BE(&uLocal_98);
							unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5B5659C49032B96C(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x963BB7C99350D827(uLocal_98);
							unk_0x0891776D0327B77A(unk_0xA16EC202D9D35357(), uLocal_98);
							unk_0x2AF68ED52DC74B7D(&uLocal_98);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x09560C7DE2A384BD();
								iLocal_345++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x09560C7DE2A384BD();
								iLocal_345++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x09560C7DE2A384BD() + 14000;
								iLocal_345++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_115();
			func_114();
			if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 5000 && func_117())
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(uLocal_90[1], 0), 0))
				{
					if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0x5B5659C49032B96C(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							}
							unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, 0, 0, 0);
							iLocal_345++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_115();
			if (func_117())
			{
				if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0x3899C3FF414D2D90(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						iLocal_346 = unk_0x09560C7DE2A384BD();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 8:
			func_115();
			if (func_117())
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0x6ADAC08D70C79DE5(uLocal_90[1], 0), 0))
				{
					if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, 0, 0, 0);
							iLocal_345 = 6;
						}
					}
				}
			}
			if ((unk_0x09560C7DE2A384BD() - iLocal_346) > 10000)
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
				{
					unk_0x937785D9C1929236(uLocal_90[0]);
					unk_0x937785D9C1929236(uLocal_90[1]);
					iLocal_346 = unk_0x09560C7DE2A384BD();
					iLocal_345++;
				}
			}
			break;
	}
}

void func_114()
{
	if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0), 0))
		{
			if (unk_0x95EDB2DEFA5BB405(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x4CB0BCFFEC712BA2(uLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0x3899C3FF414D2D90(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					unk_0x9AF4B23C594DCEE5(-1, "SUSPENSION_SCRIPT_FORCE", unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0), 0, 0, 0);
				}
			}
		}
	}
}

void func_115()
{
	unk_0xA7CEB400EFD58154();
	func_116();
}

void func_116()
{
	Global_17099.f_134 = 1;
}

int func_117()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
	{
		if (unk_0x202EF5D8203705EF(uLocal_90[1], 0))
		{
			iVar0 = unk_0x6ADAC08D70C79DE5(uLocal_90[1], 0);
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
				{
					if (unk_0xAD203DB71ADF6E57(uLocal_90[0], iVar0, 0))
					{
						if (unk_0xD8A521688BDBE867(iVar0, 2) == uLocal_90[0] && unk_0xD8A521688BDBE867(iVar0, 1) == uLocal_90[1])
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

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x805905ED44A111AA(2, 195) - 128);
	iVar1 = (unk_0x805905ED44A111AA(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (func_17() == 2)
	{
		if (func_59())
		{
			if (unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				if (!Global_24685)
				{
					unk_0x495459882382D113("AC_EN_ROUTE_CULT");
					Global_24685 = 1;
					if (!Global_24684)
					{
						Global_24684 = 1;
						return 1;
					}
				}
			}
			else if (Global_24685)
			{
				unk_0x495459882382D113("AC_LEFT_AREA");
				Global_24685 = 0;
			}
		}
	}
	return 0;
}

int func_120(struct<3> Param0)
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_24683)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0) > (fLocal_46 + 200f) || unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				Global_24683 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_121()
{
	if (!bLocal_107)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_109 && !iLocal_133) && (unk_0x09560C7DE2A384BD() - iLocal_170) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (iLocal_133 && !iLocal_134)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_148 = unk_0x09560C7DE2A384BD() + 6000;
			iLocal_134 = 1;
		}
	}
	if (!bLocal_107)
	{
		if ((iLocal_133 && !iLocal_132) && iLocal_148 < unk_0x09560C7DE2A384BD())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_134 = 0;
					iLocal_132 = 1;
				}
			}
		}
	}
	else if ((bLocal_107 && !iLocal_131) && iLocal_148 < unk_0x09560C7DE2A384BD())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_172, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_134 = 0;
				iLocal_131 = 1;
			}
		}
	}
}

void func_122()
{
	if (func_2() && iLocal_110 < 2)
	{
		if ((unk_0x1A6419610D0B6B3C(unk_0x1788E93557766241()) > 0 && unk_0x1A6419610D0B6B3C(unk_0x1788E93557766241()) < 100) || unk_0xC406F7EDB827A6CF(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_162 += 6;
			}
		}
		func_123(Local_159, (unk_0x09560C7DE2A384BD() - iLocal_158));
	}
	if (iLocal_162 > 17)
	{
		iLocal_108 = 1;
	}
}

void func_123(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			Var0 = { unk_0x7058130F22A40503(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_124(Var3, iParam3) };
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
		{
			if (!unk_0x66679628FFE34E84(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_164 == -1)
				{
					iLocal_164 = unk_0x09560C7DE2A384BD() + 400;
				}
				else if (iLocal_164 < unk_0x09560C7DE2A384BD())
				{
					iLocal_162 += 3;
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_164 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 > 0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 < -0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_124(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_125()
{
	float fVar0;
	
	if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
	{
		switch (iLocal_110)
		{
			case 0:
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
					{
						unk_0x2FC1F6BC6D0D9D77(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					iLocal_110++;
				}
				break;
			
			case 1:
				if (unk_0xC9D9444186B5A374() > 3000 || !func_4())
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						unk_0x937785D9C1929236(uLocal_90[0]);
						unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_110++;
					}
				}
				break;
			
			case 2:
				if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					fVar0 = unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_1", sLocal_113);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_104)
						{
							unk_0x23852E9E7479E321("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_104 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_105)
						{
							unk_0x23852E9E7479E321("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_105 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_106)
						{
							unk_0x23852E9E7479E321("scr_puke_in_car", uLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
							iLocal_106 = 1;
						}
					}
					if (unk_0x4CB0BCFFEC712BA2(uLocal_90[0], "random@drunk_driver_1", sLocal_113) > 0.8f)
					{
						iLocal_110++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
				}
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0, 0, 0, 0);
					iLocal_104 = 0;
					iLocal_110++;
				}
				break;
			
			case 4:
				unk_0x7CB5477E93D6A302(uLocal_111);
				bLocal_107 = true;
				break;
			}
	}
}

void func_126()
{
	if (unk_0x37906EF4D599CEFA(unk_0xA16EC202D9D35357()))
	{
		if (!iLocal_167)
		{
			iLocal_165 = unk_0x09560C7DE2A384BD();
			iLocal_167 = 1;
		}
		else
		{
			iLocal_166 = unk_0x09560C7DE2A384BD();
		}
	}
	else
	{
		iLocal_166 = 0;
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
	if ((iLocal_166 - iLocal_165) > 50000 && !iLocal_168)
	{
		if (iLocal_53 == 1)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_168 = 1;
	}
	if ((iLocal_166 - iLocal_165) > 60000 && iLocal_168)
	{
		if (iLocal_53 == 2)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x2DE0B96E966FD817(uLocal_90[0]) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
		{
			unk_0xAC9F22F89987627B(uLocal_90[0], 1193033728, 0);
			func_64(uLocal_90[0], 120000, 0);
			unk_0x2686393074E14730(uLocal_90[0], 1);
			if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
			{
				unk_0xA7130AF256ED96A1(uLocal_90[0]);
			}
			unk_0x99C7091782A79B14(uLocal_90[1], uLocal_90[0], 0f, 1f, 0f, 1f, -1, 1036831949, 1);
			func_64(uLocal_90[1], 120000, 0);
			unk_0x2686393074E14730(uLocal_90[1], 1);
			if (unk_0x9A132E8DFAE1F524(uLocal_90[1]))
			{
				unk_0xA7130AF256ED96A1(uLocal_90[1]);
			}
		}
		func_60();
	}
}

void func_127()
{
	if (iLocal_53 == 1)
	{
		if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
		{
			if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 150f, 150f, 150f, 0, 1, 0))
			{
				func_60();
			}
			if (func_137() || unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0x9A132E8DFAE1F524(uLocal_90[0]))
				{
					unk_0xE4C80CFABEAEED8F(uLocal_90[0], func_57());
					unk_0x59DFDC536FDF0000(uLocal_90[0], 1);
					unk_0x5129CFBCCCCA8250(uLocal_90[0], 0);
				}
			}
			else if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
			{
				unk_0xA7130AF256ED96A1(uLocal_90[0]);
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if (unk_0xAD203DB71ADF6E57(uLocal_90[0], unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
				{
					if ((!unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3) && !unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_113, 3)) && !unk_0x5E01840EE8DA8D5B(uLocal_90[0]))
					{
						unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0, 0, 0, 0);
					}
					if (func_140())
					{
						func_56(0);
						iLocal_119 = 0;
					}
				}
				else if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
				{
					unk_0x4EB1C96646D39A71(uLocal_90[0], 0, 0);
				}
			}
			else
			{
				if (unk_0x202EF5D8203705EF(uLocal_90[0], 0))
				{
					if (unk_0x95EDB2DEFA5BB405(uLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
					{
						unk_0x4EB1C96646D39A71(uLocal_90[0], 0, 0);
					}
				}
				if (func_4() && !iLocal_119)
				{
					func_56(1);
					iLocal_119 = 1;
				}
			}
			if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 8f, 8f, 8f, 0, 1, 0) || unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_154[0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_154[0]));
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_101))
				{
					uLocal_101 = func_130(Local_80, 1);
				}
			}
			else
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_154[0]))
				{
					uLocal_154[0] = func_155(uLocal_90[0], 0, 145);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_101))
				{
					unk_0xB6FB9702660D84F6(&uLocal_101);
				}
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if ((!unk_0xE44A580B551C3645(iLocal_93) && !unk_0x2DE0B96E966FD817(uLocal_90[0])) && !unk_0x2DE0B96E966FD817(uLocal_90[1]))
		{
			if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 150f, 150f, 150f, 0, 1, 0) || !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[1], 150f, 150f, 150f, 0, 1, 0))
			{
				if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
					{
						if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
						{
							unk_0xA7130AF256ED96A1(uLocal_90[0]);
						}
						unk_0x937785D9C1929236(uLocal_90[0]);
						unk_0xEA36CC2E7750344B(uLocal_90[0], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
						func_64(uLocal_90[0], 120000, 0);
						unk_0x2686393074E14730(uLocal_90[0], 1);
					}
				}
				if (unk_0x538DF9E5B1DF01EB(uLocal_90[1]))
				{
					if (!unk_0x2DE0B96E966FD817(uLocal_90[1]))
					{
						if (unk_0x9A132E8DFAE1F524(uLocal_90[1]))
						{
							unk_0xA7130AF256ED96A1(uLocal_90[1]);
						}
						unk_0x937785D9C1929236(uLocal_90[1]);
						unk_0xEA36CC2E7750344B(uLocal_90[1], unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
						func_64(uLocal_90[1], 120000, 0);
						unk_0x2686393074E14730(uLocal_90[1], 1);
					}
				}
				func_60();
			}
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_93, 0))
			{
				if (unk_0xAD203DB71ADF6E57(uLocal_90[0], iLocal_93, 0) && unk_0xAD203DB71ADF6E57(uLocal_90[1], iLocal_93, 0))
				{
					if (func_140())
					{
						func_56(0);
						iLocal_119 = 0;
					}
					if (!unk_0x5660C8AFDD9C1721(uLocal_101))
					{
						uLocal_101 = func_130(Local_80, 1);
					}
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_157))
				{
					unk_0xB6FB9702660D84F6(&uLocal_157);
				}
			}
			else
			{
				if ((func_4() && !iLocal_119) && iLocal_63 > 3)
				{
					func_56(1);
					iLocal_119 = 1;
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_157))
				{
					uLocal_157 = func_138(iLocal_93, 0, 0);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_101))
				{
					unk_0xB6FB9702660D84F6(&uLocal_101);
				}
			}
		}
	}
}

void func_128()
{
	if (func_17() == 2)
	{
		if (!Global_24682)
		{
			func_129("CULT_BLIP_HELP", -1);
			Global_24682 = 1;
		}
	}
}

void func_129(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

var func_130(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_131(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

float func_131(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_132()
{
	if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (!func_137())
			{
				if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
				{
					unk_0xA7130AF256ED96A1(uLocal_90[0]);
				}
				if (unk_0x221AC1EF116F6053(uLocal_90[0], 1227113341) != 1 && unk_0x221AC1EF116F6053(uLocal_90[0], 1227113341) != 0)
				{
					unk_0xF3B924DCFDECDB4B(uLocal_90[0], unk_0xA16EC202D9D35357(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x202EF5D8203705EF(uLocal_90[0], 0))
				{
					unk_0xBB5AA994E06B28E2(uLocal_90[0], 0, 0);
				}
				if (!iLocal_121)
				{
					if (!func_4())
					{
						func_61(&uLocal_172, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_121 = 1;
					}
				}
			}
			else
			{
				iLocal_121 = 0;
				if (unk_0x221AC1EF116F6053(uLocal_90[0], 1227113341) == 1 && unk_0x221AC1EF116F6053(uLocal_90[0], 1227113341) == 0)
				{
					unk_0x937785D9C1929236(uLocal_90[0]);
				}
			}
		}
		else if (!unk_0x9A132E8DFAE1F524(uLocal_90[0]))
		{
			unk_0xE4C80CFABEAEED8F(uLocal_90[0], func_57());
			unk_0x59DFDC536FDF0000(uLocal_90[0], 1);
			unk_0x5129CFBCCCCA8250(uLocal_90[0], 0);
		}
	}
}

float func_133(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(uParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_134()
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_24680 = 1;
		}
	}
}

void func_135(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iParam0))
			{
				unk_0x6D98AA46076A68BE(&uLocal_98);
				unk_0x574CC08ACCB0F5FC(0);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2060, 4);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
				unk_0x963BB7C99350D827(uLocal_98);
				unk_0x0891776D0327B77A(iParam0, uLocal_98);
				unk_0x2AF68ED52DC74B7D(&uLocal_98);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(iParam0))
			{
				if (unk_0x68E6C2D89A534992(iParam0, unk_0xA16EC202D9D35357(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iParam0))
			{
				if (!unk_0x68E6C2D89A534992(iParam0, unk_0xA16EC202D9D35357(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_136()
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
}

int func_137()
{
	int iVar0;
	
	if (iLocal_53 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_53 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if ((((((!unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()) && !unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357())) && !unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) && !unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) && !unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) && !unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357())) && !unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("rhino")))
			{
				if (unk_0xE3C88401E17BFBB2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()), 0))
		{
			if (((((!unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()))) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_138(int iParam0, bool bParam1, bool bParam2)
{
	return func_139(iParam0, !bParam1, bParam2);
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_131(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_131(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_131(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_140()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_141()
{
	if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
	{
		if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), uLocal_90[0], 30f, 30f, 30f, 0, 1, 0))
		{
			if (!iLocal_114)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
			if (!iLocal_115)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
		}
	}
}

void func_142()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_150))
	{
		unk_0xB6FB9702660D84F6(&uLocal_150);
	}
	iLocal_62 = 0;
	while (iLocal_62 <= (iLocal_89 - 1))
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_154[iLocal_62]))
		{
			uLocal_154[iLocal_62] = func_155(uLocal_90[iLocal_62], 0, 145);
			unk_0xAF9E05E1AFA9F45F(uLocal_154[iLocal_62], 0);
		}
		iLocal_62++;
	}
}

void func_143()
{
	unk_0xC4607267104129C5();
	Global_16685 = 0;
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96495, unk_0x7E5A426328F6E635(), 24);
		Global_96489 = 1;
	}
	else
	{
		StringCopy(&Global_96495, "NULL", 24);
		Global_96489 = 0;
	}
}

int func_145(int iParam0)
{
	if (func_148())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_43(Global_97428))
		{
			func_146(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_43(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_129(func_147(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_129(func_147(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_129(func_147(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

char* func_147(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_148()
{
	switch (func_149(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_149(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_153(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_151(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_150(uParam0, iParam4);
		}
	}
	return 2;
}

void func_150(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_34915);
}

int func_152(int iParam0, int iParam1)
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

int func_153(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 1;
	Global_16690 = 0;
	Global_16688 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

var func_155(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_139(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_156()
{
	if (func_158())
	{
		sLocal_112 = "drunk_idle_van";
		sLocal_113 = "vomit_van";
	}
	else if (func_157())
	{
		sLocal_112 = "drunk_idle_low";
		sLocal_113 = "vomit_low";
	}
	else
	{
		sLocal_112 = "drunk_idle";
		sLocal_113 = "vomit_outside";
	}
}

int func_157()
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uLocal_90[0], 0))
	{
		if (!unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0)))
		{
			iVar0 = unk_0x3AD81FC73A98AE33(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0));
			if (((((((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729) || iVar0 == -1150063973) || iVar0 == 1630950849) || iVar0 == -463340997) || iVar0 == 2033852426)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uLocal_90[0], 0))
	{
		if (!unk_0xE44A580B551C3645(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0)))
		{
			iVar0 = unk_0x3AD81FC73A98AE33(unk_0x6ADAC08D70C79DE5(uLocal_90[0], 0));
			if ((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		iVar0 = unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357());
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			iVar1 = unk_0xD8A521688BDBE867(iVar0, 0);
			if (!unk_0x2DE0B96E966FD817(iVar1))
			{
				if (iVar1 != unk_0xA16EC202D9D35357())
				{
					if (unk_0x22349EC06EA5B08B(iVar1))
					{
						if (!unk_0xFABFAE59805681A2(iVar1, unk_0xA16EC202D9D35357()))
						{
							unk_0x4745F9C50C63A48C(iVar1, unk_0xA16EC202D9D35357(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_160()
{
	if (!iLocal_60)
	{
		func_162(39, 1);
		func_162(40, 1);
		func_162(41, 1);
		func_162(42, 1);
		func_162(43, 1);
		unk_0x84710FE7666EBF7B(Local_67, 8f, 1, 0, 0, 0);
		unk_0x4210B2DCFC2838AC(Local_67 - Vector(8f, 8f, 8f), Local_67 + Vector(8f, 8f, 8f), 0, 1, 1, 1);
		unk_0xC7210908156431E0(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), 0, 1);
		unk_0xC7210908156431E0(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), 0, 1);
		unk_0xD0E2BFCE93AE3ABD(&uLocal_149, 5);
		if (func_17() == 0)
		{
			func_161(&uLocal_172, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_161(&uLocal_172, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_161(&uLocal_172, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
		}
		unk_0x0B29CE7F19BFE6C0("rghDrunkPeds", &uLocal_99);
		iLocal_93 = unk_0x9BB6F54E415071A1(iLocal_97, Local_75, fLocal_78, 1, 1);
		unk_0x684B3872EC4760B0(iLocal_93);
		unk_0xAC894C93914464C2(iLocal_93);
		unk_0x32DC163A33A4AB6D(iLocal_97, 1);
		unk_0x542B8BF5C21F2470(iLocal_93, 3);
		unk_0x5CDB4C8C611F6B1A(iLocal_93, 1);
		iLocal_79 = unk_0x6360D2FA3AD62AD1(iLocal_93);
		uLocal_90[0] = unk_0x6F9DE0DE8363ADF1(26, iLocal_95, Local_67, fLocal_70, 1, 1);
		unk_0x2C4E82CF88213975(uLocal_90[0], 1);
		unk_0xA9465591B42213AE(uLocal_90[0], uLocal_99);
		unk_0xA1478EBA54DDE31B(uLocal_90[0], 185, 1);
		unk_0xDEB0A02F25120B62(uLocal_90[0], 65536, 1);
		unk_0xEA054561294AEC10(iLocal_95);
		unk_0x7DE35612E73BDCD0(uLocal_90[0], 1);
		uLocal_90[1] = unk_0x6F9DE0DE8363ADF1(26, iLocal_96, Local_71, fLocal_74, 1, 1);
		unk_0x2C4E82CF88213975(uLocal_90[1], 1);
		unk_0xA9465591B42213AE(uLocal_90[1], uLocal_99);
		unk_0xA1478EBA54DDE31B(uLocal_90[1], 185, 1);
		unk_0xDEB0A02F25120B62(uLocal_90[1], 65536, 1);
		unk_0x7DE35612E73BDCD0(uLocal_90[1], 1);
		unk_0x2966D41514EAE84B(5, uLocal_99, joaat("player"));
		unk_0xEA054561294AEC10(iLocal_96);
		if (iLocal_53 == 1)
		{
			unk_0x5B5659C49032B96C(uLocal_90[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x5B5659C49032B96C(uLocal_90[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xA956F9A1F0F9C2EC(uLocal_90[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			unk_0xA956F9A1F0F9C2EC(uLocal_90[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			unk_0x42544C0CC4949BD5(uLocal_90[0], 0, 1, 2, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[0], 3, 0, 1, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[0], 4, 0, 1, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 0, 1, 1, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 3, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 4, 0, 1, 0);
			unk_0x2FC1F6BC6D0D9D77(iLocal_93, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[0], 206, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[0], 299, 1);
			unk_0xA8BC819B54F5B824(uLocal_90[0], 0);
			unk_0x3E99D575EE07FDB3(uLocal_90[0], "REDR1Drunk1_AI_Drunk");
			unk_0x3E99D575EE07FDB3(uLocal_90[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_161(&uLocal_172, 3, uLocal_90[0], "REDR1Drunk1", 0, 1);
			func_161(&uLocal_172, 4, uLocal_90[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_53 == 2)
		{
			unk_0x4210B2DCFC2838AC(Local_80 - Vector(10f, 50f, 30f), Local_80 + Vector(10f, 50f, 30f), 0, 1, 1, 1);
			unk_0xE6E4CD7E9A3DA71E(iLocal_93, 1);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 0, 0, 0, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 2, 0, 2, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 3, 1, 1, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 4, 1, 2, 0);
			unk_0x42544C0CC4949BD5(uLocal_90[1], 8, 0, 0, 0);
			unk_0xA1478EBA54DDE31B(uLocal_90[0], 134, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[1], 134, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[0], 26, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[1], 26, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[0], 206, 1);
			unk_0xA1478EBA54DDE31B(uLocal_90[1], 206, 1);
			unk_0xA8BC819B54F5B824(uLocal_90[0], 0);
			unk_0xA8BC819B54F5B824(uLocal_90[1], 0);
			unk_0x1DCF0D2934DBC782(uLocal_90[0], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x4745F9C50C63A48C(uLocal_90[0], uLocal_90[1], -1, 2060, 4);
			unk_0x1DCF0D2934DBC782(uLocal_90[1], "WORLD_HUMAN_BUM_STANDING", 0, 0);
			unk_0x54CA1F435E64266A(uLocal_90[1], 0);
			unk_0x4745F9C50C63A48C(uLocal_90[1], uLocal_90[0], -1, 2060, 4);
			unk_0xA956F9A1F0F9C2EC(uLocal_90[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			unk_0xA956F9A1F0F9C2EC(uLocal_90[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			unk_0x3E99D575EE07FDB3(uLocal_90[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x3E99D575EE07FDB3(uLocal_90[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_161(&uLocal_172, 3, uLocal_90[0], "REDR2DrunkM", 0, 1);
			func_161(&uLocal_172, 4, uLocal_90[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_60 = 1;
	}
}

void func_161(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_169(iParam0, 2, 1))
		{
			func_168(iParam0, 2, 1);
		}
	}
	else if (func_169(iParam0, 2, 1))
	{
		func_163(iParam0, 2, 1);
	}
}

void func_163(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_38() == 0)
		{
			uVar0 = func_166(func_167(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_164(func_167(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_165(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, iParam3);
	}
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_165(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

void func_168(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_38() == 0)
		{
			uVar0 = func_166(func_167(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_164(func_167(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_169(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_38() == 0)
		{
			return unk_0x889D01384B54BCE3(func_166(func_167(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_170()
{
	unk_0x939DA7EBCC6588FF(iLocal_95);
	unk_0x939DA7EBCC6588FF(iLocal_97);
	unk_0x939DA7EBCC6588FF(iLocal_96);
	if (iLocal_53 == 1)
	{
		unk_0xE8C49E8D4B533F7D();
		unk_0x3D28909AF30D70F4("random@drunk_driver_1");
		unk_0x0EF340B9F1496462("MOVE_M@DRUNK@VERYDRUNK");
		unk_0x45B7DFCE888B2A02("Taxi_Vomit", 0);
	}
	else if (iLocal_53 == 2)
	{
		unk_0x3D28909AF30D70F4("random@drunk_driver_2");
		unk_0x3D28909AF30D70F4("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0x3D28909AF30D70F4("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x0EF340B9F1496462("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0x5494F37F35C1D7D7(iLocal_95) && unk_0x5494F37F35C1D7D7(iLocal_97)) && unk_0x159E168B54729167("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0x5494F37F35C1D7D7(iLocal_96))
	{
		if (iLocal_53 == 1)
		{
			if (((unk_0xEA01082BB3EA9C37() && unk_0x6C47E32491756A1A("random@drunk_driver_1")) && unk_0x159E168B54729167("MOVE_M@DRUNK@VERYDRUNK")) && unk_0x45B7DFCE888B2A02("CONSTRUCTION_ACCIDENT_1", 0))
			{
				iLocal_55 = 1;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((unk_0x6C47E32491756A1A("random@drunk_driver_2") && unk_0x6C47E32491756A1A("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0x6C47E32491756A1A("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_55 = 1;
			}
		}
	}
	else
	{
		unk_0x939DA7EBCC6588FF(iLocal_95);
		unk_0x939DA7EBCC6588FF(iLocal_97);
		unk_0x939DA7EBCC6588FF(iLocal_96);
		if (iLocal_53 == 1)
		{
			unk_0xE8C49E8D4B533F7D();
			unk_0x3D28909AF30D70F4("random@drunk_driver_1");
			unk_0x0EF340B9F1496462("MOVE_M@DRUNK@VERYDRUNK");
			unk_0x45B7DFCE888B2A02("Taxi_Vomit", 0);
		}
		else if (iLocal_53 == 2)
		{
			unk_0x3D28909AF30D70F4("random@drunk_driver_2");
			unk_0x3D28909AF30D70F4("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0x3D28909AF30D70F4("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x0EF340B9F1496462("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_171()
{
	if (iLocal_53 == 1)
	{
		Local_151 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_beachvesp_01");
		iLocal_96 = joaat("a_m_y_beachvesp_02");
		Local_67 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_70 = 247.8087f;
		Local_71 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_74 = 66.3861f;
		Local_75 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_78 = 76.9418f;
		iLocal_97 = joaat("baller2");
		Local_80 = { 160.8892f, -111.4167f, 61.2999f };
		Local_83 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_59 = true;
	}
	if (iLocal_53 == 2)
	{
		Local_151 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_genstreet_01");
		iLocal_96 = joaat("a_f_y_hipster_03");
		Local_67 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_70 = 252.0142f;
		Local_71 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_74 = 86.1102f;
		Local_75 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_78 = 299.4672f;
		iLocal_97 = joaat("emperor");
		Local_80 = { 1120.551f, 2647.307f, 36.9963f };
		Local_83 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_59 = true;
	}
}

int func_172()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_179())
	{
		return 1;
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_173(float fParam0, bool bParam1)
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
	fVar34 = fParam0;
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_174(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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

void func_174(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_175(uParam1, "Abigail1", func_177(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 1:
			func_175(uParam1, "Abigail2", func_177(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 2:
			func_175(uParam1, "Barry1", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 3:
			func_175(uParam1, "Barry2", func_177(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 4:
			func_175(uParam1, "Barry3", func_177(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 5:
			func_175(uParam1, "Barry3A", func_177(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 6:
			func_175(uParam1, "Barry3C", func_177(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 7:
			func_175(uParam1, "Barry4", func_177(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_176(iParam0), 0, 0);
			break;
		
		case 8:
			func_175(uParam1, "Dreyfuss1", func_177(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 9:
			func_175(uParam1, "Epsilon1", func_177(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 10:
			func_175(uParam1, "Epsilon2", func_177(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 11:
			func_175(uParam1, "Epsilon3", func_177(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 12:
			func_175(uParam1, "Epsilon4", func_177(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 13:
			func_175(uParam1, "Epsilon5", func_177(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 14:
			func_175(uParam1, "Epsilon6", func_177(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 15:
			func_175(uParam1, "Epsilon7", func_177(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 16:
			func_175(uParam1, "Epsilon8", func_177(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 17:
			func_175(uParam1, "Extreme1", func_177(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 18:
			func_175(uParam1, "Extreme2", func_177(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 19:
			func_175(uParam1, "Extreme3", func_177(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 20:
			func_175(uParam1, "Extreme4", func_177(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 21:
			func_175(uParam1, "Fanatic1", func_177(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 22:
			func_175(uParam1, "Fanatic2", func_177(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_176(iParam0), 1, 0);
			break;
		
		case 23:
			func_175(uParam1, "Fanatic3", func_177(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_176(iParam0), 0, 1);
			break;
		
		case 24:
			func_175(uParam1, "Hao1", func_177(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_176(iParam0), 0, 1);
			break;
		
		case 25:
			func_175(uParam1, "Hunting1", func_177(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 26:
			func_175(uParam1, "Hunting2", func_177(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 27:
			func_175(uParam1, "Josh1", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 28:
			func_175(uParam1, "Josh2", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 29:
			func_175(uParam1, "Josh3", func_177(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 30:
			func_175(uParam1, "Josh4", func_177(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 31:
			func_175(uParam1, "Maude1", func_177(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 32:
			func_175(uParam1, "Minute1", func_177(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 33:
			func_175(uParam1, "Minute2", func_177(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 34:
			func_175(uParam1, "Minute3", func_177(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 35:
			func_175(uParam1, "MrsPhilips1", func_177(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 36:
			func_175(uParam1, "MrsPhilips2", func_177(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 37:
			func_175(uParam1, "Nigel1", func_177(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 38:
			func_175(uParam1, "Nigel1A", func_177(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 39:
			func_175(uParam1, "Nigel1B", func_177(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 40:
			func_175(uParam1, "Nigel1C", func_177(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 41:
			func_175(uParam1, "Nigel1D", func_177(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_176(iParam0), 1, 1);
			break;
		
		case 42:
			func_175(uParam1, "Nigel2", func_177(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 43:
			func_175(uParam1, "Nigel3", func_177(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 1);
			break;
		
		case 44:
			func_175(uParam1, "Omega1", func_177(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 45:
			func_175(uParam1, "Omega2", func_177(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 46:
			func_175(uParam1, "Paparazzo1", func_177(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 47:
			func_175(uParam1, "Paparazzo2", func_177(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 48:
			func_175(uParam1, "Paparazzo3", func_177(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 49:
			func_175(uParam1, "Paparazzo3A", func_177(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 50:
			func_175(uParam1, "Paparazzo3B", func_177(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 51:
			func_175(uParam1, "Paparazzo4", func_177(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 52:
			func_175(uParam1, "Rampage1", func_177(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 54:
			func_175(uParam1, "Rampage3", func_177(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 55:
			func_175(uParam1, "Rampage4", func_177(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 56:
			func_175(uParam1, "Rampage5", func_177(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_176(iParam0), 0, 0);
			break;
		
		case 53:
			func_175(uParam1, "Rampage2", func_177(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_176(iParam0), 1, 0);
			break;
		
		case 57:
			func_175(uParam1, "TheLastOne", func_177(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 58:
			func_175(uParam1, "Tonya1", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 59:
			func_175(uParam1, "Tonya2", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 60:
			func_175(uParam1, "Tonya3", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 61:
			func_175(uParam1, "Tonya4", func_177(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		case 62:
			func_175(uParam1, "Tonya5", func_177(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_176(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_175(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_176(int iParam0)
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

struct<2> func_177(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_178(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_178(int iParam0)
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

int func_179()
{
	if (func_182() && !func_183())
	{
		return 1;
	}
	if (func_181() && func_180())
	{
		return 1;
	}
	return 0;
}

bool func_180()
{
	return Global_97157 > 0;
}

int func_181()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_183()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	if (!func_151(5))
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_183())
		{
			return 0;
		}
	}
	if (func_173(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if ((Global_97428 == func_52() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_188(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_187();
}

void func_187()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_188(int iParam0)
{
	Global_97428 = iParam0;
}

int func_189(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_183())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_179())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_173(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_227(func_17()) == 4 || func_227(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_226(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_224())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_215(4))
		{
			return 0;
		}
		if (!func_151(5))
		{
			return 0;
		}
		if (func_214(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_214(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_228(30) && !func_214(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_213(iVar8))
				{
					if (func_191(iVar4))
					{
						if (!func_190(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_17() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_190(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_192(iVar0);
}

int func_192(int iParam0)
{
	return func_193(iParam0, 1);
}

int func_193(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_213(iParam0))
	{
		return 0;
	}
	func_194(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_195(func_206(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_195(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_205(iParam0, iParam1))
	{
		iVar0 = func_204(iParam1);
		iVar1 = func_202(iParam0);
		iVar2 = (func_202(iParam0) - func_202(iParam1));
		iVar3 = (func_204(iParam0) - func_204(iParam1));
		iVar4 = (func_201(iParam0) - func_201(iParam1));
		iVar5 = (func_200(iParam0) - func_200(iParam1));
		iVar6 = (func_199(iParam0) - func_199(iParam1));
		iVar7 = (func_198(iParam0) - func_198(iParam1));
	}
	else
	{
		iVar0 = func_204(iParam0);
		iVar1 = func_202(iParam1);
		iVar2 = (func_202(iParam1) - func_202(iParam0));
		iVar3 = (func_204(iParam1) - func_204(iParam0));
		iVar4 = (func_201(iParam1) - func_201(iParam0));
		iVar5 = (func_200(iParam1) - func_200(iParam0));
		iVar6 = (func_199(iParam1) - func_199(iParam0));
		iVar7 = (func_198(iParam1) - func_198(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_197(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_196(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_196(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_197(int iParam0, int iParam1)
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

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_201(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_202(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_203(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_203(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_204(int iParam0)
{
	return iParam0 & 15;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_213(iParam1) || !func_213(iParam0))
	{
		return 1;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	var uVar0;
	
	func_212(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_211(&uVar0, unk_0x26ADBF0B08315387());
	func_210(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_209(&uVar0, unk_0xA3730885141EEA96());
	func_208(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_207(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_207(var uParam0, int iParam1)
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

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(*uParam0);
	iVar1 = func_202(*uParam0);
	if (iParam1 < 1 || iParam1 > func_197(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_199(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_200(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_202(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_204(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_201(iParam0);
	if (iVar5 < 1 || iVar5 > func_197(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_214(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_223()) || Global_96486) || Global_24448) || func_222()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_223()) || Global_24448) || func_222()) || func_24(8, -1)) || func_219()) || func_221()) || func_220()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_223()) || Global_96486) || Global_24448) || func_222()) || func_24(8, -1)) || func_219()) || func_221()) || func_220()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_223()) || Global_96486) || Global_24448) || func_222()) || func_24(8, -1)) || func_221()) || func_220()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_223() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_24(8, -1)) || func_218()) || func_217()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_221()) || func_220()) || func_217()) || func_216())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_223()) || Global_24448) || func_222()) || func_24(8, -1)) || func_220()) || func_219()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_223()) || func_220()) || Global_96486) || Global_24448) || func_222()) || Global_35965) || func_24(8, -1)) || func_219()) || func_217()) || func_218()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_223()) || Global_96486) || Global_24448) || func_222()) || func_24(8, -1)) || func_219()) || func_217()) || func_221()) || func_220()) || func_218())
						{
							return 0;
						}
						break;
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
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_216()
{
	return Global_90081.f_1;
}

int func_217()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_218()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_220()
{
	return Global_90094.f_291 > 0;
}

bool func_221()
{
	return Global_90094.f_290 > 0;
}

var func_222()
{
	return Global_1315891;
}

int func_223()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_224()
{
	func_16();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_205(func_206(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_227(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_229()
{
	int iVar0;
	
	if (Global_24596)
	{
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_230()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_231()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if ((unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
		}
	}
	if (iLocal_171)
	{
		func_264(0);
		if (Global_24684)
		{
			unk_0x495459882382D113("AC_STOP");
		}
		func_263();
		func_6();
		unk_0xC5E786A6909B7B4C(0);
		unk_0x8C4265EEC0D6FD1A();
		unk_0xC7210908156431E0(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), 1, 1);
		unk_0xC7210908156431E0(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), 1, 1);
		func_144(0);
		if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (!unk_0x22349EC06EA5B08B(unk_0xB49BA83A5C224F40()))
			{
				unk_0x7B9576B4E099FB1F(unk_0xB49BA83A5C224F40(), 1, 0);
			}
		}
		if (!unk_0xE44A580B551C3645(iLocal_94))
		{
			if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_94, 0) && func_133(unk_0xA16EC202D9D35357(), iLocal_94, 1) > 50f)
			{
				func_243(iLocal_94, 0, 145);
			}
		}
		if (unk_0x538DF9E5B1DF01EB(uLocal_90[0]))
		{
			if (!unk_0x2DE0B96E966FD817(uLocal_90[0]))
			{
				unk_0xA1478EBA54DDE31B(uLocal_90[0], 317, 1);
				if (!unk_0x202EF5D8203705EF(uLocal_90[0], 0))
				{
					unk_0x6336B4069B9B25B4(uLocal_90[0]);
				}
				if (unk_0x9A132E8DFAE1F524(uLocal_90[0]))
				{
					unk_0xA7130AF256ED96A1(uLocal_90[0]);
				}
			}
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (unk_0x538DF9E5B1DF01EB(uLocal_90[iLocal_62]))
			{
				if (!unk_0x2DE0B96E966FD817(uLocal_90[iLocal_62]))
				{
					unk_0xA1478EBA54DDE31B(uLocal_90[iLocal_62], 317, 1);
					if (!unk_0x202EF5D8203705EF(uLocal_90[iLocal_62], 0))
					{
						unk_0x6336B4069B9B25B4(uLocal_90[iLocal_62]);
					}
					unk_0xA8BC819B54F5B824(uLocal_90[iLocal_62], 1);
					unk_0x2966D41514EAE84B(255, uLocal_99, joaat("player"));
					unk_0x2C4E82CF88213975(uLocal_90[iLocal_62], 0);
				}
				unk_0x6B3DDEE91652BE59(&(uLocal_90[iLocal_62]));
			}
			iLocal_62++;
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_154[iLocal_62]))
			{
				unk_0xB6FB9702660D84F6(&(uLocal_154[iLocal_62]));
			}
			iLocal_62++;
		}
		if (iLocal_53 == 1)
		{
			unk_0x46A747493835E815(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (unk_0xBAB691F99A2A7346(uLocal_126))
		{
			if (unk_0x3C20CCC55C33AC27(uLocal_126))
			{
				unk_0xC8CEF95C63B283EC(uLocal_126, 0);
			}
		}
	}
	func_232(-1);
	unk_0x82706E6C897B0FA1();
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_185())
	{
		func_236(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_97428, 1), 64);
		if (func_51(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_233(&Global_24505);
	Global_97429 = 0;
	func_188(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

char* func_234(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_235(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_206();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_204(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_202(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_204(*uParam0);
	iVar2 = func_201(*uParam0);
	iVar3 = func_200(*uParam0);
	iVar4 = func_199(*uParam0);
	iVar5 = func_198(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_197(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_197(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_212(uParam0, iParam1);
	func_211(uParam0, iParam2);
	func_210(uParam0, iParam3);
	func_209(uParam0, iParam4);
	func_208(uParam0, iParam5);
	func_207(uParam0, iParam6);
}

int func_242(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xFD03B2968C4DD469(iParam0, &uVar0);
		if (!unk_0x06771AF7795B3ECF(uVar1))
		{
			if (unk_0xB793F1A0B6CC4AE1(uVar1) == unk_0xB793F1A0B6CC4AE1("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_244(iParam0, iParam2);
	return 1;
}

void func_244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_249(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
		if (!unk_0x538DF9E5B1DF01EB(iVar0))
		{
			iVar0 = unk_0x728F548A96B6E588(iParam0, -1);
		}
		if (unk_0x538DF9E5B1DF01EB(iVar0) && !unk_0x2DE0B96E966FD817(iVar0))
		{
			if (unk_0xA609E58449080951(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA609E58449080951(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97439.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97439.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97439.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xA609E58449080951(iParam0) == Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x9BA82E09A986BA4B(unk_0xC2E0CBF2F000307B(iParam0), &(Global_97439.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97439.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97439.f_18371.f_4798 = iParam1;
	Global_68123 = iParam0;
	Global_97439.f_18371.f_4796 = 1;
	func_245(iParam0, &(Global_97439.f_18371.f_4742));
}

void func_245(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		func_248(uParam1);
		uParam1->f_42 = unk_0xA609E58449080951(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2E0CBF2F000307B(iParam0), 16);
		*uParam1 = unk_0x6E1ADA6FBEC091EA(iParam0);
		unk_0xABDA00D6C410A603(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xACCED888DA80AA1F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x27BCAE1F10710BEC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x4EC2A3086F931215(iParam0);
		uParam1->f_43 = unk_0x960D1BE7E376200B(iParam0);
		uParam1->f_45 = unk_0xD9197C47F38990D8(iParam0);
		uParam1->f_46 = unk_0x5812ABBDAA06BE4A(iParam0);
		unk_0x59A2942E7145EFA4(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xB49AB41D753BA09F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x5792E99920C570FD(iParam0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 28);
		}
		if (unk_0x5792E99920C570FD(iParam0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 29);
		}
		if (unk_0x5792E99920C570FD(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 30);
		}
		if (unk_0x5792E99920C570FD(iParam0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xE19742BCB95B6E28(iParam0, 0))
		{
			uParam1->f_44 = unk_0xBE52DF6606B79B2D(iParam0);
		}
		if (unk_0xEE41D6C2DA208994(uParam1->f_42))
		{
			if (unk_0xC9F64E53159B529B(iParam0))
			{
				switch (unk_0xFA2BD89016FF31B2(iParam0))
				{
					case 2:
					case 0:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 23);
						unk_0x29DB79DD4D939B38(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x9610401E9E4D05A2(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 9);
		}
		if (unk_0xA83FD3D7530A5908(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 10);
		}
		if (unk_0x7CFBF44D83E4C08F(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 13);
			unk_0x37565B4952524D39(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x61BB59E7B67E3575(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 12);
		}
		func_247(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5624226E4F913C53(iParam0, iVar0 + 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), func_246(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8A627BCE7B3FB070(iParam0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 11);
		}
		if (unk_0x53D28141CF743B83(iParam0, "IgnoredByQuickSave") && unk_0x258D2FF40E1E3219(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(uParam1->f_53), 27);
		}
	}
}

int func_246(int iParam0)
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

int func_247(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECFECDAD51A6184F(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x1496C675F4DE04ED(*iParam0) == 0)
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
			if (unk_0xA71DB4975987C018(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x9602B91EC545B1EA(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x362B5E7A7FB4996C(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_248(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_249(int iParam0)
{
	if ((((((((((!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0)) || func_261(iParam0, 0, 0)) || func_261(iParam0, 1, 0)) || func_261(iParam0, 2, 0)) || func_260(iParam0) != 145) || func_259(iParam0)) || func_258(iParam0)) || func_257(iParam0)) || func_256(iParam0)) || !func_250(unk_0xA609E58449080951(iParam0)))
	{
		if (func_258(iParam0))
		{
		}
		if (func_258(iParam0))
		{
		}
		if (func_261(iParam0, 0, 0))
		{
		}
		if (func_261(iParam0, 1, 0))
		{
		}
		if (func_261(iParam0, 2, 0))
		{
		}
		if (func_260(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (((unk_0xD18BE100522E5F15(iParam0) || unk_0xEE41D6C2DA208994(iParam0)) || unk_0x38B61EB14C5FBA9E(iParam0)) || unk_0xEEE07492AE30B7BC(iParam0))
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

int func_251(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD3B644BC9C4BCCE4(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("buffalo3") && !unk_0x1DAD7CE53BEE7710())) || (iParam0 == joaat("gauntlet2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1DAD7CE53BEE7710())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_230())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x1D6BD62DDF942BDF())
		{
			if (unk_0x12A9DA9E48BF64B0(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA90142E282A42D80(Var1.f_0))
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
		if ((((!func_255() && !func_254()) && !func_253()) && !func_252()) && !func_230())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9F979F481F18EB48() || unk_0xF6BAF9F0C2863FFE()) || unk_0x660675ADB09E441F())
		{
		}
		else if (!func_253())
		{
			return 0;
		}
	}
	return 1;
}

int func_252()
{
	return 0;
}

int func_253()
{
	return 1;
}

int func_254()
{
	return 1;
}

int func_255()
{
	if (unk_0xD5883629B43B6F20(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	uVar1 = unk_0xC2E0CBF2F000307B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9BA82E09A986BA4B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_251(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87808[iVar0]))
		{
			if (Global_87808[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]) && unk_0xECFECDAD51A6184F(Global_87778[iVar0], 0))
			{
				if (Global_87778[iVar0] == iParam0 && unk_0xA609E58449080951(Global_87778[iVar0]) == unk_0xA609E58449080951(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[24]))
	{
		if (iParam0 == Global_67218.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_67218.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67218.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 145;
	}
	if (!unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x538DF9E5B1DF01EB(Global_87778[iVar0]))
		{
			if (Global_87778[iVar0] == iParam0)
			{
				return Global_87788[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_261(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x538DF9E5B1DF01EB(iParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_262(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_262(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_263()
{
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

void func_264(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_162(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_265()
{
	float fVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_338, 1);
		iLocal_337 = 1;
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_341, 1) < fVar0)
		{
			fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_341, 1);
			iLocal_337 = 2;
		}
		if (iLocal_337 == 1)
		{
			iLocal_344 = 1;
			iLocal_53 = 1;
			return Local_338;
		}
		if (iLocal_337 == 2)
		{
			iLocal_344 = 2;
			iLocal_53 = 2;
			return Local_341;
		}
	}
	return 0f, 0f, 0f;
}

