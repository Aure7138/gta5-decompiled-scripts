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
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[4] = { 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_111 = 0f;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 16;
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
	int iLocal_300 = 0;
	char* sLocal_301 = NULL;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
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
	fLocal_42 = 20f;
	iLocal_116 = 1;
	iLocal_307 = 6000;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_54))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_54);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_56))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_56))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_56);
			}
		}
		func_176();
	}
	if (func_175(283, 1))
	{
		unk_0x5E8B6D17FF91CD59();
	}
	if (func_146(Local_51, -1, 0, 0, 0))
	{
		if ((unk_0xC82CF208C2B19199() > 2 && unk_0xC82CF208C2B19199() < 15) && !unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
		{
		}
		else
		{
			unk_0x5E8B6D17FF91CD59();
		}
		func_143(-1);
	}
	else
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x4F4FF2F3B81506A7() || bLocal_115)
		{
			if (!func_142())
			{
				if (func_141())
				{
					func_176();
				}
			}
			unk_0xCBBDAEEE9AB391E3("RE_SDRM", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_129())
					{
						func_176();
					}
					if (iLocal_49)
					{
						iLocal_50 = 1;
						iLocal_47 = 1;
					}
					else
					{
						func_120();
					}
					break;
				
				case 1:
					func_119();
					if (!iLocal_113)
					{
						func_118();
						func_115();
						func_104();
						if (!unk_0x0ACACDD53B4C4879(uLocal_317))
						{
							func_103();
						}
					}
					else
					{
						func_100();
						if (!bLocal_123)
						{
							func_98();
						}
						func_90();
						func_88();
						func_72();
						func_71(iLocal_54, 0);
						if (!bLocal_120)
						{
						}
						if (iLocal_48 == 0 && !bLocal_117)
						{
							func_67();
							func_65();
						}
						else
						{
							func_60();
						}
						if (iLocal_48 == 3)
						{
							if (unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_86, 1) < 100f)
							{
								if (!unk_0x352A58A9B0D09D38())
								{
									unk_0x4C8884536FD957FF("sdrm_mcs_2", 8);
								}
								if (unk_0x352A58A9B0D09D38())
								{
									if (unk_0xDFFF94D10F804A54())
									{
										if ((((!unk_0x6CFF81397164A1D3(iLocal_54) && !unk_0x6CFF81397164A1D3(iLocal_56)) && !unk_0x6CFF81397164A1D3(iLocal_55)) && !unk_0x6CFF81397164A1D3(iLocal_57)) && !unk_0x7D5B1F88E7504BBA(iLocal_131))
										{
											unk_0xEE745E4C82BF2686("Groom", iLocal_54, 0);
											unk_0xEE745E4C82BF2686("Groomsman", iLocal_56, 0);
											unk_0xEE745E4C82BF2686("Bride", iLocal_55, 0);
											unk_0xEE745E4C82BF2686("Father_of_the_bride", iLocal_57, 0);
										}
									}
								}
							}
							else if (unk_0x352A58A9B0D09D38())
							{
								unk_0x375387B5BA5B6056();
							}
							if (bLocal_117)
							{
								if (func_59(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0x6CFF81397164A1D3(iLocal_56))
							{
								if (unk_0x52BE10F427339B39(iLocal_56, 0))
								{
									if (unk_0xCD82FA174080B3B1(uLocal_321))
									{
										unk_0xF2C3C9DA47AAA54A(&uLocal_321);
										if (unk_0xCD82FA174080B3B1(uLocal_319))
										{
											unk_0xF2C3C9DA47AAA54A(&uLocal_319);
										}
										if (!unk_0xCD82FA174080B3B1(uLocal_319))
										{
											uLocal_319 = func_23(Local_66, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_54))
							{
								unk_0x06C6AD4F38E8412D(iLocal_54, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_56))
							{
								unk_0x06C6AD4F38E8412D(iLocal_56, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_55))
							{
								unk_0x06C6AD4F38E8412D(iLocal_55, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_57))
							{
								unk_0x06C6AD4F38E8412D(iLocal_57, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_176();
}

int func_3()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_54))
		{
			return 1;
		}
		else
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_54, unk_0x096275889B8E0EE0(), 1) || unk_0xDDE5C125AC446723(iLocal_54))
			{
				return 1;
			}
			if (bLocal_115)
			{
				if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
	{
		if ((!unk_0xB86D29B10F627379(iLocal_58, 0) || unk_0x0B5ED6D985803CD6(iLocal_58)) || unk_0xDDE5C125AC446723(iLocal_58))
		{
			func_21();
			if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck")) || unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck2")))
			{
				if (unk_0x8877F18530736362(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), iLocal_58))
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_21();
		if (func_4(&uLocal_135, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (!unk_0xC057F02B837A27F6(iLocal_54, unk_0x096275889B8E0EE0(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0))
				{
					unk_0x4AC45C1D14A80EF0(unk_0x217E9DC48139933D(), 1, 0);
					unk_0x42EDA93195813577(unk_0x217E9DC48139933D(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_48 >= 1)
	{
		if (bLocal_122)
		{
			if (unk_0x6CFF81397164A1D3(iLocal_56))
			{
				func_21();
				return 1;
			}
			else if (unk_0x7B6E7BEC1143AC86(iLocal_56, unk_0x096275889B8E0EE0(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
		{
			if (!unk_0xC057F02B837A27F6(iLocal_58, unk_0x096275889B8E0EE0(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_125)
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_125 = 1;
					}
				}
			}
			else
			{
				iLocal_125 = 0;
			}
			if (!unk_0xC057F02B837A27F6(iLocal_58, unk_0x096275889B8E0EE0(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_48 == 3)
	{
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x6CFF81397164A1D3(iLocal_55) || unk_0x6CFF81397164A1D3(iLocal_57))
			{
				return 1;
			}
			else if (unk_0x7B6E7BEC1143AC86(iLocal_55, unk_0x096275889B8E0EE0(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_57, unk_0x096275889B8E0EE0(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_56))
		{
			if (!unk_0xC057F02B837A27F6(iLocal_56, unk_0x096275889B8E0EE0(), 20f, 20f, 20f, 0, 1, 0) && iLocal_309)
			{
				if (!iLocal_126)
				{
					func_21();
					if (func_4(&uLocal_135, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 0;
			}
			if (!unk_0xC057F02B837A27F6(iLocal_56, unk_0x096275889B8E0EE0(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0x89EEEEF0CEB4D045(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_17();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_6();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_7()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_8()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_11();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_15(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_14(unk_0x096275889B8E0EE0());
			if (func_13(iVar0) && (!func_16(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_19()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_21()
{
	Global_14558 = 0;
	func_22();
}

void func_22()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xAFE7B0E5A6396BD2(Param0);
	unk_0x17D3E31025A05A57(uVar0, func_24(unk_0x03A753E2C8458335(), 1f, 1f));
	unk_0xA1BFA381D71B6D00(uVar0, iParam3);
	return uVar0;
}

float func_24(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_25()
{
	switch (iLocal_130)
	{
		case 0:
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_52(1, 1, 1, 0);
			unk_0x2DEF9D1467C740B3(0);
			iLocal_309 = 0;
			iLocal_130++;
			break;
		
		case 1:
			iLocal_130++;
			break;
		
		case 2:
			if ((((!unk_0x6CFF81397164A1D3(iLocal_54) && !unk_0x6CFF81397164A1D3(iLocal_56)) && !unk_0x6CFF81397164A1D3(iLocal_55)) && !unk_0x6CFF81397164A1D3(iLocal_57)) && !unk_0x7D5B1F88E7504BBA(iLocal_131))
			{
				if (func_51())
				{
					unk_0xBFBD2726A7694056(iLocal_131, "SDRM_Car", 0, 0, 0);
					unk_0xBFBD2726A7694056(iLocal_54, "Groom", 0, 0, 0);
					unk_0xBFBD2726A7694056(iLocal_56, "Groomsman", 0, 0, 0);
					unk_0xBFBD2726A7694056(iLocal_55, "Bride", 0, 0, 0);
					unk_0xBFBD2726A7694056(iLocal_57, "Father_of_the_bride", 0, 0, 0);
					unk_0x7E34194D80F81C55(4);
					iLocal_130++;
				}
			}
			break;
		
		case 3:
			if (unk_0xEACB7269A3E8687D(0))
			{
				if (!unk_0x7D5B1F88E7504BBA(iLocal_131))
				{
					unk_0x7263332501E07F52(iLocal_131);
					unk_0xA4FFCD645B11F25A(iLocal_131, 1);
					unk_0xD63FE3AF9FB3D53F(1);
					unk_0x1B3DA717B9AFF828(1);
					unk_0x5D1EB123EAC5D071(0f);
					unk_0xFB760AF4F537B8BF(-7f, 1065353216);
				}
				iLocal_130++;
			}
			break;
		
		case 4:
			unk_0xCC0EF140F99365C5(&iLocal_54);
			unk_0xCC0EF140F99365C5(&iLocal_56);
			unk_0xCC0EF140F99365C5(&iLocal_55);
			unk_0xCC0EF140F99365C5(&iLocal_57);
			func_52(0, 1, 1, 0);
			unk_0x2DEF9D1467C740B3(1);
			func_26();
			break;
	}
}

void func_26()
{
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_30(-1, 0);
	func_27();
	func_176();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_47(iParam0))
	{
		func_46(iParam0, iParam1);
		if (!func_45(51))
		{
			func_41("RE_REWARD", 1, 0, 4000, 10000, func_44(), 0, 138, 0);
			func_40(51);
		}
		if (func_39(iParam0))
		{
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_31(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_31(7);
			}
			else
			{
				func_31(1);
			}
		}
	}
}

void func_31(int iParam0)
{
	Global_97339 = iParam0;
}

void func_32(int iParam0, var uParam1, var uParam2)
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
		func_36((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_33();
	}
}

void func_33()
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_34() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_24444;
}

int func_35(int iParam0, int iParam1)
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312737;
}

int func_38(int iParam0, int iParam1)
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

int func_39(int iParam0)
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

void func_40(int iParam0)
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_97353.f_1729.f_539.f_3213)
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

int func_45(int iParam0)
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
}

int func_47(int iParam0)
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

int func_48()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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

int func_50()
{
	return 1;
}

bool func_51()
{
	bool bVar0;
	
	bVar0 = unk_0x46F500F237D08AC7();
	if (!Global_68244)
	{
		if (!bVar0)
		{
			Global_68244 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_58(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_8())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_57(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_58(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_57(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_53(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_53(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
	{
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_56(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xF4D8BCD052E7EA1B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()))
		{
			return 0;
		}
		iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (bParam0)
		{
			if (unk_0x7D5B1F88E7504BBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7D5B1F88E7504BBA(iVar0))
			{
				if (unk_0xD214895E39AA3787(iVar0, -1) != unk_0x096275889B8E0EE0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(iVar0))
		{
			if (unk_0x56398BE65160C3BE(iVar0) < 0.95f || unk_0x56398BE65160C3BE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()))
	{
		return 0;
	}
	if (!unk_0x2DF170B1185AF777(unk_0x217E9DC48139933D()))
	{
		return 0;
	}
	return 1;
}

void func_60()
{
	if (!unk_0x7D5B1F88E7504BBA(iLocal_58) && !unk_0x7D5B1F88E7504BBA(iLocal_54))
	{
		if (!iLocal_116)
		{
			if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0) && unk_0x9C8E4D238C999648(iLocal_54, iLocal_58, 0))
			{
				iLocal_116 = 1;
				if (unk_0xCD82FA174080B3B1(uLocal_318))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_318);
				}
				if (iLocal_121 && !bLocal_117)
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_319))
					{
						uLocal_319 = func_23(Local_66, 1);
					}
				}
				if (!func_64())
				{
				}
			}
		}
		if (!iLocal_116 && !iLocal_118)
		{
			if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0))
			{
				if (!unk_0x9C8E4D238C999648(iLocal_54, iLocal_58, 0))
				{
					if (!func_64())
					{
					}
					if (unk_0xCD82FA174080B3B1(uLocal_318))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_318);
					}
					if (!unk_0xCD82FA174080B3B1(uLocal_318))
					{
						uLocal_318 = func_63(iLocal_54, 0, 145);
						unk_0x5F3268378F24D97B(uLocal_318, 1);
					}
					iLocal_116 = 0;
					iLocal_118 = 1;
				}
			}
		}
		if (iLocal_116)
		{
			if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xCD82FA174080B3B1(uLocal_318))
				{
					uLocal_318 = func_61(iLocal_58, 0, 0);
					unk_0x5F3268378F24D97B(uLocal_318, 1);
				}
				if (unk_0xCD82FA174080B3B1(uLocal_319))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_319);
				}
				iLocal_116 = 0;
			}
			if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0) && !unk_0x9C8E4D238C999648(iLocal_54, iLocal_58, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xCD82FA174080B3B1(uLocal_318))
				{
					uLocal_318 = func_61(iLocal_58, 0, 0);
					unk_0x5F3268378F24D97B(uLocal_318, 1);
				}
				if (unk_0xCD82FA174080B3B1(uLocal_319))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_319);
				}
				iLocal_116 = 0;
			}
		}
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_62(iParam0, !bParam1, bParam2);
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_24(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_24(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_24(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_54))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			if (unk_0xC057F02B837A27F6(iLocal_54, unk_0x096275889B8E0EE0(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !unk_0x52BE10F427339B39(iLocal_54, 0)) || unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_320))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_320);
						if (!unk_0xCD82FA174080B3B1(uLocal_319))
						{
							uLocal_319 = func_23(Local_66, 1);
						}
					}
				}
				else if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && unk_0x52BE10F427339B39(iLocal_54, 0))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_320))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_320);
						if (!unk_0xCD82FA174080B3B1(uLocal_319))
						{
							uLocal_319 = func_23(Local_66, 1);
						}
					}
				}
				else if (unk_0xCD82FA174080B3B1(uLocal_319))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_319);
					if (!unk_0xCD82FA174080B3B1(uLocal_320))
					{
						uLocal_320 = func_63(iLocal_54, 0, 145);
					}
				}
				if (unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()))
				{
				}
			}
			else if (unk_0xCD82FA174080B3B1(uLocal_319))
			{
				unk_0xF2C3C9DA47AAA54A(&uLocal_319);
				if (!unk_0xCD82FA174080B3B1(uLocal_320))
				{
					uLocal_320 = func_63(iLocal_54, 0, 145);
				}
			}
			if (!unk_0x5D6C6BD519D63337(iLocal_54))
			{
				if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0x0F1ABE64C3C18E5A(iLocal_54);
					unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
					unk_0xA8F442E84EF050FC(iLocal_54, 1);
					unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
				}
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					unk_0x0F1ABE64C3C18E5A(iLocal_54);
					unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
					unk_0xA8F442E84EF050FC(iLocal_54, 1);
					unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
				}
			}
		}
	}
}

