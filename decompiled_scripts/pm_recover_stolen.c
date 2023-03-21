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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 16;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	unk_0x21C966D49C5B368B(1);
	if (unk_0x78BF2001491914AC(3))
	{
		func_83(2);
		func_82();
	}
	func_76();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_75())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0x3732B96D7A1859B4();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x0F39DF6675B2333E(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0x0F39DF6675B2333E(Local_37.f_11);
			}
			unk_0xC9173FA08E7D8227("PRECOV", 0);
			if (unk_0x44FB58EFDA8731B7(0))
			{
				if (unk_0x2137828D03306CAF(Global_101948.f_222[0]) && unk_0x7FAC45D56235AB39(Global_101948.f_222[0], 0))
				{
					iLocal_244 = Global_101948.f_222[0];
					Global_101948.f_222[0] = 0;
					unk_0x216B434C1A609F5B(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0xD3B21CE53AA7BE51(iLocal_244);
					unk_0xFD213087BC4CC3B3(Local_37.f_7);
					unk_0x02E663D7DDAE8202(Local_37.f_7, 1);
				}
				if (unk_0x2137828D03306CAF(Global_101948.f_225[0]))
				{
					iLocal_245 = Global_101948.f_225[0];
					Global_101948.f_225[0] = 0;
					unk_0x216B434C1A609F5B(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0xD3B21CE53AA7BE51(iLocal_245);
					unk_0x3C030E241A3543D2(iLocal_245, iLocal_251);
					unk_0x88D9DF53359130B9(iLocal_245, 0);
					unk_0x176253610C53F0E0(iLocal_245, 5);
					unk_0x015B50BC21C88C8C(iLocal_245, 1);
					unk_0x89AEA58335779997(iLocal_245, 23, 1);
					if (unk_0x4BD9974FDDE2D1EC(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x410FA3FFE3D2D6F6(iLocal_245, 1);
							unk_0x39D108783BB331F3(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x410FA3FFE3D2D6F6(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0x0013D519C885E60B(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x0013D519C885E60B(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0xFD213087BC4CC3B3(Local_37.f_8);
					unk_0x9C27A9366AD7DE0B(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_74(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0x2137828D03306CAF(Global_101948.f_225[1]))
				{
					iLocal_246 = Global_101948.f_225[1];
					Global_101948.f_225[1] = 0;
					unk_0x216B434C1A609F5B(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0xD3B21CE53AA7BE51(iLocal_246);
					unk_0x3C030E241A3543D2(iLocal_246, iLocal_251);
					unk_0x88D9DF53359130B9(iLocal_246, 0);
					unk_0x176253610C53F0E0(iLocal_246, 5);
					unk_0x015B50BC21C88C8C(iLocal_246, 1);
					unk_0x89AEA58335779997(iLocal_246, 23, 1);
					if (unk_0x4BD9974FDDE2D1EC(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x410FA3FFE3D2D6F6(iLocal_246, 1);
							unk_0x39D108783BB331F3(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0x410FA3FFE3D2D6F6(iLocal_246, 0);
						}
					}
					unk_0xFD213087BC4CC3B3(Local_37.f_9);
					unk_0x9C27A9366AD7DE0B(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x2137828D03306CAF(iLocal_245) || !unk_0x769F0F6444C1ABE0(iLocal_245)) && (!unk_0x2137828D03306CAF(iLocal_246) || !unk_0x769F0F6444C1ABE0(iLocal_246)))
				{
					uLocal_249 = func_73(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_72(&cVar0, 7500, 1);
					func_71(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0x3732B96D7A1859B4() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0x2137828D03306CAF(iLocal_245) && unk_0x769F0F6444C1ABE0(iLocal_245)) || (unk_0x2137828D03306CAF(iLocal_246) && unk_0x769F0F6444C1ABE0(iLocal_246))) || ((Local_37.f_17 && unk_0x4BD9974FDDE2D1EC(Local_37.f_7)) && !unk_0x5B9B499C707C2A95(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0x4BD9974FDDE2D1EC(Local_37.f_7)) && !unk_0x5B9B499C707C2A95(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0x5B9B499C707C2A95(iLocal_245, iLocal_244, 0)) && func_70(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0x4BD9974FDDE2D1EC(Local_37.f_7))
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_245) && unk_0x5B9B499C707C2A95(iLocal_245, iLocal_244, 0))
					{
						unk_0xA9E0CEC3AE1A2041(iLocal_245);
					}
					if (!unk_0x769F0F6444C1ABE0(iLocal_246) && unk_0x5B9B499C707C2A95(iLocal_246, iLocal_244, 0))
					{
						unk_0xA9E0CEC3AE1A2041(iLocal_246);
					}
				}
				if (unk_0x5CA780C6DF42F0B0())
				{
					unk_0x0508903FC1B0ED24();
				}
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				if (func_75())
				{
					func_68();
				}
				iLocal_238 = -1;
				if (unk_0xA1FC9D7AEA164881(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0xA1FC9D7AEA164881(Local_37.f_11)))
				{
					if (unk_0x2137828D03306CAF(iLocal_245))
					{
						Var8 = { unk_0x96BF1E6645F30D5F(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0x3870C683DB87CF73(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0xFD213087BC4CC3B3(Local_37.f_10);
						if (unk_0xBDD3EABACAB97D09(uLocal_249))
						{
							unk_0x789C84F1B8496AD0(&uLocal_249);
						}
						uLocal_249 = func_67(uLocal_247);
					}
					if (unk_0x2137828D03306CAF(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0x96BF1E6645F30D5F(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0x3870C683DB87CF73(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0xFD213087BC4CC3B3(Local_37.f_11);
						if (unk_0xBDD3EABACAB97D09(uLocal_250))
						{
							unk_0x789C84F1B8496AD0(&uLocal_250);
						}
						uLocal_250 = func_67(uLocal_248);
					}
					func_66(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0xC4A39E4229BD3ABE(iLocal_245, 0))
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_250))
					{
						unk_0x789C84F1B8496AD0(&uLocal_250);
					}
					if (!unk_0xBDD3EABACAB97D09(uLocal_249))
					{
						uLocal_249 = func_73(unk_0x0C20E539D876C5B3(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_249))
					{
						unk_0x789C84F1B8496AD0(&uLocal_249);
					}
					if (!unk_0xBDD3EABACAB97D09(uLocal_250))
					{
						uLocal_250 = func_63(iLocal_245, 1, 145);
					}
				}
				func_40(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0x3732B96D7A1859B4() > iLocal_67)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0xEF76CA199A0C9035((iLocal_67 - unk_0x3732B96D7A1859B4())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0x2137828D03306CAF(iLocal_245))
				{
					if (func_33(unk_0x2A5EB8B0FE590B91(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xBDD3EABACAB97D09(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0x2137828D03306CAF(iLocal_246))
				{
					if (func_33(unk_0x2A5EB8B0FE590B91(), iLocal_246, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xBDD3EABACAB97D09(uLocal_250))
					{
						func_32(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x0BF40BFCD677686E(uLocal_247) || unk_0xAD910300E4B4553D(uLocal_247))
			{
				if (unk_0x0BF40BFCD677686E(uLocal_247))
				{
					unk_0x3282EED5CD1F19DB(uLocal_247);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_249))
				{
					unk_0x789C84F1B8496AD0(&uLocal_249);
				}
			}
			if (!unk_0x0BF40BFCD677686E(uLocal_248) || unk_0xAD910300E4B4553D(uLocal_248))
			{
				if (unk_0x0BF40BFCD677686E(uLocal_248))
				{
					unk_0x3282EED5CD1F19DB(uLocal_248);
				}
				if (unk_0xBDD3EABACAB97D09(uLocal_250))
				{
					unk_0x789C84F1B8496AD0(&uLocal_250);
				}
			}
			if (!unk_0xBDD3EABACAB97D09(uLocal_249) && !unk_0xBDD3EABACAB97D09(uLocal_250))
			{
				if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					if (!iLocal_71)
					{
						func_72("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0x0508903FC1B0ED24();
					func_31();
				}
			}
			else if ((unk_0x0BF40BFCD677686E(uLocal_247) && func_30(unk_0x2A5EB8B0FE590B91(), unk_0x6DB9E754798EC35C(uLocal_247), 1) > 500f) || (unk_0x0BF40BFCD677686E(uLocal_248) && func_30(unk_0x2A5EB8B0FE590B91(), unk_0x6DB9E754798EC35C(uLocal_248), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_242 && func_28())
			{
				unk_0x0508903FC1B0ED24();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_72(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0x2137828D03306CAF(iLocal_245) && !unk_0x769F0F6444C1ABE0(iLocal_245))
	{
		if ((unk_0x2137828D03306CAF(iLocal_244) && unk_0x7FAC45D56235AB39(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_27(iLocal_245, 242628503, 1))
			{
				unk_0x219EE6A7B599E7DC(&uLocal_243);
				unk_0xA05ED0EFFC6C6A11(0, iLocal_244, 31, 10000);
				unk_0x8C6A1F8B258BDF97(0, iLocal_244, unk_0x2A5EB8B0FE590B91(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0xBD718C5BA2122192(uLocal_243);
				unk_0x234E551BB8E8813B(iLocal_245, uLocal_243);
				unk_0xEDD36C58DDE03C8F(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_27(iLocal_245, 242628503, 1) && unk_0xFAE04DAE7D44950E(iLocal_245) < 1) && !iLocal_69) && (((((unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0x002C96066F2BBA2F(iLocal_245, 122)) || unk_0x002C96066F2BBA2F(iLocal_245, 123)) || unk_0x002C96066F2BBA2F(iLocal_245, 124)) || unk_0x002C96066F2BBA2F(iLocal_245, 23)) || func_26(Global_101948.f_35, 134217728)))
		{
			unk_0x8C6A1F8B258BDF97(iLocal_245, iLocal_244, unk_0x2A5EB8B0FE590B91(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_27(iLocal_245, 242628503, 1) && !func_27(iLocal_245, -1273030092, 1)) || !unk_0xC4A39E4229BD3ABE(iLocal_245, 0))
		{
			if (!func_27(iLocal_245, 1805844857, 1))
			{
				unk_0xCD6FB688ED8B6284(iLocal_245, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x5B9B499C707C2A95(iLocal_245, iLocal_244, 1) && (((unk_0x12CF5C6534A94BEE(iLocal_244, 0, 3000) || unk_0x12CF5C6534A94BEE(iLocal_244, 1, 3000)) || unk_0x12CF5C6534A94BEE(iLocal_244, 2, 8000)) || unk_0x12CF5C6534A94BEE(iLocal_244, 3, 8000)))
		{
			if (!func_27(iLocal_245, 451360105, 1))
			{
				unk_0x153CD660E835E570(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0xE8594BE97055E9A1(iLocal_245, unk_0x2A5EB8B0FE590B91(), 1) || unk_0xE8594BE97055E9A1(iLocal_244, unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x002C96066F2BBA2F(iLocal_245, 122)) || unk_0x002C96066F2BBA2F(iLocal_245, 123)) || unk_0x002C96066F2BBA2F(iLocal_245, 124))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0xE897E371352225D5(iLocal_245, 242628503) == 1 && unk_0xFAE04DAE7D44950E(iLocal_245) == 1) || unk_0xE897E371352225D5(iLocal_245, -1273030092) == 1)
				{
					if (!unk_0xB85D9C77323AABF6(iLocal_245))
					{
						unk_0x6EC49296D32C68C6(iLocal_245, joaat("weapon_microsmg"));
						unk_0xD8E6C10EE9F7CE5D(iLocal_245, unk_0x2A5EB8B0FE590B91(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x2137828D03306CAF(iLocal_244) && unk_0x7FAC45D56235AB39(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_27(iLocal_245, 242628503, 1) && unk_0xFAE04DAE7D44950E(iLocal_245) == 1) || func_27(iLocal_245, -1273030092, 1))
				{
					if (unk_0x741298E7009A20C9("TAKINGS", 0, -1))
					{
						unk_0x853D8B40635017CB(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_246) && !unk_0x769F0F6444C1ABE0(iLocal_246))
	{
		if (!unk_0xC4A39E4229BD3ABE(iLocal_246, 0) && !func_27(iLocal_246, 1805844857, 1))
		{
			unk_0xCD6FB688ED8B6284(iLocal_246, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_245) && !unk_0x769F0F6444C1ABE0(iLocal_245))
	{
		if (unk_0xB54451B05F280358(iLocal_245) && !unk_0xC4A39E4229BD3ABE(iLocal_245, 0))
		{
			if (func_75())
			{
				func_68();
			}
		}
		else if (func_33(unk_0x2A5EB8B0FE590B91(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0x7C8D4D8A617D31D0(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x3732B96D7A1859B4() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x3732B96D7A1859B4() - iLocal_239) > 1500)
					{
						if (!unk_0x7C8D4D8A617D31D0(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x2137828D03306CAF(iLocal_245))
	{
		if (unk_0x769F0F6444C1ABE0(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0xB54451B05F280358(iLocal_245))
				{
					iLocal_252 = unk_0x3732B96D7A1859B4();
				}
			}
			else if ((unk_0x3732B96D7A1859B4() - iLocal_252) > 2000)
			{
				unk_0x9C27A9366AD7DE0B(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x2137828D03306CAF(iLocal_246))
	{
		if (unk_0x769F0F6444C1ABE0(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0xB54451B05F280358(iLocal_246))
				{
					iLocal_253 = unk_0x3732B96D7A1859B4();
				}
			}
			else if ((unk_0x3732B96D7A1859B4() - iLocal_253) > 2000)
			{
				unk_0x9C27A9366AD7DE0B(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_101948.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0x430053236FA97FB8(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_101948.f_20, Global_101948.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_20();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_13();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_11())
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_10()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_11()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_13()
{
	if (func_19(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_14();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_18(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_17(unk_0x2A5EB8B0FE590B91());
			if (func_16(iVar0) && (!func_19(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_16(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_22()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_75())
	{
		return 0;
	}
	if (unk_0x53461A7B49FA20A0())
	{
		if (unk_0x5CA780C6DF42F0B0())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE897E371352225D5(iParam0, iParam1);
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

int func_28()
{
	if (unk_0x5CA780C6DF42F0B0())
	{
		return 0;
	}
	if (unk_0x53461A7B49FA20A0())
	{
		if (func_75() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Param1, iParam4);
}

void func_31()
{
	func_83(1);
	func_82();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xBDD3EABACAB97D09(uParam0))
	{
		if ((unk_0x2137828D03306CAF(iParam1) && unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91())) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0x82DF3B947FC3E281(iParam1))
			{
				if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam1), 0))
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xA4F6216A8431C2E8(uParam0, 1);
						unk_0x7FF3A84437112BB2(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA4F6216A8431C2E8(uParam0, 0);
						unk_0x7FF3A84437112BB2(uParam0, 255);
					}
				}
			}
			else if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam1)))
				{
					fVar1 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xA4F6216A8431C2E8(uParam0, 1);
						unk_0x7FF3A84437112BB2(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA4F6216A8431C2E8(uParam0, 0);
						unk_0x7FF3A84437112BB2(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	if (!unk_0xA9A04898798AE9E6(iParam1, 0))
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xD1EE0E9FCD74A37B(iParam1, 0) };
	}
	return unk_0x4A2E6F541CD8C36E(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_36(0, iVar0);
		Global_1353013.f_1093[iVar0] = uParam0;
		Global_1353013.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1353013.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_1093.f_194[iVar0] = uParam3;
		Global_1353013.f_1093.f_183[iVar0] = uParam4;
		Global_1353013.f_1093.f_216[iVar0] = uParam5;
		Global_1353013.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1353013.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1353013.f_1093.f_258[iVar0] = iParam8;
		Global_1353013.f_1093.f_269[iVar0] = uParam9;
		Global_1353013.f_1093.f_312[iVar0] = iParam10;
		Global_1353013.f_1093.f_323[iVar0] = iParam11;
		Global_1353013.f_1093.f_334[iVar0] = iParam12;
		Global_1353013.f_1093.f_345[iVar0] = iParam13;
		Global_1353013.f_1088 = 1;
		Global_1353013.f_1093.f_356[iVar0] = iParam14;
		Global_1353013.f_1093.f_367[iVar0] = iParam15;
		Global_1353013.f_1093.f_378[iVar0] = iParam16;
		Global_1353013.f_1093.f_389[iVar0] = iParam17;
		Global_1353013.f_1093.f_400[iVar0] = iParam18;
		Global_1353013.f_1093.f_411[iVar0] = iParam19;
		Global_1353013.f_1093.f_422[iVar0] = iParam20;
		Global_1353013.f_1093.f_433[iVar0] = iParam21;
		Global_1353013.f_1093.f_444[iVar0] = iParam22;
		Global_1353013.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
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

void func_39()
{
	func_83(2);
	func_82();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x943D8B466B9BD1A3())
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x47988E04F8E2F0AD(iVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_62(iVar0))
	{
		func_61();
	}
	if (func_60(uParam1) && unk_0x18570CCBAF7F635C(uParam1))
	{
		iVar1 = 0;
		if (unk_0xEE46DE31F43DCAF1(uParam1))
		{
			unk_0x2C9BFB18AC97D56A(unk_0xC3A7AD90290CA72E(iParam1));
			unk_0xB6E06390C751480C(unk_0xC3A7AD90290CA72E(iParam1), 1);
			if (unk_0x2CA699E76FE1F362(unk_0xC3A7AD90290CA72E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x82DF3B947FC3E281(iParam1))
		{
			unk_0x8D2653D3B0E4E932(unk_0x761AC59E782D169D(iParam1));
			if (unk_0x7C985EA0E2CA156C(unk_0x761AC59E782D169D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam1))
		{
			unk_0xB6F65B032F5104E8(unk_0x3D7676880675803E(iParam1));
			if (unk_0xC6E81CD09CBFB72A(unk_0x3D7676880675803E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x943D8B466B9BD1A3())
		{
			if (func_55(uParam0, bParam7, bParam9, 0))
			{
				func_51(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if ((iVar1 && !unk_0x6235C49EA2DBA22D()) && uParam8)
						{
							if (!func_62(iVar0))
							{
								func_71(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
				{
					if (((unk_0x57F6052FCF93BCFF(iParam1) && iVar1) && !unk_0x6235C49EA2DBA22D()) && uParam8)
					{
						if (!func_62(iVar0))
						{
							func_71(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x47988E04F8E2F0AD(sParam5))
			{
				if (func_62(sParam5))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
					{
						func_66(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
					{
						func_66(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
					{
						func_66(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
					{
						func_66(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
					{
						func_66(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
				{
					func_66(uParam0, iVar0, 1);
				}
			}
			if (!func_55(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_66(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_60(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0x47ABE7550330D9FC(1);
		unk_0xF01DFB77A6A50908(0);
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x3732B96D7A1859B4()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_103236.f_9830.f_100++;
			}
			return Global_103236.f_9830.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_103236.f_9830.f_101++;
			}
			return Global_103236.f_9830.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_103236.f_9830.f_102++;
			}
			return Global_103236.f_9830.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0x58478145CAF8429C(sParam0) && func_62(sParam0)) || func_62("CMN_HINT"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (unk_0x2593BD27F8406EC2())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x09952BA662A7629B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
			{
				return 0;
			}
			if (unk_0xFC99B60347524C55())
			{
				return 0;
			}
		}
	}
	if (func_48())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x3A55AED06BFC52DE(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), func_47(unk_0x2A5EB8B0FE590B91(), 0)) || (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("apc") && func_47(unk_0x2A5EB8B0FE590B91(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_47(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			uVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(uVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_48()
{
	return Global_2445217.f_13;
}

bool func_49()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		func_66(uParam0, 0, 0);
	}
	if (func_54(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			iVar0 = unk_0xC3A7AD90290CA72E(iParam1);
			if (!unk_0xC4A39E4229BD3ABE(iVar0, 0))
			{
				if (unk_0xDB61DD81432BD145(iVar0))
				{
					if (!func_52())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x8F40CB4DCBB7C8AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x47ABE7550330D9FC(0);
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
	unk_0x8E8B3A8DE1143EAE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDF42871EAD55C9B(unk_0x2A5EB8B0FE590B91(), iParam1, -1, iVar3, iVar4);
	unk_0x18A0B296F4932A7B("FocusIn", 0, 0);
	unk_0xB0D390F8FEB78903("HINT_CAM_SCENE");
	unk_0x08BE237DBCD9CBD9(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3732B96D7A1859B4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_52()
{
	return func_53(unk_0x0FFED3E94261A832());
}

int func_53(var uParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_54(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_55(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (func_59(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_58(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_58(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_59(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (!func_59(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3732B96D7A1859B4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_58(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_58(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_59(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (!func_59(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_58(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_58(bParam1, bParam2, bParam3) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_59(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_61();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x82DF3B947FC3E281(iParam0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEE46DE31F43DCAF1(iParam0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()
{
	unk_0xF6082E2ADA1C795B(&Global_2314, 4);
}

bool func_62(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

var func_63(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_65(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_65(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_65(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
		{
			return;
		}
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0xF01DFB77A6A50908(iParam2);
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x47ABE7550330D9FC(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x47988E04F8E2F0AD(uParam0->f_3))
	{
		if (func_62(uParam0->f_3))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	if (!unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (func_62(sVar0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

int func_67(var uParam0)
{
	var uVar0;
	
	if (!unk_0x0BF40BFCD677686E(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE00666690A9B6DD3(uParam0);
	unk_0x0B584E556B01101F(uVar0, func_65(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	return uVar0;
}

void func_68()
{
	Global_14611 = 0;
	func_69();
}

void func_69()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

int func_70(int iParam0)
{
	if (((((unk_0x002C96066F2BBA2F(uParam0, 122) || unk_0x002C96066F2BBA2F(iParam0, 123)) || unk_0x002C96066F2BBA2F(iParam0, 124)) || unk_0x002C96066F2BBA2F(iParam0, 41)) || (unk_0x296AF7133305081C(iParam0, unk_0x2A5EB8B0FE590B91()) && unk_0x002C96066F2BBA2F(iParam0, 29))) || unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
	{
		return 1;
	}
	else
	{
		unk_0x869E3FDF7FDABA6A(iParam0);
	}
	return 0;
}

void func_71(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_72(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(cParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

int func_73(var uParam0, bool bParam1, bool bParam2)
{
	return func_64(uParam0, !bParam1, bParam2);
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

int func_75()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_76()
{
	func_77(&Local_37);
	unk_0xEE8231F61ED038B0("relThief", &iLocal_251);
	unk_0x3A8EFBE4AB457FE2(5, joaat("player"), iLocal_251);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_251, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_74(&uLocal_73, 0, unk_0x2A5EB8B0FE590B91(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_74(&uLocal_73, 1, unk_0x2A5EB8B0FE590B91(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_74(&uLocal_73, 2, unk_0x2A5EB8B0FE590B91(), "TREVOR", 0, 1);
			break;
	}
	unk_0xFBC4596E19752537(0.1f);
}

void func_77(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xF6082E2ADA1C795B(&iVar3, 3);
	unk_0xF6082E2ADA1C795B(&iVar3, 4);
	unk_0xF6082E2ADA1C795B(&iVar4, 3);
	unk_0xF6082E2ADA1C795B(&iVar4, 4);
	unk_0xF6082E2ADA1C795B(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_81())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_78(func_81(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_78(func_81(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_78(func_81(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_78(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_79(func_80(Param1 - Vector(0f, 174.58f, 335.5574f)), func_80(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_79(func_80(Param1 - Vector(0f, -711.023f, 393.0992f)), func_80(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_79(func_80(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_80(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_79(func_80(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_80(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_79(func_80(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_80(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_79(func_80(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_80(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_79(func_80(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_80(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_79(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_80(struct<3> Param0)
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

int func_81()
{
	return Global_101948.f_20;
}

void func_82()
{
	if (unk_0x2137828D03306CAF(iLocal_245))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_245))
		{
			unk_0xCD6FB688ED8B6284(iLocal_245, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 1);
		}
		unk_0x6C559FCFFD2365CB(&iLocal_245);
	}
	if (unk_0x2137828D03306CAF(iLocal_246))
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_246))
		{
			unk_0xCD6FB688ED8B6284(iLocal_246, unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 1);
		}
		unk_0x6C559FCFFD2365CB(&iLocal_246);
	}
	if (unk_0x2137828D03306CAF(iLocal_244))
	{
		unk_0xFECCD8AF38671477(&iLocal_244);
	}
	if (unk_0x0BF40BFCD677686E(uLocal_247))
	{
		unk_0x3282EED5CD1F19DB(uLocal_247);
	}
	if (unk_0x0BF40BFCD677686E(uLocal_248))
	{
		unk_0x3282EED5CD1F19DB(uLocal_248);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_249))
	{
		unk_0x789C84F1B8496AD0(&uLocal_249);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_250))
	{
		unk_0x789C84F1B8496AD0(&uLocal_250);
	}
	unk_0x02E663D7DDAE8202(Local_37.f_7, 0);
	unk_0xFBC4596E19752537(1f);
	unk_0x28BD561DA3E207B1(iLocal_251);
	unk_0xA232817B0B36F2E5();
}

void func_83(int iParam0)
{
	Global_101948.f_22 = iParam0;
}

