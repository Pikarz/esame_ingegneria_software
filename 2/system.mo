model System

    Env env;
    DQueue dq;
    DQueueTerminator dqt;
    Monitor1 m1;


    equation
    connect(env.spaceavailable1, dq.spaceavailable);
    connect(dq.inputdata , env.inputdata1);
    connect(dq.writesignal , env.writesignal1);

    connect(dqt.readsignal, dq.readsignal);
    connect(dqt.outputdata, dq.outputdata);
    connect(dqt.datavailable, dq.datavailable);

    connect(env.req, m1.req);
    connect(m1.new_triple, env.newreq);



end System;