var func_66()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

void func_67()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
		{
			if (!func_70())
			{
				if (unk_0x5D6C6BD519D63337(iLocal_54))
				{
					unk_0x5BEB6DE8CD28F036(iLocal_54);
				}
				if (unk_0x04932A97CB319DE0(iLocal_54, 1227113341) != 1 && unk_0x04932A97CB319DE0(iLocal_54, 1227113341) != 0)
				{
					unk_0xF553365A64BDFF94(iLocal_54, unk_0x096275889B8E0EE0(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x52BE10F427339B39(iLocal_54, 0))
				{
					unk_0x36DBE8E570B9FBCE(iLocal_54, 0, 0);
				}
				if (!iLocal_124)
				{
					if (!func_64())
					{
						iLocal_124 = 1;
						if (func_69())
						{
							func_68(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_68(&uLocal_135, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_124 = 0;
				if (((unk_0x04932A97CB319DE0(iLocal_54, 1227113341) == 1 || unk_0x04932A97CB319DE0(iLocal_54, 1227113341) == 0) || unk_0x04932A97CB319DE0(iLocal_54, 242628503) == 1) || unk_0x04932A97CB319DE0(iLocal_54, 242628503) == 0)
				{
					unk_0x0F1ABE64C3C18E5A(iLocal_54);
					if (!unk_0x5D6C6BD519D63337(iLocal_54))
					{
						unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
						unk_0xA8F442E84EF050FC(iLocal_54, 1);
						unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
					}
				}
			}
		}
		else if (((!unk_0x5D6C6BD519D63337(iLocal_54) && !unk_0x52BE10F427339B39(iLocal_54, 0)) && unk_0x04932A97CB319DE0(iLocal_54, 242628503) != 1) && unk_0x04932A97CB319DE0(iLocal_54, 242628503) != 0)
		{
			unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
			unk_0xA8F442E84EF050FC(iLocal_54, 1);
			unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
		}
	}
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_69()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		if (unk_0xB86D29B10F627379(unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0()), 1))
		{
			if ((unk_0x2BA0AE672835A516(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1))) || unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1)))) || unk_0x7E9B1540150314F1(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (unk_0xB86D29B10F627379(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
		{
			if (((((!unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()) && !unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0())) && !unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0())) && !unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0())) && !unk_0x7122F97890EFE68D(unk_0x096275889B8E0EE0())) && !unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("rhino")))
			{
				if (unk_0xA9C55F1C15E62E06(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		if (unk_0xB86D29B10F627379(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()), 0))
		{
			if ((((!unk_0x799CFC7C5B743B15(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0()))) && !unk_0xB9B56D169DBE14C0(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0x6BD83A1CACAF87AD(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && !unk_0xFC08C8F8C1EDF174(unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())))) && unk_0xDA76A9F39210D365(unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()) && unk_0x08B96A437661F1BC(iParam0))
			{
				if (unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0) == unk_0xB3598EA616C3FFC3(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0xFD36BD478980EB87(iParam0, unk_0x096275889B8E0EE0()))
		{
			if (!bVar0)
			{
				unk_0xD4648EA39998A07B(iParam0, unk_0x096275889B8E0EE0(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0xCCE0978B7FBDE2A0(iParam0))
			{
				unk_0x939C1E5F1840360D(iParam0);
			}
		}
	}
}

void func_72()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_54))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_54) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (func_86("stagd_chape_1"))
			{
				if (!unk_0xCD82FA174080B3B1(uLocal_319))
				{
					uLocal_319 = func_23(Local_66, 1);
				}
				iLocal_121 = 1;
			}
			if (func_86("stagd_chape_3"))
			{
				unk_0x939C1E5F1840360D(unk_0x096275889B8E0EE0());
				if (!unk_0x6CFF81397164A1D3(iLocal_54))
				{
					if (unk_0x52BE10F427339B39(iLocal_54, 0))
					{
						unk_0xF4BF3E3D7FE56705(&uLocal_112);
						unk_0x939C1E5F1840360D(0);
						unk_0xB84D71849C3F0862(0, 30600);
						unk_0xFF7E39890B2840DD(uLocal_112);
						unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
						unk_0x5EC7E18324A7D03D(&uLocal_112);
					}
				}
			}
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				if (unk_0x9C8E4D238C999648(iLocal_54, unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0))
				{
					if (iLocal_48 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_129 == 0)
							{
								if (!func_64())
								{
									func_85();
									if (func_4(&uLocal_135, "stagdau", sLocal_301, 4, 0, 0, 0))
									{
										iLocal_309 = 1;
									}
									bLocal_120 = true;
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_129 == 1)
							{
								if (!func_64())
								{
									unk_0xD63FE3AF9FB3D53F(1);
									unk_0x1B3DA717B9AFF828(1);
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_129 == 2)
							{
								if (!func_64())
								{
									func_85();
									if (func_11() == 0)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_11() == 1)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_11() == 2)
									{
										func_4(&uLocal_135, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_129++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
					}
					if (!bLocal_123)
					{
						if (iLocal_48 == 3)
						{
							if (!func_64())
							{
								if (iLocal_129 == 0)
								{
									func_4(&uLocal_135, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_129++;
								}
							}
						}
						if (iLocal_48 == 3)
						{
							if (unk_0xC9D9444186B5A374() > 5000)
							{
								if (iLocal_129 == 0)
								{
									if (!func_64())
									{
										iLocal_129++;
									}
								}
							}
						}
						if (!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_86, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_302 == 0)
							{
								if (iLocal_306 == func_73(func_74()) + 11)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_302 = 1;
									}
								}
							}
							if (iLocal_302 < 2)
							{
								if (iLocal_306 == func_73(func_74()) + 10)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_302 = 2;
									}
								}
							}
							if (iLocal_302 < 3)
							{
								if (iLocal_306 == func_73(func_74()) + 9)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_302 = 3;
									}
								}
							}
							if (iLocal_302 < 4)
							{
								if (iLocal_306 == func_73(func_74()) + 8)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_302 = 4;
									}
								}
							}
							if (iLocal_302 < 5)
							{
								if (iLocal_306 == func_73(func_74()) + 7)
								{
									if (!func_64())
									{
										iLocal_302 = 5;
									}
								}
							}
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										iLocal_302 = 6;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										iLocal_302 = 7;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										iLocal_302 = 8;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 9;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 10;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == func_73(func_74()) + 1)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_302 < 6)
							{
								if (iLocal_306 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 7)
							{
								if (iLocal_306 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 8)
							{
								if (iLocal_306 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 9)
							{
								if (iLocal_306 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 10)
							{
								if (iLocal_306 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
									}
								}
							}
							if (iLocal_302 < 11)
							{
								if (iLocal_306 == func_73(func_74()) + 1)
								{
									if (!func_64())
									{
										func_4(&uLocal_135, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_302++;
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

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_74()
{
	var uVar0;
	
	func_84(&uVar0, unk_0xB6101ABE62B5F080());
	func_83(&uVar0, unk_0x4E162231B823DBBF());
	func_82(&uVar0, unk_0xC82CF208C2B19199());
	func_77(&uVar0, unk_0xDF2FD796C54480A5());
	func_76(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_75(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

void func_75(var uParam0, int iParam1)
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

void func_76(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_81(*uParam0);
	iVar1 = func_79(*uParam0);
	if (iParam1 < 1 || iParam1 > func_78(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_80(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_80(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_81(int iParam0)
{
	return iParam0 & 15;
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_85()
{
	Global_14558 = 0;
	func_19();
}

int func_86(char* sParam0)
{
	var uVar0;
	
	if (func_64())
	{
		MemCopy(&uVar0, {func_87()}, 4);
		if (unk_0xD3852F22AB713A1F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_87()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xEA4E13D1CA640059();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xD42BD6EB2E0F1677(iLocal_54))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_54))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_54))
			{
				if (!iLocal_128 && bLocal_117)
				{
					unk_0x562F5D788AF3FA80(0, 75, 1);
					unk_0x562F5D788AF3FA80(0, 80, 1);
					iVar0 = unk_0xA262E90CFCFB11BC();
					if (iVar0 != 0)
					{
						iVar1 = unk_0xBBCE897E81A3FFBC(iVar0);
						if (iVar1 != 4)
						{
							unk_0x562F5D788AF3FA80(0, 79, 1);
							unk_0x562F5D788AF3FA80(0, 286, 1);
							unk_0x562F5D788AF3FA80(0, 287, 1);
							unk_0x562F5D788AF3FA80(0, 26, 1);
							unk_0x562F5D788AF3FA80(0, 273, 1);
							unk_0x562F5D788AF3FA80(0, 4, 1);
							unk_0x562F5D788AF3FA80(0, 270, 1);
							unk_0x562F5D788AF3FA80(0, 5, 1);
							unk_0x562F5D788AF3FA80(0, 1, 1);
							unk_0x562F5D788AF3FA80(0, 271, 1);
							unk_0x562F5D788AF3FA80(0, 6, 1);
							unk_0x562F5D788AF3FA80(0, 2, 1);
							unk_0x562F5D788AF3FA80(0, 272, 1);
							unk_0x562F5D788AF3FA80(0, 3, 1);
						}
					}
					if (unk_0xD3151E53134595E5(iLocal_54, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_128 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0x0BFC2C61FB5B6CA1(1);
						unk_0xD63FE3AF9FB3D53F(0);
						unk_0x1B3DA717B9AFF828(0);
						unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
						unk_0x07D04AD5EF0CEB94(joaat("superd"), 3);
						while (!unk_0xB935F3154BC913C8(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_133 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_134 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0xF9A7BCF5D050D4E7(uLocal_133, "HAND_SHAKE", 0.25f);
						unk_0xF9A7BCF5D050D4E7(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0x87295BCA613800C8(uLocal_133, 1);
						unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x8B15AE2987C1AC8F(uLocal_134, uLocal_133, 4000, 1, 1);
						unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
						unk_0x894DDE7F2D919046(Local_98, 10f, 0, 0, 0, 0, 0);
						if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
						{
							unk_0x84B81EF78BD22357(unk_0x2F96E7720B0B19EA());
							if (unk_0x5E58342602E94718(unk_0x2F96E7720B0B19EA(), Local_98, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_132 = unk_0x2F96E7720B0B19EA();
								unk_0xDC19C288082E586E(iLocal_132, 1, 0);
								unk_0xE20A909D8C4A70F8(&iLocal_132);
							}
						}
						if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
						{
							unk_0x96F78A6A075D55D9(iLocal_58, 1);
							if (!unk_0xCD82FA174080B3B1(uLocal_318))
							{
								uLocal_318 = func_61(iLocal_58, 0, 0);
								unk_0x5F3268378F24D97B(uLocal_318, true);
							}
						}
						iLocal_116 = 0;
					}
				}
				if (iLocal_128 && unk_0x153AD457764FD704(uLocal_133))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_316)
					{
						if ((unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()) && unk_0x420537F38720164C() == 4) || (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && unk_0x219A3D86C716B089() == 4))
						{
							unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
							unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_316 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
						{
							unk_0x36DBE8E570B9FBCE(unk_0x096275889B8E0EE0(), 0, 0);
						}
						unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
						unk_0xD63FE3AF9FB3D53F(1);
						unk_0x1B3DA717B9AFF828(1);
						func_52(0, 1, 1, 0);
						unk_0x87295BCA613800C8(uLocal_133, 0);
						unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
						unk_0x4E67E0B6D7FD5145(uLocal_133, 0);
						unk_0x1BCEC33D54CFCA8A(0);
					}
				}
				if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x894DDE7F2D919046(Local_86, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_122)
			{
				if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_102, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xFA28FE3A6246FC30(joaat("ig_bestmen"));
					if (unk_0x1283B8B89DD5D1B6(joaat("ig_bestmen")))
					{
						iLocal_56 = unk_0x9066DFD4D92E6773(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_89(&uLocal_135, 4, iLocal_56, "BESTMAN", 0, 1);
						unk_0x584EEBEECD248926(iLocal_56, 0, 0, 0, 0);
						unk_0x6ECBACF91786FB7A(iLocal_56, joaat("player"));
						unk_0x49876BF356F39E66(iLocal_56, 1);
						unk_0x020E173F318C12DA(iLocal_56, 185, 1);
						unk_0xF4BF3E3D7FE56705(&uLocal_112);
						unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), -1);
						unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
						unk_0xFF7E39890B2840DD(uLocal_112);
						unk_0xD59C10966EB589EA(iLocal_56, uLocal_112);
						unk_0x5EC7E18324A7D03D(&uLocal_112);
						bLocal_122 = true;
					}
				}
			}
			if (!bLocal_123)
			{
				if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_76, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_64())
					{
						func_4(&uLocal_135, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_123 = true;
					}
				}
			}
			if (((unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_69, Local_72, fLocal_75, 0, 1, 0) && unk_0xD3151E53134595E5(iLocal_54, Local_69, Local_72, fLocal_75, 0, 1, 0)) || (unk_0x5E58342602E94718(iLocal_54, Local_66, 0f, 0f, 2f, 1, 1, 0) && func_59(1, 0, 1))) || bLocal_117)
			{
				switch (iLocal_48)
				{
					case 0:
						unk_0xF2C3C9DA47AAA54A(&uLocal_319);
						if (!bLocal_117)
						{
							Local_66 = { Local_102 };
							if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
							{
								if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
								{
									unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 4, 0);
								}
							}
							if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
							{
								iVar2 = unk_0xA262E90CFCFB11BC();
								if (iVar2 != 0)
								{
									iVar3 = unk_0xBBCE897E81A3FFBC(iVar2);
									if (iVar3 == 4)
									{
										unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_54, 5000, 0, 2);
									}
									else
									{
										unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_58, 5000, 2052, 4);
										unk_0xE2B2BB7DAC280515(iLocal_58, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_64())
							{
								func_4(&uLocal_135, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0x6CFF81397164A1D3(iLocal_54))
								{
									unk_0x0F1ABE64C3C18E5A(iLocal_54);
									unk_0xF4BF3E3D7FE56705(&uLocal_112);
									unk_0x14A4402A811D03C0(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x14A4402A811D03C0(0, Local_98, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), -1);
									unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2048, 2);
									unk_0xFF7E39890B2840DD(uLocal_112);
									unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
									unk_0x5EC7E18324A7D03D(&uLocal_112);
									unk_0x2AD4789CBFD829EC(iLocal_54, 1);
								}
								bLocal_117 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0x6CFF81397164A1D3(iLocal_54) && !unk_0x7D5B1F88E7504BBA(iLocal_58))
						{
							if ((bLocal_117 && unk_0x5E58342602E94718(iLocal_54, Local_98, 1f, 1f, 1f, 0, 1, 0)) && !unk_0x52BE10F427339B39(iLocal_54, 0))
							{
								if (unk_0x5D6C6BD519D63337(iLocal_54))
								{
									if (!func_64())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_135, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0x5BEB6DE8CD28F036(iLocal_54);
								}
								if (unk_0x140188E884645624(iLocal_54))
								{
									if (!unk_0x6CFF81397164A1D3(iLocal_54))
									{
										unk_0x1794B4FCC84D812F(iLocal_54, 0);
										unk_0xF66F820909453B8C(iLocal_54, 0, 0);
										unk_0xA5C38736C426FCB8(iLocal_54, 1);
										unk_0x7D9EFB7AD6B19754(iLocal_54, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0x6CFF81397164A1D3(iLocal_54))
										{
											unk_0x584EEBEECD248926(iLocal_54, 2, 1, 0, 0);
											unk_0x584EEBEECD248926(iLocal_54, 0, 0, 1, 0);
											unk_0x584EEBEECD248926(iLocal_54, 3, 1, 0, 0);
											unk_0x584EEBEECD248926(iLocal_54, 4, 1, 0, 0);
											unk_0x584EEBEECD248926(iLocal_54, 11, 0, 0, 0);
											unk_0x1794B4FCC84D812F(iLocal_54, 1);
											unk_0xF66F820909453B8C(iLocal_54, 1, 0);
											unk_0xA5C38736C426FCB8(iLocal_54, 0);
											unk_0x7D9EFB7AD6B19754(iLocal_54, 0);
											unk_0xF6A103413A202C37(iLocal_54, Local_98, 1, 0, 0, 1);
											unk_0xCF2B9C0645C4651B(iLocal_54, 106.5078f);
											unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
											unk_0x32A582AACCBCAEFE(iLocal_54, 17, 1);
											unk_0xDFD20B2D788C0216(iLocal_54, 1);
											unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_54, -1, 2048, 4);
											if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
											{
												unk_0xF4BF3E3D7FE56705(&uLocal_112);
												unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2052, 4);
												unk_0x12C24A48BF610759(0, iLocal_58, -1, 0, 2f, 1, 0);
												unk_0xFF7E39890B2840DD(uLocal_112);
												unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
												unk_0x5EC7E18324A7D03D(&uLocal_112);
											}
										}
										unk_0xC1B1E9A034A63A62(0);
										Local_66 = { Local_102 };
										Local_69 = { Local_105 };
										Local_72 = { Local_108 };
										fLocal_75 = fLocal_111;
										iLocal_48 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x6CFF81397164A1D3(iLocal_54) && !unk_0x7D5B1F88E7504BBA(iLocal_58))
						{
							if (unk_0xC057F02B837A27F6(iLocal_54, iLocal_58, 5f, 5f, 5f, 0, 1, 0) && !iLocal_127)
							{
								func_4(&uLocal_135, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_127 = 1;
							}
							if (unk_0x52BE10F427339B39(iLocal_54, 0))
							{
								if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0))
								{
									if (func_4(&uLocal_135, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_48 = 2;
										bLocal_117 = false;
										iLocal_129 = 0;
									}
								}
								else
								{
									if (iLocal_307 == 0)
									{
										iLocal_307 = unk_0x4F67E8ECA7D3F667();
									}
									if (iLocal_307 != 0 && unk_0x4F67E8ECA7D3F667() > iLocal_307 + 6000)
									{
										func_4(&uLocal_135, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_307 = 0;
									}
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_117)
						{
							func_21();
							if (func_4(&uLocal_135, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
								{
									if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
									{
										iLocal_131 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
										unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 2, 0);
									}
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_56) && !unk_0x6CFF81397164A1D3(iLocal_54))
								{
									if (unk_0x52BE10F427339B39(iLocal_54, 0))
									{
										iLocal_131 = unk_0xB3598EA616C3FFC3(iLocal_54, 0);
										unk_0xF4BF3E3D7FE56705(&uLocal_112);
										unk_0x12C24A48BF610759(0, iLocal_131, -1, 2, 1f, 1, 0);
										unk_0x939C1E5F1840360D(0);
										unk_0xFF7E39890B2840DD(uLocal_112);
										unk_0xD59C10966EB589EA(iLocal_56, uLocal_112);
										unk_0x020E173F318C12DA(iLocal_56, 185, 0);
									}
									else
									{
										unk_0xF553365A64BDFF94(iLocal_56, iLocal_54, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0xCD82FA174080B3B1(uLocal_321))
									{
										uLocal_321 = func_63(iLocal_56, 0, 145);
									}
									if (unk_0xCD82FA174080B3B1(uLocal_319))
									{
										unk_0xF2C3C9DA47AAA54A(&uLocal_319);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_119 = 1;
								bLocal_117 = true;
							}
						}
						if (bLocal_117 && !unk_0x6CFF81397164A1D3(iLocal_54))
						{
							if (unk_0x04932A97CB319DE0(iLocal_54, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_66 = { Local_76 };
								Local_69 = { Local_79 };
								Local_72 = { Local_82 };
								fLocal_75 = fLocal_85;
								unk_0xFA28FE3A6246FC30(joaat("ig_bride"));
								unk_0xFA28FE3A6246FC30(joaat("washington"));
								unk_0xFA28FE3A6246FC30(joaat("baller2"));
								unk_0xFA28FE3A6246FC30(joaat("primo"));
								if (((unk_0x1283B8B89DD5D1B6(joaat("ig_bride")) && unk_0x1283B8B89DD5D1B6(joaat("washington"))) && unk_0x1283B8B89DD5D1B6(joaat("baller2"))) && unk_0x1283B8B89DD5D1B6(joaat("primo")))
								{
									iLocal_55 = unk_0x9066DFD4D92E6773(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0x49876BF356F39E66(iLocal_55, 1);
									unk_0xF4BF3E3D7FE56705(&uLocal_112);
									unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), -1);
									unk_0xFF7E39890B2840DD(uLocal_112);
									unk_0xD59C10966EB589EA(iLocal_55, uLocal_112);
									unk_0x5EC7E18324A7D03D(&uLocal_112);
									iLocal_57 = unk_0x9066DFD4D92E6773(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0x49876BF356F39E66(iLocal_57, 1);
									unk_0xFE920E72A4B34285(iLocal_57, unk_0x096275889B8E0EE0(), -1);
									unk_0x584EEBEECD248926(iLocal_57, 0, 1, 0, 0);
									uLocal_59[0] = unk_0xF757863E1E2D8F12(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_59[1] = unk_0xF757863E1E2D8F12(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_59[2] = unk_0xF757863E1E2D8F12(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_59[3] = unk_0xF757863E1E2D8F12(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0xB375807E9837A2E6(uLocal_59[0], unk_0x9C1C462D7B1DD1F9(0, 127), 0);
									unk_0xB375807E9837A2E6(uLocal_59[1], unk_0x9C1C462D7B1DD1F9(0, 127), 0);
									unk_0xB375807E9837A2E6(uLocal_59[2], unk_0x9C1C462D7B1DD1F9(0, 127), 0);
									unk_0xB375807E9837A2E6(uLocal_59[3], unk_0x9C1C462D7B1DD1F9(0, 127), 0);
									iLocal_48 = 3;
									bLocal_117 = false;
									iLocal_129 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_117)
						{
							if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
							{
								if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
								{
									unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 2, 0);
									bLocal_117 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_21();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0x7D5B1F88E7504BBA(iLocal_54))
		{
			func_176();
		}
	}
}

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

void func_90()
{
	if ((iLocal_309 && iLocal_306 != func_73(func_74())) && !unk_0x153AD457764FD704(uLocal_133))
	{
		func_94(((iLocal_306 * 1000 * 60 - func_73(func_74()) * 1000 * 60) + (iLocal_305 * 1000 - func_97(func_74()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iLocal_305 == 0)
	{
		if (iLocal_306 == func_73(func_74()) + 1 && ((((iLocal_305 == (func_97(func_74()) - 55) || iLocal_305 == (func_97(func_74()) - 56)) || iLocal_305 == (func_97(func_74()) - 57)) || iLocal_305 == (func_97(func_74()) - 58)) || iLocal_305 == (func_97(func_74()) - 59)))
		{
			func_93();
		}
	}
	if (iLocal_306 == func_73(func_74()))
	{
		func_93();
		func_91();
		if (!func_64())
		{
			func_4(&uLocal_135, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0x6CFF81397164A1D3(iLocal_54))
			{
				unk_0x121389EDF3165EFB(iLocal_54, 1, 1);
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_55))
			{
				unk_0x06C6AD4F38E8412D(iLocal_55, unk_0x096275889B8E0EE0(), 300f, -1, 0, 0);
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_57))
			{
				unk_0x06C6AD4F38E8412D(iLocal_57, unk_0x096275889B8E0EE0(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
				{
					unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x7D5B1F88E7504BBA(iLocal_54))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_54);
				unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_54, 5000, 2048, 2);
				unk_0xD4648EA39998A07B(iLocal_54, unk_0x096275889B8E0EE0(), 5000, 2048, 2);
				unk_0x36DBE8E570B9FBCE(iLocal_54, 0, 0);
				unk_0x5BEB6DE8CD28F036(iLocal_54);
			}
			if (!unk_0x7D5B1F88E7504BBA(iLocal_56))
			{
				unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_54, 5000, 0, 2);
				unk_0x36DBE8E570B9FBCE(iLocal_56, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x7D5B1F88E7504BBA(iLocal_58))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_58, 0))
				{
					unk_0x36DBE8E570B9FBCE(unk_0x096275889B8E0EE0(), 0, 0);
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(iLocal_54) && !unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_112);
				if (unk_0x2F96E7720B0B19EA() == iLocal_58)
				{
					unk_0x12C24A48BF610759(0, iLocal_58, -1, -1, 1f, 8, 0);
					unk_0x8B5A576784E393A4(0, iLocal_58, unk_0x096275889B8E0EE0(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 300f, -1, 0, 0);
				}
				unk_0xFF7E39890B2840DD(uLocal_112);
				unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
				unk_0x5EC7E18324A7D03D(&uLocal_112);
				unk_0x2AD4789CBFD829EC(iLocal_54, 1);
				if (!unk_0x7D5B1F88E7504BBA(iLocal_56))
				{
					unk_0xF4BF3E3D7FE56705(&uLocal_112);
					if (unk_0x2F96E7720B0B19EA() == iLocal_58)
					{
						unk_0x12C24A48BF610759(0, iLocal_58, -1, 0, 2f, 1, 0);
						unk_0xD105DD793D092030(0, 100000);
					}
					else
					{
						unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 300f, -1, 0, 0);
					}
					unk_0xFF7E39890B2840DD(uLocal_112);
					unk_0xD59C10966EB589EA(iLocal_56, uLocal_112);
					unk_0x5EC7E18324A7D03D(&uLocal_112);
					unk_0x2AD4789CBFD829EC(iLocal_56, 1);
				}
			}
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			while (func_64())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_91()
{
	Global_14558 = 0;
	func_92();
}

void func_92()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xC82CF208C2B19199();
	iVar1 = unk_0x4E162231B823DBBF();
	iVar2 = unk_0xB6101ABE62B5F080();
	if (iLocal_308 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0xB906B139171B1845(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
	else if (iLocal_308 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_306)
		{
			unk_0xB906B139171B1845(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_308++;
		}
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_95(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_95(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1328872.f_3613[iParam0], iParam1);
}

int func_97(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_98()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_58) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (unk_0x9C8E4D238C999648(iLocal_54, iLocal_58, 0) && unk_0xDF18751EC74F90FF(iLocal_58))
			{
				if (!func_64())
				{
					if (func_99())
					{
						func_4(&uLocal_135, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0x9C8E4D238C999648(iLocal_54, unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0) && unk_0xDF18751EC74F90FF(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)))
			{
				if (!func_64())
				{
					func_4(&uLocal_135, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_99()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_54))
	{
		unk_0x47083F3C5E3C9AF7(iLocal_54, 0);
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_56))
	{
		unk_0x47083F3C5E3C9AF7(iLocal_56, 0);
	}
	if (((((unk_0xC057F02B837A27F6(iLocal_54, unk_0x096275889B8E0EE0(), 4f, 4f, 4f, 0, 1, 0) || iLocal_48 == 1) || iLocal_125) || iLocal_126) || iLocal_124) || bLocal_117)
	{
		if ((((((iLocal_48 >= 2 && iLocal_119) && iLocal_48 != 1) && !iLocal_125) && !iLocal_126) && !iLocal_124) && !bLocal_117)
		{
			if (unk_0xC057F02B837A27F6(iLocal_56, unk_0x096275889B8E0EE0(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_102())
				{
					func_101(0);
				}
			}
			else if (func_64() && !func_102())
			{
				func_101(1);
			}
		}
		else if (func_102())
		{
			func_101(0);
		}
	}
	else if (func_64() && !func_102())
	{
		func_101(1);
	}
}

void func_101(int iParam0)
{
	Global_16703 = iParam0;
}

int func_102()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if ((unk_0xC82CF208C2B19199() > 2 && unk_0xC82CF208C2B19199() < 15) && !unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
	{
	}
	else
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			unk_0x0F1ABE64C3C18E5A(iLocal_54);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_135, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0xD42BD6EB2E0F1677(iLocal_65))
			{
				unk_0x64CDE9D6BF8ECAD3(iLocal_65, 1, 1);
			}
		}
		while (func_64())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_104()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (!iLocal_114)
		{
			if ((unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 130f, 60f, 50f, 0, 1, 0) && !unk_0x140188E884645624(iLocal_54)) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0xCD82FA174080B3B1(uLocal_320))
				{
					uLocal_320 = func_63(iLocal_54, 0, 145);
					unk_0x8BB337CC6CD674F2(uLocal_320, 0);
					unk_0xD4648EA39998A07B(iLocal_54, unk_0x096275889B8E0EE0(), -1, 2052, 4);
				}
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_320))
					{
						unk_0x8BB337CC6CD674F2(uLocal_320, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_91();
					while (func_64())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_64())
					{
						if (func_11() == 0)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_11() == 1)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_11() == 2)
						{
							func_4(&uLocal_135, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_114 = 1;
				}
			}
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !unk_0x6CFF81397164A1D3(iLocal_54))
			{
				if ((!func_142() && unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0xCD82FA174080B3B1(uLocal_320))
				{
					if (!func_64())
					{
						func_4(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
					{
						iLocal_64 = unk_0x2F96E7720B0B19EA();
					}
					func_105(1);
				}
			}
		}
		else if (!iLocal_300)
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_54))
			{
				if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 25f, 25f, 25f, 0, 1, 0))
				{
					func_21();
					unk_0x4EDE34FBADD967A6(0);
					func_4(&uLocal_135, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_300 = 1;
				}
			}
		}
	}
}

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_39(Global_97342))
		{
			func_106(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_39(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_107(func_108(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_107(func_108(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_107(func_108(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	unk_0x0718552FB84CF252(uParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

char* func_108(int iParam0)
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

int func_109()
{
	switch (func_110(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_114(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_112(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_34913);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_54))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			if (unk_0xD62DD846D82CBB90(-1, unk_0xA86D5F069399F44D(iLocal_54, 1), 3f))
			{
				unk_0xFA8B88A1EF049B33(iLocal_54);
				unk_0xB25E22832517B44E(iLocal_54, 99);
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (unk_0xFB6BA510A533DF81(unk_0x2F96E7720B0B19EA()) < 3f)
				{
					unk_0x7D9EFB7AD6B19754(iLocal_54, 1);
				}
				else
				{
					unk_0x7D9EFB7AD6B19754(iLocal_54, 0);
					if (unk_0x9A2304A64C3C8423(unk_0x2F96E7720B0B19EA(), iLocal_54))
					{
						unk_0xFA8B88A1EF049B33(iLocal_54);
						unk_0xB25E22832517B44E(iLocal_54, 99);
					}
				}
			}
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_54, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					if (func_59(1, 0, 1))
					{
						if (!iLocal_310)
						{
							func_105(1);
							func_52(1, 1, 1, 0);
							unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
							unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 1);
							unk_0x0BFC2C61FB5B6CA1(1);
							unk_0xD63FE3AF9FB3D53F(0);
							unk_0x1B3DA717B9AFF828(0);
							if (!unk_0x6CFF81397164A1D3(iLocal_54))
							{
								unk_0x3B882A96EA77D5B1(unk_0xA86D5F069399F44D(iLocal_54, 1), 5f, 1, 0, 0, 0);
								unk_0x87B5905ECA623B68(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 5f);
							}
							if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
							{
								if (unk_0xC057F02B837A27F6(unk_0x2F96E7720B0B19EA(), iLocal_54, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0xF6A103413A202C37(unk_0x2F96E7720B0B19EA(), unk_0xA86D5F069399F44D(iLocal_54, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0x7263332501E07F52(unk_0x2F96E7720B0B19EA());
								}
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_54))
							{
								uLocal_317 = unk_0x4D3B117F889EADDA(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_133 = unk_0xE72CDBA7F0A02DD6("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xEF8E0121E6DA9F93(uLocal_317, 0.158f);
								unk_0x6E3975B3F6954199(uLocal_133, uLocal_317, "untie_cam", "re@stag_do@");
								unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
								unk_0xFA8B88A1EF049B33(iLocal_54);
								unk_0x3605588B4955CFAF(iLocal_54, uLocal_317, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0x76BA60E29B3C3B96(iLocal_54, 0, 0);
								unk_0x3605588B4955CFAF(unk_0x096275889B8E0EE0(), uLocal_317, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
								unk_0x87295BCA613800C8(uLocal_133, 1);
								unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
								iLocal_310 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_310 && !iLocal_312)
	{
		func_21();
		unk_0x4EDE34FBADD967A6(0);
		if (func_11() == 0)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_11() == 1)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_11() == 2)
		{
			func_4(&uLocal_135, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_312 = 1;
	}
	if (iLocal_310 && !iLocal_311)
	{
		if (!iLocal_315)
		{
			if (unk_0x5D6C0F302EC49A67(uLocal_317) > 0.2f && unk_0x5D6C0F302EC49A67(uLocal_317) < 0.3f)
			{
				unk_0x6856F5517E486379(-1, "ROPE_CUT", unk_0x096275889B8E0EE0(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_315 = 1;
			}
		}
		if (unk_0x5D6C0F302EC49A67(uLocal_317) > 0.4647059f && !iLocal_316)
		{
			if (unk_0x420537F38720164C() == 4)
			{
				unk_0x4102732DF6B4005F("CamPushInNeutral", 0, 0);
				unk_0xB906B139171B1845(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_316 = 1;
			}
		}
		if (unk_0x5D6C0F302EC49A67(uLocal_317) > 0.5f)
		{
			iLocal_311 = 1;
		}
		if (func_116(1000))
		{
			unk_0x40C719A5E410B9E4(800);
			while (unk_0x02F39BEFE7B88D00())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_311 = 1;
			iLocal_314 = 1;
		}
	}
	if (iLocal_311 && !iLocal_313)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_65))
		{
			unk_0x64CDE9D6BF8ECAD3(iLocal_65, 1, 1);
		}
		unk_0xFA8B88A1EF049B33(unk_0x096275889B8E0EE0());
		unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 208.4017f);
		unk_0x76BA60E29B3C3B96(unk_0x096275889B8E0EE0(), 0, 0);
		unk_0x87295BCA613800C8(uLocal_133, 0);
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		unk_0x4E67E0B6D7FD5145(uLocal_133, 0);
		unk_0x5D1EB123EAC5D071(0f);
		unk_0xFB760AF4F537B8BF(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0x61E9EDED22F8E19F(unk_0x096275889B8E0EE0(), 0);
		unk_0xD63FE3AF9FB3D53F(1);
		unk_0x1B3DA717B9AFF828(1);
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			unk_0x7D9EFB7AD6B19754(iLocal_54, 0);
			unk_0xFA8B88A1EF049B33(iLocal_54);
			unk_0x98FB75840705964B(iLocal_54, 1);
			unk_0xF6A103413A202C37(iLocal_54, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(iLocal_54, 136.9073f);
			unk_0x76BA60E29B3C3B96(iLocal_54, 0, 0);
		}
		if (iLocal_314)
		{
			unk_0x6A053CF596F67DF7(800);
			while (unk_0x0CECCC63FFA2EF24())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_314 = 0;
		}
		iLocal_316 = 0;
		iLocal_313 = 1;
	}
	if (iLocal_313 && !unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (unk_0xB86D29B10F627379(unk_0x2F96E7720B0B19EA(), 0))
		{
			if ((((((unk_0xC057F02B837A27F6(iLocal_54, unk_0x2F96E7720B0B19EA(), 20f, 20f, 20f, 0, 1, 0) && unk_0xA9C55F1C15E62E06(unk_0x2F96E7720B0B19EA()) >= 1) && !unk_0x799CFC7C5B743B15(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()))) && !unk_0xB9B56D169DBE14C0(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()))) && !unk_0x6BD83A1CACAF87AD(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()))) && !unk_0xFC08C8F8C1EDF174(unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()))) && unk_0xDA76A9F39210D365(unk_0x2F96E7720B0B19EA()) != joaat("rhino"))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_112);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 10000, 2048, 3);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 6500);
				unk_0x12C24A48BF610759(0, unk_0x2F96E7720B0B19EA(), -1, 0, 1f, 1, 0);
				unk_0xFF7E39890B2840DD(uLocal_112);
				unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
				unk_0x5EC7E18324A7D03D(&uLocal_112);
			}
			else if (!unk_0x5D6C6BD519D63337(iLocal_54))
			{
				unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
				unk_0xA8F442E84EF050FC(iLocal_54, 1);
				unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
			}
		}
		else if (!unk_0x5D6C6BD519D63337(iLocal_54))
		{
			unk_0xC17B8A7D48C194DB(iLocal_54, func_66());
			unk_0xA8F442E84EF050FC(iLocal_54, 1);
			unk_0x4C60E33A2CB9B14D(iLocal_54, 0);
		}
		unk_0x49876BF356F39E66(iLocal_54, 0);
		unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
		uLocal_319 = func_23(Local_66, 1);
		iLocal_113 = 1;
		bLocal_115 = true;
		unk_0x4763145053A33D46("re@stag_do@");
		unk_0x4763145053A33D46("re@stag_do@idle_a");
		iLocal_304 = func_73(func_74());
		iLocal_306 = iLocal_304 + 5;
		iLocal_303 = func_97(func_74());
		if (iLocal_303 >= 30)
		{
			iLocal_305 = 0;
			iLocal_306++;
		}
		if (iLocal_306 > 24)
		{
			iLocal_306 = (iLocal_306 - 24);
		}
		if (iLocal_306 == 0)
		{
			sLocal_301 = "stagd_ptime0";
		}
		else if (iLocal_306 == 1)
		{
			sLocal_301 = "stagd_ptime1";
		}
		else if (iLocal_306 == 2)
		{
			sLocal_301 = "stagd_ptime2";
		}
		else if (iLocal_306 == 3)
		{
			sLocal_301 = "stagd_ptime3";
		}
		else if (iLocal_306 == 4)
		{
			sLocal_301 = "stagd_ptime4";
		}
		else if (iLocal_306 == 5)
		{
			sLocal_301 = "stagd_ptime5";
		}
		else if (iLocal_306 == 6)
		{
			sLocal_301 = "stagd_ptime6";
		}
		else if (iLocal_306 == 7)
		{
			sLocal_301 = "stagd_ptime7";
		}
		else if (iLocal_306 == 8)
		{
			sLocal_301 = "stagd_ptime8";
		}
		else if (iLocal_306 == 9)
		{
			sLocal_301 = "stagd_ptime9";
		}
		else if (iLocal_306 == 10)
		{
			sLocal_301 = "stagd_ptim10";
		}
		else if (iLocal_306 == 11)
		{
			sLocal_301 = "stagd_ptim11";
		}
		else if (iLocal_306 == 12)
		{
			sLocal_301 = "stagd_ptim12";
		}
		else if (iLocal_306 == 13)
		{
			sLocal_301 = "stagd_ptim13";
		}
		else if (iLocal_306 == 14)
		{
			sLocal_301 = "stagd_ptim14";
		}
		else if (iLocal_306 == 15)
		{
			sLocal_301 = "stagd_ptim15";
		}
		else if (iLocal_306 == 16)
		{
			sLocal_301 = "stagd_ptim16";
		}
		else if (iLocal_306 == 17)
		{
			sLocal_301 = "stagd_ptim17";
		}
		else if (iLocal_306 == 18)
		{
			sLocal_301 = "stagd_ptim18";
		}
		else if (iLocal_306 == 19)
		{
			sLocal_301 = "stagd_ptim19";
		}
		else if (iLocal_306 == 20)
		{
			sLocal_301 = "stagd_ptim20";
		}
		else if (iLocal_306 == 21)
		{
			sLocal_301 = "stagd_ptim21";
		}
		else if (iLocal_306 == 22)
		{
			sLocal_301 = "stagd_ptim22";
		}
		else if (iLocal_306 == 23)
		{
			sLocal_301 = "stagd_ptim23";
		}
	}
}

int func_116(int iParam0)
{
	if (unk_0x37F9A426FBCF4AF2())
	{
		if ((unk_0x4F67E8ECA7D3F667() - Global_27) > iParam0)
		{
			Global_26 = unk_0x4F67E8ECA7D3F667();
		}
		Global_27 = unk_0x4F67E8ECA7D3F667();
		if ((unk_0x4F67E8ECA7D3F667() - Global_26) > iParam0)
		{
			if (func_117())
			{
				Global_26 = unk_0x4F67E8ECA7D3F667();
				return 1;
			}
		}
	}
	return 0;
}

int func_117()
{
	if (unk_0x535384D6067BA42E())
	{
		return 0;
	}
	if (unk_0xCCBB0BB9790E1F47(0, 18) || unk_0xCCBB0BB9790E1F47(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_118()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_54))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (!unk_0x138190F64DB4BBD1(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)))
			{
				unk_0xDC19C288082E586E(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1, 0);
			}
		}
		iLocal_132 = unk_0x96EDF4D5640ABD9F(unk_0xA86D5F069399F44D(iLocal_54, 0), 30f, 0, 4);
		if (!unk_0x7D5B1F88E7504BBA(iLocal_132))
		{
			if (!unk_0xE052C1B1CAA4ECE4(iLocal_132, -1))
			{
				if (unk_0xC057F02B837A27F6(iLocal_132, iLocal_54, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xDC19C288082E586E(iLocal_132, 1, 0);
					if (unk_0xB86D29B10F627379(iLocal_132, 0))
					{
						unk_0xB4E3BFC39CA16057(iLocal_132, 3000, 0, 0);
						if (!unk_0x6CFF81397164A1D3(iLocal_54))
						{
							if (!func_64() && !iLocal_114)
							{
								func_4(&uLocal_135, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0x6C9B2BE03BBD5C98(&iLocal_132);
				}
			}
		}
	}
}

void func_119()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		iVar0 = unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0());
		if (unk_0xB86D29B10F627379(iVar0, 0))
		{
			iVar1 = unk_0xD214895E39AA3787(iVar0, 0);
			if (!unk_0x6CFF81397164A1D3(iVar1))
			{
				if (iVar1 != unk_0x096275889B8E0EE0())
				{
					if (unk_0x138190F64DB4BBD1(iVar1))
					{
						if (!unk_0xFD36BD478980EB87(iVar1, unk_0x096275889B8E0EE0()))
						{
							unk_0xD4648EA39998A07B(iVar1, unk_0x096275889B8E0EE0(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_120()
{
	func_121(39, 1);
	func_121(40, 1);
	func_121(41, 1);
	func_121(42, 1);
	func_121(43, 1);
	unk_0xFA28FE3A6246FC30(joaat("u_m_y_staggrm_01"));
	unk_0xFA28FE3A6246FC30(joaat("superd"));
	unk_0xFA28FE3A6246FC30(joaat("prop_stag_do_rope"));
	while ((!unk_0x1283B8B89DD5D1B6(joaat("u_m_y_staggrm_01")) || !unk_0x1283B8B89DD5D1B6(joaat("superd"))) || !unk_0x1283B8B89DD5D1B6(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA862A2AD321F94B4("re@stag_do@");
	unk_0xA862A2AD321F94B4("re@stag_do@idle_a");
	unk_0x9C623A934CD60291("ROPE_CUT", 0);
	while ((!unk_0x27FF6FE8009B40CA("re@stag_do@") || !unk_0x27FF6FE8009B40CA("re@stag_do@idle_a")) || !unk_0x9C623A934CD60291("ROPE_CUT", 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_54 = unk_0x9066DFD4D92E6773(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0xD937A3C5EF78C429(iLocal_54, "GROOM");
	unk_0x6ECBACF91786FB7A(iLocal_54, joaat("player"));
	unk_0x49876BF356F39E66(iLocal_54, 1);
	unk_0x92DA957FFDF2DA79(iLocal_54, 0);
	unk_0x584EEBEECD248926(iLocal_54, 2, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_54, 0, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_54, 3, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_54, 4, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_54, 11, 1, 0, 0);
	unk_0xA4B71B85AA004480(iLocal_54, joaat("empty"));
	unk_0x34559010D1FB41F8(iLocal_54, 3);
	unk_0x020E173F318C12DA(iLocal_54, 206, 1);
	unk_0x020E173F318C12DA(iLocal_54, 134, 1);
	iLocal_65 = unk_0x1A2D7464B1CAA1C8(joaat("prop_stag_do_rope"), unk_0xA86D5F069399F44D(iLocal_54, 1), 1, 1, 0);
	unk_0x1B21CF9397F27FEE(iLocal_65, iLocal_54, unk_0xD1E5B4D09626571A(iLocal_54, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_58 = unk_0xF757863E1E2D8F12(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0x252253C8A45AA1FC(iLocal_58, 1);
	unk_0x758C3460EE915D0A(iLocal_58, 0f);
	unk_0x96F78A6A075D55D9(iLocal_58, 3);
	unk_0xAC447F5493BF482F(iLocal_58, 0);
	unk_0x0AABFA8F6D4B8D89(iLocal_58, 0, 73, 0);
	unk_0x071953B36AB5EF7F(iLocal_58, 2, 48);
	unk_0x75F35BD9450C6115(iLocal_58, 11, 1, 0);
	unk_0x75F35BD9450C6115(iLocal_58, 12, 1, 0);
	unk_0x07D04AD5EF0CEB94(joaat("superd"), 3);
	unk_0x5FB407F0A7C877BF(iLocal_58, 10000);
	unk_0x5F5E2B1B9EAECC0F(iLocal_58, 5f);
	unk_0xC70FA903C59F6BC1(iLocal_58);
	Local_76 = { -352.88f, 6164.31f, 30.5f };
	Local_79 = { -355.2565f, 6164.931f, 30.2944f };
	Local_82 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_85 = 25.375f;
	Local_86 = { -343.5804f, 6156.198f, 30.489f };
	Local_89 = { -1991.126f, 457.991f, 101.1808f };
	Local_92 = { -2002.69f, 460.539f, 99.828f };
	Local_95 = { -1997.605f, 445.6651f, 105.0519f };
	Local_98 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_101 = 24.6875f;
	Local_102 = { -2205.351f, 4298.79f, 47.265f };
	Local_105 = { -2207.525f, 4301.697f, 47.1803f };
	Local_108 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_111 = 12.5625f;
	Local_66 = { Local_89 };
	Local_69 = { Local_92 };
	Local_72 = { Local_95 };
	fLocal_75 = fLocal_101;
	unk_0x57F925DF866E2CBD(joaat("superd"), 1);
	unk_0xBBB134FB9D50C0CC(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x55686F8055FF786B(Local_86 - Vector(20f, 20f, 20f), Local_86 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x55686F8055FF786B(unk_0xA86D5F069399F44D(iLocal_54, 0) - Vector(10f, 10f, 10f), unk_0xA86D5F069399F44D(iLocal_54, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x55686F8055FF786B(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x55686F8055FF786B(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0x06139B2CBC513B29(unk_0xA86D5F069399F44D(iLocal_54, 1), 10f, 0);
	if (!unk_0x7D5B1F88E7504BBA(iLocal_54))
	{
		unk_0xF4BF3E3D7FE56705(&uLocal_112);
		unk_0x8DBC05C86F873CC9(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xFF7E39890B2840DD(uLocal_112);
		unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
		unk_0x5EC7E18324A7D03D(&uLocal_112);
		unk_0x2AD4789CBFD829EC(iLocal_54, 1);
	}
	if (func_11() == 0)
	{
		func_89(&uLocal_135, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_89(&uLocal_135, 0, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_89(&uLocal_135, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
	}
	func_89(&uLocal_135, 3, iLocal_54, "GROOM", 0, 1);
	iLocal_49 = 1;
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_128(iParam0, 2, 1))
		{
			func_127(iParam0, 2, 1);
		}
	}
	else if (func_128(iParam0, 2, 1))
	{
		func_122(iParam0, 2, 1);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0x7D1D4A3602B6AD4E(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, uParam1, iParam3);
	}
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
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

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_124(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0xF73FBE4845C43B5B(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_34() == 0)
		{
			return unk_0x4ED6CFDFE8D4131A(func_125(func_126(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_129()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_136())
	{
		return 1;
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130(float fParam0, bool bParam1)
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_131(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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

void func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 1:
			func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 2:
			func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 3:
			func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 4:
			func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 5:
			func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 6:
			func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 7:
			func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
			break;
		
		case 8:
			func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 9:
			func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 10:
			func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 11:
			func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 12:
			func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 13:
			func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 14:
			func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 15:
			func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 16:
			func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 17:
			func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 18:
			func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 19:
			func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 20:
			func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 21:
			func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 22:
			func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 23:
			func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_133(iParam0), 0, 1);
			break;
		
		case 24:
			func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
			break;
		
		case 25:
			func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 26:
			func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 27:
			func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 28:
			func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 29:
			func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 30:
			func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 31:
			func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 32:
			func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 33:
			func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 34:
			func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 35:
			func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 36:
			func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 37:
			func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 38:
			func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 39:
			func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 40:
			func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 41:
			func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 42:
			func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 43:
			func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 44:
			func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 45:
			func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 46:
			func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 47:
			func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 48:
			func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 49:
			func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 50:
			func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 51:
			func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 52:
			func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 54:
			func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 55:
			func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 56:
			func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 53:
			func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 57:
			func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 58:
			func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 59:
			func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 60:
			func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 61:
			func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 62:
			func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_133(int iParam0)
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

struct<2> func_134(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_135(iParam0) };
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_135(int iParam0)
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

int func_136()
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_97071 > 0;
}

int func_138()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_136())
	{
		return 1;
	}
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if ((Global_97342 == func_48() && unk_0x924D54E5698AE3E0()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_145(iParam0);
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_144();
}

void func_144()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

void func_145(int iParam0)
{
	Global_97342 = iParam0;
}

int func_146(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_48();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_130(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_172(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_171(func_11()) == 4 || func_171(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_170(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_169(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_168())
		{
			return 0;
		}
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_158(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_158(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_172(30) && !func_158(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_157(iVar8))
				{
					if (func_148(iVar4))
					{
						if (!func_147(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
							{
								if (func_11() != iVar4)
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

bool func_147(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
	return func_149(iVar0);
}

int func_149(int iParam0)
{
	return func_150(iParam0, 1);
}

int func_150(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_151(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_152(func_74(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_81(iParam1);
		iVar1 = func_79(iParam0);
		iVar2 = (func_79(iParam0) - func_79(iParam1));
		iVar3 = (func_81(iParam0) - func_81(iParam1));
		iVar4 = (func_155(iParam0) - func_155(iParam1));
		iVar5 = (func_73(iParam0) - func_73(iParam1));
		iVar6 = (func_97(iParam0) - func_97(iParam1));
		iVar7 = (func_154(iParam0) - func_154(iParam1));
	}
	else
	{
		iVar0 = func_81(iParam0);
		iVar1 = func_79(iParam1);
		iVar2 = (func_79(iParam1) - func_79(iParam0));
		iVar3 = (func_81(iParam1) - func_81(iParam0));
		iVar4 = (func_155(iParam1) - func_155(iParam0));
		iVar5 = (func_73(iParam1) - func_73(iParam0));
		iVar6 = (func_97(iParam1) - func_97(iParam0));
		iVar7 = (func_154(iParam1) - func_154(iParam0));
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
		iVar4 = (iVar4 + func_78(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_153(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_153(float fParam0, float fParam1, float fParam2)
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

int func_154(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_155(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_79(iParam0);
	iVar1 = func_79(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_81(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	iVar1 = func_73(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	iVar1 = func_97(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
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
	iVar0 = func_154(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_97(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_79(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_155(iParam0);
	if (iVar5 < 1 || iVar5 > func_78(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_167()) || Global_96400) || Global_24446) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_167()) || Global_24446) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_167()) || Global_96400) || Global_24446) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_167()) || Global_96400) || Global_24446) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_18(8, -1)) || func_162()) || func_161()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_165()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_167()) || Global_24446) || func_166()) || func_18(8, -1)) || func_164()) || func_163()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_167()) || func_164()) || Global_96400) || Global_24446) || func_166()) || Global_35957) || func_18(8, -1)) || func_163()) || func_161()) || func_162()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_167()) || Global_96400) || Global_24446) || func_166()) || func_18(8, -1)) || func_163()) || func_161()) || func_165()) || func_164()) || func_162())
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

var func_160()
{
	return Global_90001.f_1;
}

int func_161()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_90014.f_291 > 0;
}

bool func_165()
{
	return Global_90014.f_290 > 0;
}

var func_166()
{
	return Global_1315900;
}

int func_167()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	func_10();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return func_156(func_74(), iParam0);
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
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

int func_171(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_97353.f_5944.f_919[iParam0];
}

bool func_172(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_173()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(iVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()
{
	var uVar0;
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_176()
{
	if (iLocal_50)
	{
		func_208(0);
		unk_0xBBB134FB9D50C0CC(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x7E42B5424BF0E844();
		func_21();
		unk_0x062D14F18E8B0CAE(unk_0x217E9DC48139933D());
		if (!unk_0x7D5B1F88E7504BBA(iLocal_64))
		{
			if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_64, 0) && !unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_64, 50f, 50f, 50f, 0, 1, 0))
			{
				func_188(iLocal_64, 0, 145);
			}
		}
		if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_86, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_54) && !unk_0x6CFF81397164A1D3(iLocal_56))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_112);
				unk_0x14A4402A811D03C0(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xB7915D7C100167E8(0, iLocal_56, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0xFF7E39890B2840DD(uLocal_112);
				unk_0xD59C10966EB589EA(iLocal_54, uLocal_112);
				unk_0x5EC7E18324A7D03D(&uLocal_112);
				unk_0xF4BF3E3D7FE56705(&uLocal_112);
				unk_0x14A4402A811D03C0(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xB7915D7C100167E8(0, iLocal_54, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0xFF7E39890B2840DD(uLocal_112);
				unk_0xD59C10966EB589EA(iLocal_56, uLocal_112);
				unk_0x5EC7E18324A7D03D(&uLocal_112);
			}
		}
		unk_0x6C9B2BE03BBD5C98(&iLocal_132);
		unk_0x6C9B2BE03BBD5C98(&iLocal_58);
		if (!unk_0x2E9C3FCB6798F397(unk_0x217E9DC48139933D()))
		{
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_54))
		{
			unk_0x020E173F318C12DA(iLocal_54, 317, 1);
			if (!unk_0xEE6AD63ABF59C0B7(iLocal_54))
			{
				unk_0x7D9EFB7AD6B19754(iLocal_54, 0);
			}
			unk_0x5BEB6DE8CD28F036(iLocal_54);
			unk_0x49876BF356F39E66(iLocal_54, 0);
		}
		else if (unk_0xD42BD6EB2E0F1677(iLocal_65))
		{
			unk_0x64CDE9D6BF8ECAD3(iLocal_65, 1, 1);
		}
		unk_0xEB7C3FF98F454165(&iLocal_54);
		if (!unk_0x6CFF81397164A1D3(iLocal_56))
		{
			unk_0x020E173F318C12DA(iLocal_56, 317, 1);
			unk_0x49876BF356F39E66(iLocal_56, 0);
		}
		unk_0xEB7C3FF98F454165(&iLocal_56);
		if (!unk_0x6CFF81397164A1D3(iLocal_55))
		{
			unk_0x49876BF356F39E66(iLocal_55, 0);
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_57))
		{
			unk_0x49876BF356F39E66(iLocal_57, 0);
		}
		unk_0xEB7C3FF98F454165(&iLocal_55);
	}
	func_177(-1);
	unk_0x5E8B6D17FF91CD59();
}

void func_177(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_142())
	{
		func_181(iParam0);
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_97342, 1), 64);
		if (func_47(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_178(&Global_24503);
	Global_97343 = 0;
	func_145(-1);
}

void func_178(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_74();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_97(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_154(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_81(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_79(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_79(*uParam0);
	iVar1 = func_81(*uParam0);
	iVar2 = func_155(*uParam0);
	iVar3 = func_73(*uParam0);
	iVar4 = func_97(*uParam0);
	iVar5 = func_154(*uParam0);
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
	iVar6 = func_78(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_78(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_77(uParam0, iParam4);
	func_76(uParam0, iParam5);
	func_75(uParam0, iParam6);
}

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x4068804F7FE7AEAF(iParam0, &uVar0);
		if (!unk_0x2CF12F9ACF18F048(uVar1))
		{
			if (unk_0xFD340785ADF8CFB7(uVar1) == unk_0xFD340785ADF8CFB7("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_189(iParam0, iParam2);
	return 1;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_194(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xD214895E39AA3787(iParam0, -1);
		if (!unk_0xD42BD6EB2E0F1677(iVar0))
		{
			iVar0 = unk_0x74583B19FEEAFDA7(iParam0, -1);
		}
		if (unk_0xD42BD6EB2E0F1677(iVar0) && !unk_0x6CFF81397164A1D3(iVar0))
		{
			if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xDA76A9F39210D365(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97353.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97353.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97353.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xDA76A9F39210D365(iParam0) == Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x2CF12F9ACF18F048(&(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xD3852F22AB713A1F(unk_0xF4122ED5ACE92A17(iParam0), &(Global_97353.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97353.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97353.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97353.f_18371.f_4796 = 1;
	func_190(iParam0, &(Global_97353.f_18371.f_4742));
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(iParam0, 0))
	{
		func_193(uParam1);
		uParam1->f_42 = unk_0xDA76A9F39210D365(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF4122ED5ACE92A17(iParam0), 16);
		*uParam1 = unk_0x925BC0BB4ADD9133(iParam0);
		unk_0x5AD07C3CF934E67B(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xF39FAB2FF8EABE36(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5D1A7577B21657BF(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0xE109F71384B0E749(iParam0);
		uParam1->f_43 = unk_0xBC48F968D6EADC0D(iParam0);
		uParam1->f_45 = unk_0xBFBF929D2AB51389(iParam0);
		uParam1->f_46 = unk_0xC867FD144F2469D3(iParam0);
		unk_0xF9F04947622179FC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xC73BFF368F8ECC8E(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x4F929B2CCC8BB671(iParam0, 2))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 28);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 3))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 29);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 30);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x7B7BDDF3BC6C3D0E(iParam0, 0))
		{
			uParam1->f_44 = unk_0x9CD9457A4F02F466(iParam0);
		}
		if (unk_0x6BD83A1CACAF87AD(uParam1->f_42))
		{
			if (unk_0xAE0F16A04C1E6E04(iParam0))
			{
				switch (unk_0xB3DBFFF01F5CD60D(iParam0))
				{
					case 2:
					case 0:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0xD7C60D33FB5EE7FA(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 9);
		}
		if (unk_0x22335D30EB16E6C3(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 10);
		}
		if (unk_0xB3A5CF3449056D6B(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 13);
			unk_0xF33C54EDBFFBFC70(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xC6526C3B8D6D4E0C(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 12);
		}
		func_192(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), func_191(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x5F655593F79A61BF(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 11);
		}
		if (unk_0xD9D1CDBF3464DCDF(iParam0, "IgnoredByQuickSave") && unk_0xDEF3F1B071ABB197(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 27);
		}
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB86D29B10F627379(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xAF9BACB8400BED0F(*iParam0) == 0)
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
			if (unk_0xDDADBD56AE4C56D3(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x6F122920B2E54FF4(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCBDF6BADFF4FFDEB(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_193(var uParam0)
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

int func_194(int iParam0)
{
	if ((((((((((!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0)) || func_206(iParam0, 0, 0)) || func_206(iParam0, 1, 0)) || func_206(iParam0, 2, 0)) || func_205(iParam0) != 145) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || func_201(iParam0)) || !func_195(unk_0xDA76A9F39210D365(iParam0)))
	{
		if (func_203(iParam0))
		{
		}
		if (func_203(iParam0))
		{
		}
		if (func_206(iParam0, 0, 0))
		{
		}
		if (func_206(iParam0, 1, 0))
		{
		}
		if (func_206(iParam0, 2, 0))
		{
		}
		if (func_205(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (((unk_0x799CFC7C5B743B15(iParam0) || unk_0x6BD83A1CACAF87AD(iParam0)) || unk_0xB9B56D169DBE14C0(iParam0)) || unk_0xFC08C8F8C1EDF174(iParam0))
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

int func_196(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x354F62672DE7DB0A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("buffalo3") && !unk_0x03A753E2C8458335())) || (iParam0 == joaat("gauntlet2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x03A753E2C8458335())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_174())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x575B76101E4810BF())
		{
			if (unk_0x1B7485357D8CFE37(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x32D31669D12B8EB0(Var1.f_0))
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
		if ((((!func_200() && !func_199()) && !func_198()) && !func_197()) && !func_174())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD1CCC2A2639D325F() || unk_0xB0FB6CFAA5A1C833()) || unk_0x88CFAE250D3E0C71())
		{
		}
		else if (!func_198())
		{
			return 0;
		}
	}
	return 1;
}

int func_197()
{
	return 0;
}

int func_198()
{
	return 1;
}

int func_199()
{
	return 1;
}

int func_200()
{
	if (unk_0x2763DC12BBE2BB6F(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xDA76A9F39210D365(iParam0);
	uVar1 = unk_0xF4122ED5ACE92A17(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD3852F22AB713A1F(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_196(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0) && unk_0xB86D29B10F627379(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]) && unk_0xB86D29B10F627379(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xDA76A9F39210D365(Global_87698[iVar0]) == unk_0xDA76A9F39210D365(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 145;
	}
	if (!unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD42BD6EB2E0F1677(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD42BD6EB2E0F1677(iParam0) || !unk_0xB86D29B10F627379(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_207(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x4ED6CFDFE8D4131A(Global_97353.f_5486[iVar9], 0))
		{
			if (unk_0x31AF177977A69F9B(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_208(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_121(iVar0, bParam0);
		iVar0++;
	}
}

